#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckPointReach
struct  CheckPointReach_t1925786165  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CheckPointReach::respawn
	GameObject_t1756533147 * ___respawn_2;
	// System.Int32 CheckPointReach::spotNumber
	int32_t ___spotNumber_3;
	// UnityEngine.Animator CheckPointReach::anim
	Animator_t69676727 * ___anim_4;
	// UnityEngine.AudioSource CheckPointReach::audioSource
	AudioSource_t1135106623 * ___audioSource_5;
	// UnityEngine.AudioClip CheckPointReach::chirp
	AudioClip_t1932558630 * ___chirp_6;

public:
	inline static int32_t get_offset_of_respawn_2() { return static_cast<int32_t>(offsetof(CheckPointReach_t1925786165, ___respawn_2)); }
	inline GameObject_t1756533147 * get_respawn_2() const { return ___respawn_2; }
	inline GameObject_t1756533147 ** get_address_of_respawn_2() { return &___respawn_2; }
	inline void set_respawn_2(GameObject_t1756533147 * value)
	{
		___respawn_2 = value;
		Il2CppCodeGenWriteBarrier(&___respawn_2, value);
	}

	inline static int32_t get_offset_of_spotNumber_3() { return static_cast<int32_t>(offsetof(CheckPointReach_t1925786165, ___spotNumber_3)); }
	inline int32_t get_spotNumber_3() const { return ___spotNumber_3; }
	inline int32_t* get_address_of_spotNumber_3() { return &___spotNumber_3; }
	inline void set_spotNumber_3(int32_t value)
	{
		___spotNumber_3 = value;
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(CheckPointReach_t1925786165, ___anim_4)); }
	inline Animator_t69676727 * get_anim_4() const { return ___anim_4; }
	inline Animator_t69676727 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t69676727 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier(&___anim_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(CheckPointReach_t1925786165, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_chirp_6() { return static_cast<int32_t>(offsetof(CheckPointReach_t1925786165, ___chirp_6)); }
	inline AudioClip_t1932558630 * get_chirp_6() const { return ___chirp_6; }
	inline AudioClip_t1932558630 ** get_address_of_chirp_6() { return &___chirp_6; }
	inline void set_chirp_6(AudioClip_t1932558630 * value)
	{
		___chirp_6 = value;
		Il2CppCodeGenWriteBarrier(&___chirp_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
