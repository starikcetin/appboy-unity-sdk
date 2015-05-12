﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Chain
struct X509Chain_t1421;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1413;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1417;
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
 void X509Chain__ctor_m5880 (X509Chain_t1421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509Chain__ctor_m5881 (X509Chain_t1421 * __this, X509CertificateCollection_t1413 * ___chain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
 int32_t X509Chain_get_Status_m5882 (X509Chain_t1421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
 X509CertificateCollection_t1413 * X509Chain_get_TrustAnchors_m5883 (X509Chain_t1421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
 bool X509Chain_Build_m5884 (X509Chain_t1421 * __this, X509Certificate_t1417 * ___leaf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsValid_m5885 (X509Chain_t1421 * __this, X509Certificate_t1417 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
 X509Certificate_t1417 * X509Chain_FindCertificateParent_m5886 (X509Chain_t1421 * __this, X509Certificate_t1417 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
 X509Certificate_t1417 * X509Chain_FindCertificateRoot_m5887 (X509Chain_t1421 * __this, X509Certificate_t1417 * ___potentialRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
 bool X509Chain_IsTrusted_m5888 (X509Chain_t1421 * __this, X509Certificate_t1417 * ___potentialTrusted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
 bool X509Chain_IsParent_m5889 (X509Chain_t1421 * __this, X509Certificate_t1417 * ___child, X509Certificate_t1417 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;