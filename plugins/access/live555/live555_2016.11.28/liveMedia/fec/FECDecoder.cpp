#include "include/FECDecoder.hh"
//#include <iostream>
//#include <bitset>
//#include <stdint.h>
#include "FECCluster.hh"

unsigned FECDecoder::totalRecoveredPackets = 0;
u_int8_t FECDecoder::fInterleaveFormat = 0;
u_int8_t FECDecoder::fNonInterleaveFormat = 0;

#define RTP_HEADER_SIZE  12
#define FEC_HEADER_SIZE  (12 + 4)
#define FEC_PACKET_PAYLOAD_OFFSET (RTP_HEADER_SIZE + FEC_HEADER_SIZE)


FECDecoder* FECDecoder::createNew() {
    return new FECDecoder();
}

FECDecoder::FECDecoder() {}

void FECDecoder::setFECDecoderPar(u_int8_t interLeave, u_int8_t nonInterLeave)
{
	fInterleaveFormat = interLeave;
	fNonInterleaveFormat = nonInterLeave;
}

unsigned FECDecoder::repairCluster(RTPPacket** cluster, unsigned fRow, unsigned fColumn, unsigned ssrc) {
	unsigned numRecoveredUntilThisIteration = 0;
	unsigned numRecoveredSoFar = 0;

	while (true) {
		repairNonInterleaved(cluster, fRow, fColumn, ssrc, &numRecoveredSoFar);
		repairInterleaved(cluster, fRow, fColumn, ssrc, &numRecoveredSoFar);

		if (numRecoveredSoFar > numRecoveredUntilThisIteration) {
			numRecoveredUntilThisIteration = numRecoveredSoFar;
		}
		else 
			break;
	}

    totalRecoveredPackets += numRecoveredSoFar;
	return numRecoveredSoFar;
	
	//DebugPrintf("totalRecoveredPackets: %d\n",totalRecoveredPackets);
}

RTPPacket* FECDecoder::repairRow(RTPPacket** row, unsigned size, unsigned ssrc, unsigned fRow, unsigned fColumn) {

	u_int16_t seqnum = findSequenceNumber(row, size, fRow, fColumn);
    unsigned char* bitString = calculateRowBitString(row, size);
    unsigned char* header = createHeader(bitString, seqnum, ssrc); 
    u_int16_t y = ((u_int16_t)bitString[8] << 8) | bitString[9];  //total size,计算方法见generateBitString
    unsigned char* payload = calculatePayload(row, size, y);

    unsigned packetSize = RTP_HEADER_SIZE + y;
    unsigned char* content = new unsigned char[packetSize];
	memmove(content, header, 12);
	memmove(content + 12, payload, packetSize - RTP_HEADER_SIZE);

    RTPPacket* rtpPacket = RTPPacket::createNew(content, packetSize);
	delete[] content;
	delete[] header;
	delete[] payload;
	delete[] bitString;
    return rtpPacket;
}

unsigned char* FECDecoder::generateBitString(unsigned char* rtpPacket, unsigned payloadSize) {
    unsigned char* bitString = new unsigned char[10];

    for (int i = 0; i < 8; i++)
        bitString[i] = rtpPacket[i];

    uint16_t totalSize = 0;

    int CC = EXTRACT_BIT_RANGE(0,4, rtpPacket[0]);
    totalSize += CC * 4;

    Boolean hasExtensionHeader = EXTRACT_BIT(4, rtpPacket[0]) == 1 ? True : False;
    if (hasExtensionHeader) {
        int extensionSizePosition = RTP_HEADER_SIZE + CC * 4 + EXTENSION_HEADER_ID_SIZE;
        totalSize += 4 * (((u_int16_t)rtpPacket[extensionSizePosition] << 8) | rtpPacket[extensionSizePosition + 1]); //extension
    }

    Boolean hasPadding = EXTRACT_BIT(5, rtpPacket[0]) == 1 ? True : False;
    if (hasPadding) totalSize += rtpPacket[RTP_HEADER_SIZE + payloadSize - 1];

    totalSize += payloadSize;

    bitString[8] = totalSize >> 8;
    bitString[9] = totalSize;

    return bitString;
}

unsigned char* FECDecoder::generateFECBitString(unsigned char* buffer, unsigned size) {
    unsigned char* fecBitString = new unsigned char[10];
	//第2,3个字节，是sequence number，这个值是知道的，不需要在这里赋值
	fecBitString[0] = buffer[0 + RTP_HEADER_SIZE];
	fecBitString[1] = buffer[1 + RTP_HEADER_SIZE];
    for (int i = 4; i < 8; i++)
		fecBitString[i] = buffer[i + RTP_HEADER_SIZE];

	fecBitString[8] = buffer[2 + RTP_HEADER_SIZE];
	fecBitString[9] = buffer[3 + RTP_HEADER_SIZE];

    return fecBitString;
}

/*what if we cant find seqnum? this will then return 0 which is a valid seqnum*/
/*Does this work for interleaved packets???????????????? because we increase by one and not row????*/
u_int16_t FECDecoder::findSequenceNumber(RTPPacket** row, unsigned rowSize, unsigned fRow, unsigned fColumn) {
    RTPPacket* fecPacket = row[rowSize - 1];
    int payload = EXTRACT_BIT_RANGE(0, 7, fecPacket->content()[1]);

    u_int16_t base = (((u_int16_t)fecPacket->content()[20]) << 8) | fecPacket->content()[21];
    for (unsigned i = 0; i < rowSize; i++) {
        if (row[i] == NULL) {
			if (payload == fNonInterleaveFormat)
				return base + i;
			else if (payload == fInterleaveFormat)
				return base + i * fColumn;
        }
    }
    return 0;
}

//We do fec packet first, becuase it must be present.
unsigned char* FECDecoder::calculateRowBitString(RTPPacket** row, unsigned rowSize) {
    unsigned char* bitString = generateFECBitString(row[rowSize - 1]->content(), row[rowSize - 1]->size());

    for (unsigned i = 0; i < rowSize - 1; i++) {
        RTPPacket* current = row[i];
        if (current == NULL) 
			continue;
		unsigned char* nextBitString = generateBitString(current->content(), current->size() - RTP_HEADER_SIZE);
        for (int j = 0; j < 10; j++)
            bitString[j] ^= nextBitString[j];
		delete[] nextBitString;
    }
    return bitString;
}

unsigned char* FECDecoder::createHeader(unsigned char* bitString, u_int16_t sequenceNumber, unsigned ssrc) {
    unsigned char* header = new unsigned char[12];

    //header[0] = 0b10000000 | (bitString[0] & 0b00111111); //Set version 2, add padd, extension and cc
	header[0] = 0x80 | (bitString[0] & 0x3f); //Set version 2, add padd, extension and cc
    header[1] = bitString[1]; //set marker, payload type
    header[2] = sequenceNumber >> 8; //set sequence number
    header[3] = sequenceNumber; //set sequence number
    for (int i = 4; i < 8; i++)
        header[i] = bitString[i]; //set ts recovery

    header[8] = ssrc >> 24;
    header[9] = ssrc >> 16;
    header[10] = ssrc >> 8;
    header[11] = ssrc;

    return header;
}

unsigned char* FECDecoder::getFECPaddedRTPPayload(RTPPacket* rtpPacket, u_int16_t longestPayload) {
	int payloadSize = rtpPacket->size() - FEC_PACKET_PAYLOAD_OFFSET;
	unsigned char* paddedRTPPayload = new unsigned char[longestPayload];

	for (int i = 0; i < longestPayload; i++)
		paddedRTPPayload[i] = i < payloadSize ? rtpPacket->content()[i + FEC_PACKET_PAYLOAD_OFFSET] : 0x00;

	return paddedRTPPayload;
}

unsigned char* FECDecoder::getPaddedRTPPayload(RTPPacket* rtpPacket, u_int16_t longestPayload) {
	int payloadSize = rtpPacket->size() - RTP_HEADER_SIZE;
	unsigned char* paddedRTPPayload = new unsigned char[longestPayload];

	for (int i = 0; i < longestPayload; i++)
		paddedRTPPayload[i] = i < payloadSize ? rtpPacket->content()[i + RTP_HEADER_SIZE] : 0x00;

	return paddedRTPPayload;
}

//We do fec first because it must be present
unsigned char* FECDecoder::calculatePayload(RTPPacket** row, unsigned rowSize, u_int16_t Y) {
    unsigned char* payload = new unsigned char[Y];
	memset(payload, 0, Y);

    RTPPacket* fecPacket = row[rowSize - 1];
    for (int i = 0; i < Y; i++)
		payload[i] = (i + FEC_PACKET_PAYLOAD_OFFSET) < fecPacket->size() ? fecPacket->content()[i + FEC_PACKET_PAYLOAD_OFFSET] : 0x00;
	//将FECPakcet的payload copy至payload[]
	int fecPacketPayloadLength = fecPacket->size() - FEC_PACKET_PAYLOAD_OFFSET;
	memmove(payload, fecPacket->content() + FEC_PACKET_PAYLOAD_OFFSET, Y <= fecPacketPayloadLength ? Y : fecPacketPayloadLength);
	if (Y > fecPacketPayloadLength)
	{
		//impossible?
		int error = 0;
		error = 1;
	}

    for (int i = 0; i < (rowSize - 1); i++) {
        RTPPacket* current = row[i];
        if (current == NULL)
			continue;
        for (int j = 0; j < Y; j++)
            payload[j] ^= (j + 12) < current->size() ? current->content()[j + 12] : 0x00;
    }

    return payload;

	/*RTPPacket* fecPacket = row[rowSize - 1];
	u_int16_t longestPayload = fecPacket->size() - FEC_PACKET_PAYLOAD_OFFSET;
	unsigned char* fecPayload = getFECPaddedRTPPayload(fecPacket, longestPayload);
	for (int i = 0; i < (rowSize - 1); i++){
		RTPPacket* current = row[i];
		if (current == NULL)
			continue;
		unsigned char* nextFECPayload = getPaddedRTPPayload(current, longestPayload);
		for (int j = 0; j < longestPayload; j++)
			fecPayload[j] ^= nextFECPayload[j];
		delete[] nextFECPayload;
	}
	unsigned char* payload = new unsigned char[Y];
	if (Y > longestPayload)
	{
		int debug = 0;
		debug = 1;
		//error case!
	}
	memmove(payload, fecPayload, Y);
	delete[] fecPayload;
	return payload;*/
	
}

void FECDecoder::repairNonInterleaved(RTPPacket** cluster, unsigned fRow, unsigned fColumn, unsigned ssrc, unsigned* numRecoveredSoFar) {
	unsigned rowSize = fColumn + 1;
	for (int i = 0; i < rowSize * fRow; i += rowSize) {
        int fecIndex = i + rowSize - 1;

        int missingPacketCount = 0;
        for (int j = i; j <= fecIndex; j++) {
            if (cluster[j] == NULL) 
				missingPacketCount++;
        }
        if (missingPacketCount != 1 || cluster[fecIndex] == NULL) 
			continue; //we dont care if the fec packet is missing

		RTPPacket** thisRow = &cluster[i];
		RTPPacket* repairedPacket = repairRow(thisRow, rowSize, ssrc, fRow, fColumn);

        for (int j = i; j <= fecIndex; j++) {
            if (cluster[j] == NULL) {
                cluster[j] = repairedPacket;
                break;
            }
        }
        (*numRecoveredSoFar)++;
    }
}

void FECDecoder::repairInterleaved(RTPPacket** cluster, unsigned fRow, unsigned fColumn, unsigned ssrc, unsigned* numRecoveredSoFar) {
	unsigned rowSize = fColumn + 1;
	for (int i = 0; i < fColumn; i++) {
		int fecIndex = i + rowSize * fRow;

        int missingPacketCount = 0;

        for (int j = i; j < fecIndex; j += rowSize) {
            if (cluster[j] == NULL) 
				missingPacketCount++;
        }
        if (missingPacketCount != 1 || cluster[fecIndex] == NULL) 
			continue; //we dont care if the fec packet is missing

		unsigned columnSize = fRow + 1;
        RTPPacket** column = new RTPPacket*[columnSize];
        for (int j = 0; j < columnSize; j++) {
            column[j] = cluster[i + j * rowSize];
        }

		RTPPacket* repairedPacket = repairRow(column, columnSize, ssrc, fRow, fColumn);
        delete[] column;

        for (int j = i; j < fecIndex; j += rowSize) {
            if (cluster[j] == NULL) {
                cluster[j] = repairedPacket;
                break;
            }
        }
        (*numRecoveredSoFar)++;
    }
}

void FECDecoder::printCluster(FECCluster* feccluster, unsigned fRow, unsigned fColumn) {
	
	RTPPacket**cluster = feccluster->rtpPackets();
	int size = (fRow + 1) * (fColumn + 1) - 1;
	const char*  outString = FormatString("printCluster: %d  (%d * %d)\n", feccluster->base(), fRow, fColumn);
	char debugString[2048] = { 0 };
	strcpy(debugString, outString);
	delete[] outString;
	for (int i = 0; i < size; i++) {
		RTPPacket* curr = cluster[i];
		if (curr == NULL) 
			strcat(debugString, "NULL      ");
		else {
            int payload = EXTRACT_BIT_RANGE(0, 7, curr->content()[1]);
			u_int16_t seq = payload == fNonInterleaveFormat || payload == fInterleaveFormat ? extractFECBase(curr) : extractRTPSeq(curr);
			const char* tmpStr = FormatString("%d:%u  ", payload, seq);
			strcat(debugString, tmpStr);
			delete[] tmpStr;
		}
		if ((i + 1) % (fColumn + 1) == 0)
			strcat(debugString, "\n");
	}
	strcat(debugString, "\n");
	DebugPrintf("%s", debugString);
}

char* FECDecoder::getClusterStatus(FECCluster* feccluster, unsigned fRow, unsigned fColumn)
{
	RTPPacket**cluster = feccluster->rtpPackets();
	int size = (fRow + 1) * (fColumn + 1) - 1;
	const char*  outString = FormatString("printCluster: %u  (%d * %d) time:%lld\n", feccluster->base(), fRow, fColumn, feccluster->timestamp());
	const int bufferSize = 2048;
	char* debugString = new char[bufferSize];
	memset(debugString, 0, bufferSize);
	strcpy(debugString, outString);
	delete[] outString;
	for (int i = 0; i < size; i++) {
		RTPPacket* curr = cluster[i];
		if (curr == NULL)
			strcat(debugString, "NULL      ");
		else {
			int payload = EXTRACT_BIT_RANGE(0, 7, curr->content()[1]);
			u_int16_t seq = (payload == fNonInterleaveFormat || payload == fInterleaveFormat) ? extractFECBase(curr) : extractRTPSeq(curr);
			const char* tmpStr = FormatString("%d:%u  ", payload, seq);
			strcat(debugString, tmpStr);
			delete[] tmpStr;
		}
		if ((i + 1) % (fColumn + 1) == 0)
			strcat(debugString, "\n");
	}
	strcat(debugString, "\n");
	return debugString;
}

void FECDecoder::printRow(RTPPacket** row, unsigned rowSize) {
    /*for (unsigned i = 0; i < rowSize; i++) {
        RTPPacket* curr = row[i];
        if (curr == NULL) std::cout << "NULL ";
        else {
            int payload = EXTRACT_BIT_RANGE(0, 7, curr->content()[1]);
            u_int16_t seq = payload == 115 || payload == 116 ? extractFECBase(curr) : extractRTPSeq(curr);
            std::cout << seq << " ";
        }
    }
    std::cout << "\n";*/
}

u_int16_t FECDecoder::extractFECBase(RTPPacket* rtpPacket) {
    return (((u_int16_t)rtpPacket->content()[20]) << 8) | rtpPacket->content()[21];
}

u_int16_t FECDecoder::extractRTPSeq(RTPPacket* rtpPacket) {
    return (((u_int16_t)rtpPacket->content()[2]) << 8) | rtpPacket->content()[3];
}

unsigned FECDecoder::extractSSRC(RTPPacket* rtpPacket) {
    return (unsigned)rtpPacket->content()[8] << 24 | (unsigned)rtpPacket->content()[9] << 16 | (unsigned)rtpPacket->content()[10] << 8 | (unsigned)rtpPacket->content()[11];
}
