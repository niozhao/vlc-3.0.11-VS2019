#ifndef _FEC_SINK_HH
#define _FEC_SINK_HH

#ifndef _MEDIA_SINK_HH
#include "MediaSink.hh"
#endif

#include "FEC2DParityMultiplexor.hh"

class FECSink: public MediaSink {
public:
  static FECSink* createNew(UsageEnvironment& env, FEC2DParityMultiplexor* fec2DParityMultiplexor);

  virtual void addData(unsigned char const* data, unsigned dataSize,
		       struct timeval presentationTime);
  // (Available in case a client wants to add extra data to the output file)

protected:
  FECSink(UsageEnvironment& env, FEC2DParityMultiplexor* fec2DParityMultiplexor);
      // called only by createNew()
  virtual ~FECSink();

protected: // redefined virtual functions:
  virtual Boolean continuePlaying();

protected:
  static void afterGettingFrame(void* clientData, unsigned frameSize,
				unsigned numTruncatedBytes,
				struct timeval presentationTime,
				unsigned durationInMicroseconds);
  virtual void afterGettingFrame(unsigned frameSize,
				 unsigned numTruncatedBytes,
				 struct timeval presentationTime);

  FILE* fOutFid;
  unsigned char* fBuffer;
  unsigned fBufferSize;
  struct timeval fPrevPresentationTime;
  unsigned fSamePresentationTimeCounter;

  FEC2DParityMultiplexor* fFEC2DParityMultiplexor;
};

#endif
