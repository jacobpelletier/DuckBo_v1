#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayOnTriggerEnter
struct  PlayOnTriggerEnter_t2416697475  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource PlayOnTriggerEnter::audioSource
	AudioSource_t1135106623 * ___audioSource_2;
	// UnityEngine.AudioClip PlayOnTriggerEnter::clip1
	AudioClip_t1932558630 * ___clip1_3;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(PlayOnTriggerEnter_t2416697475, ___audioSource_2)); }
	inline AudioSource_t1135106623 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t1135106623 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_clip1_3() { return static_cast<int32_t>(offsetof(PlayOnTriggerEnter_t2416697475, ___clip1_3)); }
	inline AudioClip_t1932558630 * get_clip1_3() const { return ___clip1_3; }
	inline AudioClip_t1932558630 ** get_address_of_clip1_3() { return &___clip1_3; }
	inline void set_clip1_3(AudioClip_t1932558630 * value)
	{
		___clip1_3 = value;
		Il2CppCodeGenWriteBarrier(&___clip1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
