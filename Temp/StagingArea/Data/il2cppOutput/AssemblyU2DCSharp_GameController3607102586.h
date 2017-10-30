#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GameController
struct GameController_t3607102586;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GameController::playingLevel
	float ___playingLevel_3;
	// System.Single GameController::maxLevel
	float ___maxLevel_4;
	// System.Single GameController::currentLevel
	float ___currentLevel_5;
	// System.Boolean GameController::levelTitle
	bool ___levelTitle_6;
	// System.Boolean[] GameController::checkPoint
	BooleanU5BU5D_t3568034315* ___checkPoint_7;
	// System.Boolean[] GameController::collectables
	BooleanU5BU5D_t3568034315* ___collectables_8;
	// System.Boolean GameController::musicMuted
	bool ___musicMuted_9;
	// System.Boolean GameController::soundMuted
	bool ___soundMuted_10;

public:
	inline static int32_t get_offset_of_playingLevel_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___playingLevel_3)); }
	inline float get_playingLevel_3() const { return ___playingLevel_3; }
	inline float* get_address_of_playingLevel_3() { return &___playingLevel_3; }
	inline void set_playingLevel_3(float value)
	{
		___playingLevel_3 = value;
	}

	inline static int32_t get_offset_of_maxLevel_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___maxLevel_4)); }
	inline float get_maxLevel_4() const { return ___maxLevel_4; }
	inline float* get_address_of_maxLevel_4() { return &___maxLevel_4; }
	inline void set_maxLevel_4(float value)
	{
		___maxLevel_4 = value;
	}

	inline static int32_t get_offset_of_currentLevel_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___currentLevel_5)); }
	inline float get_currentLevel_5() const { return ___currentLevel_5; }
	inline float* get_address_of_currentLevel_5() { return &___currentLevel_5; }
	inline void set_currentLevel_5(float value)
	{
		___currentLevel_5 = value;
	}

	inline static int32_t get_offset_of_levelTitle_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___levelTitle_6)); }
	inline bool get_levelTitle_6() const { return ___levelTitle_6; }
	inline bool* get_address_of_levelTitle_6() { return &___levelTitle_6; }
	inline void set_levelTitle_6(bool value)
	{
		___levelTitle_6 = value;
	}

	inline static int32_t get_offset_of_checkPoint_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___checkPoint_7)); }
	inline BooleanU5BU5D_t3568034315* get_checkPoint_7() const { return ___checkPoint_7; }
	inline BooleanU5BU5D_t3568034315** get_address_of_checkPoint_7() { return &___checkPoint_7; }
	inline void set_checkPoint_7(BooleanU5BU5D_t3568034315* value)
	{
		___checkPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___checkPoint_7, value);
	}

	inline static int32_t get_offset_of_collectables_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___collectables_8)); }
	inline BooleanU5BU5D_t3568034315* get_collectables_8() const { return ___collectables_8; }
	inline BooleanU5BU5D_t3568034315** get_address_of_collectables_8() { return &___collectables_8; }
	inline void set_collectables_8(BooleanU5BU5D_t3568034315* value)
	{
		___collectables_8 = value;
		Il2CppCodeGenWriteBarrier(&___collectables_8, value);
	}

	inline static int32_t get_offset_of_musicMuted_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___musicMuted_9)); }
	inline bool get_musicMuted_9() const { return ___musicMuted_9; }
	inline bool* get_address_of_musicMuted_9() { return &___musicMuted_9; }
	inline void set_musicMuted_9(bool value)
	{
		___musicMuted_9 = value;
	}

	inline static int32_t get_offset_of_soundMuted_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___soundMuted_10)); }
	inline bool get_soundMuted_10() const { return ___soundMuted_10; }
	inline bool* get_address_of_soundMuted_10() { return &___soundMuted_10; }
	inline void set_soundMuted_10(bool value)
	{
		___soundMuted_10 = value;
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// GameController GameController::control
	GameController_t3607102586 * ___control_2;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___control_2)); }
	inline GameController_t3607102586 * get_control_2() const { return ___control_2; }
	inline GameController_t3607102586 ** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(GameController_t3607102586 * value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
