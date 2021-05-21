#include "FourccHelp.h"
#include <D3D9.h>

typedef uint32_t vlc_fourcc_t;

static const struct
{
	vlc_fourcc_t  i_chroma;
	int           i_chroma_id;
	uint32_t      i_rmask;
	uint32_t      i_gmask;
	uint32_t      i_bmask;

} chroma_table[] =
{
	{VLC_CODEC_I420, AV_PIX_FMT_YUV420P, 0, 0, 0 },
	{VLC_CODEC_NV12, AV_PIX_FMT_NV12, 0, 0, 0 },
	{VLC_CODEC_YUYV, AV_PIX_FMT_YUYV422, 0, 0, 0 },
	{VLC_FOURCC('Y','U','Y','V'), AV_PIX_FMT_YUYV422, 0, 0, 0 },

	{VLC_CODEC_I444, AV_PIX_FMT_YUV444P, 0, 0, 0 },
	{VLC_CODEC_J444, AV_PIX_FMT_YUVJ444P, 0, 0, 0 },

	{VLC_CODEC_I440, AV_PIX_FMT_YUV440P, 0, 0, 0 },
	{VLC_CODEC_J440, AV_PIX_FMT_YUVJ440P, 0, 0, 0 },

	{VLC_CODEC_I422, AV_PIX_FMT_YUV422P, 0, 0, 0 },
	{VLC_CODEC_J422, AV_PIX_FMT_YUVJ422P, 0, 0, 0 },

	
	{VLC_CODEC_YV12, AV_PIX_FMT_YUV420P, 0, 0, 0 },
	{VLC_FOURCC('I','Y','U','V'), AV_PIX_FMT_YUV420P, 0, 0, 0 },
	{VLC_CODEC_J420, AV_PIX_FMT_YUVJ420P, 0, 0, 0 },
	{VLC_CODEC_I411, AV_PIX_FMT_YUV411P, 0, 0, 0 },
	{VLC_CODEC_I410, AV_PIX_FMT_YUV410P, 0, 0, 0 },
	{VLC_FOURCC('Y','V','U','9'), AV_PIX_FMT_YUV410P, 0, 0, 0 },

	{VLC_CODEC_NV21, AV_PIX_FMT_NV21, 0, 0, 0 },

	{VLC_CODEC_I420_9L, AV_PIX_FMT_YUV420P9LE, 0, 0, 0 },
	{VLC_CODEC_I420_9B, AV_PIX_FMT_YUV420P9BE, 0, 0, 0 },
	{VLC_CODEC_I420_10L, AV_PIX_FMT_YUV420P10LE, 0, 0, 0 },
	{VLC_CODEC_I420_10B, AV_PIX_FMT_YUV420P10BE, 0, 0, 0 },
#if (LIBAVUTIL_VERSION_MICRO >= 100 && LIBAVUTIL_VERSION_INT >= AV_VERSION_INT( 54, 17, 100 ) )
	{VLC_CODEC_I420_12L, AV_PIX_FMT_YUV420P12LE, 0, 0, 0 },
	{VLC_CODEC_I420_12B, AV_PIX_FMT_YUV420P12BE, 0, 0, 0 },
#endif
	{VLC_CODEC_I420_16L, AV_PIX_FMT_YUV420P16LE, 0, 0, 0 },
	{VLC_CODEC_I420_16B, AV_PIX_FMT_YUV420P16BE, 0, 0, 0 },
#ifdef AV_PIX_FMT_P010
	{VLC_CODEC_P010, AV_PIX_FMT_P010, 0, 0, 0 },
#endif

	{VLC_CODEC_I422_9L, AV_PIX_FMT_YUV422P9LE, 0, 0, 0 },
	{VLC_CODEC_I422_9B, AV_PIX_FMT_YUV422P9BE, 0, 0, 0 },
	{VLC_CODEC_I422_10L, AV_PIX_FMT_YUV422P10LE, 0, 0, 0 },
	{VLC_CODEC_I422_10B, AV_PIX_FMT_YUV422P10BE, 0, 0, 0 },
#if (LIBAVUTIL_VERSION_MICRO >= 100 && LIBAVUTIL_VERSION_INT >= AV_VERSION_INT( 54, 17, 100 ) )
	{VLC_CODEC_I422_12L, AV_PIX_FMT_YUV422P12LE, 0, 0, 0 },
	{VLC_CODEC_I422_12B, AV_PIX_FMT_YUV422P12BE, 0, 0, 0 },
#endif

	{VLC_CODEC_YUV420A, AV_PIX_FMT_YUVA420P, 0, 0, 0 },
	{VLC_CODEC_YUV422A, AV_PIX_FMT_YUVA422P, 0, 0, 0 },
	{VLC_CODEC_YUVA,    AV_PIX_FMT_YUVA444P, 0, 0, 0 },

	{VLC_CODEC_YUVA_444_10L, AV_PIX_FMT_YUVA444P10LE, 0, 0, 0 },
	{VLC_CODEC_YUVA_444_10B, AV_PIX_FMT_YUVA444P10BE, 0, 0, 0 },

	{VLC_CODEC_I444_9L, AV_PIX_FMT_YUV444P9LE, 0, 0, 0 },
	{VLC_CODEC_I444_9B, AV_PIX_FMT_YUV444P9BE, 0, 0, 0 },
	{VLC_CODEC_I444_10L, AV_PIX_FMT_YUV444P10LE, 0, 0, 0 },
	{VLC_CODEC_I444_10B, AV_PIX_FMT_YUV444P10BE, 0, 0, 0 },
#if (LIBAVUTIL_VERSION_MICRO >= 100 && LIBAVUTIL_VERSION_INT >= AV_VERSION_INT( 54, 17, 100 ) )
	{VLC_CODEC_I444_12L, AV_PIX_FMT_YUV444P12LE, 0, 0, 0 },
	{VLC_CODEC_I444_12B, AV_PIX_FMT_YUV444P12BE, 0, 0, 0 },
#endif
	{VLC_CODEC_I444_16L, AV_PIX_FMT_YUV444P16LE, 0, 0, 0 },
	{VLC_CODEC_I444_16B, AV_PIX_FMT_YUV444P16BE, 0, 0, 0 },

	/* Packed YUV formats */
	
	{VLC_CODEC_UYVY, AV_PIX_FMT_UYVY422, 0, 0, 0 },
	//{VLC_CODEC_YVYU, AV_PIX_FMT_YVYU422, 0, 0, 0 },
	{VLC_FOURCC('Y','4','1','1'), AV_PIX_FMT_UYYVYY411, 0, 0, 0 },

	/* Packed RGB formats */
	/*VLC_RGB(VLC_FOURCC('R','G','B','4'), AV_PIX_FMT_RGB4, AV_PIX_FMT_BGR4, 0x10, 0x06, 0x01)
	VLC_RGB(VLC_CODEC_RGB8, AV_PIX_FMT_RGB8, AV_PIX_FMT_BGR8, 0xC0, 0x38, 0x07)

	VLC_RGB(VLC_CODEC_RGB15, AV_PIX_FMT_RGB555, AV_PIX_FMT_BGR555, 0x7c00, 0x03e0, 0x001f)
	VLC_RGB(VLC_CODEC_RGB16, AV_PIX_FMT_RGB565, AV_PIX_FMT_BGR565, 0xf800, 0x07e0, 0x001f)
	VLC_RGB(VLC_CODEC_RGB24, AV_PIX_FMT_RGB24, AV_PIX_FMT_BGR24, 0xff0000, 0x00ff00, 0x0000ff)

	VLC_RGB(VLC_CODEC_RGB32, AV_PIX_FMT_RGB32, AV_PIX_FMT_BGR32, 0x00ff0000, 0x0000ff00, 0x000000ff)
	VLC_RGB(VLC_CODEC_RGB32, AV_PIX_FMT_RGB32_1, AV_PIX_FMT_BGR32_1, 0xff000000, 0x00ff0000, 0x0000ff00)

#ifdef AV_PIX_FMT_0BGR32
	VLC_RGB(VLC_CODEC_RGB32, AV_PIX_FMT_0BGR32, AV_PIX_FMT_0RGB32, 0x000000ff, 0x0000ff00, 0x00ff0000)
#endif */

#if (LIBAVUTIL_VERSION_MICRO == 0 || LIBAVUTIL_VERSION_INT >= AV_VERSION_INT( 55, 0, 100 ) )
#ifdef WORDS_BIGENDIAN
	{
VLC_CODEC_RGBA64, AV_PIX_FMT_RGBA64BE, 0, 0, 0
},
#else /* !WORDS_BIGENDIAN */
	{VLC_CODEC_RGBA64, AV_PIX_FMT_RGBA64LE, 0, 0, 0 },
#endif /* !WORDS_BIGENDIAN */
#endif

	{VLC_CODEC_RGBA, AV_PIX_FMT_RGBA, 0, 0, 0 },
	{VLC_CODEC_ARGB, AV_PIX_FMT_ARGB, 0, 0, 0 },
	{VLC_CODEC_BGRA, AV_PIX_FMT_BGRA, 0, 0, 0 },
	{VLC_CODEC_GREY, AV_PIX_FMT_GRAY8, 0, 0, 0},

	/* Paletized RGB */
   {VLC_CODEC_RGBP, AV_PIX_FMT_PAL8, 0, 0, 0},

   {VLC_CODEC_GBR_PLANAR, AV_PIX_FMT_GBRP, 0, 0, 0 },
   {VLC_CODEC_GBR_PLANAR_9L, AV_PIX_FMT_GBRP9LE, 0, 0, 0 },
   {VLC_CODEC_GBR_PLANAR_9B, AV_PIX_FMT_GBRP9BE, 0, 0, 0 },
   {VLC_CODEC_GBR_PLANAR_10L, AV_PIX_FMT_GBRP10LE, 0, 0, 0 },
   {VLC_CODEC_GBR_PLANAR_10B, AV_PIX_FMT_GBRP10BE, 0, 0, 0 },
   {VLC_CODEC_GBR_PLANAR_16L, AV_PIX_FMT_GBRP16LE, 0, 0, 0 },
   {VLC_CODEC_GBR_PLANAR_16B, AV_PIX_FMT_GBRP16BE, 0, 0, 0 },

	/* XYZ */
//#if LIBAVUTIL_VERSION_CHECK(52, 10, 0, 25, 100)
//	{VLC_CODEC_XYZ12, AV_PIX_FMT_XYZ12, 0xfff0, 0xfff0, 0xfff0},
//#endif
	{ 0, 0, 0, 0, 0 }
};


int FourccHelp::toFFmepgFmt(DWORD chroma)
{
	if (isFourcc(chroma))
	{
		for (int i = 0; chroma_table[i].i_chroma != 0; i++)
			if (chroma_table[i].i_chroma == chroma)
				return chroma_table[i].i_chroma_id;
	}
	else
	{
		switch (chroma)
		{
		case D3DFMT_A8R8G8B8:
			return AV_PIX_FMT_RGB32;
		case D3DFMT_X8R8G8B8:
			return AV_PIX_FMT_RGB32;
		default:
			return AV_PIX_FMT_NONE;;  //please add !
		}
	}
	return AV_PIX_FMT_NONE;
}

bool FourccHelp::isFourcc(DWORD fmt)
{
	return (fmt & 0xff) > 0 && ((fmt >> 8) & 0xff) > 0 && ((fmt >> 16) & 0xff) > 0 && ((fmt >> 24) & 0xff) > 0;
}

std::string FourccHelp::toString(DWORD chroma)
{
	if (isFourcc(chroma))
	{
		char h[5] = { 0 };
		h[0] = chroma & 0xff;
		h[1] = (chroma >> 8) & 0xff;
		h[2] = (chroma >> 16) & 0xff;
		h[3] = (chroma >> 24) & 0xff;
		return std::string(h);
	}
	else
	{
		switch (chroma)
		{
		case D3DFMT_R8G8B8:
			return "RV24";
		case D3DFMT_A8R8G8B8:
			return "ARGB";
		case D3DFMT_X8R8G8B8:
			return "RV32";
		case D3DFMT_A8B8G8R8:
			return "ABGR";
		default:
			return "";  //please find correct type in vlc_fourcc.h by yourself !
		}
	}
	
}

int FourccHelp::bitsPerPix(DWORD chroma)
{
	int i_bits_per_pixel = 0;
	if (isFourcc(chroma))
	{
		switch (chroma)
		{
		case MAKEFOURCC('Y', 'U', 'V', 'A'):
			i_bits_per_pixel = 32;
			break;
		case MAKEFOURCC('I', '4', '0', 'A'):
			i_bits_per_pixel = 20;
			break;
		case MAKEFOURCC('I', '4', '2', 'A'):
			i_bits_per_pixel = 24;
			break;
		case MAKEFOURCC('I', '4', '4', '4'):
		case MAKEFOURCC('J', '4', '4', '4'):
			i_bits_per_pixel = 24;
			break;
		case MAKEFOURCC('I', '4', '2', '2'):
		case MAKEFOURCC('Y', 'U', 'Y', '2'):
		case MAKEFOURCC('Y', 'V', 'Y', 'U'):
		case MAKEFOURCC('U', 'Y', 'V', 'Y'):
		case MAKEFOURCC('V', 'Y', 'U', 'Y'):
		case MAKEFOURCC('J', '4', '2', '2'):
			i_bits_per_pixel = 16;
			break;
		case MAKEFOURCC('I', '4', '4', '0'):
		case MAKEFOURCC('J', '4', '4', '0'):
			i_bits_per_pixel = 16;
			break;
		case MAKEFOURCC('P', '0', '1', '0'):
			i_bits_per_pixel = 15;
			break;
		case MAKEFOURCC('I', '4', '1', '1'):
		case MAKEFOURCC('Y', 'V', '1', '2'):
		case MAKEFOURCC('I', '4', '2', '0'):
		case MAKEFOURCC('J', '4', '2', '0'):
		case MAKEFOURCC('N', 'V', '1', '2'):
			i_bits_per_pixel = 12;
			break;
		case MAKEFOURCC('Y', 'V', 'U', '9'):
		case MAKEFOURCC('I', '4', '1', '0'):
			i_bits_per_pixel = 9;
			break;
		case MAKEFOURCC('Y', '2', '1', '1'):
			i_bits_per_pixel = 8;
			break;
		case MAKEFOURCC('Y', 'U', 'V', 'P'):
			i_bits_per_pixel = 8;
			break;
		case MAKEFOURCC('R', 'V', '3', '2'):
		case MAKEFOURCC('R', 'G', 'B', 'A'):
		case MAKEFOURCC('A', 'R', 'G', 'B'):
		case MAKEFOURCC('B', 'G', 'R', 'A'):
			i_bits_per_pixel = 32;
			break;
		case MAKEFOURCC('R', 'V', '2', '4'):
			i_bits_per_pixel = 24;
			break;
		case MAKEFOURCC('R', 'V', '1', '5'):
		case MAKEFOURCC('R', 'V', '1', '6'):
			i_bits_per_pixel = 16;
			break;
		case MAKEFOURCC('R', 'G', 'B', '8'):
			i_bits_per_pixel = 8;
			break;

		case MAKEFOURCC('G', 'R', 'E', 'Y'):
		case MAKEFOURCC('R', 'G', 'B', 'P'):
			i_bits_per_pixel = 8;
			break;

		case MAKEFOURCC('X', 'Y', '1', '2'):
			i_bits_per_pixel = 48;
			break;

		default:
			i_bits_per_pixel = 0;
			break;
		}
	}
	else
	{
		switch (chroma)
		{
		case D3DFMT_R8G8B8:
			i_bits_per_pixel = 24;
			break;
		case D3DFMT_A8R8G8B8:
		case D3DFMT_A8B8G8R8:
		case D3DFMT_X8R8G8B8:
			i_bits_per_pixel = 32;
			break;
		default:
			i_bits_per_pixel = 0;  //please find correct type in vlc_fourcc.h by yourself !
		}
	}
	return i_bits_per_pixel;
}