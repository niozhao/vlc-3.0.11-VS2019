#ifndef _FEC_SOURCE_HH
#define _FEC_SOURCE_HH

#include <queue>
#include "FramedSource.hh"
#include "FECPacket.hh"
//#include "FECUtilities.hh"

class FECSource: public FramedSource {
public:

protected:
    FECSource(UsageEnvironment& env);
    ~FECSource();

protected:
    std::queue<FECPacket*> fFECPackets;
    EventTriggerId fEventTriggerId;
    static void deliverFrame0(void* clientData);

private:
    void doGetNextFrame();

    void deliverFrame();
};
#endif
