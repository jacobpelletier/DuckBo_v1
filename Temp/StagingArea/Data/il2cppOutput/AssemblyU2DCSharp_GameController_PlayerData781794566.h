#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/PlayerData
struct  PlayerData_t781794566  : public Il2CppObject
{
public:
	// System.Single GameController/PlayerData::maxLevel
	float ___maxLevel_0;
	// System.Single GameController/PlayerData::currentLevel
	float ___currentLevel_1;
	// System.Boolean[] GameController/PlayerData::collectables
	BooleanU5BU5D_t3568034315* ___collectables_2;
	// System.Boolean GameController/PlayerData::muteMusic
	bool ___muteMusic_3;
	// System.Boolean GameController/PlayerData::muteSound
	bool ___muteSound_4;

public:
	inline static int32_t get_offset_of_maxLevel_0() { return static_cast<int32_t>(offsetof(PlayerData_t781794566, ___maxLevel_0)); }
	inline float get_maxLevel_0() const { return ___maxLevel_0; }
	inline float* get_address_of_maxLevel_0() { return &___maxLevel_0; }
	inline void set_maxLevel_0(float value)
	{
		___maxLevel_0 = value;
	}

	inline static int32_t get_offset_of_currentLevel_1() { return static_cast<int32_t>(offsetof(PlayerData_t781794566, ___currentLevel_1)); }
	inline float get_currentLevel_1() const { return ___currentLevel_1; }
	inline float* get_address_of_currentLevel_1() { return &___currentLevel_1; }
	inline void set_currentLevel_1(float value)
	{
		___currentLevel_1 = value;
	}

	inline static int32_t get_offset_of_collectables_2() { return static_cast<int32_t>(offsetof(PlayerData_t781794566, ___collectables_2)); }
	inline BooleanU5BU5D_t3568034315* get_collectables_2() const { return ___collectables_2; }
	inline BooleanU5BU5D_t3568034315** get_address_of_collectables_2() { return &___collectables_2; }
	inline void set_collectables_2(BooleanU5BU5D_t3568034315* value)
	{
		___collectables_2 = value;
		Il2CppCodeGenWriteBarrier(&___collectables_2, value);
	}

	inline static int32_t get_offset_of_muteMusic_3() { return static_cast<int32_t>(offsetof(PlayerData_t781794566, ___muteMusic_3)); }
	inline bool get_muteMusic_3() const { return ___muteMusic_3; }
	inline bool* get_address_of_muteMusic_3() { return &___muteMusic_3; }
	inline void set_muteMusic_3(bool value)
	{
		___muteMusic_3 = value;
	}

	inline static int32_t get_offset_of_muteSound_4() { return static_cast<int32_t>(offsetof(PlayerData_t781794566, ___muteSound_4)); }
	inline bool get_muteSound_4() const { return ___muteSound_4; }
	inline bool* get_address_of_muteSound_4() { return &___muteSound_4; }
	inline void set_muteSound_4(bool value)
	{
		___muteSound_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
