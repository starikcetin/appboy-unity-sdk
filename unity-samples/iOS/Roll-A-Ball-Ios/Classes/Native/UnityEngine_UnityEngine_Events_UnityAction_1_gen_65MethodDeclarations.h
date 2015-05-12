﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<Spawner>
struct UnityAction_1_t3453;
// System.Object
struct Object_t;
// Spawner
struct Spawner_t424;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<Spawner>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m17353(__this, ___object, ___method, method) (void)UnityAction_1__ctor_m12834_gshared((UnityAction_1_t2759 *)__this, (Object_t *)___object, (IntPtr_t120)___method, method)
// System.Void UnityEngine.Events.UnityAction`1<Spawner>::Invoke(T0)
#define UnityAction_1_Invoke_m17354(__this, ___arg0, method) (void)UnityAction_1_Invoke_m12835_gshared((UnityAction_1_t2759 *)__this, (Object_t *)___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<Spawner>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m17355(__this, ___arg0, ___callback, ___object, method) (Object_t *)UnityAction_1_BeginInvoke_m12836_gshared((UnityAction_1_t2759 *)__this, (Object_t *)___arg0, (AsyncCallback_t487 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`1<Spawner>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m17356(__this, ___result, method) (void)UnityAction_1_EndInvoke_m12837_gshared((UnityAction_1_t2759 *)__this, (Object_t *)___result, method)