#ifndef _FEC_ENCODER_HH
#define _FEC_ENCODER_HH

#include <liveMedia.hh>
#include "RTPPacket.hh"
#include "FECPacket.hh"
#include <stdint.h>

#define EXTRACT_BIT(n, x) ((x >> n) & 0x01)
#define EXTRACT_BIT_RANGE(from, to, data) ((unsigned char)(data << (sizeof(data) * 8 - to)) >> (from + (sizeof(data) * 8 - to)))

#define FEC_HEADER_SIZE 12
#define FEC_BIT_STRING_LENGTH 10

class FECEncoder {
public:
    static FECPacket* protectRow(RTPPacket** row, unsigned rowSize, unsigned d, unsigned l);
private:
    static u_int16_t calculateLongestPayload(RTPPacket** rtpPackets, unsigned size);
    static unsigned char* getPaddedRTPPayload(RTPPacket* rtpPacket, u_int16_t longestPayload);
    static unsigned char* generateBitString(unsigned char* rtpPacket, unsigned payloadSize);
    static FECPacket* createFECPacket(unsigned char* fecBitString, unsigned packetSize, unsigned char* fecPayload, uint16_t sn_base, u_int8_t row, u_int8_t column);
};
#endif
