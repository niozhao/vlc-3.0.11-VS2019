#ifndef _FEC_NON_INTERLEAVED_SOURCE_HH
#define _FEC_NON_INTERLEAVED_SOURCE_HH

#include <queue>
#include "RTPPacket.hh"
#include "FECPacket.hh"
#include "FECEncoder.hh"
#include "FramedSource.hh"

class FECNonInterleavedSource: public FramedSource {
public:
    static FECNonInterleavedSource* createNew(UsageEnvironment& env, u_int8_t row, u_int8_t column);
    ~FECNonInterleavedSource();
    void pushRTPPacket(unsigned char* buffer, unsigned bufferSize);

private:
    FECNonInterleavedSource(UsageEnvironment& env, u_int8_t row, u_int8_t column);
    int insertRTPPacket(RTPPacket* rtpPacket);
    void refreshRTPArray();

    void doGetNextFrame();
    void deliverFrame();
    static void deliverFrame0(void* clientData);

private:
    RTPPacket** fRTPPackets;
    u_int8_t fRow;
    u_int8_t fColumn;
    std::queue<FECPacket*> fFECPackets;
    EventTriggerId fEventTriggerId;
};
#endif
