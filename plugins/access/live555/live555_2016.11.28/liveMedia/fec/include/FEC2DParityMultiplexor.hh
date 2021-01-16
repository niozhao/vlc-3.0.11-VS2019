#ifndef _FEC_2D_PARITY_MULTIPLEXOR_HH
#define _FEC_2D_PARITY_MULTIPLEXOR_HH

#include <vector>
#include <map>
#include "FECMultiplexor.hh"
#include "FECPacket.hh"
#include "FECDecoder.hh"
#include "FECCluster.hh"

class ReorderingPacketBuffer;
class BufferPacket;
class BufferedPacketFactory;

class FEC2DParityMultiplexor : public FECMultiplexor {
public:
	static FEC2DParityMultiplexor* createNew(UsageEnvironment& env, u_int8_t row, u_int8_t column, long long repairWindow/* unit: ms*/, u_int8_t interleavePayload, u_int8_t nonInterleavePayload);
	FEC2DParityMultiplexor(UsageEnvironment& env, u_int8_t row, u_int8_t column, long long repairWindow/* unit: ms*/, u_int8_t interleavePayload, u_int8_t nonInterleavePayload);
    ~FEC2DParityMultiplexor();
    void pushFECRTPPacket(unsigned char* buffer, unsigned bufferSize);
	void pushFECRTPPacket(BufferedPacket* packet);
	void createReorderBuffers(BufferedPacketFactory* packetFactory = NULL);
	void setCallback(unsigned char* to, unsigned maxSize, afterGettingFunc*, void*);
	void get2DParityParameter(u_int8_t& row, u_int8_t& column, long long& repairWindow/* unit: ms*/);

public:
    Boolean first;


    std::vector<RTPPacket*> emergencyBuffer;
    std::vector<FECCluster*> superBuffer;
	std::map<FECCluster *, long long> alreadyHandledClusters;

    u_int16_t currentSequenceNumber;
private:
    static void sendNext(void* firstArg);
    void repairPackets();

    void findBase(int* didFind, u_int16_t* newBase);
    FECCluster* findCluster(u_int16_t seqNum);
	FECCluster* findInAlreadyHandledCluster(u_int16_t seqNum,long long* pTime = NULL);
    void handleEmergencyBuffer(u_int16_t base);
    void flushCluster(RTPPacket** cluster);

    void updateCurrentSequenceNumber(u_int16_t newSeqnum, unsigned sourcePacketCount);

    void setHostSSRCIfNotSet(RTPPacket* rtpPacket);

    void setBaseIfNotSet(RTPPacket* rtpPacket);

    bool insertPacket(RTPPacket* rtpPacket);

    void printSuperBuffer();

	Boolean processFECHeader(BufferedPacket* packet, Boolean* startFlag, Boolean* endFlag);
	void resetFECBuffer(int index);
	void preProcessFECPacket(int index, BufferedPacket* srcPacket);  //true for bInterleave, false for NonInterleave

	//for unnecessaryClusterTimeHistory;
	long long decreaseRepairwindow();
	long long increaseRepairwindow();
	void checkStartStatis();

private:
    long long fRepairWindow;

    Boolean ssrcWasSet;
    unsigned hostSSRC;

    u_int8_t fRow;
    u_int8_t fColumn;
	u_int8_t fInterleavePayloadFormat;
	u_int8_t fNonInterleavePayloadFormat;

	ReorderingPacketBuffer* reordingBuffers[2];
	unsigned char* fFECBuffers[2];    //拼接的完整Interleave/NonInterleave冗余包将会放在这里
	unsigned maxSize[2];  //fFECBuffer 可用的空间大小
	unsigned char* pTo[2];  // pTo = fFECBuffers + offset
	unsigned frameSize[2];  //冗余包的大小
	Boolean currentPacketBeginsFrame[2];
	Boolean packetLossInFragmentedFrame[2];
	Boolean currentPacketCompletesFrame[2];

	
	std::vector<long long> unnecessaryClusterTimeList; //repair window 时间设置过长，保存多去一段时间的历史值。
	std::map<FECCluster *, long long> notEnoughClusterTimeList;  //repair window 时间设置不够，保存多去一段时间的历史值。

	int repairTimeOKTimes;  //repair window 持续OK的次数
	long long startCountPoint;   //统计过去几秒，恢复情况
	float succeedScale;
	long long repairSucceedCount;
	long long repairFailedCount;
};
#endif
