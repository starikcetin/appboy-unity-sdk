﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.Collections.Generic.HashSet`1/Link<UnityTest.TestComponent>[]
struct LinkU5BU5D_t3311;
// UnityTest.TestComponent[]
struct TestComponentU5BU5D_t364;
// System.Collections.Generic.IEqualityComparer`1<UnityTest.TestComponent>
struct IEqualityComparer_1_t3313;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<UnityTest.TestComponent>
struct HashSet_1_t361  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::table
	Int32U5BU5D_t1196* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::links
	LinkU5BU5D_t3311* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::slots
	TestComponentU5BU5D_t364* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::si
	SerializationInfo_t971 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::generation
	int32_t ___generation_9;
};