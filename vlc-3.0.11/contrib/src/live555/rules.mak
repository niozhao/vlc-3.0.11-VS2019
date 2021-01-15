# live555

LIVE555_VERSION := 2016.11.28
LIVE555_FILE := live.$(LIVE555_VERSION).tar.gz
LIVEDOTCOM_URL := http://live555.com/liveMedia/public/$(LIVE555_FILE)
LIVE555_FOLDER := live555

ifdef BUILD_NETWORK
ifdef GNUV3
PKGS += live555
endif
endif

ifeq ($(call need_pkg,"live555"),)
PKGS_FOUND += live555
endif

$(TARBALLS)/$(LIVE555_FILE):
	$(call download_pkg,$(LIVEDOTCOM_URL),live555)
	
$(LIVE555_FOLDER):
	git clone https://github.com/niozhao/live555_2016.11.28.git $(LIVE555_FOLDER)

.sum-live555: $(LIVE555_FILE) $(LIVE555_FOLDER)

LIVE_EXTRA_CFLAGS := $(EXTRA_CFLAGS) -fexceptions $(CFLAGS)

LIVE_TARGET = $(error live555 target not defined!)
ifdef HAVE_LINUX
LIVE_TARGET := linux
LIVE_EXTRA_CFLAGS += -DXLOCALE_NOT_USED
endif
ifdef HAVE_WIN32
LIVE_TARGET := mingw
endif
ifdef HAVE_DARWIN_OS
LIVE_TARGET := macosx
else
ifdef HAVE_BSD
LIVE_TARGET := freebsd
endif
endif
ifdef HAVE_SOLARIS
ifeq ($(ARCH),x86_64)
LIVE_TARGET := solaris-64bit
else
LIVE_TARGET := solaris-32bit
endif
endif

SUBDIRS=groupsock liveMedia UsageEnvironment BasicUsageEnvironment

.live555: $(LIVE555_FOLDER) .sum-live555
	$(REQUIRE_GNUV3)
	cd $< && for subdir in $(SUBDIRS); do \
		echo "PREFIX = $(PREFIX)" >> $$subdir/Makefile.head && \
		echo "LIBDIR = $(PREFIX)/lib" >> $$subdir/Makefile.head ; done
	cd $< && echo "LIBDIR = $(PREFIX)/lib" >> Makefile.head && \
		echo "PREFIX = $(PREFIX)" >> Makefile.head
	cd $< && ./genMakefiles $(LIVE_TARGET)
	cd $< && for subdir in $(SUBDIRS); do $(MAKE) $(HOSTVARS) -C $$subdir; done
	cd $< && for subdir in $(SUBDIRS); do $(MAKE) $(HOSTVARS) -C $$subdir install; done
	cd $< && $(MAKE) install_shared_libraries
	touch $@
