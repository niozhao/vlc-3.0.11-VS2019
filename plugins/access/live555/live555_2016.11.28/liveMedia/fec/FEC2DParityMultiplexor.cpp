#include "include/FEC2DParityMultiplexor.hh"
#include "GroupsockHelper.hh"
//#include "FECEncoder.hh"
//#include <iostream>
#define MAX_FEC_BUFFER_SIZE (100 * 1024)

#define InterleaveIndex 0
#define NonInterleaveIndex 1
#define ArraySize(a) (sizeof(a)/sizeof(a[0]))

FEC2DParityMultiplexor* FEC2DParityMultiplexor::createNew(UsageEnvironment& env, u_int8_t row, u_int8_t column, long long repairWindow, u_int8_t interleavePayload, u_int8_t nonInterleavePayload) {
	return new FEC2DParityMultiplexor(env, row, column, repairWindow, interleavePayload, nonInterleavePayload);
}

FEC2DParityMultiplexor::FEC2DParityMultiplexor(UsageEnvironment& env, u_int8_t row, u_int8_t column, long long repairWindow, u_int8_t interleavePayload, u_int8_t nonInterleavePayload) : FECMultiplexor(env){
    first = True;
    ssrcWasSet = False;
    fRepairWindow = repairWindow;  //the initial value, will change dynamically
    fRow = row;
    fColumn = column;
	fInterleavePayloadFormat = interleavePayload;
	fNonInterleavePayloadFormat = nonInterleavePayload;
	FECDecoder::setFECDecoderPar(interleavePayload, nonInterleavePayload);
    hostSSRC = 0;
	reordingBuffers[InterleaveIndex] = NULL;
	reordingBuffers[NonInterleaveIndex] = NULL;
	startCountPoint = 0;
	succeedScale = 0.0f;
	repairSucceedCount = 0;
	repairFailedCount = 0;
	repairTimeOKTimes = 0;

	fFECBuffers[InterleaveIndex] = new unsigned char[MAX_FEC_BUFFER_SIZE];
	fFECBuffers[NonInterleaveIndex] = new unsigned char[MAX_FEC_BUFFER_SIZE];
	resetFECBuffer(InterleaveIndex);
	resetFECBuffer(NonInterleaveIndex);

	envir().log("\n create FEC2DParityMultiplexor.row:%u, column:%u, repairWindow:%lld, interleavePayload:%u, nonInterleavePayload:%u\n\n", (unsigned)row, (unsigned)column, repairWindow, (unsigned)interleavePayload, (unsigned)nonInterleavePayload);

    nextTask() = envir().taskScheduler().scheduleDelayedTask(20000, (TaskFunc*)sendNext, this);
}

void FEC2DParityMultiplexor::get2DParityParameter(u_int8_t& row, u_int8_t& column, long long& repairWindow/* unit: ms*/)
{
	row = fRow;
	column = fColumn;
	repairWindow = fRepairWindow;
}

void FEC2DParityMultiplexor::resetFECBuffer(int index)
{
	memset(fFECBuffers[index], 0, MAX_FEC_BUFFER_SIZE);
	pTo[index] = fFECBuffers[index];
	frameSize[index] = 0;
	maxSize[index] = MAX_FEC_BUFFER_SIZE;
	currentPacketBeginsFrame[index] = True;
	currentPacketCompletesFrame[index] = True;
	packetLossInFragmentedFrame[index] = False;
}

void FEC2DParityMultiplexor::createReorderBuffers(BufferedPacketFactory* packetFactory)
{
	reordingBuffers[InterleaveIndex] = new ReorderingPacketBuffer(NULL);
	reordingBuffers[NonInterleaveIndex] = new ReorderingPacketBuffer(NULL);
}

void FEC2DParityMultiplexor::setCallback(unsigned char* to, unsigned maxSize, afterGettingFunc* callBack, void* callBackData)
{
	fReadyTo = to;
	fReadyMaxSize = maxSize;
	packetReadyCallback = callBack;
	fCallbackClientData = callBackData;
}

FEC2DParityMultiplexor::~FEC2DParityMultiplexor() {
	delete[] fFECBuffers[InterleaveIndex];
	delete[] fFECBuffers[NonInterleaveIndex];
	delete reordingBuffers[InterleaveIndex];
	delete reordingBuffers[NonInterleaveIndex];

	while (!fRTPPackets.empty()){
		RTPPacket* rtpPacket = fRTPPackets.front();
		fRTPPackets.pop();
		delete rtpPacket;
	}
	for (size_t i = 0; i < emergencyBuffer.size(); i++){
		delete emergencyBuffer[i];
	}
	emergencyBuffer.clear();

	for (int i = 0; i < superBuffer.size(); i++)
		delete superBuffer[i];
	superBuffer.clear();
	std::map<FECCluster *, long long>::iterator it = alreadyHandledClusters.begin();
	for (; it != alreadyHandledClusters.end(); it++)
		delete it->first;
	alreadyHandledClusters.clear();
}

Boolean FEC2DParityMultiplexor::processFECHeader(BufferedPacket* packet, Boolean* startFlag, Boolean* endFlag)
{
	unsigned char* headerStart = packet->data();
	unsigned packetSize = packet->dataSize();
    
	if (packetSize < 12 + 16)
		return False;

	//unsigned char startBit = headerStart[12 + 12] & 0x80;  //Ox80: 1000 0000
	//unsigned char endBit = headerStart[12 + 12] & 0x40;  //0x40: 0100 0000

	unsigned char startBit = headerStart[12 + 12] & 0x01;  
	unsigned char endBit = headerStart[12 + 12] & 0x02;  

	*startFlag = (startBit != 0);
	*endFlag = (endBit != 0);

	if (!*startFlag)
		packet->skip(12 + 16);

	return True;
}

/******************************
  *  preProcessFECPacket()
  *
  * 目的：FEC冗余包可能分了多个RTP包发送过来，在这里接受它们，并把它们拼成完整的冗余包，之后送入后面的repair逻辑
  *
  * fCurrentPacketBeginsFrame:  标志当前RTP包是一个冗余包的起始片
  *
  * fCurrentPacketCompletesFrame： 标志当前RTP包是一个冗余包的最后一片
  *
  * 拼完整包的方法：以Interleaved为例
  * 将第一片RTP包数据拷贝至fFECBuffers[index]，offset = 0；
  * 将第二片RTP包数据拷贝至fFECBuffers[index]，offset = sizeof（第一个RTP包）
  * ...拷贝最后一个包
  *
  *
*******************************/
void FEC2DParityMultiplexor::preProcessFECPacket(int index, BufferedPacket* srcPacket)
{
	if (index > 1)
		return;
	ReorderingPacketBuffer* currentReorderBuffer = reordingBuffers[index];
	unsigned char* fCurrentFECBuffer = fFECBuffers[index];
	unsigned char **fCurrentTo = &pTo[index];
	unsigned* fCurrentFrameSize = &frameSize[index];
	unsigned* fCurrentMaxSize = &maxSize[index];
	Boolean* pCurrentPacketBeginsFrame = &currentPacketBeginsFrame[index];
	Boolean* pCurrentPacketLossInFragmentedFrame = &packetLossInFragmentedFrame[index];
	Boolean* pCurrentPacketCompletesFrame = &currentPacketCompletesFrame[index];


	BufferedPacket* bPacket = currentReorderBuffer->getFreePacket(NULL);
	bPacket->reset();
	bPacket->appendData(srcPacket->data(), srcPacket->dataSize());

	unsigned rtpHdr = ntohl(*(u_int32_t*)(bPacket->data()));
	unsigned char rtpPayloadType = (unsigned char)((rtpHdr & 0x007F0000) >> 16);
	unsigned short rtpSeqNo = (unsigned short)(rtpHdr & 0xFFFF);
	struct timeval timeNow;
	gettimeofday(&timeNow, NULL);
	bPacket->assignMiscParams(rtpSeqNo, 0, timeNow, 0, 0, timeNow);  //这里只关心seqNo及currentTime。

	bool bSucceed = currentReorderBuffer->storePacket(bPacket);
	if (!bSucceed)
		currentReorderBuffer->freePacket(bPacket);
	else
	{
		bool fNeedDelivery = true;
		while (fNeedDelivery) {
			Boolean packetLossPrecededThis;  //packetLossPrecededThis 表示什么意思？若为true表示在这个rtp包之前有包丢失了。
			BufferedPacket* nextPacket = currentReorderBuffer->getNextCompletedPacket(packetLossPrecededThis);
			if (nextPacket == NULL)
				break;
			fNeedDelivery = False;
			if (nextPacket->useCount() == 0) {
				if (!processFECHeader(nextPacket, pCurrentPacketBeginsFrame, pCurrentPacketCompletesFrame)) {
					currentReorderBuffer->releaseUsedPacket(nextPacket);
					fNeedDelivery = True;
					continue;
				}
			}
			if (*pCurrentPacketBeginsFrame) {
				if (packetLossPrecededThis || *pCurrentPacketLossInFragmentedFrame) {  //当前这个rtp包是一帧的开始[开始新的一帧了]，若packetLossPrecededThis为true，表示先前有rtp包丢了，那么之前保存的数据全都不要了
					*fCurrentTo = fCurrentFECBuffer;  //让fCurrentTo指向buffer起始地址
					*fCurrentFrameSize = 0;
					*fCurrentMaxSize = MAX_FEC_BUFFER_SIZE;
				}
				*pCurrentPacketLossInFragmentedFrame = False;
			}
			else if (packetLossPrecededThis) {
				*pCurrentPacketLossInFragmentedFrame = True;  //fCurrentPacketBeginsFrame 为false，则该rtp包是一帧数据的中间部分，但先前有包丢失了，所以拼不成一个完整帧了
			}
			if (*pCurrentPacketLossInFragmentedFrame) {
				currentReorderBuffer->releaseUsedPacket(nextPacket);
				fNeedDelivery = True;
				continue;
			}

			unsigned frameSize = 0;
			unsigned bytesTruncated = 0;
			unsigned short rtpSeqNo = 0;
			unsigned rtpTimestamp = 0;
			struct timeval presentationTime;
			Boolean hasBeenSyncedUsingRTCP = false;
			Boolean rtpMarkerBit = false;
			nextPacket->use(*fCurrentTo, *fCurrentMaxSize, frameSize, bytesTruncated,
				rtpSeqNo, rtpTimestamp,
				presentationTime, hasBeenSyncedUsingRTCP,
				rtpMarkerBit);
			*fCurrentFrameSize += frameSize;

			if (!nextPacket->hasUsableData()) {
				currentReorderBuffer->releaseUsedPacket(nextPacket);
			}
			else{
				DebugPrintf("FEC2DParityMultiplexor nextPacket has Usable Data,size: %u\n", nextPacket->dataSize());
			}


			if (*pCurrentPacketCompletesFrame && *fCurrentFrameSize > 0) {
				if (bytesTruncated > 0) {
					//error! some data will dropped!
					DebugPrintf("FEC2DParityMultiplexor the total received frame size exceeds the client's buffer size:%d.%d bytes of trailing data will be dropped!\n", (int)MAX_FEC_BUFFER_SIZE, bytesTruncated);
				}
				pushFECRTPPacket(fCurrentFECBuffer, *fCurrentFrameSize);
				//DebugPrintf("succeed get %d, size:%u, seqenceNum:%u\n", bInterleave ? fInterleavePayloadFormat : fNonInterleavePayloadFormat, *fCurrentFrameSize, (unsigned)((((u_int16_t)fCurrentFECBuffer[20]) << 8) | fCurrentFECBuffer[21]));
				resetFECBuffer(index);
			}
			else {
				*fCurrentTo += frameSize;
				*fCurrentMaxSize -= frameSize;
				fNeedDelivery = True;
			}
		}
	}
}

long long FEC2DParityMultiplexor::increaseRepairwindow()
{
	if (notEnoughClusterTimeList.size() <= 0)
		return 0;
	//去掉数组中极值
	long long sum = 0;
	long long biggest, smallest;
	biggest = 0;
	smallest = 10000000;
	std::map<FECCluster *, long long>::iterator it = notEnoughClusterTimeList.begin();
	for (; it != notEnoughClusterTimeList.end(); it++)
	{
		int value = it->second;
		if (value > biggest)
			biggest = value;

		if (value < smallest)
			smallest = value;

		sum += value;
	}

	int average = sum / notEnoughClusterTimeList.size();
	if (biggest - average > 300)
		return (sum - biggest) / (notEnoughClusterTimeList.size() - 1);  //the biggest value is abnormal, drop it
	else
		return biggest;  //can quick adjust repair window!
}

long long FEC2DParityMultiplexor::decreaseRepairwindow()
{
	if (unnecessaryClusterTimeList.size() <= 2)
		return 0;
	//array is full, already cache all history, calculator RepairWindow time
	//去掉数组中极值
	long long sum = 0;
	long long biggest, smallest;
	biggest = 0;
	smallest = 1000000;
	for (int i = 0; i < unnecessaryClusterTimeList.size(); i++)
	{
		long long value = unnecessaryClusterTimeList[i];
		if (value > biggest)
			biggest = value;
					
		if (value < smallest)
			smallest = value;
				
		sum += value;
	}
	sum = sum - biggest - smallest;
	long long average = sum / (unnecessaryClusterTimeList.size() - 2);
	return average;
}

void FEC2DParityMultiplexor::pushFECRTPPacket(BufferedPacket* srcPacket)
{
	int payload = EXTRACT_BIT_RANGE(0, 7, srcPacket->data()[1]);
	//envir().log("push a rtp packet to fec: %d\n", payload);
	if (payload == fNonInterleavePayloadFormat)
	{
		//DebugPrintf("receive: %d, size:%d, seq: %u, start :%d, end :%d\n", payload, srcPacket->dataSize(), (unsigned)((((u_int16_t)srcPacket->data()[20]) << 8) | srcPacket->data()[21]), srcPacket->data()[12 + 12] & 0x01, srcPacket->data()[12 + 12] & 0x02);
		preProcessFECPacket(NonInterleaveIndex, srcPacket);
	}
	else if (payload == fInterleavePayloadFormat)
	{
		//DebugPrintf("receive: %d, size:%d, seq: %u, start :%d, end :%d\n", payload, srcPacket->dataSize(), (unsigned)((((u_int16_t)srcPacket->data()[20]) << 8) | srcPacket->data()[21]), srcPacket->data()[12 + 12] & 0x01, srcPacket->data()[12 + 12] & 0x02);
		preProcessFECPacket(InterleaveIndex, srcPacket);
	}
	else
	{
		//DebugPrintf("receive unexpected type: %d, size:%d, seq: %u\n", payload, srcPacket->dataSize(), (unsigned)((ntohl(*(u_int32_t*)(srcPacket->data()))) & 0xFFFF));
		pushFECRTPPacket(srcPacket->data(), srcPacket->dataSize());
	}
}

void FEC2DParityMultiplexor::pushFECRTPPacket(unsigned char* buffer, unsigned bufferSize) {
	totalReceivedPacket++;
	RTPPacket* rtpPacket = RTPPacket::createNew(buffer, bufferSize);
	setHostSSRCIfNotSet(rtpPacket);  //获取原始rtp包的SSRC，赋值到hostSSRC

	if (first) 
		setBaseIfNotSet(rtpPacket);
	else
	{
		Boolean thereWasReadyRTPPackets = False;
		int payload = EXTRACT_BIT_RANGE(0, 7, rtpPacket->content()[1]);
		bool bRes = insertPacket(rtpPacket);  
		if (!bRes)
		{
			if (payload != fNonInterleavePayloadFormat && payload != fInterleavePayloadFormat)
			{
				fRTPPackets.push(rtpPacket);
				thereWasReadyRTPPackets = True;
			}
			else
			{
				delete rtpPacket;  //是冗余包，它所在的Cluster已经超时被析构了，丢弃吧
			}
		}

		if (thereWasReadyRTPPackets)
			envir().taskScheduler().triggerEvent(fEventTriggerId, this);
	}
}

void FEC2DParityMultiplexor::checkStartStatis()
{
	const int CONTINUS_OK_TIME = 12 * 1000;
	const int WATCH_TIME_DURATION = 3 * 1000;
	int times = CONTINUS_OK_TIME / WATCH_TIME_DURATION;
	long long now = getTime();
	if (now - startCountPoint > WATCH_TIME_DURATION)
	{
		startCountPoint = now;
		if (repairSucceedCount + repairFailedCount != 0)
		{
			succeedScale = repairSucceedCount * 1.0 / (repairSucceedCount + repairFailedCount);
			if (succeedScale >= 0.99f)
			{
				repairTimeOKTimes++;
				if (repairTimeOKTimes >= times)
				{
					repairTimeOKTimes = 0;
					//持续一段时间，再尝试减少repair window
					long long offset = decreaseRepairwindow();
					long long theOld = fRepairWindow;
					fRepairWindow -= 20;
					DebugPrintf("decrease repair window: %lld ==> %lld, offset = %lld, succeedScale:%f, repairSucceedCount:%lld, repairFailedCount:%lld \n", theOld, fRepairWindow, offset, succeedScale, repairSucceedCount, repairFailedCount);
				}
			}
			else
			{
				long long theOld = fRepairWindow;
				long long offset = increaseRepairwindow();
				fRepairWindow += offset;
				DebugPrintf("increase repair window: %lld ==> %lld, average = %lld, succeedScale:%f, repairSucceedCount:%lld, repairFailedCount:%lld \n", theOld, fRepairWindow, offset, succeedScale, repairSucceedCount, repairFailedCount);
				repairTimeOKTimes = 0;
			}
				
		}
		unnecessaryClusterTimeList.clear();
		notEnoughClusterTimeList.clear();
		repairSucceedCount = 0;
		repairFailedCount = 0;
	}
}
void FEC2DParityMultiplexor::sendNext(void* firstArg) {
	FEC2DParityMultiplexor* fec2DParityMultiplexor = (FEC2DParityMultiplexor*)firstArg;
	fec2DParityMultiplexor->repairPackets();
}

/***************************
 *  动态调整 fRepairWindow 时间
 *
 *1：若持续一段时间都repair了所有丢失的包[或者根本没丢包]，则应减少【减少多少？】。
 *
 *2：若多去3秒修复率低于99%，并且有的包到达FEC模块后，未找到对应的Cluster，说明fRepairWindow时间短了，尝试增加。
 *
***************************/
void FEC2DParityMultiplexor::repairPackets() {
    Boolean packetsAreAvailable = False;
    int clustersToErase = 0;
	
	checkStartStatis();

	for (int i = 0; i < superBuffer.size(); i++) {
		FECCluster* cluster = superBuffer.at(i);
		bool bGetAllRTPPacket = cluster->allRTPPacketsArePresent();
		bool bClusterTimeout = cluster->hasExpired(fRepairWindow);

		bool bTryAddWindowTime = false;
		bool bTryReduceWindowTime = false;

		if (!bGetAllRTPPacket && !bClusterTimeout)
			break;  //进入break说明：该Cluster还未收齐数据包(非冗余包) 并且该Cluster未超时

		if (!bGetAllRTPPacket && bClusterTimeout) {
			//进入这里说明：该Cluster还未收齐数据包(非冗余包) 但 该Cluster已经超时了，尝试用冗余包把缺失的数据包恢复
			//char* debufInfo = FECDecoder::getClusterStatus(cluster, fRow, fColumn);
			int absenceNum = cluster->getAbsenceNumber();
			unsigned repairedPackets = FECDecoder::repairCluster(cluster->rtpPackets(), fRow, fColumn, hostSSRC);   //what if ssrc is not set?
			if (absenceNum != repairedPackets){
				bTryAddWindowTime = true;
				//DebugPrintf("%s", debufInfo);
				DebugPrintf("Cluster %u absence %d packets and repair %u\n\n\n", (unsigned)cluster->base(), absenceNum, repairedPackets);
				//有一次未repair所有丢失的包，两种情况：
				//1: 丢的包太多了，2D校验算法没法修复。
				//2：repair设置时间短了，有部分包未收到就超时了，可以通过增加时间解决。这种情况在insertPacket中处理。
			}
			else
			{
				//成功repair了所有丢失的包
				bTryReduceWindowTime = true;
			}
			//delete[] debufInfo;
		}
		else{
			//进入这里说明：该Cluster收齐了所有的数据包(非冗余包)，无需repair
			bTryReduceWindowTime = true;
		}

		flushCluster(cluster->rtpPackets());  //将Cluster里的数据包(非冗余包)移到fRTPPackets，下面会通知上层来取
		clustersToErase++;
		packetsAreAvailable = True;

		if (bTryReduceWindowTime)
		{
			repairSucceedCount++;
			long long unnecessaryTime = fRepairWindow - cluster->timeUsed();
			unnecessaryClusterTimeList.push_back(unnecessaryTime);
		}
		if (bTryAddWindowTime)
			repairFailedCount++;
	}

	long long now = getTime();

	std::map<FECCluster *, long long>::iterator it = alreadyHandledClusters.begin();
	for (; it != alreadyHandledClusters.end();)
	{
		if (now - it->second > 5 * 1000)  //缓存5秒时间已到
		{
			delete it->first;
			it = alreadyHandledClusters.erase(it);
		}
		else
			it++;
	}
		
    if (clustersToErase > 0) {
		for (int i = 0; i < clustersToErase; i++){
			alreadyHandledClusters[superBuffer[i]] = now;  //缓存5秒再 release 该 cluster
		}
        superBuffer.erase( superBuffer.begin(), (superBuffer.begin() + clustersToErase)); 
    }

	if (packetsAreAvailable) 
		envir().taskScheduler().triggerEvent(fEventTriggerId, this);
	nextTask() = envir().taskScheduler().scheduleDelayedTask(20000, (TaskFunc*)sendNext, this);
}

void FEC2DParityMultiplexor::setHostSSRCIfNotSet(RTPPacket* rtpPacket) {
    if (ssrcWasSet) 
		return;
    int payload = EXTRACT_BIT_RANGE(0, 7, rtpPacket->content()[1]);
	if (payload == fNonInterleavePayloadFormat || payload == fInterleavePayloadFormat)
		return;
    hostSSRC = FECDecoder::extractSSRC(rtpPacket);
    ssrcWasSet = True;
}

void FEC2DParityMultiplexor::setBaseIfNotSet(RTPPacket* rtpPacket) {
    emergencyBuffer.push_back(rtpPacket);
    int didFind = False;
    u_int16_t newBase = 0;
    findBase(&didFind, &newBase);
    if (didFind == 0) 
		return;
    first = False;
    currentSequenceNumber = newBase;
    handleEmergencyBuffer(newBase);
}

bool FEC2DParityMultiplexor::insertPacket(RTPPacket* rtpPacket) 
{
	bool bRes = true;
    int payload = EXTRACT_BIT_RANGE(0, 7, rtpPacket->content()[1]);
	u_int16_t seq = (payload == fNonInterleavePayloadFormat || payload == fInterleavePayloadFormat) ? FECDecoder::extractFECBase(rtpPacket) : FECDecoder::extractRTPSeq(rtpPacket);
	int sourcePacketCount = fRow * fColumn;
    u_int16_t newSeq = currentSequenceNumber + sourcePacketCount;
    if (newSeq >= currentSequenceNumber) 
	{
		if (seq >= newSeq)
		{
			u_int16_t diff = seq - currentSequenceNumber;
			if (diff > 30000)
			{
				DebugPrintf("receive %d, seq: %u,diff is too large, drop this packet\n", payload, seq);
				//Arbitrary number. This is a failsafe if a packet arrive out of in the 65535 rollover. Then the packet will be tossed.
				bRes = false;
			}
			else
			{
				updateCurrentSequenceNumber(seq, sourcePacketCount);
				//DebugPrintf("receive %d, seq: %u,now new a new cluster\n", payload, seq);
				FECCluster* fecCluster = FECCluster::createNew(currentSequenceNumber, fRow, fColumn, fInterleavePayloadFormat, fNonInterleavePayloadFormat);
				fecCluster->insertPacket(rtpPacket);
				superBuffer.push_back(fecCluster);
			}
		}
		else
		{
			FECCluster* fecCluster = findCluster(seq);
			if (fecCluster != NULL) 
			{
				//DebugPrintf("receive %d, seq: %u,find cluster, fbase:%u\n", payload, seq, fecCluster->base());
				fecCluster->insertPacket(rtpPacket);
			}
			else 
			{
				long long clusterHandledTime = 0;
				fecCluster = findInAlreadyHandledCluster(seq, &clusterHandledTime);
				if (fecCluster){
					long long laterTime = getTime() - clusterHandledTime;
					notEnoughClusterTimeList[fecCluster] = laterTime;
					//DebugPrintf("receive %d, seq: %u, not find in cluster, but find in handled cluster, this packet later:%lld:\n", payload, seq, laterTime);
				}
					
				else
					DebugPrintf("receive %d, seq: %u, not find in cluster and not find in handled cluster\n", payload, seq);
				bRes = false;
			}
		}
    }
    else
    {
		/*Special case*/
		DebugPrintf("into special case , u_int16_t overflow! payload:%d, newSeq:%u, currentSequenceNumber:%u \n", payload, newSeq, currentSequenceNumber);
		if (seq >= currentSequenceNumber || seq < newSeq)
		{
			//Find cluster
			FECCluster* fecCluster = findCluster(seq);
			if (fecCluster != NULL)
				fecCluster->insertPacket(rtpPacket);
			else
			{
				bRes = false;
			}
				
		}
		else
		{
			u_int16_t diff = seq - currentSequenceNumber;
			if (diff > 30000)
			{
				bRes = false;
			}
			else
			{
				updateCurrentSequenceNumber(seq, sourcePacketCount);
				FECCluster* fecCluster = FECCluster::createNew(currentSequenceNumber, fRow, fColumn, fInterleavePayloadFormat, fNonInterleavePayloadFormat);
				fecCluster->insertPacket(rtpPacket);
				superBuffer.push_back(fecCluster);
			}
		}
    }
	return bRes;
}

/*TODO:
	Fiks mod 65536, tror den er OK
	Memleaks
	Håndter flere clustere hvis base er laaangt fram i tid
*/
void FEC2DParityMultiplexor::handleEmergencyBuffer(u_int16_t base) {
	FECCluster* fecCluster = FECCluster::createNew(base, fRow, fColumn, fInterleavePayloadFormat, fNonInterleavePayloadFormat);
	Boolean thereWasReadyRTPPackets = False;
	superBuffer.push_back(fecCluster);

	DebugPrintf("handleEmergencyBuffer, size: %u\n", emergencyBuffer.size());
	for (int i = emergencyBuffer.size() - 1; i >= 0; i--) {
		RTPPacket* current = emergencyBuffer.at(i);

		int payload = EXTRACT_BIT_RANGE(0, 7, current->content()[1]);
		u_int16_t seq = (payload == fNonInterleavePayloadFormat || payload == fInterleavePayloadFormat) ? FECDecoder::extractFECBase(current) : FECDecoder::extractRTPSeq(current);

		bool bInCluster = fecCluster->seqNumInCluster(seq);  //这个包属于这个组吗？
		if (bInCluster)
			fecCluster->insertPacket(current);
		else 
		{
			bool bRes = insertPacket(current);  //插入失败怎么办！
			if (!bRes)
			{
				if (payload != fNonInterleavePayloadFormat && payload != fInterleavePayloadFormat)
				{
					fRTPPackets.push(current);
					thereWasReadyRTPPackets = True;
				}
				else
				{
					delete current;  //是冗余包，它所在的Cluster已经超时被析构了，丢弃吧
				}
			}
		}
		emergencyBuffer.pop_back();
	}
	if (thereWasReadyRTPPackets)
        envir().taskScheduler().triggerEvent(fEventTriggerId, this);
}


/*Utility methods*/
void FEC2DParityMultiplexor::updateCurrentSequenceNumber(u_int16_t newSeqnum, unsigned sourcePacketCount) {
    u_int16_t diff = newSeqnum - currentSequenceNumber;
    u_int16_t clustersBetween = diff / sourcePacketCount;
    currentSequenceNumber = currentSequenceNumber + clustersBetween * sourcePacketCount;


}

//mod 65536?
void FEC2DParityMultiplexor::findBase(int* didFind, u_int16_t* newBase) {
	for (int i = 0; i < emergencyBuffer.size(); i++) {
		RTPPacket* curr = emergencyBuffer.at(i);
		int payload = EXTRACT_BIT_RANGE(0, 7, curr->content()[1]);
		if (payload == fNonInterleavePayloadFormat || payload == fInterleavePayloadFormat) {
			u_int16_t currBase = (((u_int16_t)curr->content()[20]) << 8) | curr->content()[21];

			for (int j = 0; j < emergencyBuffer.size(); j++) {
				RTPPacket* lol = emergencyBuffer.at(j);
				int payload2 = EXTRACT_BIT_RANGE(0, 7, lol->content()[1]);
				if (payload2 == (payload == fNonInterleavePayloadFormat ? fInterleavePayloadFormat : fNonInterleavePayloadFormat)) {
					u_int16_t lolBase = (((u_int16_t)lol->content()[20]) << 8) | lol->content()[21];
					if (currBase == lolBase) {
						*didFind = 1;
						*newBase = lolBase;
						return;
					}
				}
			}
		}
	}
}

FECCluster* FEC2DParityMultiplexor::findCluster(u_int16_t seqNum) {
	for (int i = 0; i < superBuffer.size(); i++) {
		if (superBuffer.at(i)->seqNumInCluster(seqNum)) {
			return superBuffer.at(i);
		}
	}
	return NULL;
}

FECCluster* FEC2DParityMultiplexor::findInAlreadyHandledCluster(u_int16_t seqNum, long long* pTime/* = NULL*/)
{
	std::map<FECCluster *, long long>::iterator it = alreadyHandledClusters.begin();
	for (; it != alreadyHandledClusters.end();it++)
	{
		if (it->first->seqNumInCluster(seqNum)) {
			if (pTime)
				*pTime = it->second;
			return it->first;
		}
	}
	return NULL;
}

void FEC2DParityMultiplexor::flushCluster(RTPPacket** cluster) {
	int size = fRow * fColumn;
	for (int i = 0; i < size; i++) {
		int index = i + i / fColumn;
		RTPPacket* rtpPacket = cluster[index];
		if (rtpPacket != NULL) {
            fRTPPackets.push(rtpPacket);
        }
		cluster[index] = NULL;
	}
}

void FEC2DParityMultiplexor::printSuperBuffer() {
    if (superBuffer.empty()) {
		DebugPrintf("super buffer is empty!\n");
        return;
    }

	DebugPrintf("Start of superbuffer:\n");
    for (int i = 0; i < superBuffer.size(); i++) {
        FECCluster* cluster = superBuffer.at(i);
        FECDecoder::printCluster(cluster, fRow, fColumn);
    }
	DebugPrintf("End of superbuffer:\n");

}
