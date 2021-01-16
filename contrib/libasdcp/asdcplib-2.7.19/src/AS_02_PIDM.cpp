/*
Copyright (c) 2011-2016, John Hurst

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. The name of the author may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/ 
/*! \file    AS_02_PIDM.cpp
  \version $Id: AS_02_PIDM.cpp,v 1.2 2016/12/03 21:26:24 jhurst Exp $
  \brief   AS-02 library, Aux Data essence reader and writer implementation
*/

#include "AS_02_internal.h"
#include "AS_02_PHDR.h"

#include <iostream>
#include <iomanip>

using namespace ASDCP;
using Kumu::GenRandomValue;

//------------------------------------------------------------------------------------------

static std::string AUXDATA_PACKAGE_LABEL = "File Package: EXPERIMENTAL ST 2067-5 frame wrapping of time-synchronous data";
static std::string PICT_DEF_LABEL = "Prototype IMF Aux Data Track";

//------------------------------------------------------------------------------------------
//
// hidden, internal implementation of Aux Data reader


class AS_02::PIDM::MXFReader::h__Reader : public AS_02::h__AS02Reader
{
  ASDCP_NO_COPY_CONSTRUCT(h__Reader);

public:
  h__Reader(const Dictionary& d) :
    AS_02::h__AS02Reader(d) {}

  virtual ~h__Reader() {}

  Result_t    OpenRead(const std::string& filename, ASDCP::FrameBuffer& global_metadata);
  Result_t    ReadFrame(ui32_t, ASDCP::FrameBuffer&, AESDecContext*, HMACContext*);
};

//
Result_t
AS_02::PIDM::MXFReader::h__Reader::OpenRead(const std::string& filename, ASDCP::FrameBuffer& global_metadata)
{
  Result_t result = OpenMXFRead(filename);
  ui32_t GlobalPayloadSID = 0;

  if( KM_SUCCESS(result) )
    {
      InterchangeObject* tmp_iobj = 0;

      m_HeaderPart.GetMDObjectByType(OBJ_TYPE_ARGS(PIMFDynamicMetadataDescriptor), &tmp_iobj);

      if ( tmp_iobj == 0 )
	{
	  DefaultLogSink().Error("PIMFDynamicMetadataDescriptor not found.\n");
	}

      m_HeaderPart.GetMDObjectByType(OBJ_TYPE_ARGS(PIMFDynamicMetadataDescriptor), &tmp_iobj);

      if ( tmp_iobj == 0 )
	{
	  DefaultLogSink().Error("PIMFDynamicMetadataDescriptor not found.\n");
	  return RESULT_AS02_FORMAT;
	}
      else
	{
	  PIMFDynamicMetadataDescriptor *tmp_desc = dynamic_cast<PIMFDynamicMetadataDescriptor*>(tmp_iobj);
	  assert(tmp_desc);
	  GlobalPayloadSID = tmp_desc->GlobalPayloadSID;
	}

      std::list<InterchangeObject*> ObjectList;
      m_HeaderPart.GetMDObjectsByType(OBJ_TYPE_ARGS(Track), ObjectList);

      if ( ObjectList.empty() )
	{
	  DefaultLogSink().Error("MXF Metadata contains no Track Sets.\n");
	  return RESULT_AS02_FORMAT;
	}
    }


  // if PIMFDynamicMetadataDescriptor_GlobalPayloadSID exists, go get it
  if ( KM_SUCCESS(result) && GlobalPayloadSID )
    {
      RIP::const_pair_iterator pi;
      RIP::PartitionPair TmpPair;
      
      // Look up the partition start in the RIP using the SID.
      for ( pi = m_RIP.PairArray.begin(); pi != m_RIP.PairArray.end(); ++pi )
	{
	  if ( (*pi).BodySID == GlobalPayloadSID )
	    {
	      TmpPair = *pi;
	      break;
	    }
	}

      if ( TmpPair.ByteOffset == 0 )
	{
	  DefaultLogSink().Error("Body SID not found in RIP set: %d\n", GlobalPayloadSID);
	  return RESULT_AS02_FORMAT;
	}

      // seek to the start of the partition
      if ( (Kumu::fpos_t)TmpPair.ByteOffset != m_LastPosition )
	{
	  m_LastPosition = TmpPair.ByteOffset;
	  result = m_File.Seek(TmpPair.ByteOffset);
	}

      // read the partition header
      ASDCP::MXF::Partition GSPart(m_Dict);
      result = GSPart.InitFromFile(m_File);

      // read the generic stream packet
      if ( KM_SUCCESS(result) )
	{
	  result = global_metadata.Capacity(Kumu::Megabyte); // todo: dynamic sizing
	}

      if ( KM_SUCCESS(result) )
	{
	  result = Read_EKLV_Packet(m_File, *m_Dict, m_Info, m_LastPosition, m_CtFrameBuf,
				    0, 0, global_metadata, m_Dict->ul(MDD_GenericStream_DataElement), 0, 0);
	}
    }

  return result;
}

//
Result_t
AS_02::PIDM::MXFReader::h__Reader::ReadFrame(ui32_t FrameNum, ASDCP::FrameBuffer& FrameBuf,
		      ASDCP::AESDecContext* Ctx, ASDCP::HMACContext* HMAC)
{
  if ( ! m_File.IsOpen() )
    return RESULT_INIT;

  assert(m_Dict);
  return ReadEKLVFrame(FrameNum, FrameBuf, m_Dict->ul(MDD_PIMFDynamicMetadataEssence), Ctx, HMAC);
}

//------------------------------------------------------------------------------------------
//

AS_02::PIDM::MXFReader::MXFReader()
{
  m_Reader = new h__Reader(DefaultCompositeDict());
}


AS_02::PIDM::MXFReader::~MXFReader()
{
}

// Warning: direct manipulation of MXF structures can interfere
// with the normal operation of the wrapper.  Caveat emptor!
//
ASDCP::MXF::OP1aHeader&
AS_02::PIDM::MXFReader::OP1aHeader()
{
  if ( m_Reader.empty() )
    {
      assert(g_OP1aHeader);
      return *g_OP1aHeader;
    }

  return m_Reader->m_HeaderPart;
}

// Warning: direct manipulation of MXF structures can interfere
// with the normal operation of the wrapper.  Caveat emptor!
//
AS_02::MXF::AS02IndexReader&
AS_02::PIDM::MXFReader::AS02IndexReader()
{
  if ( m_Reader.empty() )
    {
      assert(g_AS02IndexReader);
      return *g_AS02IndexReader;
    }

  return m_Reader->m_IndexAccess;
}

// Warning: direct manipulation of MXF structures can interfere
// with the normal operation of the wrapper.  Caveat emptor!
//
ASDCP::MXF::RIP&
AS_02::PIDM::MXFReader::RIP()
{
  if ( m_Reader.empty() )
    {
      assert(g_RIP);
      return *g_RIP;
    }

  return m_Reader->m_RIP;
}

// Open the file for reading. The file must exist. Returns error if the
// operation cannot be completed.
Result_t
AS_02::PIDM::MXFReader::OpenRead(const std::string& filename) const
{
  ASDCP::FrameBuffer nil;
  return m_Reader->OpenRead(filename, nil);
}

//
Result_t
AS_02::PIDM::MXFReader::OpenRead(const std::string& filename, ASDCP::FrameBuffer& global_metadata) const
{
  return m_Reader->OpenRead(filename, global_metadata);
}

//
Result_t
AS_02::PIDM::MXFReader::Close() const
{
  if ( m_Reader && m_Reader->m_File.IsOpen() )
    {
      m_Reader->Close();
      return RESULT_OK;
    }

  return RESULT_INIT;
}

//
Result_t
AS_02::PIDM::MXFReader::ReadFrame(ui32_t FrameNum, ASDCP::FrameBuffer& FrameBuf,
					   ASDCP::AESDecContext* Ctx, ASDCP::HMACContext* HMAC) const
{
  if ( m_Reader && m_Reader->m_File.IsOpen() )
    return m_Reader->ReadFrame(FrameNum, FrameBuf, Ctx, HMAC);

  return RESULT_INIT;
}

// Fill the struct with the values from the file's header.
// Returns RESULT_INIT if the file is not open.
Result_t
AS_02::PIDM::MXFReader::FillWriterInfo(WriterInfo& Info) const
{
  if ( m_Reader && m_Reader->m_File.IsOpen() )
    {
      Info = m_Reader->m_Info;
      return RESULT_OK;
    }

  return RESULT_INIT;
}

//
void
AS_02::PIDM::MXFReader::DumpHeaderMetadata(FILE* stream) const
{
  if ( m_Reader && m_Reader->m_File.IsOpen() )
    {
      m_Reader->m_HeaderPart.Dump(stream);
    }
}


//
void
AS_02::PIDM::MXFReader::DumpIndex(FILE* stream) const
{
  if ( m_Reader && m_Reader->m_File.IsOpen() )
    {
      m_Reader->m_IndexAccess.Dump(stream);
    }
}

//------------------------------------------------------------------------------------------

//
class AS_02::PIDM::MXFWriter::h__Writer : public AS_02::h__AS02WriterFrame
{
  ASDCP_NO_COPY_CONSTRUCT(h__Writer);
  h__Writer();

public:
  byte_t m_EssenceUL[SMPTE_UL_LENGTH];
  PIMFDynamicMetadataDescriptor *m_AuxDataEssenceDescriptor;

  h__Writer(const Dictionary& d) : h__AS02WriterFrame(d) {
    memset(m_EssenceUL, 0, SMPTE_UL_LENGTH);
  }

  virtual ~h__Writer(){}

  Result_t OpenWrite(const std::string& filename, const ASDCP::WriterInfo& Info,
		     const UL& data_essence_coding,
		     const ASDCP::Rational& edit_rate,
		     const AS_02::IndexStrategy_t& IndexStrategy,
		     const ui32_t& PartitionSpace, const ui32_t& HeaderSize);
  Result_t SetSourceStream(const std::string& label, const ASDCP::Rational& edit_rate);
  Result_t WriteFrame(const ASDCP::FrameBuffer&, ASDCP::AESEncContext*, ASDCP::HMACContext*);
  Result_t Finalize(const ASDCP::FrameBuffer& global_metadata);
};


// Open the file for writing. The file must not exist. Returns error if
// the operation cannot be completed.
Result_t
AS_02::PIDM::MXFWriter::h__Writer::OpenWrite(const std::string& filename, const ASDCP::WriterInfo& Info,
						const UL& data_essence_coding,
						const ASDCP::Rational& edit_rate,
						const AS_02::IndexStrategy_t& IndexStrategy,
						const ui32_t& PartitionSpace_sec, const ui32_t& HeaderSize)
{
  m_AuxDataEssenceDescriptor = new PIMFDynamicMetadataDescriptor(m_Dict);
  m_AuxDataEssenceDescriptor->DataEssenceCoding = data_essence_coding;
  m_AuxDataEssenceDescriptor->SampleRate = edit_rate;


  if ( ! m_State.Test_BEGIN() )
    {
      KM_RESULT_STATE_HERE();
	return RESULT_STATE;
    }

  if ( m_IndexStrategy != AS_02::IS_FOLLOW )
    {
      DefaultLogSink().Error("Only strategy IS_FOLLOW is supported at this time.\n");
      return Kumu::RESULT_NOTIMPL;
    }

  Result_t result = m_File.OpenWrite(filename);

  if ( KM_SUCCESS(result) )
    {
      m_IndexStrategy = IndexStrategy;
      m_PartitionSpace = PartitionSpace_sec; // later converted to edit units by SetSourceStream()
      m_HeaderSize = HeaderSize;

      if ( m_AuxDataEssenceDescriptor->GetUL() != UL(m_Dict->ul(MDD_PIMFDynamicMetadataDescriptor)) )
	{
	  DefaultLogSink().Error("Essence descriptor is not a PIMFDynamicMetadataDescriptor.\n");
	  m_AuxDataEssenceDescriptor->Dump();
	  return RESULT_AS02_FORMAT;
	}

      m_EssenceDescriptor = m_AuxDataEssenceDescriptor;
      result = m_State.Goto_INIT();
    }

  return result;
}

// Automatically sets the MXF file's metadata from the first jpeg codestream stream.
Result_t
AS_02::PIDM::MXFWriter::h__Writer::SetSourceStream(const std::string& label, const ASDCP::Rational& edit_rate)
{
  assert(m_Dict);
  if ( ! m_State.Test_INIT() )
    {
      KM_RESULT_STATE_HERE();
	return RESULT_STATE;
    }

  memcpy(m_EssenceUL, m_Dict->ul(MDD_PIMFDynamicMetadataEssence), SMPTE_UL_LENGTH);
  m_EssenceUL[SMPTE_UL_LENGTH-1] = 1; // first (and only) essence container
  Result_t result = m_State.Goto_READY();

  if ( KM_SUCCESS(result) )
    {
      result = WriteAS02Header(label, UL(m_Dict->ul(MDD_PIMFDynamicMetadataWrappingFrame)),
			       PICT_DEF_LABEL, UL(m_EssenceUL), UL(m_Dict->ul(MDD_DataDataDef)),
			       edit_rate, derive_timecode_rate_from_edit_rate(edit_rate));

      if ( KM_SUCCESS(result) )
	{
	  this->m_IndexWriter.SetPrimerLookup(&this->m_HeaderPart.m_Primer);
	}
    }

  return result;
}

// Writes a frame of essence to the MXF file. If the optional AESEncContext
// argument is present, the essence is encrypted prior to writing.
// Fails if the file is not open, is finalized, or an operating system
// error occurs.
//
Result_t
AS_02::PIDM::MXFWriter::h__Writer::WriteFrame(const ASDCP::FrameBuffer& FrameBuf,
					      AESEncContext* Ctx, HMACContext* HMAC)
{
  if ( FrameBuf.Size() == 0 )
    {
      DefaultLogSink().Error("The frame buffer size is zero.\n");
      return RESULT_PARAM;
    }

  Result_t result = RESULT_OK;

  if ( m_State.Test_READY() )
    {
      result = m_State.Goto_RUNNING(); // first time through
    }

  if ( KM_SUCCESS(result) )
    {
      result = WriteEKLVPacket(FrameBuf, m_EssenceUL, Ctx, HMAC);
      m_FramesWritten++;
    }

  return result;
}

// Closes the MXF file, writing the index and other closing information.
//
Result_t
AS_02::PIDM::MXFWriter::h__Writer::Finalize(const ASDCP::FrameBuffer& global_metadata)
{
  if ( ! m_State.Test_RUNNING() )
    {
      KM_RESULT_STATE_HERE();
	return RESULT_STATE;
    }

  Result_t result = m_State.Goto_FINAL();

  if ( KM_SUCCESS(result) )
    {
      if ( m_IndexWriter.GetDuration() > 0 )
	{
	  m_IndexWriter.ThisPartition = m_File.Tell();
	  m_IndexWriter.WriteToFile(m_File);
	  m_RIP.PairArray.push_back(RIP::PartitionPair(0, m_IndexWriter.ThisPartition));
	}

      if ( global_metadata.Size() )
	{
	  // write global_metadata payload
	  Kumu::fpos_t here = m_File.Tell();

	  // create generic stream partition header
	  static UL GenericStream_DataElement(m_Dict->ul(MDD_GenericStream_DataElement));
	  ASDCP::MXF::Partition GSPart(m_Dict);

	  GSPart.MajorVersion = m_HeaderPart.MajorVersion;
	  GSPart.MinorVersion = m_HeaderPart.MinorVersion;
	  GSPart.ThisPartition = here;
	  GSPart.PreviousPartition = m_RIP.PairArray.back().ByteOffset;
	  GSPart.OperationalPattern = m_HeaderPart.OperationalPattern;
	  GSPart.BodySID = 2;
  	  m_AuxDataEssenceDescriptor->GlobalPayloadSID = GSPart.BodySID;

	  m_RIP.PairArray.push_back(RIP::PartitionPair(GSPart.BodySID, here));
	  GSPart.EssenceContainers = m_HeaderPart.EssenceContainers;

	  static UL gs_part_ul(m_Dict->ul(MDD_GenericStreamPartition));
	  Result_t result = GSPart.WriteToFile(m_File, gs_part_ul);

	  if ( KM_SUCCESS(result) )
	    {
	      result = Write_EKLV_Packet(m_File, *m_Dict, m_HeaderPart, m_Info, m_CtFrameBuf, m_FramesWritten,
					 m_StreamOffset, global_metadata, GenericStream_DataElement.Value(), 0, 0);
	    }
	}
    }

  if ( KM_SUCCESS(result) )
    {
      result = WriteAS02Footer();
    }

  return result;
}

//------------------------------------------------------------------------------------------



AS_02::PIDM::MXFWriter::MXFWriter()
{
}

AS_02::PIDM::MXFWriter::~MXFWriter()
{
}

// Warning: direct manipulation of MXF structures can interfere
// with the normal operation of the wrapper.  Caveat emptor!
//
ASDCP::MXF::OP1aHeader&
AS_02::PIDM::MXFWriter::OP1aHeader()
{
  if ( m_Writer.empty() )
    {
      assert(g_OP1aHeader);
      return *g_OP1aHeader;
    }

  return m_Writer->m_HeaderPart;
}

// Warning: direct manipulation of MXF structures can interfere
// with the normal operation of the wrapper.  Caveat emptor!
//
ASDCP::MXF::RIP&
AS_02::PIDM::MXFWriter::RIP()
{
  if ( m_Writer.empty() )
    {
      assert(g_RIP);
      return *g_RIP;
    }

  return m_Writer->m_RIP;
}

// Open the file for writing. The file must not exist. Returns error if
// the operation cannot be completed.
Result_t
AS_02::PIDM::MXFWriter::OpenWrite(const std::string& filename, const ASDCP::WriterInfo& Info,
				     const UL& data_essence_coding,
				     const ASDCP::Rational& edit_rate, const ui32_t& header_size,
				     const IndexStrategy_t& strategy, const ui32_t& partition_space)
{
  m_Writer = new AS_02::PIDM::MXFWriter::h__Writer(DefaultSMPTEDict());
  m_Writer->m_Info = Info;

  Result_t result = m_Writer->OpenWrite(filename, Info, data_essence_coding, edit_rate,
					strategy, partition_space, header_size);

  if ( KM_SUCCESS(result) )
    result = m_Writer->SetSourceStream(AUXDATA_PACKAGE_LABEL, edit_rate);

  if ( KM_FAILURE(result) )
    m_Writer.release();

  return result;
}

// Writes a frame of essence to the MXF file. If the optional AESEncContext
// argument is present, the essence is encrypted prior to writing.
// Fails if the file is not open, is finalized, or an operating system
// error occurs.
Result_t 
AS_02::PIDM::MXFWriter::WriteFrame(const ASDCP::FrameBuffer& FrameBuf, AESEncContext* Ctx, HMACContext* HMAC)
{
  if ( m_Writer.empty() )
    return RESULT_INIT;

  return m_Writer->WriteFrame(FrameBuf, Ctx, HMAC);
}

// Closes the MXF file, writing the index and other closing information.
Result_t
AS_02::PIDM::MXFWriter::Finalize()
{
  if ( m_Writer.empty() )
    return RESULT_INIT;

  ASDCP::FrameBuffer nil;
  return m_Writer->Finalize(nil);
}

//
Result_t
AS_02::PIDM::MXFWriter::Finalize(const ASDCP::FrameBuffer& global_metadata)
{
  if ( m_Writer.empty() )
    return RESULT_INIT;

  return m_Writer->Finalize(global_metadata);
}


//
// end AS_02_PIDM.cpp
//
