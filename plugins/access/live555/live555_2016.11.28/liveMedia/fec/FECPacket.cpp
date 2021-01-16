#include "include/FECPacket.hh"
//#include <iostream>

//TODO: Handle extension header?
FECPacket* FECPacket::createNew(unsigned char* content, unsigned size) {
    return new FECPacket(content, size);
}

FECPacket::FECPacket(unsigned char* content, unsigned size) {
    fContent = new unsigned char[size];
    for (int i = 0; i < size; i++)
        fContent[i] = content[i];

    delete[] content;
    fSize = size;
}

FECPacket::~FECPacket() {
    delete[] fContent;
}

void FECPacket::printPacket() {
    /*for (int i = 0; i < 12; i++) {
        std::cout << (int)fContent[i] << " ";
        if ((i + 1) % 4 == 0) std::cout << "\n";
    }
    std::cout << "\n";*/
}
