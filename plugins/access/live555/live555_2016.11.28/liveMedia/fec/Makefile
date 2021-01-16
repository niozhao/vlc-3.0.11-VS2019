LIVE_DIR = ../../
INCLUDES = -I$(LIVE_DIR)UsageEnvironment/include -I$(LIVE_DIR)groupsock/include -I$(LIVE_DIR)liveMedia/include -I$(LIVE_DIR)BasicUsageEnvironment/include -I. -Iinclude

OBJECT : FEC2DParityMultiplexor.o \
          FECCluster.o \
          FECDecoder.o \
          FECMultiplexor.o \
          FECPacket.o \
          RTPPacket.o

.cpp.o:
	$(CPLUSPLUS_COMPILER) $(INCLUDES) -c $(CPLUSPLUS_FLAGS) $<
	
clean:
	rm -f *.o *.d
