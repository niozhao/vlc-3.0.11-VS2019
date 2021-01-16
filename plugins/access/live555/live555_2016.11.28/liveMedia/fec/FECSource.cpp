#include "include/FECSource.hh"
#include "GroupsockHelper.hh"
#include <iostream>

FECSource::FECSource(UsageEnvironment& env) : FramedSource(env) {
	fEventTriggerId = 0;
	fEventTriggerId = envir().taskScheduler().createEventTrigger(deliverFrame0);

	//if (fEventTriggerId == 0)

}

FECSource::~FECSource() {
	std::queue<FECPacket*> empty;
   	std::swap(fFECPackets, empty);

	// Reclaim our 'event trigger'
    envir().taskScheduler().deleteEventTrigger(fEventTriggerId);
    fEventTriggerId = 0;
}

void FECSource::doGetNextFrame() {
	/*if (fFECPackets == NULL) {
		handleClosure();
		return;
	}*/
	if (fFECPackets.size() > 0) deliverFrame();
}

void FECSource::deliverFrame() {
	if (!isCurrentlyAwaitingData()) return; // we're not ready for the data yet

	FECPacket* fecPacket = fFECPackets.front();
	if (fecPacket == NULL) {
		//std::cout << "NUL!!!\n";
	}
	fFECPackets.pop();

	if (fecPacket->size() > fMaxSize) {
		fFrameSize = fMaxSize;
		fNumTruncatedBytes = fecPacket->size() - fMaxSize;
  	}
	else fFrameSize = fecPacket->size();

	gettimeofday(&fPresentationTime, NULL);
	memmove(fTo, fecPacket->content(), fFrameSize);

	delete fecPacket;

	FramedSource::afterGetting(this);
}

void FECSource::deliverFrame0(void* clientData) {
	((FECSource*)clientData)->deliverFrame();
}
