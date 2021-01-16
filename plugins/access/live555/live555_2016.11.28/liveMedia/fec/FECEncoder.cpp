#include "include/FECEncoder.hh"

FECPacket* FECEncoder::protectRow(RTPPacket** row, unsigned rowSize, unsigned d, unsigned l) {
    u_int16_t longestPayload = calculateLongestPayload(row, rowSize);    //I denne trekkes det fra rtp header size

	unsigned char* fecBitString = generateBitString(row[0]->content(), (row[0]->size() - RTP_HEADER_SIZE));
	unsigned char* fecPayload = getPaddedRTPPayload(row[0], longestPayload);

    for (int i = 1; i < rowSize; i++) {
        unsigned char* nextBitString = generateBitString(row[i]->content(), (row[i]->size() - RTP_HEADER_SIZE));

        for (int j = 0; j < FEC_BIT_STRING_LENGTH; j++)
            fecBitString[j] ^= nextBitString[j];
        delete[] nextBitString;

		unsigned char* nextFECPayload = getPaddedRTPPayload(row[i], longestPayload);

        for (int j = 0; j < longestPayload; j++)
            fecPayload[j] ^= nextFECPayload[j];
        delete[] nextFECPayload;
	}

	uint16_t sn_base = ((u_int16_t)row[0]->content()[2] << 8) | row[0]->content()[3];
	FECPacket* fecPacket = createFECPacket(fecBitString, ((unsigned)longestPayload + FEC_HEADER_SIZE), fecPayload, sn_base, d, l);

	delete[] fecBitString;
	delete[] fecPayload;

    return fecPacket;
}

u_int16_t FECEncoder::calculateLongestPayload(RTPPacket** rtpPackets, unsigned size) {
	u_int16_t longestPayload = 0;
	for (int i = 0; i < size; i++) {
		RTPPacket* current = rtpPackets[i];
		if (current->size() > longestPayload)
            longestPayload = current->size();
	}
	longestPayload -= RTP_HEADER_SIZE;
	return longestPayload;
}

unsigned char* FECEncoder::generateBitString(unsigned char* rtpPacket, unsigned payloadSize) {
    unsigned char* bitString = new unsigned char[10];

    for (int i = 0; i < 8; i++)
        bitString[i] = rtpPacket[i];

    uint16_t totalSize = 0;

    int CC = EXTRACT_BIT_RANGE(0, 4, rtpPacket[0]);
    totalSize += CC * 4;

    Boolean hasExtensionHeader = EXTRACT_BIT(4, rtpPacket[0]) == 1 ? True : False;
    if (hasExtensionHeader) {
        int extensionSizePosition = RTP_HEADER_SIZE + CC * 4 + EXTENSION_HEADER_ID_SIZE;
        int extensionSize = ((u_int16_t)rtpPacket[extensionSizePosition] << 8) | rtpPacket[extensionSizePosition + 1];
        totalSize += extensionSize * 4;
    }

    Boolean hasPadding = EXTRACT_BIT(5, rtpPacket[0]) == 1 ? True : False;
    if (hasPadding) 
		totalSize += rtpPacket[RTP_HEADER_SIZE + payloadSize - 1];  //Is one byte enough to account for padding?

    totalSize += payloadSize;

    bitString[8] = totalSize >> 8;
    bitString[9] = totalSize;

    return bitString;
}

//TODO: ikke dynamisk med extension osv enda
unsigned char* FECEncoder::getPaddedRTPPayload(RTPPacket* rtpPacket, u_int16_t longestPayload) {
	int payloadSize = rtpPacket->size() - RTP_HEADER_SIZE;
	unsigned char* paddedRTPPayload = new unsigned char[longestPayload];

	for (int i = 0; i < longestPayload; i++)
		paddedRTPPayload[i] = i < payloadSize ? rtpPacket->content()[i + RTP_HEADER_SIZE] : 0x00;

	return paddedRTPPayload;
}

FECPacket* FECEncoder::createFECPacket(unsigned char* fecBitString, unsigned packetSize, unsigned char* fecPayload, uint16_t sn_base, u_int8_t row, u_int8_t column) {
    unsigned char* fecBuffer = new unsigned char[packetSize];

    //fecBuffer[0] = 0b10000000 | (fecBitString[0] & 0b00111111);
	fecBuffer[0] = 0x80 | (fecBitString[0] & 0x3f);
    fecBuffer[1] = fecBitString[1];
    fecBuffer[2] = fecBitString[8];
    fecBuffer[3] = fecBitString[9];

    for (int i = 4; i < 8; i++)
        fecBuffer[i] = fecBitString[i];

    fecBuffer[8] = sn_base >> 8;
    fecBuffer[9] = sn_base;
    fecBuffer[10] = row;
    fecBuffer[11] = column;

    for (int i = 0; i < packetSize - FEC_HEADER_SIZE; i++)
        fecBuffer[i + FEC_HEADER_SIZE] = fecPayload[i];

    FECPacket* fecPacket = FECPacket::createNew(fecBuffer, packetSize);
    return fecPacket;
}
