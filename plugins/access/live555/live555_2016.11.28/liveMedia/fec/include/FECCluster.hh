#ifndef _FEC_CLUSTER_HH
#define _FEC_CLUSTER_HH

#include "RTPPacket.hh"
#include <liveMedia.hh>
#include <map>

class FECCluster {
public:
	static FECCluster* createNew(u_int16_t base, u_int8_t row, u_int8_t column, u_int8_t interLeave, u_int8_t nonInterLeave);
    void insertPacket(RTPPacket* rtpPacket);
    Boolean seqNumInCluster(u_int16_t seqNum);
    Boolean allRTPPacketsArePresent();
	int getAbsenceNumber();
    Boolean hasExpired(long long repairWindow);

    Boolean hasOnlyNullPackets();


    RTPPacket** rtpPackets() const {return fRTPPackets;}
    u_int16_t base() const {return fBase;}
    long long timestamp() const {return fTimestamp;}

    int sourcePacketCount() const {return fRow * fColumn;}
	long long timeUsed(){ return lastPacketTime - fTimestamp; }
	std::map<int, long long>& getReceiveTimeMap(){ return receiveTimeMap; }

	~FECCluster();

private:
	FECCluster(u_int16_t base, u_int8_t row, u_int8_t column, u_int8_t interLeave, u_int8_t nonInterLeave);
    int getIndex(RTPPacket* rtpPacket);
private:
    RTPPacket** fRTPPackets;
    u_int16_t fBase;
    long long fTimestamp;
	long long lastPacketTime;
    u_int8_t fRow;
    u_int8_t fColumn;
	u_int8_t fInterleave;
	u_int8_t fNonInterleave;

	std::map<int, long long> receiveTimeMap;
};
#endif
