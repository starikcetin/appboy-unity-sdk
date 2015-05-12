﻿#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t112;
// System.UInt32[]
struct UInt32U5BU5D_t1376;
// System.Security.Cryptography.RIPEMD160
#include "mscorlib_System_Security_Cryptography_RIPEMD160.h"
// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t2164  : public RIPEMD160_t2163
{
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t112* ____ProcessingBuffer_4;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t1376* ____X_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t1376* ____HashValue_6;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_7;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;
};