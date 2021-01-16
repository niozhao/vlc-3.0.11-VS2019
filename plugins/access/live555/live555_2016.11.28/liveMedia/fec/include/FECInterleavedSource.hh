#ifndef _FEC_INTERLEAVED_SOURCE_HH
#define _FEC_INTERLEAVED_SOURCE_HH

#include <queue>
#include "RTPPacket.hh"
#include "FECPacket.hh"
#include "FECEncoder.hh"
#include "FramedSource.hh"

class FECInterleavedSource: public FramedSource {
public:
    static FECInterleavedSource* createNew(UsageEnvironment& env, u_int8_t row, u_int8_t column);
    ~FECInterleavedSource();
    void pushRTPPacket(unsigned char* buffer, unsigned bufferSize);

private:
    FECInterleavedSource(UsageEnvironment& env, u_int8_t row, u_int8_t column);
    int insertRTPPacket(int protectedPacketCount, RTPPacket* rtpPacket);
    void refreshRTPArray(unsigned size);

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
