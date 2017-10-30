#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OneWayScript
struct  OneWayScript_t950159792  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.BoxCollider2D OneWayScript::platform
	BoxCollider2D_t948534547 * ___platform_2;

public:
	inline static int32_t get_offset_of_platform_2() { return static_cast<int32_t>(offsetof(OneWayScript_t950159792, ___platform_2)); }
	inline BoxCollider2D_t948534547 * get_platform_2() const { return ___platform_2; }
	inline BoxCollider2D_t948534547 ** get_address_of_platform_2() { return &___platform_2; }
	inline void set_platform_2(BoxCollider2D_t948534547 * value)
	{
		___platform_2 = value;
		Il2CppCodeGenWriteBarrier(&___platform_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
