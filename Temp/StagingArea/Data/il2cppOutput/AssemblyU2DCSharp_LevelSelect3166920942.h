#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CameraController
struct CameraController_t3555666667;
// MusicController
struct MusicController_t4192593383;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelSelect
struct  LevelSelect_t3166920942  : public MonoBehaviour_t1158329972
{
public:
	// CameraController LevelSelect::activeCamera
	CameraController_t3555666667 * ___activeCamera_2;
	// System.Single LevelSelect::level
	float ___level_3;
	// System.Single LevelSelect::levelSelected
	float ___levelSelected_4;
	// MusicController LevelSelect::musicControl
	MusicController_t4192593383 * ___musicControl_5;

public:
	inline static int32_t get_offset_of_activeCamera_2() { return static_cast<int32_t>(offsetof(LevelSelect_t3166920942, ___activeCamera_2)); }
	inline CameraController_t3555666667 * get_activeCamera_2() const { return ___activeCamera_2; }
	inline CameraController_t3555666667 ** get_address_of_activeCamera_2() { return &___activeCamera_2; }
	inline void set_activeCamera_2(CameraController_t3555666667 * value)
	{
		___activeCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeCamera_2, value);
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(LevelSelect_t3166920942, ___level_3)); }
	inline float get_level_3() const { return ___level_3; }
	inline float* get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(float value)
	{
		___level_3 = value;
	}

	inline static int32_t get_offset_of_levelSelected_4() { return static_cast<int32_t>(offsetof(LevelSelect_t3166920942, ___levelSelected_4)); }
	inline float get_levelSelected_4() const { return ___levelSelected_4; }
	inline float* get_address_of_levelSelected_4() { return &___levelSelected_4; }
	inline void set_levelSelected_4(float value)
	{
		___levelSelected_4 = value;
	}

	inline static int32_t get_offset_of_musicControl_5() { return static_cast<int32_t>(offsetof(LevelSelect_t3166920942, ___musicControl_5)); }
	inline MusicController_t4192593383 * get_musicControl_5() const { return ___musicControl_5; }
	inline MusicController_t4192593383 ** get_address_of_musicControl_5() { return &___musicControl_5; }
	inline void set_musicControl_5(MusicController_t4192593383 * value)
	{
		___musicControl_5 = value;
		Il2CppCodeGenWriteBarrier(&___musicControl_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
