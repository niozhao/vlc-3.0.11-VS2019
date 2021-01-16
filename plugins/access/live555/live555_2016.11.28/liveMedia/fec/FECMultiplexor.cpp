#include "include/FECMultiplexor.hh"
#include "GroupsockHelper.hh"

FECMultiplexor::FECMultiplexor(UsageEnvironment& env) : FramedSource(env) {
	fEventTriggerId = 0;
	totalDecoderdNumber = 0;
	totalReceivedPacket = 0;
	packetReadyCallback = NULL;
	fCallbackClientData = NULL;
	fReadyTo = NULL;
	fReadyMaxSize = 0;
	if (fEventTriggerId == 0)
		fEventTriggerId = envir().taskScheduler().createEventTrigger(deliverFrame0);
}

FECMultiplexor::~FECMultiplexor() {
	std::queue<RTPPacket*> empty;
   	std::swap(fRTPPackets, empty);

	// Reclaim our 'event trigger'
    envir().taskScheduler().deleteEventTrigger(fEventTriggerId);
    fEventTriggerId = 0;
}

void FECMultiplexor::doGetNextFrame() {
	/*if (fRTPPackets == NULL) {
		handleClosure();
		return;
	}*/
	if (fRTPPackets.size() > 0) deliverFrame();
}

void FECMultiplexor::deliverFrame() {
	if (!isCurrentlyAwaitingData()) 
		return; // we're not ready for the data yet
	if (fRTPPackets.size() <= 0)
		return;
	while (fRTPPackets.size() > 0)
	{
		RTPPacket* rtpPacket = fRTPPackets.front();
		fRTPPackets.pop();

		if (rtpPacket->size() > fMaxSize) {
			fFrameSize = fMaxSize;
			fNumTruncatedBytes = rtpPacket->size() - fMaxSize;
		}
		else
			fFrameSize = rtpPacket->size();

		gettimeofday(&fPresentationTime, NULL);
		memmove(fTo, rtpPacket->content(), fFrameSize);

		delete rtpPacket;
		totalDecoderdNumber++;
		FramedSource::afterGetting(this);
	}
}

void FECMultiplexor::callbackFrame()
{
	while (fRTPPackets.size() > 0 && fReadyTo)
	{
		RTPPacket* rtpPacket = fRTPPackets.front();
		fRTPPackets.pop();

		unsigned fThisFrameSize = 0;
		unsigned fThisNumTruncatedBytes = 0;
		struct timeval fThisPresentationTime;
		unsigned fThisDurationInMicroseconds = 0;

		if (rtpPacket->size() > fReadyMaxSize) {
			fThisFrameSize = fReadyMaxSize;
			fThisNumTruncatedBytes = rtpPacket->size() - fReadyMaxSize;
		}
		else
			fThisFrameSize = rtpPacket->size();

		gettimeofday(&fThisPresentationTime, NULL);
		memmove(fReadyTo, rtpPacket->content(), fThisFrameSize);

		delete rtpPacket;
		totalDecoderdNumber++;
		if (packetReadyCallback)
		{
			packetReadyCallback(fCallbackClientData, fThisFrameSize, fThisNumTruncatedBytes, fThisPresentationTime, fThisDurationInMicroseconds);
		}
	}
}

void FECMultiplexor::deliverFrame0(void* clientData) {
	((FECMultiplexor*)clientData)->callbackFrame();
}
