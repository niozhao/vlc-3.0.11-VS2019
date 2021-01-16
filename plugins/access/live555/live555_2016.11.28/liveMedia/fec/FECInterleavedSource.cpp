#include "include/FECInterleavedSource.hh"
#include "GroupsockHelper.hh"

FECInterleavedSource* FECInterleavedSource::createNew(UsageEnvironment& env, u_int8_t row, u_int8_t column) {
	return new FECInterleavedSource(env, row, column);
}

FECInterleavedSource::FECInterleavedSource(UsageEnvironment& env, u_int8_t row, u_int8_t column) : FramedSource(env), fRow(row), fColumn(column) {
	fRTPPackets = new RTPPacket*[fRow * fColumn];	//if fRow > 0 && fColumn > 0
	for (int i = 0; i < fRow * fColumn; i++) fRTPPackets[i] = NULL;

	fEventTriggerId = 0;
	fEventTriggerId = envir().taskScheduler().createEventTrigger(deliverFrame0);
}

FECInterleavedSource::~FECInterleavedSource() {
	for (int i = 0; i < fRow * fColumn; i++) delete fRTPPackets[i];
    delete[] fRTPPackets;

	std::queue<FECPacket*> empty;
   	std::swap(fFECPackets, empty);

	// Reclaim our 'event trigger'
    envir().taskScheduler().deleteEventTrigger(fEventTriggerId);
    fEventTriggerId = 0;
}

void FECInterleavedSource::pushRTPPacket(unsigned char* buffer, unsigned bufferSize) {
	int protectedPacketCount = fRow * fColumn;	//Må håndere om den ene er 0

	RTPPacket* rtpPacket = RTPPacket::createNew(buffer, bufferSize);

	int num = insertRTPPacket(protectedPacketCount, rtpPacket);

	int lastRow = (fRow - 1) * fColumn;

	if (num >= lastRow && num < protectedPacketCount) {
		unsigned base = num % fColumn;

		RTPPacket** column = new RTPPacket*[fRow];
		for (int i = 0; i < fRow; i++)
			column[i] = fRTPPackets[base + i * fColumn];

		FECPacket* fecPacket = FECEncoder::protectRow(column, fRow, fRow, fColumn);
		delete[] column;
		fFECPackets.push(fecPacket);

		//only clean if last packet in cluster
		if (num == protectedPacketCount - 1) {
			refreshRTPArray(protectedPacketCount);
		}
		envir().taskScheduler().triggerEvent(fEventTriggerId, this);
	}
}

int FECInterleavedSource::insertRTPPacket(int protectedPacketCount, RTPPacket* rtpPacket) {
	for (int i = 0; i < protectedPacketCount; i++) {
		if (fRTPPackets[i] == NULL) {
			fRTPPackets[i] = rtpPacket;
			return i;
		}
	}
	return -1;
}

void FECInterleavedSource::refreshRTPArray(unsigned size) {
	for (int i = 0; i < size; i++) {
		delete fRTPPackets[i];
		fRTPPackets[i] = NULL;
	}
}

void FECInterleavedSource::doGetNextFrame() {
	/*if (fFECPackets == NULL) {
		handleClosure();
		return;
	}*/
	if (!fFECPackets.empty()) deliverFrame();
}

void FECInterleavedSource::deliverFrame() {
	if (!isCurrentlyAwaitingData()) return; // we're not ready for the data yet

	if(fFECPackets.empty()) return;	//In case doGetNextFrame gets called before eventtrigger

	FECPacket* fecPacket = fFECPackets.front();
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

void FECInterleavedSource::deliverFrame0(void* clientData) {
	((FECInterleavedSource*)clientData)->deliverFrame();
}
