

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed Jul 19 12:40:16 2017
 */
/* Compiler settings for ..\..\Include\IDL\MFormats.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMFBuffer,0x04FBCB23,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFFrame,0x4F377000,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFFrameGPU,0x4F377264,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFFactory,0x4F365010,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMAttributes,0x4F366001,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMNode,0x4F366002,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMCallback,0x4F366005,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMPreview,0x4F366160,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMWebRTC,0x59CDAE09,0x351A,0x4711,0xB0,0x88,0x7C,0x79,0x63,0x30,0x0F,0xE7);


MIDL_DEFINE_GUID(IID, IID_IMFSignalingDTMF,0x6EC50BAF,0x7252,0x48B1,0xB8,0xFE,0xAB,0xAF,0x44,0xB0,0x27,0xD6);


MIDL_DEFINE_GUID(IID, IID_IMCCDisplay,0x7713D728,0x4BA5,0x44D4,0x8A,0x58,0xC6,0xCD,0x66,0xC8,0xAB,0x86);


MIDL_DEFINE_GUID(IID, IID_IMColors,0x9470BBBC,0xF37F,0x47CA,0x9F,0xA5,0xF1,0x30,0xE9,0x60,0x58,0x75);


MIDL_DEFINE_GUID(IID, IID_IMStorage,0x8A3FFE4F,0x51C3,0x4056,0xB4,0x07,0xB3,0xBD,0x7F,0xF6,0x23,0x42);


MIDL_DEFINE_GUID(IID, IID_IMFrame,0x4F366000,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFrames,0x4F365000,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMProps,0x4F366020,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMPersist,0x4F366030,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMObject,0x4F366100,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFormat,0x4F366105,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMAudioTrack,0x4F366111,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMAudio,0x4F366110,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMReceiver,0x4F366140,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMSenders,0x4F366155,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFile,0x4F366170,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMItem,0x4F366172,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMPlaylist,0x4F366175,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMBreaks,0x4F366177,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMScheduler,0x4F366178,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMDevice,0x4F366180,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMPlugins,0x4F366190,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMPlugin,0x5F366195,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMElement,0x082DA299,0xEEC4,0x4EF1,0x84,0x1E,0x3A,0x28,0x0E,0x7D,0x03,0x83);


MIDL_DEFINE_GUID(IID, IID_IMElements,0x082DA298,0xEEC4,0x4EF1,0x84,0x1E,0x3A,0x28,0x0E,0x7D,0x03,0x83);


MIDL_DEFINE_GUID(IID, IID_IMScenes,0x082DA302,0xEEC4,0x4EF1,0x84,0x1E,0x3A,0x28,0x0E,0x7D,0x03,0x83);


MIDL_DEFINE_GUID(IID, IID_IMStreams,0x69429619,0x9BC2,0x45D9,0xAF,0xE9,0xF4,0x2F,0x18,0xC3,0x8C,0xBF);


MIDL_DEFINE_GUID(IID, IID_IMWriter,0x082DA400,0xEEC4,0x4EF1,0x84,0x1E,0x3A,0x28,0x0E,0x7D,0x03,0x83);


MIDL_DEFINE_GUID(IID, IID_IMDeckControl,0x7F366131,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMConfig,0x082DA430,0xEEC4,0x4EF1,0x84,0x1E,0x3A,0x28,0x0E,0x7D,0x03,0x83);


MIDL_DEFINE_GUID(IID, IID_IMFactory,0x4F367000,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMSync,0x4F366025,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMSource,0xCD799F70,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, IID_IMSource_I,0xCD799F77,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, IID_IMFExternal,0xCD799F79,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, IID_IMFrame_I,0x4F367777,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFrames_I,0x4F367778,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMDevice_I,0x4F367A40,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMObject_I,0x4F366A00,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMSender_I,0x4F367A05,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMReceiver_I,0x4F367A10,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFReceiver,0xCD799F87,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, IID_IMFReceiverVB6,0xCD799F88,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, IID_IMFSink,0x10DB4AB7,0x89AF,0x4CD2,0x90,0xA4,0xFB,0x91,0xB3,0x2D,0xB3,0xE0);


MIDL_DEFINE_GUID(IID, IID_IMFPipe,0x04FCCF24,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFPipes,0x04FCCF22,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFPipe_Source,0x04FCCF23,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFProps,0x4F366720,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFBrowser,0xD4BA348C,0x2C10,0x47D8,0x92,0x3C,0x4B,0x78,0x06,0x83,0xF3,0x9D);


MIDL_DEFINE_GUID(IID, IID_IMFConfig,0x4F364005,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFProcess,0xB22982B5,0xE0D5,0x4977,0x84,0x7D,0x86,0x8F,0x5F,0x0B,0xB9,0x0F);


MIDL_DEFINE_GUID(IID, IID_IMFAllocator,0x04FBCB26,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFPacket,0x04FBCF64,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFBuffersAllocator,0x04FBCB24,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFCache,0x04FB0624,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFSideData,0x04FBC164,0x877B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFObject,0x04FCCF26,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMDelay,0x52DB5EBD,0x1414,0x47F8,0x9A,0xB8,0x50,0xC3,0x5A,0x4D,0x67,0xFE);


MIDL_DEFINE_GUID(IID, IID_IMSourceDS,0x9FDA39AE,0x4090,0x43C8,0xA9,0x19,0x3A,0x01,0xCB,0xF5,0x1E,0xC3);


MIDL_DEFINE_GUID(IID, IID_IMSinkDS,0x82503DDF,0xC56C,0x4AB9,0xBB,0xC8,0x63,0xF4,0xF1,0xA9,0x3C,0xF2);


MIDL_DEFINE_GUID(IID, IID_IMFPersist,0x4F37703A,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFFormat,0x4F366705,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, IID_IMFAudioBuffer,0xB22982A1,0xE0D5,0x4977,0x84,0x7D,0x86,0x8F,0x5F,0x0B,0xB9,0x0F);


MIDL_DEFINE_GUID(IID, IID_IMFConverter,0xB22982B1,0xE0D5,0x4977,0x84,0x7D,0x86,0x8F,0x5F,0x0B,0xB9,0x0F);


MIDL_DEFINE_GUID(IID, IID_IMFTransition,0xB22982B7,0xE0D5,0x4977,0x84,0x7D,0x86,0x8F,0x5F,0x0B,0xB9,0x0F);


MIDL_DEFINE_GUID(IID, IID_IMFSource,0xCD799B77,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, IID_IMFSourceVB6,0xCD799B78,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, IID_IMFReader,0x10DB43C6,0x89AF,0x4CD2,0x90,0xA4,0xFB,0x91,0xB3,0x2D,0xB3,0xE0);


MIDL_DEFINE_GUID(IID, IID_IMFDevice,0x10DB43D6,0x89AF,0x4CD2,0x90,0xA4,0xFB,0x91,0xB3,0x2D,0xB3,0xE0);


MIDL_DEFINE_GUID(IID, IID_IMFWriter,0x10DB4AC7,0x89AF,0x4CD2,0x90,0xA4,0xFB,0x91,0xB3,0x2D,0xB3,0xE0);


MIDL_DEFINE_GUID(IID, IID_IMFSplitter,0x04FBCF02,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFDecoder,0x04FBCF79,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFMuxer,0x04FBCF23,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFEncoder,0x04FBCF26,0x887B,0x4AEB,0xB3,0x0C,0x40,0x8E,0x98,0xE6,0xB3,0x97);


MIDL_DEFINE_GUID(IID, IID_IMFSource_I,0xCD799A77,0x3FD4,0x4237,0x92,0xD4,0xD1,0x87,0xB5,0x88,0xD9,0x99);


MIDL_DEFINE_GUID(IID, LIBID_MFORMATSLib,0x927771C8,0xEA18,0x45C7,0xB8,0xC1,0x5B,0x2C,0xC1,0xB5,0x31,0xDE);


MIDL_DEFINE_GUID(IID, DIID_IMEvents,0x4F365161,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, DIID_IMEventsEvent,0x4F365171,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(IID, DIID_IMEventsFrame,0x4F365172,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_MFFrame,0x4F365060,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_MFFactory,0x4F365177,0x473F,0x4ad5,0xA5,0xC2,0x42,0x8F,0xE0,0xC8,0xE0,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_MFAudioBuffer,0x0792B96A,0xE4CB,0x4140,0xB8,0x48,0xEE,0x96,0xC6,0x66,0x08,0x37);


MIDL_DEFINE_GUID(CLSID, CLSID_MFConverter,0x0792B97B,0xE4CB,0x4140,0xB8,0x48,0xEE,0x96,0xC6,0x66,0x08,0x37);


MIDL_DEFINE_GUID(CLSID, CLSID_MFPreview,0x49859777,0x08F5,0x4C7A,0xB4,0x39,0x32,0x55,0xA8,0xA8,0xE9,0xE4);


MIDL_DEFINE_GUID(CLSID, CLSID_MFReader,0xC08A796D,0x5CCF,0x4251,0xB2,0x2F,0x27,0xAA,0xA7,0xEC,0xAB,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_MFRenderer,0xC08A797D,0x5CCF,0x4251,0xB2,0x2F,0x27,0xAA,0xA7,0xEC,0xAB,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_MFWriter,0xC08A164D,0x5CCF,0x4251,0xB2,0x2F,0x27,0xAA,0xA7,0xEC,0xAB,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_MFSink,0xC08B164D,0x5CCF,0x4251,0xB2,0x2F,0x27,0xAA,0xA7,0xEC,0xAB,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_MFLive,0xC08A797F,0x5CCF,0x4251,0xB2,0x2F,0x27,0xAA,0xA7,0xEC,0xAB,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_MFRendererBMD,0xC08A798D,0x5CCF,0x4251,0xB2,0x2F,0x27,0xAA,0xA7,0xEC,0xAB,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_MFRendererAJA,0xC08A798A,0x5CCF,0x4251,0xB2,0x2F,0x27,0xAA,0xA7,0xEC,0xAB,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_MDelay,0x40CD2744,0x06D8,0x4D57,0xAC,0xD9,0xE1,0xD5,0x23,0x66,0x0A,0xD4);


MIDL_DEFINE_GUID(CLSID, CLSID_MWebRTC,0xB9E821B5,0xD77D,0x4B28,0xB1,0x3E,0x62,0xC0,0x23,0x5F,0x8C,0x5C);


MIDL_DEFINE_GUID(CLSID, CLSID_MFSignalingDTMF,0xE09BF84E,0x9028,0x4448,0xAD,0x34,0x8C,0xF0,0x8B,0xB4,0x55,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_MFOverlayHTML,0xF587E2D0,0x20B1,0x4C47,0x95,0x86,0x12,0x02,0xD2,0x44,0x7B,0x04);


MIDL_DEFINE_GUID(CLSID, CLSID_MCCDisplay,0x4102E84B,0xB00A,0x4351,0xB4,0xA2,0xFE,0xD0,0xC3,0xFF,0xDC,0x86);


MIDL_DEFINE_GUID(CLSID, CLSID_CoMColors,0x8D54BB99,0xD639,0x4336,0x9C,0x3A,0x17,0xF2,0xD0,0xEA,0xAF,0xA0);


MIDL_DEFINE_GUID(CLSID, CLSID_MFSideData,0x8D54AB24,0xD639,0x4336,0x9C,0x3A,0x17,0xF2,0xD0,0xEA,0xAF,0xA0);


MIDL_DEFINE_GUID(CLSID, CLSID_MFPipe,0x8D54AB26,0xD639,0x4336,0x9C,0x3A,0x17,0xF2,0xD0,0xEA,0xAF,0xA0);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



