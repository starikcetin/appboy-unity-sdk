﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1456;
// Mono.Security.Protocol.Tls.Context
struct Context_t1445;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void HandshakeMessage__ctor_m6389 (HandshakeMessage_t1456 * __this, Context_t1445 * ___context, uint8_t ___handshakeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
 void HandshakeMessage__ctor_m6390 (HandshakeMessage_t1456 * __this, Context_t1445 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
 void HandshakeMessage__ctor_m6391 (HandshakeMessage_t1456 * __this, Context_t1445 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t112* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
 Context_t1445 * HandshakeMessage_get_Context_m6392 (HandshakeMessage_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
 uint8_t HandshakeMessage_get_HandshakeType_m6393 (HandshakeMessage_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
 uint8_t HandshakeMessage_get_ContentType_m6394 (HandshakeMessage_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsTls1()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsSsl3()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
 void HandshakeMessage_Process_m6395 (HandshakeMessage_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
 void HandshakeMessage_Update_m6396 (HandshakeMessage_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
 ByteU5BU5D_t112* HandshakeMessage_EncodeMessage_m6397 (HandshakeMessage_t1456 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
 bool HandshakeMessage_Compare_m6398 (Object_t * __this/* static, unused */, ByteU5BU5D_t112* ___buffer1, ByteU5BU5D_t112* ___buffer2, MethodInfo* method) IL2CPP_METHOD_ATTR;