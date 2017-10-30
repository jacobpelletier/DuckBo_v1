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
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrassTrigger
struct  GrassTrigger_t1847809798  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GrassTrigger::lifeTime
	float ___lifeTime_2;
	// UnityEngine.GameObject GrassTrigger::grass
	GameObject_t1756533147 * ___grass_3;
	// UnityEngine.ParticleSystem GrassTrigger::grassParticles
	ParticleSystem_t3394631041 * ___grassParticles_4;
	// UnityEngine.AudioSource GrassTrigger::audioSource
	AudioSource_t1135106623 * ___audioSource_5;
	// UnityEngine.AudioClip GrassTrigger::bushSound1
	AudioClip_t1932558630 * ___bushSound1_6;
	// UnityEngine.AudioClip GrassTrigger::bushSound2
	AudioClip_t1932558630 * ___bushSound2_7;

public:
	inline static int32_t get_offset_of_lifeTime_2() { return static_cast<int32_t>(offsetof(GrassTrigger_t1847809798, ___lifeTime_2)); }
	inline float get_lifeTime_2() const { return ___lifeTime_2; }
	inline float* get_address_of_lifeTime_2() { return &___lifeTime_2; }
	inline void set_lifeTime_2(float value)
	{
		___lifeTime_2 = value;
	}

	inline static int32_t get_offset_of_grass_3() { return static_cast<int32_t>(offsetof(GrassTrigger_t1847809798, ___grass_3)); }
	inline GameObject_t1756533147 * get_grass_3() const { return ___grass_3; }
	inline GameObject_t1756533147 ** get_address_of_grass_3() { return &___grass_3; }
	inline void set_grass_3(GameObject_t1756533147 * value)
	{
		___grass_3 = value;
		Il2CppCodeGenWriteBarrier(&___grass_3, value);
	}

	inline static int32_t get_offset_of_grassParticles_4() { return static_cast<int32_t>(offsetof(GrassTrigger_t1847809798, ___grassParticles_4)); }
	inline ParticleSystem_t3394631041 * get_grassParticles_4() const { return ___grassParticles_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_grassParticles_4() { return &___grassParticles_4; }
	inline void set_grassParticles_4(ParticleSystem_t3394631041 * value)
	{
		___grassParticles_4 = value;
		Il2CppCodeGenWriteBarrier(&___grassParticles_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(GrassTrigger_t1847809798, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_bushSound1_6() { return static_cast<int32_t>(offsetof(GrassTrigger_t1847809798, ___bushSound1_6)); }
	inline AudioClip_t1932558630 * get_bushSound1_6() const { return ___bushSound1_6; }
	inline AudioClip_t1932558630 ** get_address_of_bushSound1_6() { return &___bushSound1_6; }
	inline void set_bushSound1_6(AudioClip_t1932558630 * value)
	{
		___bushSound1_6 = value;
		Il2CppCodeGenWriteBarrier(&___bushSound1_6, value);
	}

	inline static int32_t get_offset_of_bushSound2_7() { return static_cast<int32_t>(offsetof(GrassTrigger_t1847809798, ___bushSound2_7)); }
	inline AudioClip_t1932558630 * get_bushSound2_7() const { return ___bushSound2_7; }
	inline AudioClip_t1932558630 ** get_address_of_bushSound2_7() { return &___bushSound2_7; }
	inline void set_bushSound2_7(AudioClip_t1932558630 * value)
	{
		___bushSound2_7 = value;
		Il2CppCodeGenWriteBarrier(&___bushSound2_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
