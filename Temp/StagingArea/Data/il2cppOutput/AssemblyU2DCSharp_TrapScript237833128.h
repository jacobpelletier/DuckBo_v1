#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerController
struct PlayerController_t4148409433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrapScript
struct  TrapScript_t237833128  : public MonoBehaviour_t1158329972
{
public:
	// PlayerController TrapScript::playerScript
	PlayerController_t4148409433 * ___playerScript_2;

public:
	inline static int32_t get_offset_of_playerScript_2() { return static_cast<int32_t>(offsetof(TrapScript_t237833128, ___playerScript_2)); }
	inline PlayerController_t4148409433 * get_playerScript_2() const { return ___playerScript_2; }
	inline PlayerController_t4148409433 ** get_address_of_playerScript_2() { return &___playerScript_2; }
	inline void set_playerScript_2(PlayerController_t4148409433 * value)
	{
		___playerScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
