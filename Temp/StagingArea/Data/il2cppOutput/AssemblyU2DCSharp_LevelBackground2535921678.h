#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelBackground
struct  LevelBackground_t2535921678  : public MonoBehaviour_t1158329972
{
public:
	// System.Single LevelBackground::speedReduce
	float ___speedReduce_2;
	// System.Single LevelBackground::origSRPos
	float ___origSRPos_3;
	// System.Single LevelBackground::origPos
	float ___origPos_4;
	// System.Single LevelBackground::adjuster
	float ___adjuster_5;
	// UnityEngine.Camera LevelBackground::cam
	Camera_t189460977 * ___cam_6;

public:
	inline static int32_t get_offset_of_speedReduce_2() { return static_cast<int32_t>(offsetof(LevelBackground_t2535921678, ___speedReduce_2)); }
	inline float get_speedReduce_2() const { return ___speedReduce_2; }
	inline float* get_address_of_speedReduce_2() { return &___speedReduce_2; }
	inline void set_speedReduce_2(float value)
	{
		___speedReduce_2 = value;
	}

	inline static int32_t get_offset_of_origSRPos_3() { return static_cast<int32_t>(offsetof(LevelBackground_t2535921678, ___origSRPos_3)); }
	inline float get_origSRPos_3() const { return ___origSRPos_3; }
	inline float* get_address_of_origSRPos_3() { return &___origSRPos_3; }
	inline void set_origSRPos_3(float value)
	{
		___origSRPos_3 = value;
	}

	inline static int32_t get_offset_of_origPos_4() { return static_cast<int32_t>(offsetof(LevelBackground_t2535921678, ___origPos_4)); }
	inline float get_origPos_4() const { return ___origPos_4; }
	inline float* get_address_of_origPos_4() { return &___origPos_4; }
	inline void set_origPos_4(float value)
	{
		___origPos_4 = value;
	}

	inline static int32_t get_offset_of_adjuster_5() { return static_cast<int32_t>(offsetof(LevelBackground_t2535921678, ___adjuster_5)); }
	inline float get_adjuster_5() const { return ___adjuster_5; }
	inline float* get_address_of_adjuster_5() { return &___adjuster_5; }
	inline void set_adjuster_5(float value)
	{
		___adjuster_5 = value;
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(LevelBackground_t2535921678, ___cam_6)); }
	inline Camera_t189460977 * get_cam_6() const { return ___cam_6; }
	inline Camera_t189460977 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Camera_t189460977 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier(&___cam_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
