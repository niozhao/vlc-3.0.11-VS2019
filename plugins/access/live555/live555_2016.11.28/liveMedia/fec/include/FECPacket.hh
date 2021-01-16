#ifndef _FEC_PACKET_HH
#define _FEC_PACKET_HH

class FECPacket {
public:
    //static FECPacket* createNew(unsigned size);
    static FECPacket* createNew(unsigned char* content, unsigned size);
    FECPacket(unsigned char* content, unsigned size);
    virtual ~FECPacket();
    void printPacket();

    unsigned char* content() const {return fContent;}
    unsigned size() const {return fSize;}

private:
    unsigned char* fContent;
    unsigned fSize;
};
#endif
