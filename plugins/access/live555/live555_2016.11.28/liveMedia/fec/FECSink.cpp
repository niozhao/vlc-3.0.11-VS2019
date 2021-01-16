#include "include/FECSink.hh"
#include <iostream>

FECSink::FECSink(UsageEnvironment& env, FEC2DParityMultiplexor* fec2DParityMultiplexor)
  : MediaSink(env), fFEC2DParityMultiplexor(fec2DParityMultiplexor) {
      fBuffer = new unsigned char[1500];
      fBufferSize = 1500;
}

FECSink::~FECSink() {

}

FECSink* FECSink::createNew(UsageEnvironment& env, FEC2DParityMultiplexor* fec2DParityMultiplexor) {
    return new FECSink(env, fec2DParityMultiplexor);
}

Boolean FECSink::continuePlaying() {
    if (fSource == NULL) return False;

    fSource->getNextFrame(fBuffer, fBufferSize,
    		afterGettingFrame, this,
    		onSourceClosure, this);

    return True;
}

void FECSink::afterGettingFrame(void* clientData, unsigned frameSize,
				 unsigned numTruncatedBytes,
				 struct timeval presentationTime,
				 unsigned /*durationInMicroseconds*/) {
  FECSink* sink = (FECSink*)clientData;
  sink->afterGettingFrame(frameSize, numTruncatedBytes, presentationTime);
}

void FECSink::addData(unsigned char const* data, unsigned dataSize,
		       struct timeval presentationTime) {

                   /*
  if (fPerFrameFileNameBuffer != NULL && fOutFid == NULL) {
    // Special case: Open a new file on-the-fly for this frame
    if (presentationTime.tv_usec == fPrevPresentationTime.tv_usec &&
	presentationTime.tv_sec == fPrevPresentationTime.tv_sec) {
      // The presentation time is unchanged from the previous frame, so we add a 'counter'
      // suffix to the file name, to distinguish them:
      sprintf(fPerFrameFileNameBuffer, "%s-%lu.%06lu-%u", fPerFrameFileNamePrefix,
	      presentationTime.tv_sec, presentationTime.tv_usec, ++fSamePresentationTimeCounter);
    } else {
      sprintf(fPerFrameFileNameBuffer, "%s-%lu.%06lu", fPerFrameFileNamePrefix,
	      presentationTime.tv_sec, presentationTime.tv_usec);
      fPrevPresentationTime = presentationTime; // for next time
      fSamePresentationTimeCounter = 0; // for next time
    }
    fOutFid = OpenOutputFile(envir(), fPerFrameFileNameBuffer);
  }

  // Write to our file:
#ifdef TEST_LOSS
  static unsigned const framesPerPacket = 10;
  static unsigned const frameCount = 0;
  static Boolean const packetIsLost;
  if ((frameCount++)%framesPerPacket == 0) {
    packetIsLost = (our_random()%10 == 0); // simulate 10% packet loss #####
  }

  if (!packetIsLost)
#endif
  if (fOutFid != NULL && data != NULL) {
    fwrite(data, 1, dataSize, fOutFid);
}*/

    //std::cout << "add data!\n";


    /*for (int i = 0; i < 24; i++) {
        std::cout << ((int)fBuffer[i]) << " ";
    }
    std::cout << "\n";*/


}

void FECSink::afterGettingFrame(unsigned frameSize,
				 unsigned numTruncatedBytes,
				 struct timeval presentationTime) {


                     /*
  if (numTruncatedBytes > 0) {
    envir() << "FileSink::afterGettingFrame(): The input frame data was too large for our buffer size ("
	    << fBufferSize << ").  "
            << numTruncatedBytes << " bytes of trailing data was dropped!  Correct this by increasing the \"bufferSize\" parameter in the \"createNew()\" call to at least "
            << fBufferSize + numTruncatedBytes << "\n";
  }*/
  addData(fBuffer, frameSize, presentationTime);


fFEC2DParityMultiplexor->pushFECRTPPacket(fBuffer, frameSize);

/*
  if (fOutFid == NULL || fflush(fOutFid) == EOF) {
    // The output file has closed.  Handle this the same way as if the input source had closed:
    if (fSource != NULL) fSource->stopGettingFrames();
    onSourceClosure();
    return;
  }

  if (fPerFrameFileNameBuffer != NULL) {
    if (fOutFid != NULL) { fclose(fOutFid); fOutFid = NULL; }
}*/

  // Then try getting the next frame:
  continuePlaying();
}
