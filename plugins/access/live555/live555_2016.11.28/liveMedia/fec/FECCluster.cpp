#include "include/FECCluster.hh"
#include "GroupsockHelper.hh"
//#include <iostream>

FECCluster* FECCluster::createNew(u_int16_t base, u_int8_t row, u_int8_t column, u_int8_t interLeave, u_int8_t nonInterLeave) {
    return new FECCluster(base, row, column,interLeave,nonInterLeave);
}

FECCluster::FECCluster(u_int16_t base, u_int8_t row, u_int8_t column, u_int8_t interLeave, u_int8_t nonInterLeave) {
    fBase = base;
    fRow = row;
	fColumn = column;
	fInterleave = interLeave;
	fNonInterleave = nonInterLeave;

    int size = (row + 1) * (column + 1) - 1;
    fRTPPackets = new RTPPacket*[size];
    for (int i = 0; i < size; i++) 
		fRTPPackets[i] = NULL;

	fTimestamp = getTime();
	lastPacketTime = fTimestamp;
	//DebugPrintf("new Cluster. fBase: %u, fTimestamp:%ld\n", fBase,fTimestamp);
}

FECCluster::~FECCluster()
{
	int size = (fRow + 1) * (fColumn + 1) - 1;
	for (int i = 0; i < size; i++)
		delete fRTPPackets[i];  //所有RTP有效包的位置应该为NULL，delete FEC冗余包。
	delete[] fRTPPackets;
}

void FECCluster::insertPacket(RTPPacket* rtpPacket) {
    int index = getIndex(rtpPacket);
	lastPacketTime = getTime();
	receiveTimeMap[index] = lastPacketTime;
    fRTPPackets[index] = rtpPacket;
}

int FECCluster::getIndex(RTPPacket* rtpPacket) {
	int payload = EXTRACT_BIT_RANGE(0, 7, rtpPacket->content()[1]);
	if (payload == fNonInterleave) {
		u_int16_t base = (((u_int16_t)rtpPacket->content()[20]) << 8) | rtpPacket->content()[21];
        u_int16_t prelimIndex = base - fBase;
		return prelimIndex / fColumn * (fColumn + 1) + fColumn;
	}
	else if (payload == fInterleave) {
		u_int16_t columnBase = (((u_int16_t)rtpPacket->content()[20]) << 8) | rtpPacket->content()[21];
        u_int16_t prelimIndex = columnBase - fBase;
		return prelimIndex + fRow * (fColumn + 1);
	}
	else {
		u_int16_t seqNum = (((u_int16_t)rtpPacket->content()[2]) << 8) | rtpPacket->content()[3];
		u_int16_t prelimIndex = seqNum - fBase;
		return prelimIndex + prelimIndex / fColumn;
	}
}

Boolean FECCluster::seqNumInCluster(u_int16_t seqNum) {
    u_int16_t diff = seqNum - fBase;
    return diff < sourcePacketCount();
}

Boolean FECCluster::allRTPPacketsArePresent() {
    int size = sourcePacketCount();
	for (int i = 0; i < size; i++) {
		int index = i + i / fColumn;
		if (fRTPPackets[index] == NULL) 
			return False;
	}
	return True;
}

int FECCluster::getAbsenceNumber() {
	int absenceNumber = 0;
	int size = sourcePacketCount();
	for (int i = 0; i < size; i++) {
		int index = i + i / fColumn;
		if (fRTPPackets[index] == NULL)
			absenceNumber++;
	}
	return absenceNumber;
}

Boolean FECCluster::hasExpired(long long repairWindow) {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long long now = (long long) tp.tv_sec * 1000L + tp.tv_usec / 1000;

    return now > (fTimestamp + repairWindow);
}

Boolean FECCluster::hasOnlyNullPackets() {
    int size = sourcePacketCount();
	for (int i = 0; i < size; i++) {
		if (fRTPPackets[i] != NULL) 
			return False;
	}
	return True;
}
