#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WhooshController
struct  WhooshController_t4187482146  : public MonoBehaviour_t1158329972
{
public:
	// System.Single WhooshController::speed
	float ___speed_2;
	// System.Single WhooshController::lifetime
	float ___lifetime_3;
	// System.Boolean WhooshController::flipped
	bool ___flipped_4;
	// System.Single WhooshController::distance
	float ___distance_5;
	// UnityEngine.Rigidbody2D WhooshController::rb
	Rigidbody2D_t502193897 * ___rb_6;
	// PlayerController WhooshController::playerScript
	PlayerController_t4148409433 * ___playerScript_7;
	// UnityEngine.GameObject WhooshController::cloudBurst
	GameObject_t1756533147 * ___cloudBurst_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(WhooshController_t4187482146, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_lifetime_3() { return static_cast<int32_t>(offsetof(WhooshController_t4187482146, ___lifetime_3)); }
	inline float get_lifetime_3() const { return ___lifetime_3; }
	inline float* get_address_of_lifetime_3() { return &___lifetime_3; }
	inline void set_lifetime_3(float value)
	{
		___lifetime_3 = value;
	}

	inline static int32_t get_offset_of_flipped_4() { return static_cast<int32_t>(offsetof(WhooshController_t4187482146, ___flipped_4)); }
	inline bool get_flipped_4() const { return ___flipped_4; }
	inline bool* get_address_of_flipped_4() { return &___flipped_4; }
	inline void set_flipped_4(bool value)
	{
		___flipped_4 = value;
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(WhooshController_t4187482146, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(WhooshController_t4187482146, ___rb_6)); }
	inline Rigidbody2D_t502193897 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_t502193897 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier(&___rb_6, value);
	}

	inline static int32_t get_offset_of_playerScript_7() { return static_cast<int32_t>(offsetof(WhooshController_t4187482146, ___playerScript_7)); }
	inline PlayerController_t4148409433 * get_playerScript_7() const { return ___playerScript_7; }
	inline PlayerController_t4148409433 ** get_address_of_playerScript_7() { return &___playerScript_7; }
	inline void set_playerScript_7(PlayerController_t4148409433 * value)
	{
		___playerScript_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_7, value);
	}

	inline static int32_t get_offset_of_cloudBurst_8() { return static_cast<int32_t>(offsetof(WhooshController_t4187482146, ___cloudBurst_8)); }
	inline GameObject_t1756533147 * get_cloudBurst_8() const { return ___cloudBurst_8; }
	inline GameObject_t1756533147 ** get_address_of_cloudBurst_8() { return &___cloudBurst_8; }
	inline void set_cloudBurst_8(GameObject_t1756533147 * value)
	{
		___cloudBurst_8 = value;
		Il2CppCodeGenWriteBarrier(&___cloudBurst_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
