#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextTyper
struct  TextTyper_t2124322001  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text TextTyper::textBox
	Text_t356221433 * ___textBox_2;
	// System.String[] TextTyper::goatText
	StringU5BU5D_t1642385972* ___goatText_3;
	// System.Int32 TextTyper::currentlyDisplayingText
	int32_t ___currentlyDisplayingText_4;

public:
	inline static int32_t get_offset_of_textBox_2() { return static_cast<int32_t>(offsetof(TextTyper_t2124322001, ___textBox_2)); }
	inline Text_t356221433 * get_textBox_2() const { return ___textBox_2; }
	inline Text_t356221433 ** get_address_of_textBox_2() { return &___textBox_2; }
	inline void set_textBox_2(Text_t356221433 * value)
	{
		___textBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___textBox_2, value);
	}

	inline static int32_t get_offset_of_goatText_3() { return static_cast<int32_t>(offsetof(TextTyper_t2124322001, ___goatText_3)); }
	inline StringU5BU5D_t1642385972* get_goatText_3() const { return ___goatText_3; }
	inline StringU5BU5D_t1642385972** get_address_of_goatText_3() { return &___goatText_3; }
	inline void set_goatText_3(StringU5BU5D_t1642385972* value)
	{
		___goatText_3 = value;
		Il2CppCodeGenWriteBarrier(&___goatText_3, value);
	}

	inline static int32_t get_offset_of_currentlyDisplayingText_4() { return static_cast<int32_t>(offsetof(TextTyper_t2124322001, ___currentlyDisplayingText_4)); }
	inline int32_t get_currentlyDisplayingText_4() const { return ___currentlyDisplayingText_4; }
	inline int32_t* get_address_of_currentlyDisplayingText_4() { return &___currentlyDisplayingText_4; }
	inline void set_currentlyDisplayingText_4(int32_t value)
	{
		___currentlyDisplayingText_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
