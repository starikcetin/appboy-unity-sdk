﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t1637;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1612;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Key_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
 void X509KeyUsageExtension__ctor_m7107 (X509KeyUsageExtension_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
 void X509KeyUsageExtension__ctor_m7108 (X509KeyUsageExtension_t1637 * __this, AsnEncodedData_t1612 * ___encodedKeyUsage, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
 void X509KeyUsageExtension__ctor_m7109 (X509KeyUsageExtension_t1637 * __this, int32_t ___keyUsages, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
 int32_t X509KeyUsageExtension_get_KeyUsages_m7110 (X509KeyUsageExtension_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
 void X509KeyUsageExtension_CopyFrom_m7111 (X509KeyUsageExtension_t1637 * __this, AsnEncodedData_t1612 * ___encodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
 int32_t X509KeyUsageExtension_GetValidFlags_m7112 (X509KeyUsageExtension_t1637 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
 int32_t X509KeyUsageExtension_Decode_m7113 (X509KeyUsageExtension_t1637 * __this, ByteU5BU5D_t112* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
 ByteU5BU5D_t112* X509KeyUsageExtension_Encode_m7114 (X509KeyUsageExtension_t1637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
 String_t* X509KeyUsageExtension_ToString_m7115 (X509KeyUsageExtension_t1637 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;