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
// LevelController
struct LevelController_t2717835266;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SignController
struct  SignController_t1692409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SignController::signScreen
	GameObject_t1756533147 * ___signScreen_2;
	// UnityEngine.GameObject SignController::levelManager
	GameObject_t1756533147 * ___levelManager_3;
	// LevelController SignController::control
	LevelController_t2717835266 * ___control_4;
	// System.Boolean SignController::signActive
	bool ___signActive_5;

public:
	inline static int32_t get_offset_of_signScreen_2() { return static_cast<int32_t>(offsetof(SignController_t1692409433, ___signScreen_2)); }
	inline GameObject_t1756533147 * get_signScreen_2() const { return ___signScreen_2; }
	inline GameObject_t1756533147 ** get_address_of_signScreen_2() { return &___signScreen_2; }
	inline void set_signScreen_2(GameObject_t1756533147 * value)
	{
		___signScreen_2 = value;
		Il2CppCodeGenWriteBarrier(&___signScreen_2, value);
	}

	inline static int32_t get_offset_of_levelManager_3() { return static_cast<int32_t>(offsetof(SignController_t1692409433, ___levelManager_3)); }
	inline GameObject_t1756533147 * get_levelManager_3() const { return ___levelManager_3; }
	inline GameObject_t1756533147 ** get_address_of_levelManager_3() { return &___levelManager_3; }
	inline void set_levelManager_3(GameObject_t1756533147 * value)
	{
		___levelManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_3, value);
	}

	inline static int32_t get_offset_of_control_4() { return static_cast<int32_t>(offsetof(SignController_t1692409433, ___control_4)); }
	inline LevelController_t2717835266 * get_control_4() const { return ___control_4; }
	inline LevelController_t2717835266 ** get_address_of_control_4() { return &___control_4; }
	inline void set_control_4(LevelController_t2717835266 * value)
	{
		___control_4 = value;
		Il2CppCodeGenWriteBarrier(&___control_4, value);
	}

	inline static int32_t get_offset_of_signActive_5() { return static_cast<int32_t>(offsetof(SignController_t1692409433, ___signActive_5)); }
	inline bool get_signActive_5() const { return ___signActive_5; }
	inline bool* get_address_of_signActive_5() { return &___signActive_5; }
	inline void set_signActive_5(bool value)
	{
		___signActive_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
