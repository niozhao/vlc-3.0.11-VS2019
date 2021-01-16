#include "FECPacket.hh"
#include "RTPPacket.hh"
#include <liveMedia.hh>

class FECCluster;
class FECDecoder {

public:
    static FECDecoder* createNew();
	static void setFECDecoderPar(u_int8_t interLeave, u_int8_t nonInterLeave);
    static unsigned char* generateBitString(unsigned char* rtpPacket, unsigned payloadSize);
    //static void repairCluster(RTPPacket** cluster, unsigned d, unsigned l, u_int32_t ssrc);
    static unsigned repairCluster(RTPPacket** cluster, unsigned row, unsigned column, unsigned ssrc);
	static void printCluster(FECCluster* feccluster, unsigned d, unsigned l);
	static char* getClusterStatus(FECCluster* feccluster, unsigned d, unsigned l);

    static u_int16_t extractFECBase(RTPPacket* rtpPacket);
    static u_int16_t extractRTPSeq(RTPPacket* rtpPacket);
    static unsigned extractSSRC(RTPPacket* rtpPacket);

    static unsigned totalRecoveredPackets;

private:
    FECDecoder();

    static RTPPacket* repairRow(RTPPacket** cluster, unsigned size, unsigned ssrc, unsigned d, unsigned l);


    static void printRow(RTPPacket** row, unsigned rowSize);
    static u_int16_t findSequenceNumber(RTPPacket** row, unsigned rowSize, unsigned d, unsigned l);
    static unsigned char* calculateRowBitString(RTPPacket** row, unsigned rowSize);
    static unsigned countPadding(unsigned char* payload, u_int16_t y);
    static unsigned char* generateFECBitString(unsigned char* buffer, unsigned size);
	static unsigned char* getPaddedRTPPayload(RTPPacket* rtpPacket, u_int16_t longestPayload);
	static unsigned char* getFECPaddedRTPPayload(RTPPacket* rtpPacket, u_int16_t longestPayload);
	

    static unsigned char* createHeader(unsigned char* bitString, u_int16_t sequenceNumber, unsigned ssrc);
    static unsigned char* calculatePayload(RTPPacket** row, unsigned rowSize, u_int16_t Y);

    static void repairNonInterleaved(RTPPacket** cluster, unsigned d, unsigned l, unsigned ssrc, unsigned* numRecoveredSoFar);
    static void repairInterleaved(RTPPacket** cluster, unsigned d, unsigned l, unsigned ssrc, unsigned* numRecoveredSoFar);

	static u_int8_t fInterleaveFormat;
	static u_int8_t fNonInterleaveFormat;



};

//Burde lage destruct
