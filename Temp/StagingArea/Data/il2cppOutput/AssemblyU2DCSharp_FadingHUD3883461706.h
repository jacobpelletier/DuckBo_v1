#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadingHUD
struct  FadingHUD_t3883461706  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text FadingHUD::hud
	Text_t356221433 * ___hud_2;
	// System.Single FadingHUD::cooldown
	float ___cooldown_3;

public:
	inline static int32_t get_offset_of_hud_2() { return static_cast<int32_t>(offsetof(FadingHUD_t3883461706, ___hud_2)); }
	inline Text_t356221433 * get_hud_2() const { return ___hud_2; }
	inline Text_t356221433 ** get_address_of_hud_2() { return &___hud_2; }
	inline void set_hud_2(Text_t356221433 * value)
	{
		___hud_2 = value;
		Il2CppCodeGenWriteBarrier(&___hud_2, value);
	}

	inline static int32_t get_offset_of_cooldown_3() { return static_cast<int32_t>(offsetof(FadingHUD_t3883461706, ___cooldown_3)); }
	inline float get_cooldown_3() const { return ___cooldown_3; }
	inline float* get_address_of_cooldown_3() { return &___cooldown_3; }
	inline void set_cooldown_3(float value)
	{
		___cooldown_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
