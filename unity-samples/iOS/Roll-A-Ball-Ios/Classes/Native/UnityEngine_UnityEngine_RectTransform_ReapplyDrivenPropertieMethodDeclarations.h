﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t781;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t573;
// System.IAsyncResult
struct IAsyncResult_t486;
// System.AsyncCallback
struct AsyncCallback_t487;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
 void ReapplyDrivenProperties__ctor_m3904 (ReapplyDrivenProperties_t781 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
 void ReapplyDrivenProperties_Invoke_m4501 (ReapplyDrivenProperties_t781 * __this, RectTransform_t573 * ___driven, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
 Object_t * ReapplyDrivenProperties_BeginInvoke_m4502 (ReapplyDrivenProperties_t781 * __this, RectTransform_t573 * ___driven, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
 void ReapplyDrivenProperties_EndInvoke_m4503 (ReapplyDrivenProperties_t781 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;