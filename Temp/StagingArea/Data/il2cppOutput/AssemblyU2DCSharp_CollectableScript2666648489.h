#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CollectableScript
struct  CollectableScript_t2666648489  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CollectableScript::id
	int32_t ___id_2;
	// UnityEngine.Renderer CollectableScript::rend
	Renderer_t257310565 * ___rend_3;
	// UnityEngine.Collider2D CollectableScript::coll
	Collider2D_t646061738 * ___coll_4;
	// UnityEngine.AudioSource CollectableScript::audioSource
	AudioSource_t1135106623 * ___audioSource_5;
	// UnityEngine.AudioClip CollectableScript::collectSound
	AudioClip_t1932558630 * ___collectSound_6;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(CollectableScript_t2666648489, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_rend_3() { return static_cast<int32_t>(offsetof(CollectableScript_t2666648489, ___rend_3)); }
	inline Renderer_t257310565 * get_rend_3() const { return ___rend_3; }
	inline Renderer_t257310565 ** get_address_of_rend_3() { return &___rend_3; }
	inline void set_rend_3(Renderer_t257310565 * value)
	{
		___rend_3 = value;
		Il2CppCodeGenWriteBarrier(&___rend_3, value);
	}

	inline static int32_t get_offset_of_coll_4() { return static_cast<int32_t>(offsetof(CollectableScript_t2666648489, ___coll_4)); }
	inline Collider2D_t646061738 * get_coll_4() const { return ___coll_4; }
	inline Collider2D_t646061738 ** get_address_of_coll_4() { return &___coll_4; }
	inline void set_coll_4(Collider2D_t646061738 * value)
	{
		___coll_4 = value;
		Il2CppCodeGenWriteBarrier(&___coll_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(CollectableScript_t2666648489, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}

	inline static int32_t get_offset_of_collectSound_6() { return static_cast<int32_t>(offsetof(CollectableScript_t2666648489, ___collectSound_6)); }
	inline AudioClip_t1932558630 * get_collectSound_6() const { return ___collectSound_6; }
	inline AudioClip_t1932558630 ** get_address_of_collectSound_6() { return &___collectSound_6; }
	inline void set_collectSound_6(AudioClip_t1932558630 * value)
	{
		___collectSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___collectSound_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
