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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// MusicController
struct MusicController_t4192593383;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitButton
struct  ExitButton_t2012928472  : public MonoBehaviour_t1158329972
{
public:
	// CameraController ExitButton::activeCamera
	CameraController_t3555666667 * ___activeCamera_2;
	// UnityEngine.GameObject ExitButton::exitScreen
	GameObject_t1756533147 * ___exitScreen_3;
	// MusicController ExitButton::musicControl
	MusicController_t4192593383 * ___musicControl_4;

public:
	inline static int32_t get_offset_of_activeCamera_2() { return static_cast<int32_t>(offsetof(ExitButton_t2012928472, ___activeCamera_2)); }
	inline CameraController_t3555666667 * get_activeCamera_2() const { return ___activeCamera_2; }
	inline CameraController_t3555666667 ** get_address_of_activeCamera_2() { return &___activeCamera_2; }
	inline void set_activeCamera_2(CameraController_t3555666667 * value)
	{
		___activeCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeCamera_2, value);
	}

	inline static int32_t get_offset_of_exitScreen_3() { return static_cast<int32_t>(offsetof(ExitButton_t2012928472, ___exitScreen_3)); }
	inline GameObject_t1756533147 * get_exitScreen_3() const { return ___exitScreen_3; }
	inline GameObject_t1756533147 ** get_address_of_exitScreen_3() { return &___exitScreen_3; }
	inline void set_exitScreen_3(GameObject_t1756533147 * value)
	{
		___exitScreen_3 = value;
		Il2CppCodeGenWriteBarrier(&___exitScreen_3, value);
	}

	inline static int32_t get_offset_of_musicControl_4() { return static_cast<int32_t>(offsetof(ExitButton_t2012928472, ___musicControl_4)); }
	inline MusicController_t4192593383 * get_musicControl_4() const { return ___musicControl_4; }
	inline MusicController_t4192593383 ** get_address_of_musicControl_4() { return &___musicControl_4; }
	inline void set_musicControl_4(MusicController_t4192593383 * value)
	{
		___musicControl_4 = value;
		Il2CppCodeGenWriteBarrier(&___musicControl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
