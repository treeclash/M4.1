#pragma once

#include "../FunctionIncludes.h"

namespace cheat {
	class ProfileChanger : public Function {
	public:
		ConfigField<bool> f_Enabled;

		ConfigField<bool> f_EnabledUid;
		ConfigField<std::string> f_Uid;
		ConfigField<int> f_UidSize;
		ConfigField<float> f_UidPosX;
		ConfigField<float> f_UidPosY;

		ConfigField<bool> f_EnabledName;
		ConfigField<std::string> f_Name;

		ConfigField<bool> f_EnabledLevel;
		ConfigField<std::string> f_Level;

		ConfigField<bool> f_EnabledWorldLevel;
		ConfigField<std::string> f_WorldLevel;

		ConfigField<bool> f_EnabledBirthday;
		ConfigField<std::string> f_Birthday;

		ConfigField<bool> f_EnabledSignature;
		ConfigField<std::string> f_Signature;

		ConfigField<bool> f_EnabledExp;
		ConfigField<int> f_CurrentExp;
		ConfigField<int> f_MaxExp;

		ConfigField<bool> f_EnabledExpBar;
		ConfigField<float> f_ExpBar;

		Hotkey f_Hotkey;

		void GUI() override;
		void Outer() override;
		void Status() override;

		std::string getModule() override;

		static ProfileChanger& getInstance();

		ProfileChanger();
	};
}
