#include "include/FECGroupsock.hh"
#include <iostream>

FECGroupsock::FECGroupsock(UsageEnvironment& env, struct in_addr const& groupAddr, Port port, u_int8_t ttl, FECNonInterleavedSource* fecSource, FECInterleavedSource* fecInterleavedSource)
  : Groupsock(env, groupAddr, port, ttl), fFECSource(fecSource), fFECInterleavedSource(fecInterleavedSource) {}

FECGroupsock::~FECGroupsock() {
    delete fFECSource;
    delete fFECInterleavedSource;
}

//optinal sources, if not null, then...
Boolean FECGroupsock::output(UsageEnvironment& env, unsigned char* buffer, unsigned bufferSize, DirectedNetInterface* interfaceNotToFwdBackTo) {
    fFECSource->pushRTPPacket(buffer, bufferSize);
    fFECInterleavedSource->pushRTPPacket(buffer, bufferSize);

    return Groupsock::output(env,buffer, bufferSize, interfaceNotToFwdBackTo);
}
