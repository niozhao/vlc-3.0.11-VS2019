#include "include/FECNonInterleavedSource.hh"
#include "GroupsockHelper.hh"
#include <iostream>

FECNonInterleavedSource* FECNonInterleavedSource::createNew(UsageEnvironment& env, u_int8_t row, u_int8_t column) {
	return new FECNonInterleavedSource(env, row, column);
}

FECNonInterleavedSource::FECNonInterleavedSource(UsageEnvironment& env, u_int8_t row, u_int8_t column) : FramedSource(env), fRow(row), fColumn(column) {
	fRTPPackets = new RTPPacket*[fColumn];

	for (int i = 0; i < fColumn; i++) fRTPPackets[i] = NULL;

	fEventTriggerId = 0;
	fEventTriggerId = envir().taskScheduler().createEventTrigger(deliverFrame0);
}

FECNonInterleavedSource::~FECNonInterleavedSource() {
	for (int i = 0; i < fColumn; i++) delete fRTPPackets[i];
    delete[] fRTPPackets;

	std::queue<FECPacket*> empty;
   	std::swap(fFECPackets, empty);

	// Reclaim our 'event trigger'
    envir().taskScheduler().deleteEventTrigger(fEventTriggerId);
    fEventTriggerId = 0;
}

void FECNonInterleavedSource::pushRTPPacket(unsigned char* buffer, unsigned bufferSize) {
	RTPPacket* rtpPacket = RTPPacket::createNew(buffer, bufferSize);

	int index = insertRTPPacket(rtpPacket);
	if ((index + 1) != fColumn) return; //Handle if -1 is returned

	FECPacket* fecPacket = FECEncoder::protectRow(fRTPPackets, fColumn, fRow, fColumn);
	fFECPackets.push(fecPacket);

	refreshRTPArray();
	envir().taskScheduler().triggerEvent(fEventTriggerId, this);
}

int FECNonInterleavedSource::insertRTPPacket(RTPPacket* rtpPacket) {
	for (int i = 0; i < fColumn; i++) {
		if (fRTPPackets[i] == NULL) {
			fRTPPackets[i] = rtpPacket;
			return i;
		}
	}
	return -1;
}

void FECNonInterleavedSource::refreshRTPArray() {
	for (int i = 0; i < fColumn; i++) {
		delete fRTPPackets[i];	//What if it is NULL!
		fRTPPackets[i] = NULL;
	}
}

void FECNonInterleavedSource::doGetNextFrame() {
	/*if (fFECPackets == NULL) {
		handleClosure();
		return;
	}*/
	if (!fFECPackets.empty()) deliverFrame();
}

void FECNonInterleavedSource::deliverFrame() {
	if (!isCurrentlyAwaitingData()) return; // we're not ready for the data yet

	if (fFECPackets.empty()) return;

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

void FECNonInterleavedSource::deliverFrame0(void* clientData) {
	((FECNonInterleavedSource*)clientData)->deliverFrame();
}
