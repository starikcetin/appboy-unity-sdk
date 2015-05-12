﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.NetworkResultSender
struct NetworkResultSender_t242;
// System.String
struct String_t;
// UnityTest.ResultDTO
struct ResultDTO_t222;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t243;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t244;
// UnityTest.TestResult
struct TestResult_t245;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t241;

// System.Void UnityTest.NetworkResultSender::.ctor(System.String,System.Int32)
 void NetworkResultSender__ctor_m962 (NetworkResultSender_t242 * __this, String_t* ___ip, int32_t ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::SendDTO(UnityTest.ResultDTO)
 bool NetworkResultSender_SendDTO_m963 (NetworkResultSender_t242 * __this, ResultDTO_t222 * ___dto, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::Ping()
 bool NetworkResultSender_Ping_m964 (NetworkResultSender_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
 void NetworkResultSender_RunStarted_m965 (NetworkResultSender_t242 * __this, String_t* ___platform, List_1_t243 * ___testsToRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
 void NetworkResultSender_RunFinished_m966 (NetworkResultSender_t242 * __this, List_1_t244 * ___testResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestStarted(UnityTest.TestResult)
 void NetworkResultSender_TestStarted_m967 (NetworkResultSender_t242 * __this, TestResult_t245 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestFinished(UnityTest.TestResult)
 void NetworkResultSender_TestFinished_m968 (NetworkResultSender_t242 * __this, TestResult_t245 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
 void NetworkResultSender_TestRunInterrupted_m969 (NetworkResultSender_t242 * __this, List_1_t241 * ___testsNotRun, MethodInfo* method) IL2CPP_METHOD_ATTR;