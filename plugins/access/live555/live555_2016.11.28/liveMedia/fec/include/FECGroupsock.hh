#ifndef _FEC_GROUPSOCK_HH
#define _FEC_GROUPSOCK_HH

#include "Groupsock.hh"
#include "GroupsockHelper.hh"
#include "FECNonInterleavedSource.hh"
#include "FECInterleavedSource.hh"

class FECGroupsock: public Groupsock {
public:
    FECGroupsock(UsageEnvironment& env, struct in_addr const& groupAddr, Port port, u_int8_t ttl, FECNonInterleavedSource* fecSource, FECInterleavedSource* fecInterleavedSource);
    virtual ~FECGroupsock();

    Boolean output(UsageEnvironment& env, unsigned char* buffer, unsigned bufferSize, DirectedNetInterface* interfaceNotToFwdBackTo = NULL);
private:

    FECNonInterleavedSource* fFECSource;
    FECInterleavedSource* fFECInterleavedSource;
};
#endif
