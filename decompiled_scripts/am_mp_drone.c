void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_477(ScriptParam_0);
	}
	else
	{
		func_452(0);
	}
	while (true)
	{
		func_451();
		if (func_440())
		{
			func_452(0);
		}
		if (func_435())
		{
			func_452(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_434(5))
	{
		func_433();
		func_432();
		func_431();
		func_428();
		func_426();
		func_425();
	}
	if (func_434(0))
	{
		func_380();
	}
	else if (func_434(1))
	{
		if (!func_379())
		{
			func_373();
			func_358();
		}
		else
		{
			func_357(1);
			func_356(6);
		}
	}
	else if (func_434(2))
	{
		func_348();
	}
	else if (func_434(3))
	{
		func_347();
		func_342();
		func_340();
		func_339();
		func_338();
		func_337();
		func_336();
		func_330();
		func_324();
		func_310();
		func_308();
		func_266();
		func_265();
		func_250();
		func_348();
		if (func_243())
		{
			func_242();
			return;
		}
		func_238();
		func_237();
		func_231();
		func_219(0);
		func_202();
		func_193();
		func_185();
		func_164();
		func_157();
		func_156();
		func_81();
		func_66();
		func_65();
		func_64();
	}
	else if (func_434(4))
	{
		func_26();
	}
	else if (func_434(5))
	{
		func_22();
		func_20();
	}
	else if (func_434(6))
	{
		func_11();
	}
	if (!func_434(3) && !func_434(5))
	{
		func_5();
	}
	func_4();
	func_3();
}

void func_3()
{
	Local_181.f_44++;
	if (Local_181.f_44 >= 32)
	{
		Local_181.f_44 = 0;
	}
}

void func_4()
{
	if (Local_181.f_44 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_83[Local_181.f_44].f_2))
		{
			if (Global_1647918[PLAYER::PLAYER_ID()].f_52[Local_181.f_44] != NETWORK::NET_TO_OBJ(Local_83[Local_181.f_44].f_2))
			{
				Global_1647918[PLAYER::PLAYER_ID()].f_52[Local_181.f_44] = NETWORK::NET_TO_OBJ(Local_83[Local_181.f_44].f_2);
			}
		}
	}
}

void func_5()
{
	if (Local_181.f_118)
	{
		if (func_10(&(Local_181.f_178)))
		{
			if (func_9())
			{
				iVar0 = Global_262145.f_24742;
			}
			else
			{
				iVar0 = Global_262145.f_24142;
			}
			if (func_7(&(Local_181.f_178), iVar0, 0))
			{
				func_6(&(Local_181.f_178));
				Local_181.f_17 = 100;
				MISC::CLEAR_BIT(&(Local_181.f_5), 4);
				MISC::CLEAR_BIT(&(Local_181.f_5), 3);
				MISC::CLEAR_BIT(&(Local_181.f_5), 24);
				Local_181.f_118 = 0;
			}
		}
	}
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9()
{
	return MISC::IS_BIT_SET(Global_1687687.f_2, 2);
}

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			if (!func_12())
			{
				func_452(1);
			}
			else
			{
				func_452(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
	else if (!func_12())
	{
		func_452(1);
	}
	else
	{
		func_452(0);
	}
}

int func_12()
{
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	if (func_17() && func_13(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_16()
{
	return -1;
}

bool func_17()
{
	return MISC::IS_BIT_SET(Global_1687687.f_2, 5);
}

bool func_18()
{
	return MISC::IS_BIT_SET(Global_1687687, 24);
}

bool func_19()
{
	return MISC::IS_BIT_SET(Global_1687687, 16);
}

void func_20()
{
	if (Local_181.f_44 == -1)
	{
		return;
	}
	if (!func_21(Local_181.f_44))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_83[Local_181.f_44].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_181.f_136[Local_181.f_44]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				Local_181.f_136[Local_181.f_44] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_83[Local_181.f_44].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_181.f_136[Local_181.f_44]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_181.f_136[Local_181.f_44], 0);
	}
}

int func_21(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Local_83[iParam0].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	if (Local_181.f_44 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_83[Local_181.f_44].f_2) && func_25(NETWORK::NET_TO_OBJ(Local_83[Local_181.f_44].f_2)))
		{
			if (func_24(Local_181.f_44))
			{
				Local_181.f_119 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_23(Local_181.f_44))
			{
				Local_181.f_119 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_21(Local_181.f_44))
			{
				Local_181.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_181.f_119 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_181.f_45[Local_181.f_44] == -1)
			{
				Local_181.f_45[Local_181.f_44] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_181.f_45[Local_181.f_44], "Flight_Loop", NETWORK::NET_TO_OBJ(Local_83[Local_181.f_44].f_2), Local_181.f_119, 0, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_181.f_45[Local_181.f_44], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_181.f_45[Local_181.f_44], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_181.f_45[Local_181.f_44] != -1)
		{
			AUDIO::STOP_SOUND(Local_181.f_45[Local_181.f_44]);
			AUDIO::RELEASE_SOUND_ID(Local_181.f_45[Local_181.f_44]);
			Local_181.f_45[Local_181.f_44] = -1;
		}
	}
}

int func_23(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Local_83[iParam0].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Local_83[iParam0].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_26()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 200, 1);
	func_63();
	func_61();
	func_54(1);
	if (!MISC::IS_BIT_SET(Local_181.f_5, 1))
	{
		if (!func_32() && !func_31())
		{
			if ((func_30() || func_9()) || func_29())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_181.f_121), 1);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_33))
		{
			Local_181.f_33 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_33, "HUD_Static_Loop", Local_181.f_119, 1);
		}
		if (!func_28())
		{
			PAD::SET_PAD_SHAKE(0, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("RemixDrone");
			MISC::SET_BIT(&(Local_181.f_6), 0);
		}
		MISC::SET_BIT(&(Local_181.f_5), 1);
	}
	else if (!func_10(&(Local_181.f_174)))
	{
		func_8(&(Local_181.f_174), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_27())
		{
			iVar0 = 500;
		}
		if (func_7(&(Local_181.f_174), iVar0, 0) || func_28())
		{
			if (Local_181.f_37 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_37))
				{
					Local_181.f_37 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_37, "HUD_Disconnect", Local_181.f_119, 1);
				}
			}
			func_357(1);
			func_356(6);
		}
	}
}

bool func_27()
{
	return MISC::IS_BIT_SET(Global_1687687.f_2, 4);
}

bool func_28()
{
	return MISC::IS_BIT_SET(Global_1687687, 20);
}

bool func_29()
{
	return MISC::IS_BIT_SET(Global_1687687.f_2, 3);
}

bool func_30()
{
	return MISC::IS_BIT_SET(Global_1687687, 11);
}

bool func_31()
{
	return Global_2513609;
}

int func_32()
{
	if ((func_53(PLAYER::PLAYER_ID(), 0) && Global_1319110 == 1) && func_33())
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return 0;
		}
		if (((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 1;
}

int func_34()
{
	if (func_50(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_49(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_46(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)))
			{
				return 1;
			}
			if (!func_45(Global_4456448.f_194990))
			{
				if (func_50(iVar0))
				{
					if (func_44(iVar0))
					{
						return 1;
					}
					else if (func_48(PLAYER::PLAYER_ID()) || func_43())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687716)
	{
		return 1;
	}
	if (func_42(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_41(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_40(iVar0))
			{
				return 1;
			}
			else if (func_48(PLAYER::PLAYER_ID()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_39(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((Global_1590382 != func_16() && func_48(Global_1590382)) && func_14(func_47(Global_1590382)) == 11) && func_38(Global_1590382, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1590382), 0), -1988428699))
			{
				return 1;
			}
			else if (func_37(iVar0))
			{
				return 1;
			}
			else if (func_48(PLAYER::PLAYER_ID()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_42(PLAYER::PLAYER_ID()) || func_36(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319116)
		{
			case 1:
				if (Global_262145.f_22584)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22585)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22586)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319114 == 1)
	{
		return 1;
	}
	if (func_35(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_194990;
}

int func_36(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

int func_38(int iParam0, int iParam1)
{
	if (func_15(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_40(int iParam0)
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_42(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_16())
			{
				return func_14(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_43()
{
	return MISC::IS_BIT_SET(Global_1676377, 6);
}

int func_44(int iParam0)
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_46(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == 387748548 || ENTITY::GET_ENTITY_MODEL(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_48(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_50(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_16())
			{
				return func_14(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (func_52(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_25(uParam0))
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_16())
			{
				return func_14(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_59(0))
		{
			func_55(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_55(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_57(1, 1);
		}
		else
		{
			func_57(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_56())
	{
		Global_19486.f_1 = 3;
	}
}

int func_56()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_57(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_58()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_60()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_61()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_62();
}

void func_62()
{
	Global_22211.f_134 = 1;
}

void func_63()
{
	Global_1312666 = 1;
}

void func_64()
{
	if (func_17())
	{
		if (func_18())
		{
			if (func_25(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, 1);
			}
		}
	}
}

void func_65()
{
	if (!func_27())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_181.f_136[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				Local_181.f_136[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_181.f_121), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
}

void func_66()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_181.f_123))
		{
			STREAMING::REQUEST_MODEL(func_80());
			if (STREAMING::HAS_MODEL_LOADED(func_80()))
			{
				if (!MISC::IS_BIT_SET(Local_181.f_5, 6))
				{
					if (func_74(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) + 1);
						MISC::SET_BIT(&(Local_181.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_181.f_123 = PED::CREATE_PED(26, func_80(), Local_181.f_112, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_181.f_121)), 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_181.f_123, 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_181.f_123, false, 0);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_181.f_123, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_181.f_123, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_80());
					PED::SET_PED_CONFIG_FLAG(Local_181.f_123, 118, 0);
					PED::SET_PED_CONFIG_FLAG(Local_181.f_123, 108, 1);
					PED::SET_PED_CONFIG_FLAG(Local_181.f_123, 208, 1);
					ENTITY::SET_ENTITY_PROOFS(Local_181.f_123, 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_181.f_123, NETWORK::NET_TO_OBJ(Local_181.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_181.f_123, 0, 0);
					Global_1687687.f_23 = Local_181.f_123;
				}
			}
		}
		else if (func_25(Local_181.f_123))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_181.f_123))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_181.f_123, false, 0);
			}
			if (!func_72(PLAYER::PLAYER_ID()) && !func_69(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_68(Global_1575011);
				}
			}
			else if ((Global_1687687.f_4 == -1 || Global_1687687.f_4 == 0) || Global_1687687.f_4 == Global_1575000)
			{
				func_68(Global_1575011);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_181.f_123) != func_67())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_181.f_123, func_67());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_181.f_123))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_181.f_123, NETWORK::NET_TO_OBJ(Local_181.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_181.f_123, 0, 0);
			}
		}
	}
}

int func_67()
{
	if (Global_1687687.f_4 != -1 && Global_1687687.f_4 != 0)
	{
		return Global_1687687.f_4;
	}
	return Global_1575011;
}

void func_68(int iParam0)
{
	if (Global_1687687.f_4 != iParam0)
	{
		Global_1687687.f_4 = iParam0;
	}
}

int func_69(int iParam0)
{
	if (func_71(iParam0) == 236 || func_71(iParam0) == 150)
	{
		return func_70(iParam0);
	}
	return 0;
}

int func_70(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

int func_71(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, 20);
}

bool func_73(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	return func_75(2, iParam0, 1, bParam1, bParam2);
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_79(iParam0) - func_78(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_77(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_78(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_76(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1)
{
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_80()
{
	return 2119136831;
}

void func_81()
{
	if (func_155())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (CAM::DOES_CAM_EXIST(Local_181.f_131) && CAM::IS_CAM_RENDERING(Local_181.f_131))
		{
			if (!func_27())
			{
				func_146();
				func_108();
			}
			else
			{
				func_90();
				func_84();
			}
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			func_83(1);
			func_82(2);
		}
	}
}

void func_82(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_83(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_84()
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_181.f_132))
	{
		Local_181.f_132 = func_89();
		return;
	}
	iVar0 = func_88();
	if (iVar0 < 0 || !func_25(iVar0))
	{
		return;
	}
	func_87(Local_181.f_132, 0);
	func_86(Local_181.f_132, 3, 3, 3);
	func_85(Local_181.f_132, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_181.f_132, 255, 255, 255, 0, 0);
}

void func_85(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_87(var uParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_88()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1687687.f_20;
	}
	return -1;
}

var func_89()
{
	sVar0 = "";
	switch (Global_4456448.f_226026)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x67D02A194A2FC2BD(sVar0);
}

void func_90()
{
	if (!MISC::IS_BIT_SET(Local_181.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(20, "DRONE_SPACE", -1);
			func_104(21, "DRONE_POSITION", -1);
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				func_103(208, "DRONE_SPEEDU", -1, 0);
				func_103(207, "DRONE_SLOWD", -1, 0);
			}
			else
			{
				func_103(209, "DRONE_SPEEDU", -1, 0);
				func_103(210, "DRONE_SLOWD", -1, 0);
			}
			func_103(75, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_181.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (!MISC::IS_BIT_SET(Local_181.f_5, 17))
		{
			MISC::SET_BIT(&(Local_181.f_5), 17);
			MISC::CLEAR_BIT(&(Local_181.f_5), 16);
		}
	}
	else if (MISC::IS_BIT_SET(Local_181.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_181.f_5), 17);
		MISC::CLEAR_BIT(&(Local_181.f_5), 16);
	}
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(bParam4, bParam8))
	{
		return;
	}
	if (func_97())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_94(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_93(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_93(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_92(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && MISC::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4268421.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_4769);
				func_93(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_92(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268421.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268421.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22350.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_92(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_93(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_94(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_95(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_95(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_96()
{
	return Global_1312745;
}

int func_97()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_98())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_98()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

int func_99(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_101(8, -1) && func_100() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76882) || Global_22350.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_100()
{
	return Global_1312812;
}

bool func_101(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

int func_102(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_104(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 361;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_105(int iParam0)
{
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_102(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar1], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_106(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_102(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_107(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_107(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_108()
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_181.f_132))
	{
		Local_181.f_132 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
		return;
	}
	if ((func_29() || func_60()) || func_145(0))
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_29() || func_60()) || func_9())
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_9())
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_29() && !func_60())
	{
		func_144("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_144("SET_HEADING_METER_IS_VISIBLE", 1);
	func_144("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_29() && !func_60()) && !func_9()) && func_143())
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_142())
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_144("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_144("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_181.f_83 >= (func_139() - 50f) || Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 50)))
		{
			func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_138();
			if (MISC::IS_BIT_SET(Local_181.f_5, 13))
			{
				MISC::CLEAR_BIT(&(Local_181.f_5), 13);
			}
		}
		else
		{
			func_134(func_135());
			if (!MISC::IS_BIT_SET(Local_181.f_5, 13))
			{
				func_144("SET_SOUND_WAVE_IS_VISIBLE", 1);
				MISC::SET_BIT(&(Local_181.f_5), 13);
			}
		}
	}
	else
	{
		func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_138();
	}
	func_144("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_29() && !func_60())
	{
		if (!func_9())
		{
			func_133(Local_181.f_17);
		}
		else
		{
			func_132(Local_181.f_17);
		}
		if (!func_145(0))
		{
			func_131(Local_181.f_18);
		}
	}
	if (func_142())
	{
		func_130(Local_181.f_23);
	}
	if (func_143())
	{
		func_129(Local_181.f_19);
	}
	func_128(0, "DRONE_ZOOM_1");
	func_128(1, "");
	func_128(2, "DRONE_ZOOM_2");
	func_128(3, "");
	func_128(4, "DRONE_ZOOM_3");
	func_126();
	func_124();
	func_122();
	func_121(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_181.f_121)) + 180f)));
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		func_120(func_135());
	}
	if (func_119())
	{
		func_112();
	}
	else if (func_9() || func_29())
	{
		func_111();
	}
	else if (func_18())
	{
		func_109();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_181.f_132, 255, 255, 255, 0, 0);
}

void func_109()
{
	fVar0 = Local_181.f_83;
	if (fVar0 >= (func_139() - 50f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
		{
			Local_181.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_36, "Out_Of_Bounds_Alarm_Loop", Local_181.f_119, 1);
		}
		if (fVar0 >= (func_139() - 50f) && fVar0 < (func_139() - 45f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (fVar0 >= (func_139() - 45f) && fVar0 < (func_139() - 40f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (fVar0 >= (func_139() - 40f) && fVar0 < (func_139() - 35f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (fVar0 >= (func_139() - 35f) && fVar0 < (func_139() - 30f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (fVar0 >= (func_139() - 30f) && fVar0 < (func_139() - 25f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (fVar0 >= (func_139() - 25f) && fVar0 < (func_139() - 20f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (fVar0 >= (func_139() - 20f) && fVar0 < (func_139() - 15f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (fVar0 >= (func_139() - 15f) && fVar0 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (fVar0 >= (func_139() - 10f) && fVar0 < (func_139() - 5f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (fVar0 >= (func_139() - 5f) && fVar0 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
		{
			AUDIO::STOP_SOUND(Local_181.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_181.f_36);
			Local_181.f_36 = -1;
		}
	}
}

void func_110(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_111()
{
	if (Local_181.f_112.f_2 >= (func_139() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
		{
			Local_181.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_36, "Out_Of_Bounds_Alarm_Loop", Local_181.f_119, 1);
		}
		if (Local_181.f_112.f_2 >= (func_139() - 20f) && Local_181.f_112.f_2 < (func_139() - 16f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 16f) && Local_181.f_112.f_2 < (func_139() - 13f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 13f) && Local_181.f_112.f_2 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 10f) && Local_181.f_112.f_2 < (func_139() - 8f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 8f) && Local_181.f_112.f_2 < (func_139() - 6f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 6f) && Local_181.f_112.f_2 < (func_139() - 4f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 4f) && Local_181.f_112.f_2 < (func_139() - 3f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 3f) && Local_181.f_112.f_2 < (func_139() - 2f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 2f) && Local_181.f_112.f_2 < (func_139() - 1f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (Local_181.f_112.f_2 >= (func_139() - 1f) && Local_181.f_112.f_2 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
		{
			AUDIO::STOP_SOUND(Local_181.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_181.f_36);
			Local_181.f_36 = -1;
		}
	}
}

void func_112()
{
	if (Local_181.f_83 >= (func_139() - 50f) || Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 50)))
	{
		func_113();
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
		{
			Local_181.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_36, "Out_Of_Bounds_Alarm_Loop", Local_181.f_119, 1);
		}
		if ((Local_181.f_83 >= (func_139() - 50f) && Local_181.f_83 < (func_139() - 45f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 50)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 45))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if ((Local_181.f_83 >= (func_139() - 45f) && Local_181.f_83 < (func_139() - 40f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 45)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 40))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if ((Local_181.f_83 >= (func_139() - 40f) && Local_181.f_83 < (func_139() - 35f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 40)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 35))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if ((Local_181.f_83 >= (func_139() - 35f) && Local_181.f_83 < (func_139() - 30f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 35)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 30))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if ((Local_181.f_83 >= (func_139() - 30f) && Local_181.f_83 < (func_139() - 25f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 30)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 25))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if ((Local_181.f_83 >= (func_139() - 25f) && Local_181.f_83 < (func_139() - 20f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 25)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 20))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if ((Local_181.f_83 >= (func_139() - 20f) && Local_181.f_83 < (func_139() - 15f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 20)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 15))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if ((Local_181.f_83 >= (func_139() - 15f) && Local_181.f_83 < (func_139() - 10f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 15)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 10))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if ((Local_181.f_83 >= (func_139() - 10f) && Local_181.f_83 < (func_139() - 5f)) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 10)) && Local_181.f_84 < IntToFloat((Global_262145.f_24149 - 5))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if ((Local_181.f_83 >= (func_139() - 5f) && Local_181.f_83 < func_139()) || (Local_181.f_84 >= IntToFloat((Global_262145.f_24149 - 5)) && Local_181.f_84 < IntToFloat(Global_262145.f_24149)))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
		{
			AUDIO::STOP_SOUND(Local_181.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_181.f_36);
			Local_181.f_36 = -1;
		}
	}
}

void func_113()
{
	if (CAM::IS_SCREEN_FADED_IN() && !MISC::IS_BIT_SET(Global_1676377.f_3, 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_116(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_115("HACK_DRONE_DIS", -1);
				iVar0++;
				func_114(22045, iVar0, -1, 1);
				MISC::SET_BIT(&(Global_1676377.f_3), 15);
			}
		}
	}
}

var func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_96();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_115(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	iVar1 = func_118(iParam0, iParam1);
	uVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_117(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_118(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

bool func_119()
{
	return MISC::IS_BIT_SET(Global_1687687.f_2, 1);
}

void func_120(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_121(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_122()
{
	if (func_9())
	{
		if (MISC::IS_BIT_SET(Local_181.f_5, 11) && !Local_181.f_118)
		{
			func_123(1);
		}
		else
		{
			func_123(0);
		}
	}
	else if (MISC::IS_BIT_SET(Local_181.f_5, 11) || MISC::IS_BIT_SET(Local_181.f_5, 23))
	{
		func_123(1);
	}
	else
	{
		func_123(0);
	}
}

void func_123(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_124()
{
	if (MISC::IS_BIT_SET(Local_181.f_5, 4) || (MISC::IS_BIT_SET(Local_181.f_5, 3) && func_9()))
	{
		if (Local_181.f_17 == 100)
		{
			func_125(1);
		}
		else if (Local_181.f_17 != 0 && Local_181.f_17 != 100)
		{
			func_125(2);
		}
	}
	else
	{
		func_125(0);
	}
}

void func_125(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_126()
{
	switch (Local_181.f_24)
	{
		case 0:
			func_127(0);
			break;
		
		case 1:
			func_127(2);
			break;
		
		case 2:
			func_127(4);
			break;
	}
}

void func_127(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_128(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_92(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_129(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_130(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_TRANQUILIZE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_131(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_132(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_EMP_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_133(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_134(float fParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_43))
	{
		Local_181.f_43 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_43, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_181.f_43, "signalstrength", uParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_181.f_43, "signalstrength", fParam0);
	}
}

float func_135()
{
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
		{
			fVar0 = func_136(NETWORK::NET_TO_OBJ(Local_181.f_121), func_137(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_136(int iParam0, struct<3> Param1, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

Vector3 func_137()
{
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1694142;
	}
	return 0f, 0f, 0f;
}

void func_138()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_43))
	{
		AUDIO::STOP_SOUND(Local_181.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_43);
		Local_181.f_43 = -1;
	}
}

float func_139()
{
	if (Global_1687687.f_8 == 0f)
	{
		return Global_262145.f_24150;
	}
	return Global_1687687.f_8;
}

int func_140(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_141(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return MISC::IS_BIT_SET(Global_1687687.f_2, 6);
}

int func_143()
{
	if (func_142())
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_1687687.f_24))
		{
			return 0;
		}
	}
	return 1;
}

void func_144(char* sParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_181.f_132, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_145(bool bParam0)
{
	if (func_119())
	{
		if (bParam0)
		{
			if (MISC::IS_BIT_SET(Local_181.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

void func_146()
{
	if (func_60())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_181.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(21, "DRONE_MOVE", -1);
			func_104(20, "DRONE_POSITION", -1);
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				func_103(210, "CELL_284", -1, 0);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(209, "BOOST_DRONE_E", -1, 0);
				}
				func_103(208, "MOVE_DRONE_UP", -1, 0);
				func_103(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_104(29, "CELL_284", -1);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(203, "BOOST_DRONE_E", -1, 0);
				}
				func_103(209, "MOVE_DRONE_UP", -1, 0);
				func_103(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_29())
			{
				iVar0 = 206;
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					iVar0 = 237;
				}
				if (func_9())
				{
					func_103(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_103(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					iVar1 = 238;
				}
				if (!func_145(0))
				{
					func_103(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_153())
				{
					func_103(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_9())
			{
				if ((((func_152(0) || func_152(1)) || func_151()) || RECORDING::_IS_RECORDING()) || func_147(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					func_103(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_103(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_181.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (!MISC::IS_BIT_SET(Local_181.f_5, 17))
		{
			MISC::SET_BIT(&(Local_181.f_5), 17);
			MISC::CLEAR_BIT(&(Local_181.f_5), 16);
		}
	}
	else if (MISC::IS_BIT_SET(Local_181.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_181.f_5), 17);
		MISC::CLEAR_BIT(&(Local_181.f_5), 16);
	}
}

int func_147(int iParam0)
{
	if (func_150(func_140(iParam0)))
	{
		if (func_149() != func_16())
		{
			if (func_148() == func_149())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35;
}

int func_149()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_151()
{
	return Global_22211.f_135;
}

bool func_152(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_153()
{
	if (func_154() <= 0)
	{
		return 0;
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	return Global_1687687.f_6;
}

bool func_155()
{
	return MISC::IS_BIT_SET(Global_1687687, 7);
}

void func_156()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			if ((CAM::DOES_CAM_EXIST(Local_181.f_131) && CAM::IS_CAM_RENDERING(Local_181.f_131)) && !func_60())
			{
				iVar0 = 80;
				if (func_27())
				{
					iVar0 = 75;
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_181.f_5, 7))
					{
						MISC::SET_BIT(&(Local_181.f_5), 7);
					}
				}
			}
		}
	}
}

void func_157()
{
	if ((func_163() || !func_147(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_162(1);
	func_161(iVar0);
	iVar1 = func_162(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_181.f_103, 2f, iVar1, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_181.f_124)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, 911657153, 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!MISC::IS_BIT_SET(Local_181.f_5, 26))
			{
				func_160(func_149(), 1);
				MISC::SET_BIT(&(Local_181.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_181.f_124))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_181.f_124, 911657153, 0) || ENTITY::GET_ENTITY_HEALTH(Local_181.f_124) == 999)
		{
			if (!MISC::IS_BIT_SET(Local_181.f_5, 26))
			{
				func_160(func_149(), 1);
				MISC::SET_BIT(&(Local_181.f_5), 26);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 26))
	{
		iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_181.f_103, 2f, iVar0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_181.f_124))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_181.f_124, false, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false, 0);
			}
			func_158(1);
		}
	}
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (!func_159())
		{
			MISC::SET_BIT(&Global_1687687, 1);
		}
	}
	else if (func_159())
	{
		MISC::CLEAR_BIT(&Global_1687687, 1);
	}
}

bool func_159()
{
	return MISC::IS_BIT_SET(Global_1687687, 1);
}

void func_160(int iParam0, int iParam1)
{
	Var0.x = 1705449672;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = iParam1;
	iVar3 = 0;
	if (iParam0 != func_16())
	{
		MISC::SET_BIT(&iVar3, iParam0);
	}
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

bool func_161(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_162(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1687687.f_19 != 0)
		{
			return Global_1687687.f_19;
		}
		else
		{
			return -2143187667;
		}
	}
	else
	{
		return -1184972439;
	}
	return 0;
}

bool func_163()
{
	return MISC::IS_BIT_SET(Global_1687687, 14);
}

void func_164()
{
	if ((MISC::IS_BIT_SET(Local_181.f_5, 1) || func_176()) || func_175())
	{
		Local_181.f_17 = 0;
		Local_181.f_18 = 0;
		if (!MISC::IS_BIT_SET(Local_181.f_5, 10))
		{
			MISC::SET_BIT(&(Local_181.f_5), 10);
		}
		return;
	}
	if (!func_175())
	{
		if (MISC::IS_BIT_SET(Local_181.f_5, 10))
		{
			Local_181.f_17 = 100;
			MISC::CLEAR_BIT(&(Local_181.f_5), 10);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			if ((CAM::DOES_CAM_EXIST(Local_181.f_131) && CAM::IS_CAM_RENDERING(Local_181.f_131)) && !MISC::IS_BIT_SET(Local_181.f_5, 2))
			{
				if ((!MISC::IS_BIT_SET(Local_181.f_5, 4) && !MISC::IS_BIT_SET(Local_181.f_5, 3)) && !Local_181.f_118)
				{
					iVar0 = 206;
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						iVar0 = 237;
					}
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)) && !MISC::IS_BIT_SET(Local_181.f_5, 5)) && !MISC::IS_BIT_SET(Local_181.f_5, 24)) && !func_60())
					{
						MISC::SET_BIT(&(Local_181.f_5), 24);
						if (MISC::IS_BIT_SET(Local_181.f_5, 11) || MISC::IS_BIT_SET(Local_181.f_5, 23))
						{
							Local_181.f_26++;
						}
					}
					if (func_9())
					{
						func_171();
					}
					else
					{
						func_170();
					}
				}
				else if (func_10(&(Local_181.f_178)))
				{
					if (func_9())
					{
						iVar1 = Global_262145.f_24742;
					}
					else
					{
						iVar1 = Global_262145.f_24142;
					}
					if (func_7(&(Local_181.f_178), iVar1, 0))
					{
						func_6(&(Local_181.f_178));
						Local_181.f_17 = 100;
						if (Local_181.f_31 != -1)
						{
							AUDIO::STOP_SOUND(Local_181.f_31);
							AUDIO::RELEASE_SOUND_ID(Local_181.f_31);
							Local_181.f_31 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_34))
						{
							AUDIO::STOP_SOUND(Local_181.f_34);
							AUDIO::RELEASE_SOUND_ID(Local_181.f_34);
							Local_181.f_34 = -1;
						}
						MISC::CLEAR_BIT(&(Local_181.f_5), 4);
						MISC::CLEAR_BIT(&(Local_181.f_5), 3);
						MISC::CLEAR_BIT(&(Local_181.f_5), 24);
						Local_181.f_118 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_178)));
						Local_181.f_17 = (iVar2 / iVar1);
						if (!func_9())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_31))
							{
								Local_181.f_31 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_31, "HUD_Shock_Recharge", Local_181.f_119, 1);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_181.f_31, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_168();
				func_165();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

void func_165()
{
	if (func_153())
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!MISC::IS_BIT_SET(Local_181.f_6, 6))
		{
			if (!MISC::IS_BIT_SET(Local_181.f_6, 5))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0))
				{
					MISC::SET_BIT(&(Local_181.f_6), 5);
				}
			}
			else if (Local_181.f_12 == 1)
			{
				if (Local_181.f_173 == 2)
				{
					Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var7 = { (-SYSTEM::SIN(Var4.z) * SYSTEM::COS(Var4.x)), (SYSTEM::COS(Var4.z) * SYSTEM::COS(Var4.x)), SYSTEM::SIN(Var4.x) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24143;
					if (MISC::IS_BIT_SET(Local_181.f_5, 23))
					{
						iVar16 = Global_262145.f_24144;
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_181.f_112 + Vector(0f, 0f, 0f), Var13, iVar16, 1, 849905853, PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0, 0, 1, 0, 0);
					Local_181.f_23 = 100;
					PAD::SET_PAD_SHAKE(0, 300, 150);
					if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_80))
					{
						Local_181.f_80 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_181.f_80, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_181.f_121), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
					if (MISC::IS_BIT_SET(Local_181.f_5, 11) || MISC::IS_BIT_SET(Local_181.f_5, 23))
					{
						Local_181.f_28++;
					}
					func_167((func_154() - 1));
					if (func_154() <= 0)
					{
						Local_181.f_23 = 0;
						MISC::CLEAR_BIT(&(Local_181.f_5), 16);
					}
					MISC::SET_BIT(&(Local_181.f_6), 6);
					func_8(&(Local_181.f_186), 0, 0);
				}
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_166()
{
	if (func_154() > 0)
	{
		if (func_10(&(Local_181.f_186)))
		{
			iVar0 = Global_262145.f_24142;
			if (func_7(&(Local_181.f_186), iVar0, 0))
			{
				MISC::CLEAR_BIT(&(Local_181.f_6), 6);
				MISC::CLEAR_BIT(&(Local_181.f_6), 5);
				func_6(&(Local_181.f_186));
				Local_181.f_23 = 100;
				if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_34))
				{
					AUDIO::STOP_SOUND(Local_181.f_34);
					AUDIO::RELEASE_SOUND_ID(Local_181.f_34);
					Local_181.f_34 = -1;
				}
			}
			else
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_186)));
				Local_181.f_23 = (iVar1 / iVar0);
			}
		}
	}
}

void func_167(int iParam0)
{
	if (Global_1687687.f_6 != iParam0)
	{
		Global_1687687.f_6 = iParam0;
	}
}

void func_168()
{
	Local_181.f_210.f_2 = 2;
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		Local_181.f_210.f_3 = 238;
	}
	else
	{
		Local_181.f_210.f_3 = 205;
	}
	iVar0 = Global_262145.f_24145;
	if (!MISC::IS_BIT_SET(Local_181.f_5, 31))
	{
		Local_181.f_21 = 100;
	}
	if (func_9())
	{
		iVar0 = (iVar0 / 2);
		if (MISC::IS_BIT_SET(Local_181.f_6, 1))
		{
			Local_181.f_20 = ((Local_181.f_22 * (Global_262145.f_24145 / 2)) / 100);
			Local_181.f_20 = ((Global_262145.f_24145 / 2) - Local_181.f_20);
			MISC::CLEAR_BIT(&(Local_181.f_6), 1);
		}
		if (MISC::IS_BIT_SET(Local_181.f_5, 31))
		{
			iVar0 = Local_181.f_20;
		}
	}
	else
	{
		Local_181.f_21 = 100;
	}
	if (!func_145(1))
	{
		if (!func_60() && func_169(&(Local_181.f_210), 1, iVar0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_35))
			{
				Local_181.f_35 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_181.f_35, "Destroyed", NETWORK::NET_TO_OBJ(Local_181.f_121), Local_181.f_119, 1, 0);
			}
			HUD::_0x15CFA549788D35EF();
			iVar1 = 0;
			if (func_9())
			{
				iVar1 = 69;
			}
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_181.f_112, iVar1, 0.5f, 1, 0, 1065353216);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			PAD::SET_PAD_SHAKE(0, 300, 200);
			MISC::SET_BIT(&(Local_181.f_5), 2);
		}
	}
	if (func_10(&(Local_181.f_210)))
	{
		PAD::SET_PAD_SHAKE(0, 300, 20);
		if (!MISC::IS_BIT_SET(Local_181.f_5, 5))
		{
			MISC::SET_BIT(&(Local_181.f_5), 5);
		}
		func_6(&(Local_181.f_202));
		if (!func_7(&(Local_181.f_210), iVar0, 0))
		{
			iVar2 = (Local_181.f_21 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_210)));
			if (!func_9())
			{
				Local_181.f_18 = (iVar2 / iVar0);
			}
			else if (!MISC::IS_BIT_SET(Local_181.f_5, 31))
			{
				Local_181.f_18 = (iVar2 / iVar0);
			}
			else
			{
				Local_181.f_18 = (Local_181.f_22 + (iVar2 / iVar0));
			}
			if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_32))
			{
				Local_181.f_32 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_32, "HUD_Detonate_Charge", Local_181.f_119, 1);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_181.f_5, 5))
	{
		MISC::CLEAR_BIT(&(Local_181.f_5), 5);
		if (!func_9())
		{
			Local_181.f_18 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Local_181.f_5), 31);
			Local_181.f_21 = (100 - Local_181.f_18);
			Local_181.f_20 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_210)));
			Local_181.f_22 = Local_181.f_18;
			func_6(&(Local_181.f_202));
		}
		if (Local_181.f_32 != -1)
		{
			AUDIO::STOP_SOUND(Local_181.f_32);
			AUDIO::RELEASE_SOUND_ID(Local_181.f_32);
			Local_181.f_32 = -1;
		}
	}
	else if (func_9())
	{
		if (Local_181.f_18 > 0)
		{
			if (Local_181.f_18 <= 2)
			{
				Local_181.f_18 = 0;
			}
			if (!func_10(&(Local_181.f_202)))
			{
				func_8(&(Local_181.f_202), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24145;
				if (!func_7(&(Local_181.f_202), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_181.f_21)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_202)))));
					Local_181.f_18 = (Local_181.f_18 - SYSTEM::ROUND(fVar4));
					Local_181.f_22 = Local_181.f_18;
					Local_181.f_21 = (100 - Local_181.f_18);
					MISC::SET_BIT(&(Local_181.f_6), 1);
				}
				else
				{
					Local_181.f_18 = 0;
				}
			}
		}
		else
		{
			func_6(&(Local_181.f_210));
			MISC::CLEAR_BIT(&(Local_181.f_5), 31);
			MISC::CLEAR_BIT(&(Local_181.f_6), 1);
		}
	}
}

int func_169(var uParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_10(uParam0))
		{
			func_8(uParam0, 0, 0);
		}
		else if (func_7(uParam0, iParam2, 0))
		{
			func_6(uParam0);
			return 1;
		}
	}
	else
	{
		func_6(uParam0);
	}
	return 0;
}

void func_170()
{
	if (MISC::IS_BIT_SET(Local_181.f_5, 24))
	{
		if (Local_181.f_12 == 1)
		{
			if (Local_181.f_173 == 2)
			{
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var6 = { (-SYSTEM::SIN(Var3.z) * SYSTEM::COS(Var3.x)), (SYSTEM::COS(Var3.z) * SYSTEM::COS(Var3.x)), SYSTEM::SIN(Var3.x) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24143;
				if (MISC::IS_BIT_SET(Local_181.f_5, 23))
				{
					iVar15 = Global_262145.f_24144;
				}
				if (func_142())
				{
					iVar15 = 1;
				}
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_181.f_112 + Vector(0f, 0f, 0f), Var12, iVar15, 1, 911657153, PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0, 0, 1, 0, 0);
				Local_181.f_17 = 100;
				Local_181.f_18 = 0;
				PAD::SET_PAD_SHAKE(0, 300, 150);
				if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_34))
				{
					Local_181.f_34 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_181.f_34, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_181.f_121), Local_181.f_119, 1, 0);
				}
				if (Local_181.f_32 != -1)
				{
					AUDIO::STOP_SOUND(Local_181.f_32);
					AUDIO::RELEASE_SOUND_ID(Local_181.f_32);
					Local_181.f_32 = -1;
				}
				MISC::SET_BIT(&(Local_181.f_5), 4);
				func_8(&(Local_181.f_178), 0, 0);
			}
		}
	}
}

void func_171()
{
	if ((MISC::IS_BIT_SET(Local_181.f_5, 24) && !MISC::IS_BIT_SET(Local_181.f_5, 3)) && !Local_181.f_118)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_181.f_121), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_181.f_17 = 100;
		PAD::SET_PAD_SHAKE(0, 300, 150);
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_34))
		{
			Local_181.f_34 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_181.f_34, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_181.f_121), Local_181.f_119, 1, 0);
		}
		if (Local_181.f_32 != -1)
		{
			AUDIO::STOP_SOUND(Local_181.f_32);
			AUDIO::RELEASE_SOUND_ID(Local_181.f_32);
			Local_181.f_32 = -1;
		}
		func_172(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_181.f_121), 1), 0);
		MISC::SET_BIT(&(Local_181.f_5), 3);
		Local_181.f_118 = 1;
		func_8(&(Local_181.f_178), 0, 0);
	}
}

void func_172(struct<3> Param0, bool bParam3)
{
	Var0 = 472658729;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam3;
	if (!bParam3)
	{
		if (!func_174(1, 1) == 0)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_174(1, 1));
		}
	}
	else if (Global_1687687.f_21 != func_16())
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_173(Global_1687687.f_21));
	}
}

var func_173(int iParam0)
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_175()
{
	return MISC::IS_BIT_SET(Global_1687687, 8);
}

int func_176()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0)) && !MISC::IS_BIT_SET(Local_181.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (func_147(PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_2535833, 0))
		{
		}
		else if (func_184())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_181.f_121)))
			{
				Local_181.f_25 = 1;
				return 1;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 2))
	{
		Local_181.f_25 = 4;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 9))
	{
		Local_181.f_25 = 1;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 7))
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_181.f_121)) || func_183(NETWORK::NET_TO_ENT(Local_181.f_121), 0))
		{
			Local_181.f_25 = 3;
			return 1;
		}
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (func_119())
	{
		if (Global_1590382 != func_16())
		{
			if (func_37(Global_1590382))
			{
				Local_181.f_25 = 0;
				return 1;
			}
		}
	}
	if (func_180())
	{
		Local_181.f_25 = 1;
		return 1;
	}
	if (func_179(PLAYER::PLAYER_ID()))
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (func_178())
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (func_177())
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (func_19())
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (func_28())
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (func_18())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
		{
			Local_181.f_25 = 6;
			return 1;
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
		{
			Local_181.f_25 = 6;
			return 1;
		}
		if (func_136(PLAYER::PLAYER_PED_ID(), Local_181.f_115, 1) > 2f)
		{
			Local_181.f_25 = 7;
			return 1;
		}
	}
	return 0;
}

bool func_177()
{
	return Global_96053;
}

bool func_178()
{
	return MISC::IS_BIT_SET(Global_1687687, 9);
}

int func_179(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628237[iVar0].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	if (Local_181.f_16 == -1945204837)
	{
		if (func_25(NETWORK::NET_TO_OBJ(Local_181.f_121)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_181.f_121)) == -25693127)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_181.f_121), 1) };
				if (Var0.z >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (func_25(NETWORK::NET_TO_OBJ(Local_181.f_121)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_181.f_121), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_181.f_121), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		if (func_48(iParam0) && !func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_184()
{
	return MISC::IS_BIT_SET(Global_1687687, 15);
}

void func_185()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			Var0 = { Local_181.f_112 };
			switch (Local_181.f_12)
			{
				case 0:
					Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var9 = { (-SYSTEM::SIN(Var6.z) * SYSTEM::COS(Var6.x)), (SYSTEM::COS(Var6.z) * SYSTEM::COS(Var6.x)), SYSTEM::SIN(Var6.x) };
					Var12 = { 10f, 10f, 10f };
					if (func_9())
					{
						Var12 = { Global_262145.f_24743, Global_262145.f_24743, Global_262145.f_24743 };
					}
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_181.f_112, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_181.f_121)), 0f, -0.1f, 0f) };
					Local_181.f_129 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var15, 123, NETWORK::NET_TO_OBJ(Local_181.f_121), 7);
					if (Local_181.f_129 != 0)
					{
						Local_181.f_12 = 1;
					}
					break;
				
				case 1:
					Local_181.f_173 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_181.f_129, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_181.f_173 == 2)
					{
						if (iVar18 == 0)
						{
							Local_181.f_13 = 1;
							Var22 = { 0f, 0f, 0f };
							if (MISC::IS_BIT_SET(Local_181.f_5, 11) && !func_9())
							{
								MISC::CLEAR_BIT(&(Local_181.f_5), 11);
							}
							if (MISC::IS_BIT_SET(Local_181.f_5, 23))
							{
								MISC::CLEAR_BIT(&(Local_181.f_5), 23);
							}
							func_192();
						}
						else
						{
							Local_181.f_13 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar25, 0))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											if (func_190(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(Local_181.f_5, 23))
											{
												MISC::SET_BIT(&(Local_181.f_5), 23);
												if (MISC::IS_BIT_SET(Local_181.f_5, 11) && !func_9())
												{
													MISC::CLEAR_BIT(&(Local_181.f_5), 11);
												}
											}
											if (!func_72(PLAYER::PLAYER_ID()) && !func_69(PLAYER::PLAYER_ID()))
											{
												if ((func_189(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_188(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_187(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
												{
													func_68(Global_1575011);
													func_186(&(Local_181.f_188), 0, 0);
												}
												else
												{
													func_192();
												}
											}
										}
										if ((((!MISC::IS_BIT_SET(Local_181.f_5, 11) && !bVar26) && func_25(Global_1687687.f_23)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1687687.f_23, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											MISC::SET_BIT(&(Local_181.f_5), 11);
											if (MISC::IS_BIT_SET(Local_181.f_5, 23))
											{
												MISC::CLEAR_BIT(&(Local_181.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_9())
									{
										if (MISC::IS_BIT_SET(Local_181.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_181.f_5), 11);
										}
									}
									if (MISC::IS_BIT_SET(Local_181.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_181.f_5), 23);
									}
									func_192();
								}
							}
							else
							{
								func_192();
							}
							Local_181.f_129 = 0;
							Local_181.f_12 = 0;
						}
					}
					else if (Local_181.f_173 == 0)
					{
						Local_181.f_12 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_187(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((((((((((PED::GET_PED_TYPE(iParam0) == 7 || PED::GET_PED_TYPE(iParam0) == 8) || PED::GET_PED_TYPE(iParam0) == 9) || PED::GET_PED_TYPE(iParam0) == 10) || PED::GET_PED_TYPE(iParam0) == 11) || PED::GET_PED_TYPE(iParam0) == 12) || PED::GET_PED_TYPE(iParam0) == 13) || PED::GET_PED_TYPE(iParam0) == 14) || PED::GET_PED_TYPE(iParam0) == 15) || PED::GET_PED_TYPE(iParam0) == 16) || PED::GET_PED_TYPE(iParam0) == 17) || PED::GET_PED_TYPE(iParam0) == 18) || PED::GET_PED_TYPE(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -472287501) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -1533126372)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	iVar0 = func_191(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_191(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_16();
}

void func_192()
{
	if (func_10(&(Local_181.f_188)))
	{
		if (func_7(&(Local_181.f_188), 60000, 0))
		{
			func_6(&(Local_181.f_188));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_68(Global_1575000);
			}
		}
	}
}

void func_193()
{
	if ((func_27() || func_9()) || func_29())
	{
		if (!MISC::IS_BIT_SET(Local_181.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (NETWORK::_0x7EF7649B64D7FF10(NETWORK::NET_TO_OBJ(Local_181.f_121)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			switch (Local_181.f_10)
			{
				case 0:
					if ((func_9() || func_29()) || func_27())
					{
						fVar13 = 0.3f;
					}
					else
					{
						fVar13 = (func_196(Local_181.f_169) * 1.5f);
					}
					if (func_27())
					{
						Var14 = { Local_181.f_112 };
						Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
						Var7 = { (-SYSTEM::SIN(Var4.z) * SYSTEM::COS(Var4.x)), (SYSTEM::COS(Var4.z) * SYSTEM::COS(Var4.x)), SYSTEM::SIN(Var4.x) };
						Var10 = { 0.9f, 0.9f, 0.9f };
						Var17 = { Var1 + Var7 * Var10 };
					}
					else
					{
						Var14 = { Local_181.f_112 };
						Var17 = { Local_181.f_112 };
					}
					Local_181.f_128 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var14, Var17, fVar13, 511, NETWORK::NET_TO_OBJ(Local_181.f_121), 4);
					if (Local_181.f_128 != 0)
					{
						Local_181.f_10 = 1;
					}
					break;
				
				case 1:
					iVar28 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_181.f_128, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_181.f_11 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar27))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, 0) && ENTITY::GET_ENTITY_MODEL(iVar27) != Local_181.f_169)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar27) > 0.5f || func_194(ENTITY::GET_ENTITY_MODEL(iVar27)))
										{
											if (!MISC::IS_BIT_SET(Local_181.f_5, 9))
											{
												MISC::SET_BIT(&(Local_181.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, 0))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar27)))
										{
											if (Local_181.f_27 == 0)
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 90;
												}
												else
												{
													iVar29 = 79;
												}
												Local_181.f_27 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar29, Local_181.f_112, 5000f);
												func_186(&(Local_181.f_194), 0, 0);
											}
										}
									}
								}
							}
							Local_181.f_11 = 2;
							PAD::SET_PAD_SHAKE(0, 300, 50);
							Local_181.f_128 = 0;
							Local_181.f_10 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_181.f_10 = 0;
					}
					break;
			}
			if (Local_181.f_27 != 0)
			{
				if (func_10(&(Local_181.f_194)))
				{
					if (func_7(&(Local_181.f_194), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_181.f_27);
						func_6(&(Local_181.f_194));
						Local_181.f_27 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case -692292317:
		case -827162039:
		case -312295511:
		case 1044954915:
		case 1951180813:
			return 1;
			break;
	}
	if (func_195(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

float func_196(int iParam0)
{
	func_197(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.z - Var3.z));
}

void func_197(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_200(iParam0);
		if (iVar0 != 0)
		{
			func_198(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_198(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_199(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315812[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315812[iVar0], &(Global_1315816[iVar0]), &(Global_1315823[iVar0]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0]) <= 0.01f)
		{
			Global_1315816[iVar0] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0] - Global_1315816[iVar0]);
		Global_1315833[iVar0] = (Global_1315823[iVar0].f_1 - Global_1315816[iVar0].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0].f_2 - Global_1315816[iVar0].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*uParam1 = { Global_1315841 };
	*uParam2 = { Global_1315844 };
}

void func_199(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_200(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_201(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)
{
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_202()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (func_25(NETWORK::NET_TO_OBJ(Local_181.f_121)))
		{
			iVar0 = func_205(NETWORK::NET_TO_OBJ(Local_181.f_121));
			if (iVar0 != -1)
			{
				if (!func_204(&(Global_1573353.f_372), iVar0) && !func_204(&(Global_1628237[PLAYER::PLAYER_ID()].f_558), iVar0))
				{
					func_203(1);
				}
			}
		}
	}
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!MISC::IS_BIT_SET(Global_1687687, 9))
			{
				MISC::SET_BIT(&Global_1687687, 9);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687, 9))
	{
		MISC::CLEAR_BIT(&Global_1687687, 9);
	}
}

bool func_204(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_205(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = func_209(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_206(iVar3);
				if (Global_1680879[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_206(int iParam0)
{
	iVar0 = iParam0;
	if (Global_1680879[iVar0] == 0)
	{
		Global_1680879[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_208(iParam0), func_207(iParam0));
	}
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0)
{
	if (func_217(iParam0))
	{
		return 15;
	}
	if (func_215(iParam0))
	{
		return 28;
	}
	if (func_212(iParam0))
	{
		return 36;
	}
	if (func_211(iParam0))
	{
		return 23;
	}
	if (func_210(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_210(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_212(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, 0, 1, 0)) || func_213());
}

int func_213()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(func_214(PLAYER::PLAYER_ID()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_214(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

bool func_215(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_216());
}

int func_216()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_214(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_217(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_218());
}

int func_218()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_214(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_219(int iParam0)
{
	if (func_27())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (CAM::DOES_CAM_EXIST(Local_181.f_131) && CAM::IS_CAM_ACTIVE(Local_181.f_131))
		{
			if (CAM::IS_CAM_RENDERING(Local_181.f_131) || iParam0)
			{
				if (!func_60())
				{
					func_54(0);
				}
				func_230(1);
				if ((!func_229() || MISC::IS_BIT_SET(Local_181.f_5, 1)) || func_176())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_63();
					func_227(1);
					uVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_181.f_121));
					if (INTERIOR::IS_VALID_INTERIOR(uVar0))
					{
						Global_1687687.f_24 = uVar0;
						if (!MISC::IS_BIT_SET(Local_181.f_5, 8))
						{
							Local_181.f_86 = func_226(INTERIOR::_GET_INTERIOR_HEADING(uVar0));
							INTERIOR::_GET_INTERIOR_INFO(uVar0, &(Local_181.f_109), &(Local_181.f_16));
							MISC::SET_BIT(&(Local_181.f_5), 8);
						}
						iVar1 = 0;
						if (func_225(Local_181.f_112.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1687687.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1687687.f_9);
						}
						if (!func_147(PLAYER::PLAYER_ID()) && !func_222(PLAYER::PLAYER_ID()))
						{
							if (!func_221())
							{
								func_220(1);
							}
						}
						HUD::SET_BIGMAP_ACTIVE(0, 0);
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_181.f_16, Local_181.f_109, Local_181.f_109.f_1, SYSTEM::FLOOR(Local_181.f_86), iVar1);
					}
					else
					{
						Local_181.f_16 = -1;
						if (Global_1687687.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1687687.f_9);
						}
						if (!func_221())
						{
							func_220(1);
						}
						HUD::SET_BIGMAP_ACTIVE(0, 0);
						Global_1687687.f_24 = -1;
						if (MISC::IS_BIT_SET(Local_181.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_181.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_220(int iParam0)
{
	Global_2462959 = iParam0;
}

bool func_221()
{
	return Global_2462959;
}

int func_222(int iParam0)
{
	if (func_224(iParam0))
	{
		return 1;
	}
	if (func_223(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_73(iParam0, 9);
	}
	return 0;
}

int func_224(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_225(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_226(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_227(bool bParam0)
{
	if (bParam0)
	{
		Global_98796.f_8 = 1;
	}
	else
	{
		Global_98796.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_228(iVar0);
		iVar0++;
	}
}

void func_228(int iParam0)
{
	Global_98796.f_181[iParam0] = 1;
	Global_98796.f_180 = 1;
}

bool func_229()
{
	return MISC::IS_BIT_SET(Global_1687687, 4);
}

void func_230(int iParam0)
{
	if (Global_2537071.f_4554 != iParam0)
	{
		Global_2537071.f_4554 = iParam0;
	}
}

void func_231()
{
	if (!func_27() || func_176())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 1;
			fVar5 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_181.f_121));
			fVar6 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_181.f_121));
			fVar7 = (30f * SYSTEM::TIMESTEP());
			func_236();
			PAD::_0x7F4724035FDCA1DD(2);
			func_235(&(Local_181[0]), &(Local_181[1]), &(Local_181[2]), &(Local_181[3]), 0, 0);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				iVar4 = 2;
				Local_181[2] = (Local_181[2] * iVar4);
				Local_181[3] = (Local_181[3] * iVar4);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_181[3] = (Local_181[3] * -1);
				Local_181[1] = (Local_181[1] * -1);
			}
			if ((Local_181[2] != 0 || Local_181[3] != 0) || (Local_181[0] != 0 || Local_181[1] != 0))
			{
				if (Local_181[2] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_181[2])));
				}
				else if (Local_181[0] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_181[0])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_181[3] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_181[3])));
				}
				else if (Local_181[1] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_181[1])));
				}
				else
				{
					fVar9 = 0f;
				}
				Var13 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_181[2] != 0) || Local_181[0] != 0)
				{
					if (Local_181[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_181[2])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_181[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_181[0])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (Var13.y != 0f)
						{
							if (Var13.y < 2f && Var13.y > 0f)
							{
								fVar19 = 0.0001f;
							}
							else if (Var13.y > -2f && Var13.y < 0f)
							{
								fVar19 = -0.0001f;
							}
						}
						else
						{
							fVar19 = 0f;
						}
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				Var16 = { Vector(fVar11, fVar12, fVar10) + Var13 };
				if (fVar5 != 0f)
				{
					if (Local_181[2] == 0 && Local_181[0] == 0)
					{
						if (Var16.y > fVar2)
						{
							Var16.y = fVar2;
						}
						else if (Var16.y < -fVar2)
						{
							Var16.y = -fVar2;
						}
					}
					else if (Var16.y > fVar2)
					{
						Var16.y = fVar2;
					}
					else if (Var16.y < -fVar2)
					{
						Var16.y = -fVar2;
					}
				}
				if (Var16.x > fVar3)
				{
					Var16.x = fVar3;
				}
				else if (Var16.x < -fVar3)
				{
					Var16.x = -fVar3;
				}
				if (!MISC::IS_BIT_SET(Local_181.f_5, 12))
				{
					MISC::SET_BIT(&(Local_181.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), Vector(0f, 0f, 0f) + Vector(Var16.z, Var16.y, Var16.x), 2, 1);
			}
			else if (((Local_181[2] != 0 || Local_181[3] != 0) || Local_181[0] != 0) || Local_181[1] != 0)
			{
				Var20 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
				if (func_234())
				{
					if (func_233())
					{
						fVar24 = -1f;
						Local_181.f_92 = fVar24;
					}
				}
				else
				{
					if (Local_181[2] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_181[2])));
						Local_181.f_92 = fVar23;
					}
					else if (Local_181[0] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_181[0])));
						Local_181.f_92 = fVar23;
					}
					else
					{
						fVar23 = 0f;
					}
					if (Local_181[3] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_181[3])));
						Local_181.f_92 = fVar23;
					}
					else if (Local_181[1] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_181[1])));
						Local_181.f_92 = fVar23;
					}
					else
					{
						fVar24 = 0f;
					}
				}
				fVar25 = -(((fVar24 * 0.05f) * fVar7) * fVar1);
				fVar26 = -(((fVar23 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_181[2] == 0 && Local_181[0] == 0)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar23 = -1f;
							}
							else
							{
								fVar23 = 1f;
							}
						}
						if (Var20.y < 2f && Var20.y > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (Var20.y > -2f && Var20.y < 0f)
						{
							fVar23 = -0.0001f;
						}
						fVar26 = -(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				Var27 = { Vector(0f, fVar26, fVar25) + Var20 };
				if (Var27.y > fVar2)
				{
					Var27.y = fVar2;
				}
				else if (Var27.y < -fVar2)
				{
					Var27.y = -fVar2;
				}
				if (Var27.x > fVar3)
				{
					Var27.x = fVar3;
				}
				else if (Var27.x < -fVar3)
				{
					Var27.x = -fVar3;
				}
				if (MISC::IS_BIT_SET(Local_181.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_181.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), Vector(0f, 0f, 0f) + Vector(Var20.z, Var27.y, Var27.x), 2, 1);
			}
			else
			{
				Local_181.f_92 = 0f;
				Var30 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (Var30.y != 0f)
					{
						if (Var30.y < 0f)
						{
							fVar33 = -1f;
						}
						else
						{
							fVar33 = 1f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (Var30.x < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var30.y != 0f)
					{
						if (Var30.y < 2f && Var30.y > 0f)
						{
							fVar33 = 0.0001f;
						}
						else if (Var30.y > -2f && Var30.y < 0f)
						{
							fVar33 = -0.0001f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (Var30.x != 0f)
					{
						if (Var30.x < 2f && Var30.x > 0f)
						{
							fVar34 = 0.0001f;
						}
						else if (Var30.x > -2f && Var30.x < 0f)
						{
							fVar34 = -0.0001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					uVar35 = func_232(-(((fVar34 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar36 = func_232(-(((fVar33 * 0.05f) * fVar7) * (fVar1 - 25f)));
					Var37 = { Vector(0f, uVar36, uVar35) + Var30 };
					if (MISC::IS_BIT_SET(Local_181.f_5, 12))
					{
						Var37.x = Var30.x;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), Vector(0f, 0f, 0f) + Vector(Var30.z, Var37.y, Var37.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

float func_232(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_233()
{
	return MISC::IS_BIT_SET(Local_181.f_5, 22);
}

bool func_234()
{
	return MISC::IS_BIT_SET(Local_181.f_5, 21);
}

void func_235(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_236()
{
	if (func_119())
	{
		switch (Local_181.f_24)
		{
			case 0:
				Local_181.f_90 = 90f;
				Local_181.f_89 = 90f;
				break;
			
			case 1:
				Local_181.f_90 = 75f;
				Local_181.f_89 = 75f;
				break;
			
			case 2:
				Local_181.f_90 = 45f;
				Local_181.f_89 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_181.f_24)
		{
			case 0:
				Local_181.f_90 = 90f;
				Local_181.f_89 = 90f;
				break;
			
			case 1:
				Local_181.f_90 = 80f;
				Local_181.f_89 = 80f;
				break;
			
			case 2:
				Local_181.f_90 = 70f;
				Local_181.f_89 = 70f;
				break;
			}
	}
}

void func_237()
{
	if ((MISC::IS_BIT_SET(Local_181.f_5, 1) || func_176()) || func_27())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_181.f_121));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_181.f_121));
			if (func_17())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_236();
			PAD::_0x7F4724035FDCA1DD(2);
			func_235(&(Local_181[0]), &(Local_181[1]), &(Local_181[2]), &(Local_181[3]), 0, 0);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				iVar3 = 5;
				Local_181[2] = (Local_181[2] * iVar3);
				Local_181[3] = (Local_181[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_181[3] = (Local_181[3] * -1);
			}
			if (func_7(&(Local_181.f_206), 750, 0))
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					bVar7 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 210);
				}
				else
				{
					bVar7 = (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242));
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_186(&(Local_181.f_206), 0, 0);
				}
			}
			if (bVar7 && !func_234())
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					Local_181.f_24++;
				}
				else if (bVar8)
				{
					Local_181.f_24 = (Local_181.f_24 - 1);
				}
				else
				{
					Local_181.f_24++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_38))
				{
					Local_181.f_38 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_38, "HUD_Zoom_Change", Local_181.f_119, 1);
				}
				if (Local_181.f_24 > 2)
				{
					Local_181.f_24 = 0;
				}
				else if (Local_181.f_24 < 0)
				{
					Local_181.f_24 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_38))
			{
				AUDIO::STOP_SOUND(Local_181.f_38);
				AUDIO::RELEASE_SOUND_ID(Local_181.f_38);
				Local_181.f_38 = -1;
			}
			Local_181.f_91 = (Local_181.f_91 + (((Local_181.f_89 - Local_181.f_91) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_181.f_131, Local_181.f_91);
			if (Local_181[2] != 0 || Local_181[3] != 0)
			{
				if (Local_181[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_181[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_181[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_181[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_181.f_93);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_181.f_93);
				if ((fVar4 != 0f || Local_181[0] != 0) && !func_60())
				{
					if (Local_181[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_181[0])));
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar20 = -1f;
							}
							else
							{
								fVar20 = 1f;
							}
						}
						if (Var14.y != 0f)
						{
							if (Var14.y < 1.5f && Var14.y > 0f)
							{
								fVar20 = 0.001f;
							}
							else if (Var14.y > -1.5f && Var14.y < 0f)
							{
								fVar20 = -0.001f;
							}
						}
						else
						{
							fVar20 = 0f;
						}
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var17 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_181[0] == 0)
					{
						if (Var17.y > fVar1)
						{
							Var17.y = fVar1;
						}
						else if (Var17.y < -fVar1)
						{
							Var17.y = -fVar1;
						}
					}
					else if (Var17.y > fVar1)
					{
						Var17.y = fVar1;
					}
					else if (Var17.y < -fVar1)
					{
						Var17.y = -fVar1;
					}
				}
				if (Var17.x > fVar2)
				{
					Var17.x = fVar2;
				}
				else if (Var17.x < -fVar2)
				{
					Var17.x = -fVar2;
				}
				if (!MISC::IS_BIT_SET(Local_181.f_5, 12))
				{
					MISC::SET_BIT(&(Local_181.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), Vector(0f, 0f, 0f) + Vector(Var17.z, Var17.y, Var17.x), 2, 1);
			}
			else if (((Local_181[0] != 0 || Local_181[1] != 0) && !func_234()) && !func_60())
			{
				Var21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
				if (func_234())
				{
					if (func_233())
					{
						fVar25 = -1f;
						Local_181.f_92 = fVar25;
					}
				}
				else
				{
					if (Local_181[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_181[0])));
						Local_181.f_92 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_181[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_181[1])));
						Local_181.f_92 = fVar24;
					}
					else
					{
						fVar25 = 0f;
					}
				}
				fVar26 = -(((fVar25 * 0.05f) * fVar6) * fVar0);
				fVar27 = -(((fVar24 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_181[0] == 0 && !func_60()) || func_234())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar24 = -1f;
							}
							else
							{
								fVar24 = 1f;
							}
						}
						if (Var21.y < 1.5f && Var21.y > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var21.y > -1.5f && Var21.y < 0f)
						{
							fVar24 = -0.001f;
						}
						fVar27 = -(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var28 = { Vector(0f, fVar27, fVar26) + Var21 };
				if (Var28.y > fVar1)
				{
					Var28.y = fVar1;
				}
				else if (Var28.y < -fVar1)
				{
					Var28.y = -fVar1;
				}
				if (Var28.x > fVar2)
				{
					Var28.x = fVar2;
				}
				else if (Var28.x < -fVar2)
				{
					Var28.x = -fVar2;
				}
				if (MISC::IS_BIT_SET(Local_181.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_181.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), Vector(0f, 0f, 0f) + Vector(Var21.z, Var28.y, Var28.x), 2, 1);
			}
			else if (!func_233() && !func_234())
			{
				Local_181.f_92 = 0f;
				Var31 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var31.y != 0f)
					{
						if (Var31.y < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var31.x < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var31.y != 0f)
					{
						if (Var31.y < 1.5f && Var31.y > 0f)
						{
							fVar34 = 0.001f;
						}
						else if (Var31.y > -1.5f && Var31.y < 0f)
						{
							fVar34 = -0.001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var31.x != 0f)
					{
						if (Var31.x < 1.5f && Var31.x > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (Var31.x > -1.5f && Var31.x < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					uVar36 = func_232(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_232(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (MISC::IS_BIT_SET(Local_181.f_5, 12))
					{
						Var38.x = Var31.x;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), Vector(0f, 0f, 0f) + Vector(Var31.z, Var38.y, Var38.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

void func_238()
{
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_162(0);
		Local_181.f_103 = { func_241(&Local_181) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_181.f_124))
		{
			if (!func_240(Local_181.f_103))
			{
				if (func_161(iVar0))
				{
					Local_181.f_124 = OBJECT::CREATE_OBJECT(iVar0, Local_181.f_103, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_181.f_124, Local_181.f_103, 0, 0, 1);
					ENTITY::SET_ENTITY_COLLISION(Local_181.f_124, true, 0);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_181.f_124, 1, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_181.f_124, 1);
					ENTITY::SET_ENTITY_HEADING(Local_181.f_124, func_239());
					ENTITY::FREEZE_ENTITY_POSITION(Local_181.f_124, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_181.f_124, false, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_181.f_103, 2f, iVar0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_181.f_124)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					ENTITY::SET_ENTITY_VISIBLE(iVar1, true, 0);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_181.f_103 = { func_241(&Local_181) };
	}
}

float func_239()
{
	if (Global_1687687.f_7 != 0f)
	{
		return Global_1687687.f_7;
	}
	return 0f;
}

int func_240(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_241(var uParam0)
{
	if (!func_240(Global_1687687.f_10))
	{
		return Global_1687687.f_10;
	}
	else
	{
		return uParam0->f_103;
	}
	return 0f, 0f, 0f;
}

void func_242()
{
	if (Local_181.f_32 != -1)
	{
		AUDIO::STOP_SOUND(Local_181.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_32);
		Local_181.f_32 = -1;
	}
}

int func_243()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (func_248(PLAYER::PLAYER_ID()) && !func_247())
	{
		return 1;
	}
	if (func_147(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_2535833, 0))
		{
			return 1;
		}
	}
	if (Global_1662006 || Global_1312791)
	{
		func_246(1);
		return 1;
	}
	if ((func_244(0) || func_152(1)) || func_151())
	{
		func_54(0);
		func_63();
		func_81();
		return 1;
	}
	return 0;
}

int func_244(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_245(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_245(int iParam0)
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_246(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28())
		{
			MISC::SET_BIT(&Global_1687687, 20);
		}
	}
	else if (func_28())
	{
		MISC::CLEAR_BIT(&Global_1687687, 20);
	}
}

bool func_247()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695469, 0));
}

int func_248(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_249())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_249()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_250()
{
	if (func_27())
	{
		return;
	}
	if (func_229())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_181.f_133))
			{
				Local_181.f_133 = func_264(Local_181.f_112, 0);
				HUD::SET_BLIP_SPRITE(Local_181.f_133, 627);
				if (func_17() && !HUD::DOES_BLIP_EXIST(Local_181.f_134))
				{
					Local_181.f_134 = func_261(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_181.f_134, 6);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_181.f_134, 0);
					HUD::SET_BLIP_SCALE(Local_181.f_134, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_181.f_134, (13 - 1));
					if (func_258(PLAYER::PLAYER_ID()) != -1)
					{
						func_254(&(Local_181.f_134), func_256(func_258(PLAYER::PLAYER_ID())));
					}
					else
					{
						func_254(&(Local_181.f_134), func_253());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_181.f_134, 1);
				}
			}
			else
			{
				uVar0 = func_252(Local_181.f_87);
				fVar1 = Local_181.f_112;
				fVar2 = Local_181.f_112.f_1;
				HUD::SET_BLIP_DISPLAY(Local_181.f_133, 2);
				HUD::SET_BLIP_COORDS(Local_181.f_133, Local_181.f_112);
				if (((func_9() || func_29()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (!HUD::_IS_MINIMAP_IN_INTERIOR())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						HUD::SET_BLIP_COORDS(Local_181.f_133, fVar1, fVar2, 0f);
						HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar1, fVar2);
						HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
					}
				}
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_181.f_133, SYSTEM::ROUND(uVar0));
				HUD::SET_BLIP_SCALE(Local_181.f_133, 1f);
				HUD::SET_BLIP_PRIORITY(Local_181.f_133, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_181.f_134))
				{
					HUD::SET_BLIP_ROTATION(Local_181.f_134, func_251(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_251(int iParam0)
{
	uVar0 = ENTITY::_GET_ENTITY_PHYSICS_HEADING(iParam0);
	return SYSTEM::ROUND(uVar0);
}

float func_252(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_253()
{
	return 10;
}

void func_254(var uParam0, int iParam1)
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_255(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_256(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_257(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_257(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_258(int iParam0)
{
	if (!iParam0 == func_16())
	{
		if (func_259(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_191(iParam0)];
		}
	}
	return -1;
}

bool func_259(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_260(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_16();
}

int func_260(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1628237[iParam0].f_11 != func_16())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_261(int iParam0, bool bParam1, bool bParam2)
{
	return func_262(iParam0, !bParam1, bParam2);
}

int func_262(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_263(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_263(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_263(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_263(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_264(struct<3> Param0, int iParam3)
{
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_263(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

void func_265()
{
	if (func_27())
	{
		if (Local_181.f_112.f_2 >= (func_139() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
			{
				Local_181.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_36, "Out_Of_Bounds_Alarm_Loop", Local_181.f_119, 1);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
		{
			AUDIO::STOP_SOUND(Local_181.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_181.f_36);
			Local_181.f_36 = -1;
		}
	}
}

void func_266()
{
	if (((func_29() || func_119()) || func_17()) || func_142())
	{
		switch (Local_181.f_171)
		{
			case 0:
				func_289();
				break;
			
			case 1:
				func_276();
				break;
			
			case 2:
				func_274();
				break;
			
			case 3:
				func_267();
				break;
			}
	}
}

void func_267()
{
	func_55(1);
	if (!func_273())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_271(0);
	func_269(0);
	func_268(0);
}

void func_268(int iParam0)
{
	if (Local_181.f_171 != iParam0)
	{
		Local_181.f_171 = iParam0;
	}
}

void func_269(bool bParam0)
{
	if (bParam0)
	{
		if (!func_270())
		{
			MISC::SET_BIT(&Global_1687687, 17);
		}
	}
	else if (func_270())
	{
		MISC::CLEAR_BIT(&Global_1687687, 17);
	}
}

bool func_270()
{
	return MISC::IS_BIT_SET(Global_1687687, 17);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		if (!func_272())
		{
			MISC::SET_BIT(&Global_1687687, 18);
		}
	}
	else if (func_272())
	{
		MISC::CLEAR_BIT(&Global_1687687, 18);
	}
}

bool func_272()
{
	return MISC::IS_BIT_SET(Global_1687687, 18);
}

bool func_273()
{
	return Global_1676377.f_474;
}

void func_274()
{
	if (func_272() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_55(1);
		func_275(0);
		MISC::CLEAR_BIT(&(Local_181.f_5), 16);
		func_268(3);
	}
}

void func_275(bool bParam0)
{
	if (bParam0)
	{
		if (!func_60())
		{
			MISC::SET_BIT(&Global_1687687, 19);
		}
	}
	else if (func_60())
	{
		MISC::CLEAR_BIT(&Global_1687687, 19);
	}
}

void func_276()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_7(&(Local_181.f_196), 3000, 0))
		{
			if (func_288())
			{
				if (MISC::IS_BIT_SET(Global_4269765, 2) || func_7(&(Local_181.f_200), 8000, 0))
				{
					if (!MISC::IS_BIT_SET(Global_4269765, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_277(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_6(&(Local_181.f_196));
					func_6(&(Local_181.f_200));
					func_268(2);
				}
			}
			else if (func_7(&(Local_181.f_200), 15000, 0))
			{
				func_6(&(Local_181.f_196));
				func_6(&(Local_181.f_200));
				func_55(1);
				func_275(0);
				MISC::CLEAR_BIT(&(Local_181.f_5), 16);
				func_268(3);
			}
		}
	}
}

void func_277(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_287())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_285())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_94(PLAYER::PLAYER_ID(), 0) && !func_249()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_282(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_281(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_280();
					func_279();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_281(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar27, 1);
						}
					}
					if (func_278(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_278(int iParam0)
{
	return iParam0 == 17;
}

void func_279()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_280()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_281(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_282(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_284();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_94(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_283(-2008016205, iParam0);
	}
}

void func_283(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_284()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

int func_285()
{
	if (func_286() == 0)
	{
		return 1;
	}
	return 0;
}

int func_286()
{
	return Global_1312467.f_18;
}

int func_287()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

void func_289()
{
	if (func_307())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			if (!func_288())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_275(1);
					func_105(-1);
					func_277(PLAYER::PLAYER_ID(), 0, 512, 0);
					CAM::DO_SCREEN_FADE_OUT(500);
					func_305(1, -1);
					func_290(3, 1, 1, 0);
					func_8(&(Local_181.f_196), 0, 0);
					func_8(&(Local_181.f_200), 0, 0);
					func_268(1);
				}
			}
		}
	}
}

int func_290(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_76622)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_4269765, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4269765, 14);
				MISC::SET_BIT(&Global_4269765, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4269765, 14);
				MISC::SET_BIT(&Global_4269765, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4269765, 14);
				MISC::SET_BIT(&Global_4269765, 27);
			}
		}
		if (Global_7363[iParam0].f_9 == 0)
		{
			func_302();
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4269765, 14);
			MISC::CLEAR_BIT(&Global_4269765, 16);
			MISC::CLEAR_BIT(&Global_4269765, 15);
			MISC::CLEAR_BIT(&Global_4269765, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_295();
	if (Global_19486.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_59(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19452 == 1)
	{
		return 0;
	}
	if (Global_19486.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_19483))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
		{
			if (Global_19486.f_1 < 4)
			{
				func_294("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
				{
					Global_19483 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_19468)
	{
		SYSTEM::WAIT(0);
	}
	func_302();
	func_291();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_294(&(Global_7363[iParam0].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0].f_9) == 0)
			{
				Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0].f_9) == 0)
		{
			Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7363[iParam0].f_5));
		return 1;
	}
	return 1;
}

void func_291()
{
	if (Global_76622 == 0)
	{
		Global_7363[14].f_4 = -99;
		Global_7363[4].f_4 = -99;
		if (Global_2460675)
		{
			if (func_293(14))
			{
				func_292(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_292(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_292(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_292(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_292(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7363[iParam0]), sParam1, 16);
	Global_7363[iParam0].f_4 = iParam2;
	StringCopy(&(Global_7363[iParam0].f_5), sParam3, 16);
	Global_7363[iParam0].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_7363[iParam0].f_10 = iParam4;
	Global_7363[iParam0].f_11 = iParam5;
	Global_7363[iParam0].f_12 = iParam6;
	Global_7363[iParam0].f_13 = iParam7;
	Global_7363[iParam0].f_14 = iParam8;
	if (Global_7363[iParam0].f_12 == 0)
	{
		Global_7363[iParam0].f_12 = 0;
	}
	if (Global_7363[iParam0].f_13 == 0)
	{
		Global_7363[iParam0].f_13 = 0;
	}
	if (Global_7363[iParam0].f_14 == 0)
	{
		Global_7363[iParam0].f_14 = 0;
	}
}

bool func_293(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_294(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_295()
{
	if (func_293(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_296();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_296()
{
	func_297();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_297()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_300(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_299(PLAYER::PLAYER_PED_ID());
			if (func_298(iVar0) && (!func_293(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_298(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_298(int iParam0)
{
	return iParam0 < 3;
}

int func_299(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_300(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_300(int iParam0)
{
	if (func_298(iParam0))
	{
		return func_301(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_301(int iParam0)
{
	return Global_1798[iParam0];
}

void func_302()
{
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7363[iVar0].f_4 = -99;
		iVar0++;
	}
	if (Global_76622 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_304(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_292(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_292(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_292(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41431 == 15 && func_303(0) == 0) && Global_7361 == 0)
		{
			func_292(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_292(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_292(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_292(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_292(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_292(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_292(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111638.f_14046.f_89 == 1)
		{
			func_292(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111638.f_14046.f_88 == 1)
		{
			func_292(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_292(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_292(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_292(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_292(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_292(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_292(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_292(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_292(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_292(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_292(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_292(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_292(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_292(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_292(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_292(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_292(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_292(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_4269765, 4) == 1)
		{
			func_292(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_292(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_292(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_292(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_292(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_292(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_292(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_292(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_292(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_292(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_292(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_292(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_292(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_292(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_292(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_292(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_292(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_4269765, 4) == 1)
		{
			if (Global_1573926)
			{
				func_292(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269765, 20) == 1)
			{
				func_292(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269765, 22) == 1)
			{
				func_292(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269765, 26) == 1)
			{
				func_292(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((MISC::IS_BIT_SET(Global_4269765, 4) == 0 && Global_1573926 == 0) && MISC::IS_BIT_SET(Global_4269765, 20) == 0) && MISC::IS_BIT_SET(Global_4269765, 22) == 0) && MISC::IS_BIT_SET(Global_4269765, 26) == 0)
		{
			func_292(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_303(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

int func_304(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_19[iParam1];
}

void func_305(bool bParam0, int iParam1)
{
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22350.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_306(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_306(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_307()
{
	if (func_60())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_152(0) || func_151()) || RECORDING::_IS_RECORDING())
	{
		func_6(&(Local_181.f_204));
		func_8(&(Local_181.f_204), 0, 0);
		MISC::CLEAR_BIT(&(Local_181.f_5), 16);
		func_81();
		return 0;
	}
	else if (func_10(&(Local_181.f_204)))
	{
		if (!func_7(&(Local_181.f_204), 2000, 0))
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_181.f_5), 16);
			func_6(&(Local_181.f_204));
		}
	}
	if (func_147(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_308()
{
	if (func_309())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
			{
				if (!MISC::IS_BIT_SET(Local_181.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_181.f_121), true);
					MISC::SET_BIT(&(Local_181.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_181.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_181.f_121), false);
				MISC::CLEAR_BIT(&(Local_181.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
			}
		}
	}
}

int func_309()
{
	if (func_147(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_2535833, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_310()
{
	if (func_27())
	{
		Global_1687687.f_1 = 0;
	}
	if (func_314() || func_176())
	{
		if (!func_10(&(Local_181.f_176)))
		{
			func_8(&(Local_181.f_176), 0, 0);
		}
		else if (func_7(&(Local_181.f_176), Global_1687687.f_1, 0) || func_176())
		{
			func_6(&(Local_181.f_174));
			if (func_27())
			{
				if (func_25(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_181.f_112, 72, 0.5f, 1, 0, 1065353216);
				}
				else
				{
					FIRE::ADD_EXPLOSION(Local_181.f_112, 72, 0.5f, 1, 0, 1065353216, 0);
				}
				PAD::SET_PAD_SHAKE(0, 300, 200);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_181.f_121, 1);
				STREAMING::CLEAR_FOCUS();
				iVar0 = NETWORK::NET_TO_OBJ(Local_181.f_121);
				OBJECT::DELETE_OBJECT(&iVar0);
				MISC::SET_BIT(&(Local_181.f_6), 2);
			}
			if (func_18())
			{
				func_313(1);
				if (Local_181.f_25 == 0)
				{
					func_311(6, 0, 0);
				}
				else
				{
					func_311(5, 0, 0);
				}
			}
			func_357(1);
			func_356(4);
		}
	}
	else if (func_10(&(Local_181.f_176)))
	{
		func_186(&(Local_181.f_176), 0, 0);
	}
}

void func_311(int iParam0, bool bParam1, int iParam2)
{
	StringCopy(&cVar0, func_312(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_181.f_78 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_181.f_115, 0f, 0f, Local_181.f_81, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_181.f_78, Local_181.f_120, &cVar0, fVar17, fVar18, iVar16, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_181.f_121), Local_181.f_78, Local_181.f_120, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_312(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_122))
	{
		ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_181.f_122), &cVar0, Local_181.f_120, fVar17, bParam1, iParam2, 0, 0f, 0);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_181.f_122));
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_181.f_78);
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_313(bool bParam0)
{
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iVar0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iVar0);
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_25(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

int func_314()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0)) && !MISC::IS_BIT_SET(Local_181.f_5, 2))
	{
		return 1;
	}
	if (Local_181.f_11 == 2)
	{
		Local_181.f_25 = 1;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 1))
	{
		return 1;
	}
	if (func_323())
	{
		Local_181.f_25 = 5;
		return 1;
	}
	if (func_119() && func_316())
	{
		Local_181.f_25 = 5;
		return 1;
	}
	if (func_18())
	{
		if (func_316())
		{
			Local_181.f_25 = 5;
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 2))
	{
		Local_181.f_25 = 4;
		return 1;
	}
	if (func_159())
	{
		if (!func_10(&(Local_181.f_184)))
		{
			func_8(&(Local_181.f_184), 0, 0);
		}
		else if (func_7(&(Local_181.f_184), 3000, 0))
		{
			Local_181.f_25 = 0;
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 7))
	{
		Local_181.f_25 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_181.f_121)) || func_183(NETWORK::NET_TO_ENT(Local_181.f_121), 0))
		{
			Local_181.f_25 = 3;
			return 1;
		}
	}
	if (!func_119() && !func_315())
	{
		if (Local_181.f_112.f_2 >= func_139())
		{
			Local_181.f_25 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_315()
{
	return MISC::IS_BIT_SET(Global_1687687.f_2, 0);
}

int func_316()
{
	if (func_322())
	{
		return 0;
	}
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
		{
			if (func_119())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_321()) && !ENTITY::IS_ENTITY_DEAD(func_321(), 0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_321(), 1) };
				}
			}
			else if (func_17())
			{
				if (!func_18())
				{
					iVar3 = func_317(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8);
					switch (iVar3)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (func_25(NETWORK::NET_TO_OBJ(Local_181.f_121)))
			{
				Local_181.f_83 = func_136(NETWORK::NET_TO_OBJ(Local_181.f_121), Var0, 1);
				if (Local_181.f_83 > func_139())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_317(int iParam0)
{
	if (iParam0 != func_16())
	{
		iVar0 = func_320(iParam0);
		if (iVar0 != 0)
		{
			return func_318(iVar0);
		}
	}
	return -1;
}

int func_318(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_14(iVar0) == 17)
		{
			if (func_319(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 1;
		
		case 129:
			return 2;
		
		case 130:
			return 3;
		
		case 131:
			return 4;
		
		case 132:
			return 5;
		
		case 133:
			return 6;
		
		default:
	}
	return 0;
}

int func_320(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0].f_274.f_393;
	}
	return 0;
}

int func_321()
{
	if (Global_1590382 != func_16())
	{
		if (!func_37(Global_1590382))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1370256))
			{
				return Global_1370256;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	return -1;
}

bool func_322()
{
	return MISC::IS_BIT_SET(Global_1687687, 6);
}

int func_323()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0))
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_181.f_112, &fVar0, 1, 0))
		{
			Local_181.f_84 = (Local_181.f_112.f_2 - fVar0);
			if (Local_181.f_84 > IntToFloat(Global_262145.f_24149))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_324()
{
	if (!func_27())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0)) && CAM::DOES_CAM_EXIST(Local_181.f_131))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
			Var0 = { (Var0.x + 180f), (-Var0.y + 180f), Var0.z };
			CAM::SET_CAM_ROT(Local_181.f_131, Var0, 2);
			if (MISC::IS_BIT_SET(Local_181.f_5, 1) || func_176())
			{
				return;
			}
			Var3 = { func_327(func_328()) };
			Var6 = { func_327(func_326(func_328())) };
			Var9 = { func_325(Var3, Var6) };
			fVar12 = 5f;
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
				{
					iVar13 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
				{
					iVar14 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
				{
					iVar13 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
				{
					iVar14 = 1;
				}
			}
			if (iVar13 && !func_243())
			{
				Local_181.f_82 = 140f;
				fVar12 = 7f;
			}
			else if (iVar14 && !func_243())
			{
				Local_181.f_82 = 60f;
				fVar12 = 3.5f;
			}
			else
			{
				Local_181.f_82 = 100f;
			}
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				if (Local_181[2] >= 127)
				{
					Local_181[2] = 127;
				}
				else if (Local_181[2] <= -127)
				{
					Local_181[2] = -127;
				}
				if (Local_181[0] >= 127)
				{
					Local_181[0] = 127;
				}
				else if (Local_181[0] <= -127)
				{
					Local_181[0] = -127;
				}
			}
			if (Local_181[2] > 0 || Local_181[0] > 0)
			{
				if (Local_181[2] > 0)
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_181[2])));
				}
				else
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_181[0])));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var9 * Vector(fVar15, fVar15, fVar15), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var3 * Vector(-Local_181.f_82, -Local_181.f_82, -Local_181.f_82), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Local_181[2] < 0 || Local_181[0] < 0)
			{
				if (Local_181[0] < 0)
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_181[0])));
				}
				else
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_181[2])));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var3 * Vector(-Local_181.f_82, -Local_181.f_82, -Local_181.f_82), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var9 * Vector(fVar16, fVar16, fVar16), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else
			{
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var3 * Vector(-Local_181.f_82, -Local_181.f_82, -Local_181.f_82), 0, 1, 1, 0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

Vector3 func_325(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.y * Param3.z) - (Param0.z * Param3.y)), ((Param0.z * Param3.x) - (Param0.x * Param3.z)), ((Param0.x * Param3.y) - (Param0.y * Param3.x));
}

Vector3 func_326(struct<2> Param0, var uParam2)
{
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

Vector3 func_327(struct<3> Param0)
{
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.y = 0f;
		Param0.z = 0f;
	}
	return Param0;
}

Vector3 func_328()
{
	Var0 = { 0f, 1f, 0f };
	func_329(&Var0);
	return Var0;
}

void func_329(var uParam0)
{
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.x = *uParam0;
	Var2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.y = uParam0->f_1;
	Var2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.z = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_330()
{
	if (func_27())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_181.f_121), 0)) && CAM::DOES_CAM_EXIST(Local_181.f_131))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			fVar0 = 0f;
			if (!func_29() && !func_9())
			{
				if (!func_234())
				{
					if (func_10(&(Local_181.f_182)))
					{
						iVar1 = Global_262145.f_24147;
						if (func_9())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_7(&(Local_181.f_182), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_182)));
							Local_181.f_19 = (iVar2 / iVar1);
						}
						else
						{
							if (func_25(Local_181.f_123))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_181.f_123, NETWORK::NET_TO_OBJ(Local_181.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_181.f_19 = 100;
							func_6(&(Local_181.f_182));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_42))
							{
								AUDIO::STOP_SOUND(Local_181.f_42);
								AUDIO::RELEASE_SOUND_ID(Local_181.f_42);
								Local_181.f_42 = -1;
							}
						}
					}
					if (!PAD::_IS_USING_KEYBOARD(0))
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 209);
					}
					else
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 203);
					}
					if ((((bVar3 && Local_181.f_19 == 100) && !func_243()) && !func_60()) && func_143())
					{
						fVar0 = 120f;
						if (func_9())
						{
							fVar0 = 110f;
						}
						else if (func_17())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_181[1]) != 0f)
						{
							func_335(1);
						}
						else
						{
							func_335(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, 0);
						func_8(&(Local_181.f_180), 0, 0);
						func_334(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_41))
						{
							Local_181.f_41 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_41, "HUD_Boost_Loop", Local_181.f_119, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_9())
					{
						fVar0 = 115f;
					}
					else if (func_17())
					{
						fVar0 = 49f;
					}
					if (CAM::DOES_CAM_EXIST(Local_181.f_131))
					{
						if (!CAM::IS_CAM_SHAKING(Local_181.f_131))
						{
							CAM::SHAKE_CAM(Local_181.f_131, "DRONE_BOOST_SHAKE", 1065353216);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_181.f_131, 0.15f);
						}
					}
					if (func_10(&(Local_181.f_180)))
					{
						if (func_7(&(Local_181.f_180), Global_262145.f_24146, 0))
						{
							Local_181.f_19 = 0;
							func_335(0);
							func_334(0);
							func_6(&(Local_181.f_182));
							func_8(&(Local_181.f_182), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_181.f_131, 1);
							PAD::STOP_PAD_SHAKE(0);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_6(&(Local_181.f_180));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_41))
							{
								AUDIO::STOP_SOUND(Local_181.f_41);
								AUDIO::RELEASE_SOUND_ID(Local_181.f_41);
								Local_181.f_41 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_42))
							{
								Local_181.f_42 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_42, "HUD_Boost_Recharge_Loop", Local_181.f_119, 1);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_262145.f_24146) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_180))));
							Local_181.f_19 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_PAD_SHAKE(0, Global_262145.f_24146, 255);
						}
					}
				}
			}
			Var5 = { Local_181.f_112 };
			Var8 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_181.f_121), 2) };
			Var8 = { (Var8.x + 180f), (-Var8.y + 180f), Var8.z };
			CAM::SET_CAM_ROT(Local_181.f_131, Var8, 2);
			if (MISC::IS_BIT_SET(Local_181.f_5, 1) || func_176())
			{
				return;
			}
			Var11 = { func_327(func_328()) };
			Var14 = { func_327(func_326(func_328())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar17, 1, 0);
			if (!func_333())
			{
				if (Local_181.f_9 == 2 || (Var5.z - fVar17) < 2f)
				{
					fVar18 = 24f;
					if (Local_181[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 207, 1);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f || Local_181[1] != 0)
					{
						if ((Var5.z - fVar17) < 0.5f || PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
						{
							fVar18 = 24f;
						}
						else
						{
							fVar18 = 10f;
						}
					}
					else
					{
						fVar18 = 3f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, fVar18, 0, 1, 1, 0);
				}
			}
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				if (Local_181[2] >= 127)
				{
					Local_181[2] = 127;
				}
				else if (Local_181[2] <= -127)
				{
					Local_181[2] = -127;
				}
				if (Local_181[0] >= 127)
				{
					Local_181[0] = 127;
				}
				else if (Local_181[0] <= -127)
				{
					Local_181[0] = -127;
				}
			}
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
				{
					iVar19 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
				{
					iVar20 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
				{
					iVar19 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
				{
					iVar20 = 1;
				}
			}
			if (((iVar19 && func_332()) && !func_60()) || (func_234() && !func_233()))
			{
				fVar23 = Local_181.f_82;
				if (func_142())
				{
					fVar23 = 5f;
				}
				if (func_29() || func_9())
				{
					fVar22 = 10f;
				}
				if (func_234() && !func_233())
				{
					if (!PAD::_IS_USING_KEYBOARD(0))
					{
						fVar21 = ((fVar23 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
					}
					else
					{
						fVar21 = ((fVar23 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
					}
				}
				else if (!PAD::_IS_USING_KEYBOARD(0))
				{
					fVar21 = ((fVar23 + fVar22) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
				}
				else
				{
					fVar21 = ((fVar23 + fVar22) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
				}
				Var24 = { Var14 * Vector(fVar21, fVar21, fVar21) };
				if (Var24.z > 149f)
				{
					Var24.z = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var24, 0, 1, 1, 0);
			}
			else if (((iVar20 && !func_60()) && func_332()) && !func_243())
			{
				if (func_29() || func_9())
				{
					fVar28 = 10f;
				}
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					fVar27 = ((Local_181.f_82 + fVar28) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207)));
				}
				else
				{
					fVar27 = ((Local_181.f_82 + fVar28) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210)));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var14 * Vector(-fVar27, -fVar27, -fVar27), 0, 1, 1, 0);
			}
			if (((Local_181[1] > 0 && !func_234()) && !func_243()) && !func_60())
			{
				fVar31 = func_331();
				fVar29 = (Local_181.f_82 / (127f / IntToFloat(Local_181[1])));
				fVar30 = (fVar31 / (127f / IntToFloat(Local_181[1])));
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var11 * Vector(fVar29, fVar29, fVar29), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, fVar30, 0, 1, 1, 0);
			}
			else if ((((Local_181[1] < 0 && !func_234()) && !func_243()) && !func_60()) || (func_234() && func_233()))
			{
				if (func_234() && func_233())
				{
					fVar34 = 50f;
					if (func_9())
					{
						fVar32 = (Local_181.f_82 / -1f);
					}
					else
					{
						fVar32 = ((Local_181.f_82 + fVar0) / -1f);
					}
					fVar33 = (fVar34 / -1f);
				}
				else
				{
					fVar34 = func_331();
					if (func_9())
					{
						fVar32 = (Local_181.f_82 / (127f / IntToFloat(Local_181[1])));
					}
					else
					{
						fVar32 = ((Local_181.f_82 + fVar0) / (127f / IntToFloat(Local_181[1])));
					}
					fVar33 = (fVar34 / (127f / IntToFloat(Local_181[1])));
				}
				if (func_9())
				{
					if (!func_233())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, -fVar33, 0, 1, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var11 * Vector(fVar32, fVar32, fVar32), 0, 1, 1, 0);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, -fVar33, 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var11 * Vector(fVar32, fVar32, fVar32), 0, 1, 1, 0);
				}
			}
			Var35 = { func_325(Var11, Var14) };
			if ((!func_234() && !func_243()) && !func_60())
			{
				if (Local_181[0] > 0)
				{
					fVar38 = -(Local_181.f_82 / (127f / IntToFloat(Local_181[0])));
					fVar39 = (8f / (127f / IntToFloat(Local_181[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var35 * Vector(fVar38, fVar38, fVar38), 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, fVar39, 0, 1, 1, 0);
				}
				else if (Local_181[0] < 0)
				{
					fVar40 = -(Local_181.f_82 / (127f / IntToFloat(Local_181[0])));
					fVar41 = (8f / (127f / IntToFloat(Local_181[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, Var35 * Vector(fVar40, fVar40, fVar40), 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_181.f_121), 0, 0f, 0f, -fVar41, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

float func_331()
{
	if (func_9() || func_29())
	{
		return 40f;
	}
	else if (func_17())
	{
		return 30f;
	}
	else if (func_142())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_332()
{
	if (func_243())
	{
		return 0;
	}
	if (func_234() && !func_233())
	{
		return 0;
	}
	return 1;
}

bool func_333()
{
	return MISC::IS_BIT_SET(Global_1687687, 2);
}

void func_334(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_181.f_5, 21))
		{
			MISC::SET_BIT(&(Local_181.f_5), 21);
		}
	}
	else if (MISC::IS_BIT_SET(Local_181.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_181.f_5), 21);
	}
}

void func_335(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_181.f_5, 22))
		{
			MISC::SET_BIT(&(Local_181.f_5), 22);
		}
	}
	else if (MISC::IS_BIT_SET(Local_181.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_181.f_5), 22);
	}
}

void func_336()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_181.f_121), 0))
		{
			if ((func_9() || func_29()) || func_27())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_181.f_112;
				fVar1 = Local_181.f_112.f_1;
			}
			HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
			HUD::_0xA17784FCA9548D15(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1687687.f_24) && !func_27())
			{
				if (!MISC::IS_BIT_SET(Local_181.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_337()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_40) && Local_181.f_40 == -1)
		{
			Local_181.f_40 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_40, "HUD_Loop", Local_181.f_119, 1);
		}
	}
}

void func_338()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_30))
		{
			Local_181.f_30 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_181.f_30, "Flight_Loop", NETWORK::NET_TO_OBJ(Local_181.f_121), Local_181.f_119, 0, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_181.f_30, "DroneRotationalSpeed", Local_181.f_92);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_181.f_30, "DroneRotationalSpeed", Local_181.f_92);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_39))
		{
			AUDIO::RELEASE_SOUND_ID(Local_181.f_39);
			Local_181.f_39 = -1;
		}
	}
}

void func_339()
{
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, 1);
	}
}

void func_340()
{
	if (func_9())
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_181.f_44);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121) && func_15(iVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0))
			{
				if (func_341(NETWORK::NET_TO_OBJ(Local_181.f_121), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_24743, 1))
				{
					if (!func_190(PLAYER::PLAYER_ID(), iVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							MISC::SET_BIT(&(Local_181.f_5), 11);
							return;
						}
					}
				}
			}
		}
		MISC::CLEAR_BIT(&(Local_181.f_5), 11);
	}
}

bool func_341(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_342()
{
	if (func_25(func_88()))
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_181.f_44);
		if (PLAYER::PLAYER_ID() != iVar0)
		{
			if (func_15(iVar0, 1, 1))
			{
				if (MISC::IS_BIT_SET(Local_181.f_7, Local_181.f_44))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
					{
						MISC::CLEAR_BIT(&(Local_181.f_7), Local_181.f_44);
					}
				}
				if (SYSTEM::VDIST2(func_214(iVar0), Local_181.f_112) < 12100f)
				{
					if (!MISC::IS_BIT_SET(Local_181.f_7, Local_181.f_44) && func_344(iVar0))
					{
						func_343(iVar0, 1);
						NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_181.f_121, iVar0, 1);
						MISC::SET_BIT(&(Local_181.f_7), Local_181.f_44);
					}
				}
				else if (SYSTEM::VDIST2(func_214(iVar0), Local_181.f_112) > 14400f)
				{
					if (MISC::IS_BIT_SET(Local_181.f_7, Local_181.f_44))
					{
						func_343(iVar0, 0);
						NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_181.f_121, iVar0, 0);
						MISC::CLEAR_BIT(&(Local_181.f_7), Local_181.f_44);
					}
				}
			}
		}
	}
}

void func_343(int iParam0, int iParam1)
{
	Var0.x = -1712801863;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.z = iParam1;
	iVar3 = func_173(iParam0);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

int func_344(int iParam0)
{
	if (func_346(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_345(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_347()
{
	if ((func_27() || func_9()) || func_29())
	{
		iVar0 = 1000;
		if (func_9() || func_29())
		{
			iVar0 = 7000;
		}
		if (!MISC::IS_BIT_SET(Local_181.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_181.f_131) && CAM::IS_CAM_RENDERING(Local_181.f_131))
			{
				if (func_25(func_88()))
				{
					if (func_7(&(Local_181.f_198), iVar0, 0))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_88(), 1, 0);
						ENTITY::SET_ENTITY_COLLISION(func_88(), true, 0);
						MISC::SET_BIT(&(Local_181.f_5), 29);
					}
				}
			}
		}
	}
}

void func_348()
{
	if (func_355() || !func_18())
	{
		return;
	}
	switch (Local_181.f_79)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_122))
			{
				iVar0 = -1211202509;
				if (func_161(iVar0))
				{
					if (func_74(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Local_181.f_6, 4))
						{
							NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_181.f_6), 4);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (func_354(&(Local_181.f_122), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 1, 1, 0, 0, 0, 1))
							{
								NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_181.f_122, PLAYER::PLAYER_ID(), 1);
								iVar1 = PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_181.f_122), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_181.f_79 = 1;
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
			{
				func_311(0, 0, 0);
				Local_181.f_79 = 2;
			}
			break;
		
		case 2:
			if (func_353(0, "CREATE"))
			{
				func_338();
				if (func_352(Local_181.f_122))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_181.f_122)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_181.f_122), true, 0);
					}
				}
				if (func_352(Local_181.f_121))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_181.f_121)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_181.f_121), true, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_181.f_125, false, 0);
					}
				}
			}
			if (func_350(1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_181.f_125, NETWORK::NET_TO_OBJ(Local_181.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(Local_181.f_125, false, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_181.f_121));
				unk_0xD1A00B3C86CDAAC5(NETWORK::NET_TO_OBJ(Local_181.f_121));
				func_250();
				func_108();
				func_219(1);
				func_237();
				func_330();
				func_349();
				if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_39))
				{
					Local_181.f_39 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_39, "HUD_Startup", Local_181.f_119, 1);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
				Local_181.f_135 = NETWORK::GET_NETWORK_TIME();
				func_356(3);
				func_311(1, 1, 0);
				Local_181.f_79 = 3;
			}
			break;
		
		case 3:
			if (func_350(0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_311(2, 0, 0);
						Local_181.f_172 = 2;
						break;
					
					case 1:
						func_311(3, 0, 0);
						Local_181.f_172 = 3;
						break;
					
					case 2:
						func_311(4, 0, 0);
						Local_181.f_172 = 4;
						break;
				}
				Local_181.f_79 = 4;
			}
			break;
		
		case 4:
			if (func_350(0))
			{
				func_311(1, 1, 0);
				Local_181.f_79 = 3;
			}
			break;
	}
}

void func_349()
{
	if (func_119() || func_18())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_9())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_29())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_27())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

int func_350(bool bParam0)
{
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_25(iVar0))
	{
		fVar1 = func_351();
		iVar2 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_181.f_78);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_313(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_351()
{
	return 0.95f;
}

int func_352(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_353(int iParam0, char* sParam1)
{
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_181.f_78);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_181.f_122), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_181.f_121), MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_355()
{
	return MISC::IS_BIT_SET(Global_1687687, 13);
}

void func_356(int iParam0)
{
	if (Local_181.f_170 != iParam0)
	{
		Local_181.f_170 = iParam0;
	}
}

void func_357(bool bParam0)
{
	if (bParam0)
	{
		if (!func_355())
		{
			MISC::SET_BIT(&Global_1687687, 13);
		}
	}
	else if (func_355())
	{
		MISC::CLEAR_BIT(&Global_1687687, 13);
	}
}

void func_358()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			if (!CAM::DOES_CAM_EXIST(Local_181.f_131) && MISC::IS_BIT_SET(Local_181.f_5, 0))
			{
				if (func_368())
				{
					if (func_315())
					{
						func_277(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_27())
					{
						func_277(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!func_367())
					{
						HUD::_THEFEED_DISABLE();
					}
					else
					{
						HUD::_0x15CFA549788D35EF();
					}
					Local_181.f_131 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_FOV(Local_181.f_131, Local_181.f_88);
					CAM::SET_CAM_NEAR_CLIP(Local_181.f_131, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_181.f_131, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_27())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					Var0 = { 0f, -0.038f, -0.004f };
					if (func_9() || func_29())
					{
						Var0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_27())
					{
						Var0 = { 0f, -0.9f, 0f };
					}
					else if (func_17() || func_142())
					{
						Var0 = { 0f, -0.038f, -0.006f };
					}
					CAM::ATTACH_CAM_TO_ENTITY(Local_181.f_131, NETWORK::NET_TO_OBJ(Local_181.f_121), Var0, 1);
					if (func_27())
					{
						CAM::SET_CAM_ROT(Local_181.f_131, func_366() - Vector(0f, -180f, 180f), 2);
					}
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_181.f_112, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_181.f_112, CAM::GET_CAM_ROT(Local_181.f_131, 2));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_181.f_121), 0);
					if (!func_315())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					if (!func_18())
					{
						func_349();
						if (AUDIO::HAS_SOUND_FINISHED(Local_181.f_39))
						{
							Local_181.f_39 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_181.f_39, "HUD_Startup", Local_181.f_119, 1);
						}
						func_250();
						if (func_27())
						{
							func_84();
						}
						else
						{
							func_108();
						}
						func_219(1);
						func_237();
						func_330();
						CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
						Local_181.f_135 = NETWORK::GET_NETWORK_TIME();
					}
					func_363(1);
					func_362(1);
					func_360(158);
					MISC::SET_BIT(&(Local_83[PLAYER::PLAYER_ID()]), 0);
					if (!func_18())
					{
						func_356(3);
					}
					else
					{
						Local_181.f_115 = { func_214(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_181.f_115, &(Local_181.f_115.f_2), 0, 0);
						Local_181.f_81 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						func_359();
						Local_181.f_115 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_181.f_115, Local_181.f_81, -0.0695723f, 0.177497f, 0f) };
						func_356(2);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_181.f_131))
				{
				}
				if (!MISC::IS_BIT_SET(Local_181.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
		}
	}
}

void func_359()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (!(iVar0 == -1569615261 || iVar0 == 966099553))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
		}
	}
}

void func_360(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_361()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_361()
{
	iVar0 = 0;
	return iVar0;
}

void func_362(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334, 26))
		{
			MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334), 26);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334, 26))
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334), 26);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (!func_58())
		{
			MISC::SET_BIT(&Global_1687687, 5);
		}
	}
	else
	{
		if (func_58())
		{
			MISC::CLEAR_BIT(&Global_1687687, 5);
		}
		func_364(0);
	}
}

void func_364(bool bParam0)
{
	if (bParam0)
	{
		if (!func_365())
		{
			MISC::SET_BIT(&Global_1687687, 12);
		}
	}
	else if (func_365())
	{
		MISC::CLEAR_BIT(&Global_1687687, 12);
	}
}

bool func_365()
{
	return MISC::IS_BIT_SET(Global_1687687, 12);
}

Vector3 func_366()
{
	return Global_1687687.f_16;
}

bool func_367()
{
	return MISC::IS_BIT_SET(Global_1687687, 10);
}

int func_368()
{
	if (func_30() && !func_32())
	{
		return 1;
	}
	if (func_371())
	{
		return 1;
	}
	if (func_370())
	{
		return 1;
	}
	if (func_32() && func_369())
	{
		return 1;
	}
	if (!func_53(PLAYER::PLAYER_ID(), 0) && !func_273())
	{
		return 1;
	}
	return 0;
}

int func_369()
{
	if (Global_1319110 != -1 || Global_1319116 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 0;
}

int func_370()
{
	return 0;
}

int func_371()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (func_32() || func_372())
	{
		return 0;
	}
	if (func_370())
	{
		return 0;
	}
	return 1;
}

int func_372()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_373()
{
	iVar0 = 1131912276;
	if (func_161(Local_181.f_169) && func_161(iVar0))
	{
		if (!MISC::IS_BIT_SET(Local_181.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
			{
				if (!func_315())
				{
					if (func_119())
					{
						if (func_25(func_321()))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(func_321(), 1) };
						}
					}
					else
					{
						Var1 = { Local_181.f_100 };
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_277(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!MISC::IS_BIT_SET(Local_181.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_181.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!MISC::IS_BIT_SET(Local_181.f_5, 19))
						{
							if (func_378())
							{
								if (func_375())
								{
									MISC::SET_BIT(&(Local_181.f_5), 19);
								}
							}
							else
							{
								if (!func_240(func_374()))
								{
									Local_181.f_100 = { func_374() };
								}
								MISC::SET_BIT(&(Local_181.f_5), 19);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(Local_181.f_5, 19) || func_315())
				{
					if (!MISC::IS_BIT_SET(Local_181.f_5, 20))
					{
						Local_181.f_125 = VEHICLE::CREATE_VEHICLE(iVar0, Local_181.f_100, 0f, 0, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_181.f_125, 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_181.f_125, Local_181.f_100, 0, 0, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_181.f_125, 1);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_181.f_125, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_181.f_125, false, 0);
						MISC::SET_BIT(&(Local_181.f_5), 20);
					}
					else if (func_74(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Local_181.f_5, 30))
						{
							NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_181.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = false;
							if (func_18())
							{
								Local_181.f_115 = { func_214(PLAYER::PLAYER_ID()) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_181.f_115, &(Local_181.f_115.f_2), 0, 0);
								Local_181.f_100 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_181.f_120, "ENTER", Local_181.f_115, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0, 2) };
								bVar4 = true;
							}
							if (func_354(&(Local_181.f_121), Local_181.f_169, Local_181.f_100, 0, 1, 1, 1, 1, 0, bVar4))
							{
								Global_1687687.f_20 = NETWORK::NET_TO_OBJ(Local_181.f_121);
								if (func_119())
								{
									if (func_25(func_321()))
									{
										ENTITY::SET_ENTITY_ROTATION(func_88(), ENTITY::GET_ENTITY_ROTATION(func_321(), 2), 2, 1);
										fVar5 = (ENTITY::GET_ENTITY_HEADING(func_321()) + 180f);
									}
								}
								Global_2425662[PLAYER::PLAYER_ID()].f_409 = { Local_181.f_100 };
								Global_2425662[PLAYER::PLAYER_ID()].f_412 = fVar5;
								Local_83[PLAYER::PLAYER_ID()].f_2 = Local_181.f_121;
								NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_181.f_121, PLAYER::PLAYER_ID(), 1);
								INTERIOR::_0x38C1CB1CB119A016(NETWORK::NET_TO_ENT(Local_181.f_121), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_181.f_121), 1, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_88(), Local_181.f_100, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(func_88(), fVar5);
								NETWORK::_0x4BA166079D658ED4(func_88(), 1);
								if (!func_240(func_366()))
								{
									ENTITY::SET_ENTITY_ROTATION(func_88(), func_366(), 2, 1);
								}
								if (func_27())
								{
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_88(), 0, 0);
								}
								NETWORK::_NETWORK_SET_NETWORK_ID_DYNAMIC(Local_181.f_121, 1);
								if (func_147(PLAYER::PLAYER_ID()))
								{
									ENTITY::SET_ENTITY_HEALTH(func_88(), Global_262145.f_24148 * 5, 0);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(func_88(), Global_262145.f_24148, 0);
								}
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_181.f_121), 1);
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_181.f_121, 0);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_181.f_121), 1);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_181.f_100, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_181.f_121), 1), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_181.f_121), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_181.f_169);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_181.f_121), 0);
				if (func_25(Local_181.f_125) && func_25(NETWORK::NET_TO_ENT(Local_181.f_121)))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_181.f_125, NETWORK::NET_TO_OBJ(Local_181.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					MISC::SET_BIT(&(Local_181.f_5), 0);
				}
			}
		}
	}
}

Vector3 func_374()
{
	return Global_1687687.f_13;
}

int func_375()
{
	if (Local_181.f_15 == 0)
	{
		if (!MISC::IS_BIT_SET(Local_181.f_5, 14))
		{
			if ((!func_147(PLAYER::PLAYER_ID()) && func_119()) && func_25(func_321()))
			{
				Local_181.f_100 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_321(), 1), ENTITY::GET_ENTITY_HEADING(func_321()), -0.7f, 1.6f, 4f) };
				MISC::SET_BIT(&(Local_181.f_5), 14);
			}
			else
			{
				if (func_119() && func_25(func_321()))
				{
					Local_181.f_100 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_321(), 1), ENTITY::GET_ENTITY_HEADING(func_321()), -0.7f, 1.6f, 4f) };
				}
				Local_181.f_100 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_181.f_100 - 1.5f), (Local_181.f_100 + 1.5f));
				Local_181.f_100.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_181.f_100.f_1 - 1.5f), (Local_181.f_100.f_1 + 1.5f));
				Local_181.f_100.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_181.f_100.f_2 + 0.5f), (Local_181.f_100.f_2 + 1.5f));
				if (!func_377(Local_181.f_100))
				{
					MISC::SET_BIT(&(Local_181.f_5), 14);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Local_181.f_5, 15))
		{
			Local_181.f_100 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_181.f_100 - 1.5f), (Local_181.f_100 + 1.5f));
			Local_181.f_100.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_181.f_100.f_1 - 1.5f), (Local_181.f_100.f_1 + 1.5f));
			Local_181.f_100.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_181.f_100.f_2 + 0.5f), (Local_181.f_100.f_2 + 1.5f));
			if (!func_377(Local_181.f_100))
			{
				MISC::CLEAR_BIT(&(Local_181.f_5), 15);
			}
		}
		func_376(Local_181.f_100);
	}
	else if (Local_181.f_15 == 1 && !func_377(Local_181.f_100))
	{
		return 1;
	}
	else
	{
		Local_181.f_15 = 0;
		MISC::SET_BIT(&(Local_181.f_5), 15);
	}
	return 0;
}

void func_376(struct<3> Param0)
{
	switch (Local_181.f_14)
	{
		case 0:
			if (func_119())
			{
				if (func_25(func_321()))
				{
					uVar0 = func_321();
				}
			}
			if (func_9() || func_29())
			{
				fVar1 = func_196(Local_181.f_169);
			}
			else
			{
				fVar1 = (func_196(Local_181.f_169) * 11f);
			}
			Local_181.f_130 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, fVar1, 511, uVar0, 4);
			if (Local_181.f_130 != 0)
			{
				Local_181.f_14 = 1;
			}
			break;
		
		case 1:
			iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_181.f_130, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_181.f_15 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_181.f_15 = 2;
					Local_181.f_130 = 0;
					Local_181.f_14 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_181.f_14 = 0;
			}
			break;
	}
}

int func_377(struct<3> Param0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_378()
{
	if (func_119())
	{
		return 1;
	}
	if (func_17() && !func_18())
	{
		return 1;
	}
	return 0;
}

int func_379()
{
	if (func_273())
	{
		return Global_1676377.f_475 == 0;
	}
	return 0;
}

void func_380()
{
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_181.f_103 = { func_241(&Local_181) };
		if (!func_240(func_374()))
		{
			Local_181.f_100 = { func_374() };
		}
		else
		{
			Local_181.f_100 = { func_214(PLAYER::PLAYER_ID()) };
			Local_181.f_100 = { Local_181.f_100, Local_181.f_100.f_1, (Local_181.f_100.f_2 + 1.5f) };
		}
		if (func_53(PLAYER::PLAYER_ID(), 0))
		{
			func_424(1);
		}
		if (func_53(PLAYER::PLAYER_ID(), 0))
		{
			func_420();
		}
		else if (((func_418(PLAYER::PLAYER_ID()) == 2 || func_418(PLAYER::PLAYER_ID()) == 1) && !MISC::IS_BIT_SET(Global_1695469, 6)) && !MISC::IS_BIT_SET(Global_1695470, 0))
		{
			if (MISC::IS_BIT_SET(Global_2513726, 0))
			{
				func_417(1);
				func_409(0, 0);
				func_408();
				func_364(1);
				func_356(1);
			}
		}
		else if ((func_31() && func_404()) && !MISC::IS_BIT_SET(Global_1695469, 6))
		{
			func_382();
		}
		else if (MISC::IS_BIT_SET(Global_1695469, 6) && MISC::IS_BIT_SET(Global_1695470, 0))
		{
			func_409(0, 0);
			func_364(1);
			func_356(1);
		}
		else if (func_18() && !func_381())
		{
			HUD::CLEAR_HELP(1);
			func_115("PIM_DRONAMOS", -1);
			func_277(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_356(6);
		}
		else if (func_240(Local_181.f_97))
		{
			Local_181.f_118 = 0;
			func_364(1);
			func_356(1);
		}
	}
}

bool func_381()
{
	return MISC::IS_BIT_SET(Global_1687687, 23);
}

void func_382()
{
	if (!func_397())
	{
		if ((((((func_396() || func_395()) && !Global_1662006) && func_404()) && !MISC::IS_BIT_SET(Global_2513614, 6)) && Global_1312792) && !(func_396() && Global_262145.f_25854))
		{
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 224) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 19))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_25856, 0, 0, 1, -1, 0) || MISC::IS_BIT_SET(Global_2513614, 2))
				{
					MISC::SET_BIT(&Global_2513614, 0);
					func_409(0, 0);
					func_364(1);
					func_356(1);
					func_391();
					func_389(73, -1);
					func_386();
					Var0 = { func_385() };
					func_383(Var0, 0f, 0f, 0f);
					if (func_396())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(uVar3, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!MISC::IS_BIT_SET(Global_2513614, 4))
				{
					MISC::SET_BIT(&Global_2513614, 4);
				}
			}
		}
	}
}

void func_383(struct<3> Param0, struct<3> Param3)
{
	if (!func_384(Global_1687687.f_13, Param0, 0))
	{
		Global_1687687.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1687687.f_16 = { Param3 };
	}
}

bool func_384(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

Vector3 func_385()
{
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_226026.f_1 == 3 || Global_4456448.f_226026.f_1 == 3) || Global_4456448.f_226026.f_1 == 3)
	{
		Var3.y = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_386()
{
	iVar0 = func_387(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_339.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_339.f_3), 13);
	}
}

int func_387(int iParam0, int iParam1)
{
	uVar0 = Global_2585280[iParam0][func_388(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_388(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

void func_389(int iParam0, int iParam1)
{
	iVar0 = func_387(iParam0, func_388(iParam1));
	iVar0++;
	func_390(iParam0, iVar0, iParam1);
}

void func_390(int iParam0, int iParam1, var uParam2)
{
	iVar0 = Global_2585280[iParam0][func_388(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

void func_391()
{
	func_392(1, 7982);
}

void func_392(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_394(iParam1, -1, 0);
	func_393(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_388(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_388(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_395()
{
	return Global_2460708;
}

int func_396()
{
	if (Global_2460707 >= 0 && Global_2460707 < 10)
	{
		return 1;
	}
	return 0;
}

int func_397()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_403())
	{
		return 1;
	}
	if (func_402())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_273())
	{
		return 1;
	}
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		if (func_37(Global_1590382))
		{
			return 1;
		}
	}
	if (func_119())
	{
		if (func_401())
		{
			if (func_400())
			{
				return 1;
			}
			if (MISC::IS_BIT_SET(Local_181.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_179(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_59(0))
	{
		return 1;
	}
	if (func_288())
	{
		return 1;
	}
	if (func_119())
	{
		if (func_30())
		{
			if (func_15(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_136(PLAYER::PLAYER_PED_ID(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_399())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_398(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (Global_262145.f_24158)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_181.f_5, 27))
	{
		return 1;
	}
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		if (func_25(func_321()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_321(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_321(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_321(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319114)
	{
		return 1;
	}
	if (Global_2514787)
	{
		return 1;
	}
	if (Global_2514785)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0, int iParam1)
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_400()
{
	if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8 != func_16() && PLAYER::PLAYER_ID() != func_16())
	{
		return MISC::IS_BIT_SET(Global_1590535[Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8].f_274.f_334, 20);
	}
	return 0;
}

int func_401()
{
	if (func_147(PLAYER::PLAYER_ID()) && Global_1687687.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_402()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_403()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_404()
{
	if (func_407() && !func_406())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969031.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((MISC::IS_BIT_SET(Global_4456448.f_271[iVar0].f_6531[iVar1], 23) && MISC::IS_BIT_SET(Global_4456448.f_271[iVar0].f_6531[iVar1], 24)) && MISC::IS_BIT_SET(Global_4456448.f_271[iVar0].f_6531[iVar1], 25)) && MISC::IS_BIT_SET(Global_4456448.f_271[iVar0].f_6531[iVar1], 26)) && MISC::IS_BIT_SET(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!MISC::IS_BIT_SET(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_395() || func_405(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_405(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_39.f_18, 14);
}

int func_406()
{
	if (Global_4456448.f_197286 == 1 || Global_4456448.f_197286 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_407()
{
	return MISC::IS_BIT_SET(Global_4456448.f_226020, 12);
}

void func_408()
{
	MISC::CLEAR_BIT(&Global_2513726, 0);
}

void func_409(bool bParam0, bool bParam1)
{
	Local_181.f_82 = Global_262145.f_24151;
	if (func_29() || func_9())
	{
		Local_181.f_82 = (Local_181.f_82 * 4.5f);
	}
	else if (func_27())
	{
		Local_181.f_82 = 100f;
	}
	else if (func_17())
	{
		Local_181.f_82 = 100f;
	}
	else if (func_142())
	{
		Local_181.f_82 = 10f;
	}
	Local_181.f_93 = 40f;
	if (func_17())
	{
		Local_181.f_93 = 70f;
	}
	else if (func_142())
	{
		Local_181.f_93 = 35f;
	}
	if (func_29())
	{
		Local_181.f_169 = -388213579;
	}
	else if (func_9())
	{
		Local_181.f_169 = 442185650;
	}
	else if (func_27())
	{
		Local_181.f_169 = 1270560417;
		func_416(1);
	}
	else if (func_17())
	{
		if (!func_18())
		{
			iVar0 = func_415(PLAYER::PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_181.f_169 = -1324942671;
					break;
				
				case 38:
					Local_181.f_169 = 691432262;
					break;
				
				case 39:
					Local_181.f_169 = -1766406639;
					break;
				
				case 40:
					Local_181.f_169 = -2073550476;
					break;
			}
		}
		else
		{
			Local_181.f_169 = 430841677;
		}
	}
	else if (func_142())
	{
		Local_181.f_169 = 430841677;
	}
	else
	{
		Local_181.f_169 = -1904523353;
	}
	if (bParam1)
	{
		Local_181.f_100 = { Local_181.f_106 };
	}
	Global_1687687.f_1 = 1500;
	func_414();
	func_413(1);
	func_412(1);
	if (func_29() || func_27())
	{
		func_411(1);
	}
	else if (func_9())
	{
		func_411(0);
	}
	if (func_18())
	{
		Local_181.f_120 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		STREAMING::REQUEST_ANIM_DICT(Local_181.f_120);
	}
	if (func_9())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (func_18())
	{
		func_410(Global_262145.f_28000);
	}
	else if (func_17() && !func_18())
	{
		func_410(Global_262145.f_28001);
	}
	else if (!func_119() && !func_315())
	{
		func_410(200f);
	}
	func_68(Global_1575000);
	if (bParam0)
	{
	}
}

void func_410(float fParam0)
{
	if (Global_1687687.f_8 != fParam0)
	{
		Global_1687687.f_8 = fParam0;
	}
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		if (!func_175())
		{
			MISC::SET_BIT(&Global_1687687, 8);
		}
	}
	else if (func_175())
	{
		MISC::CLEAR_BIT(&Global_1687687, 8);
	}
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_333())
		{
			MISC::SET_BIT(&Global_1687687, 2);
		}
	}
	else if (func_333())
	{
		MISC::CLEAR_BIT(&Global_1687687, 2);
	}
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		if (!func_229())
		{
			MISC::SET_BIT(&Global_1687687, 4);
		}
	}
	else if (func_229())
	{
		MISC::CLEAR_BIT(&Global_1687687, 4);
	}
}

void func_414()
{
	if (!Local_181.f_118)
	{
		Local_181.f_17 = 100;
	}
	if (func_142())
	{
		Local_181.f_23 = 100;
	}
	Local_181.f_18 = 0;
	Local_181.f_19 = 100;
	Local_181.f_88 = 90f;
	Local_181.f_91 = 90f;
	if (!func_27())
	{
		Local_181.f_132 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
	}
	else
	{
		Local_181.f_132 = func_89();
	}
	if (func_29())
	{
		Local_181.f_119 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_9())
	{
		Local_181.f_119 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_27())
	{
		Local_181.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_181.f_119 = "DLC_BTL_Drone_Sounds";
	}
}

int func_415(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_2425662[iParam0].f_416.f_1;
	}
	return -1;
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184())
		{
			MISC::SET_BIT(&Global_1687687, 15);
		}
	}
	else if (func_184())
	{
		MISC::CLEAR_BIT(&Global_1687687, 15);
	}
}

void func_417(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687.f_2, 4))
		{
			Global_1687687.f_2 = 0;
			MISC::SET_BIT(&(Global_1687687.f_2), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1687687.f_2), 4);
	}
}

int func_418(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_419())
	{
		return Global_2513631.f_1;
	}
	return Global_2417897.f_1333[iParam0].f_1;
}

int func_419()
{
	if (((Global_2513634 != 0 && Global_2513634 == Global_2513635) && Global_2513623 != 3) && Global_2513623 != 1)
	{
		return 0;
	}
	return 1;
}

void func_420()
{
	if (!func_397())
	{
		if (func_32())
		{
			if (func_371())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_423("DRONE_TRIG");
				}
			}
			else if (func_422("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_32() || func_370())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
				{
					func_364(1);
					func_356(1);
					HUD::CLEAR_HELP(1);
				}
			}
			else if (func_422("DRONE_TRIG"))
			{
				if ((PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					Local_181.f_118 = 0;
					func_364(1);
					func_356(1);
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else if ((func_30() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_371())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_423("DRONE_TRIG");
			}
			if (func_422("DRONE_TRIG"))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51))
				{
					Local_181.f_118 = 0;
					func_364(1);
					func_356(1);
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else if (func_422("DRONE_TRIG"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_421() || func_32())
		{
			if (func_422("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (func_422("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(1);
	}
}

int func_421()
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(PLAYER::PLAYER_PED_ID(), 2106541073))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

bool func_422(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_423(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_424(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687.f_2, 1))
		{
			Global_1687687.f_2 = 0;
			MISC::SET_BIT(&(Global_1687687.f_2), 1);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1687687.f_2), 1);
	}
}

void func_425()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_181.f_121), 0))
		{
			Local_181.f_112 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_181.f_121), 1) };
			Local_181.f_87 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_181.f_121));
			if (!func_10(&(Local_181.f_190)))
			{
				func_8(&(Local_181.f_190), 0, 0);
			}
			else if (func_7(&(Local_181.f_190), 1000, 0))
			{
				if (!func_384(Global_2425662[PLAYER::PLAYER_ID()].f_409, Local_181.f_112, 0))
				{
					Global_2425662[PLAYER::PLAYER_ID()].f_409 = { Local_181.f_112 };
				}
				if (Global_2425662[PLAYER::PLAYER_ID()].f_412 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_181.f_121)))
				{
					Global_2425662[PLAYER::PLAYER_ID()].f_412 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_181.f_121));
				}
				func_6(&(Local_181.f_190));
			}
		}
	}
	if (func_25(Local_181.f_125))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_181.f_125))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_181.f_125, false, 0);
		}
	}
	if (func_25(Local_181.f_123))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_181.f_123))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_181.f_123, false, 0);
		}
	}
}

void func_426()
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_427(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_427(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0) && NETWORK::NET_TO_ENT(Local_181.f_121) == Var0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_181.f_25 = 2;
						}
					}
				}
			}
		}
	}
}

void func_428()
{
	if (func_434(3))
	{
		if (((func_119() || func_9()) || func_29()) || (func_17() && !func_18()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_277(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 37, 0);
		if (!func_27())
		{
			func_429();
			PAD::ENABLE_CONTROL_ACTION(0, 19, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 166, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 167, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 168, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 169, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 218, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 219, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 220, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 221, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 209, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 210, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 51, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 200, 1);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 235, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 234, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 1, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 174, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 175, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 174, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 175, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 245, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 246, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 247, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 248, 1);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 189, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 217, 1);
			}
		}
	}
}

void func_429()
{
	func_430();
}

void func_430()
{
	iVar0 = 0;
	while (iVar0 < 361)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, 1);
		iVar0++;
	}
}

void func_431()
{
	if (MISC::IS_BIT_SET(Local_181.f_5, 28))
	{
		if (!func_10(&(Local_181.f_192)))
		{
			func_8(&(Local_181.f_192), 0, 0);
		}
		else if (func_7(&(Local_181.f_192), 5000, 0))
		{
			MISC::CLEAR_BIT(&(Local_181.f_5), 28);
			func_6(&(Local_181.f_192));
		}
	}
}

void func_432()
{
	if (MISC::IS_BIT_SET(Local_181.f_5, 27))
	{
		if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8 != func_16())
		{
			iVar0 = Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8;
		}
		else if (Global_1590382 != func_16())
		{
			iVar0 = Global_1590382;
		}
		else if (func_259(PLAYER::PLAYER_ID(), 0))
		{
			if (func_149() != func_16())
			{
				iVar0 = func_149();
			}
		}
		if (iVar0 != func_16())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_160(iVar0, 0);
					MISC::CLEAR_BIT(&(Local_181.f_5), 27);
				}
			}
		}
	}
}

void func_433()
{
	if (func_119())
	{
		if (func_434(1))
		{
			if (func_25(func_321()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(func_321(), 1) };
				PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_181.f_112, 60f, 30);
			}
		}
	}
	if (func_434(1) || func_434(3))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
		{
			if (CAM::DOES_CAM_EXIST(Local_181.f_131) && CAM::IS_CAM_RENDERING(Local_181.f_131))
			{
				if (func_434(3))
				{
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_181.f_112, 60f, 200f);
					INTERIOR::_0x483ACA1176CA93F1();
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_181.f_112, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_181.f_121)));
					if ((MISC::GET_FRAME_COUNT() % 120) == 0)
					{
						PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_181.f_112, 60f, 30);
					}
				}
			}
		}
	}
}

bool func_434(int iParam0)
{
	return Local_181.f_170 == iParam0;
}

int func_435()
{
	if (func_439())
	{
		return 1;
	}
	if (!func_285())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_16())
	{
		if (func_248(PLAYER::PLAYER_ID()) && !func_247())
		{
			return 1;
		}
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_345(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_438())
	{
		if (func_437())
		{
			return 1;
		}
		if (func_346(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_31())
		{
			return 1;
		}
		if (!func_436())
		{
			if (func_7(&(Local_181.f_208), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_6(&(Local_181.f_208));
		}
	}
	return 0;
}

int func_436()
{
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (MISC::IS_BIT_SET(Local_83[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_437()
{
	return MISC::IS_BIT_SET(Global_1687687, 22);
}

bool func_438()
{
	return MISC::IS_BIT_SET(Local_181.f_6, 3);
}

bool func_439()
{
	return MISC::IS_BIT_SET(Global_1687687, 0);
}

int func_440()
{
	func_448(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_447())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_446())
	{
		return 1;
	}
	if (func_445(159))
	{
		if (!func_444())
		{
			return 1;
		}
	}
	if (func_445(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_441() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_441()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_441()
{
	switch (func_443())
	{
		case 0:
			return func_442();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_442()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_443()
{
	return Global_30768;
}

bool func_444()
{
	return Global_2450632.f_598;
}

int func_445(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_446()
{
	return Global_2460680;
}

bool func_447()
{
	return Global_2450632.f_593;
}

void func_448(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_449(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_449(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_15(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_450(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_450(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_451()
{
	SYSTEM::WAIT(0);
}

void func_452(bool bParam0)
{
	if (!func_438())
	{
		func_458(bParam0);
	}
	else
	{
		func_453();
	}
}

void func_453()
{
	func_6(&(Local_181.f_208));
	func_457(0);
	func_456(0);
	func_455(0);
	func_454();
}

void func_454()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_455(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687, 21))
		{
			MISC::SET_BIT(&Global_1687687, 21);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687, 21))
	{
		MISC::CLEAR_BIT(&Global_1687687, 21);
	}
}

void func_456(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687, 22))
		{
			MISC::SET_BIT(&Global_1687687, 22);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687, 22))
	{
		MISC::CLEAR_BIT(&Global_1687687, 22);
	}
}

void func_457(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_278, 31))
		{
			MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_278), 31);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_278, 31))
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_278), 31);
	}
}

void func_458(bool bParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_121))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_181.f_121, 1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_181.f_121))
		{
			if (!MISC::IS_BIT_SET(Local_181.f_6, 2))
			{
				if (func_27())
				{
					if (func_25(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_181.f_112, 72, 0.5f, 1, 0, 1065353216);
					}
					else
					{
						FIRE::ADD_EXPLOSION(Local_181.f_112, 72, 0.5f, 1, 0, 1065353216, 0);
					}
					PAD::SET_PAD_SHAKE(0, 300, 200);
					MISC::SET_BIT(&(Local_181.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			uVar0 = NETWORK::NET_TO_OBJ(Local_181.f_121);
			NETWORK::NETWORK_FADE_OUT_ENTITY(uVar0, 0, 1);
			OBJECT::DELETE_OBJECT(&uVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_181.f_121);
			return;
		}
	}
	if (func_17() && !func_18())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_476(&Var1, 11);
	}
	if (func_422("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_25(Local_181.f_123))
	{
		uVar10 = Local_181.f_123;
		PED::DELETE_PED(&uVar10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_181.f_124))
	{
		OBJECT::DELETE_OBJECT(&(Local_181.f_124));
	}
	if (HUD::DOES_BLIP_EXIST(Local_181.f_133))
	{
		HUD::REMOVE_BLIP(&(Local_181.f_133));
	}
	if (HUD::DOES_BLIP_EXIST(Local_181.f_134))
	{
		HUD::REMOVE_BLIP(&(Local_181.f_134));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_181.f_125))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_181.f_125));
	}
	HUD::_0x15CFA549788D35EF();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (func_221())
	{
		func_220(0);
	}
	func_305(1, -1);
	func_475();
	if (func_18())
	{
		func_313(0);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_181.f_122))
	{
		uVar11 = NETWORK::NET_TO_OBJ(Local_181.f_122);
		OBJECT::DELETE_OBJECT(&uVar11);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_181.f_120))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_181.f_120);
		}
		func_474(0);
	}
	func_230(0);
	if (func_473() && (!func_248(PLAYER::PLAYER_ID()) || func_247()))
	{
		func_277(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_181.f_83 = 0f;
	Local_181.f_84 = 0f;
	Local_181.f_11 = 0;
	Local_181.f_13 = 0;
	Local_181.f_9 = 0;
	Local_181.f_15 = 0;
	func_6(&(Local_181.f_174));
	func_6(&(Local_181.f_176));
	if (!Local_181.f_118)
	{
		func_6(&(Local_181.f_178));
	}
	func_6(&(Local_181.f_182));
	func_6(&(Local_181.f_180));
	func_6(&(Local_181.f_184));
	func_6(&(Local_181.f_188));
	func_6(&(Local_181.f_194));
	func_6(&(Local_181.f_192));
	func_6(&(Local_181.f_190));
	func_6(&(Local_181.f_196));
	func_6(&(Local_181.f_198));
	func_6(&(Local_181.f_200));
	func_6(&(Local_181.f_204));
	func_6(&(Local_181.f_206));
	func_6(&(Local_181.f_186));
	Local_181.f_27 = 0;
	Local_181.f_5 = 0;
	Local_181.f_6 = 0;
	Global_1687687.f_4 = -1;
	func_472(-1f);
	func_410(0f);
	func_227(0);
	func_413(0);
	func_471(0);
	func_411(0);
	func_203(0);
	func_470(0);
	func_158(0);
	func_469(0);
	func_468(0);
	func_467(0);
	func_55(1);
	func_271(0);
	func_269(0);
	func_275(0);
	func_416(0);
	func_383(0f, 0f, 0f, 0f, 0f, 0f);
	func_466();
	Global_1687687.f_24 = -1;
	MISC::CLEAR_BIT(&Global_2513614, 0);
	MISC::CLEAR_BIT(&Global_1695470, 0);
	func_356(0);
	if (!func_465(0))
	{
		func_267();
	}
	if (func_58())
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (func_119())
		{
			if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8 != func_16() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8))
			{
				iVar12 = Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8;
			}
			else if (Global_1590382 != func_16() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1590382))
			{
				iVar12 = Global_1590382;
			}
			else if (func_259(PLAYER::PLAYER_ID(), 0))
			{
				if (func_149() != func_16() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_149()))
				{
					iVar12 = func_149();
				}
			}
			if (iVar12 != func_16())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_160(iVar12, 0);
					MISC::SET_BIT(&(Local_181.f_5), 28);
				}
				else
				{
					MISC::SET_BIT(&(Local_181.f_5), 27);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_181.f_5), 27);
			}
		}
		else if (func_17() || func_142())
		{
			func_6(&Global_1687652);
			func_464(300000);
			func_463(1);
			MISC::SET_BIT(&(Local_181.f_5), 28);
		}
		func_363(0);
		func_362(0);
		MISC::CLEAR_BIT(&(Local_83[PLAYER::PLAYER_ID()]), 0);
		iVar13 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_181.f_135));
		if (func_17() || func_142())
		{
			Var14.f_7 = Global_786547;
			Var14.f_1 = Global_786547.f_1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				Var14 = Global_4456448.f_194990;
			}
			else
			{
				Var14 = func_461(PLAYER::PLAYER_ID());
			}
			Var14.f_6 = 1;
			Var14.f_4 = Local_181.f_26;
			Var14.f_5 = Local_181.f_28;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_181.f_25;
			unk_0xCC6008ED40B90167(&Var14);
		}
		else
		{
			STATS::_PLAYSTATS_DRONE_USAGE(iVar13, Local_181.f_25, Local_181.f_26);
		}
	}
	func_460();
	func_364(0);
	func_246(0);
	func_167(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_181.f_132));
	if (func_162(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_162(1));
	}
	if (func_162(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_162(0));
	}
	func_357(0);
	func_305(1, -1);
	Local_181.f_25 = 0;
	Local_181.f_26 = 0;
	Local_181.f_28 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_181.f_27);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_181.f_136[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_181.f_136[PLAYER::PLAYER_ID()], 0);
	}
	if (!bParam0)
	{
		if (!func_147(PLAYER::PLAYER_ID()))
		{
			func_459(0f, 0f, 0f, 0f);
		}
		Global_1687687.f_2 = 0;
		func_454();
	}
	else
	{
		func_409(0, 1);
	}
}

void func_459(struct<3> Param0, float fParam3)
{
	if (!func_384(Global_1687687.f_10, Param0, 0))
	{
		Global_1687687.f_10 = { Param0 };
		Global_1687687.f_7 = fParam3;
	}
}

void func_460()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_40))
	{
		AUDIO::STOP_SOUND(Local_181.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_40);
		Local_181.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_29))
	{
		AUDIO::STOP_SOUND(Local_181.f_29);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_29);
		Local_181.f_29 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_30))
	{
		AUDIO::STOP_SOUND(Local_181.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_30);
		Local_181.f_30 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_31))
	{
		AUDIO::STOP_SOUND(Local_181.f_31);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_31);
		Local_181.f_31 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_32))
	{
		AUDIO::STOP_SOUND(Local_181.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_32);
		Local_181.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_33))
	{
		AUDIO::STOP_SOUND(Local_181.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_33);
		Local_181.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_39))
	{
		AUDIO::STOP_SOUND(Local_181.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_39);
		Local_181.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_38))
	{
		AUDIO::STOP_SOUND(Local_181.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_38);
		Local_181.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_37))
	{
		AUDIO::STOP_SOUND(Local_181.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_37);
		Local_181.f_37 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_36))
	{
		AUDIO::STOP_SOUND(Local_181.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_36);
		Local_181.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_35))
	{
		AUDIO::STOP_SOUND(Local_181.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_35);
		Local_181.f_35 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_34))
	{
		AUDIO::STOP_SOUND(Local_181.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_34);
		Local_181.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_41))
	{
		AUDIO::STOP_SOUND(Local_181.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_41);
		Local_181.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_42))
	{
		AUDIO::STOP_SOUND(Local_181.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_42);
		Local_181.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_181.f_80))
	{
		AUDIO::STOP_SOUND(Local_181.f_80);
		AUDIO::RELEASE_SOUND_ID(Local_181.f_80);
		Local_181.f_80 = -1;
	}
	if (func_438())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_181.f_45[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_181.f_45[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_181.f_45[iVar0]);
				Local_181.f_45[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_138();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

int func_461(int iParam0)
{
	if (func_140(iParam0) == 243)
	{
		return func_462(iParam0);
	}
	return -1;
}

int func_462(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334, 20))
		{
			MISC::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334), 20);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334, 20))
	{
		MISC::CLEAR_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_334), 20);
	}
}

void func_464(int iParam0)
{
	if (Global_1687687.f_5 != iParam0)
	{
		Global_1687687.f_5 = iParam0;
	}
}

bool func_465(int iParam0)
{
	return Local_181.f_171 == iParam0;
}

void func_466()
{
	if (func_155())
	{
		MISC::CLEAR_BIT(&Global_1687687, 7);
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!MISC::IS_BIT_SET(Global_1687687, 16))
			{
				MISC::SET_BIT(&Global_1687687, 16);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687, 16))
	{
		MISC::CLEAR_BIT(&Global_1687687, 16);
	}
}

void func_468(bool bParam0)
{
	if (bParam0)
	{
		if (!func_439())
		{
			MISC::SET_BIT(&Global_1687687, 6);
		}
	}
	else if (func_439())
	{
		MISC::CLEAR_BIT(&Global_1687687, 6);
	}
}

void func_469(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687, 3))
		{
			MISC::SET_BIT(&Global_1687687, 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687, 3))
	{
		MISC::CLEAR_BIT(&Global_1687687, 3);
	}
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		if (!func_367())
		{
			MISC::SET_BIT(&Global_1687687, 10);
		}
	}
	else if (func_367())
	{
		MISC::CLEAR_BIT(&Global_1687687, 10);
	}
}

void func_471(bool bParam0)
{
	if (bParam0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_439())
			{
				MISC::SET_BIT(&Global_1687687, 0);
			}
		}
	}
	else if (func_439())
	{
		MISC::CLEAR_BIT(&Global_1687687, 0);
	}
}

void func_472(float fParam0)
{
	if (Global_1687687.f_9 != fParam0)
	{
		Global_1687687.f_9 = fParam0;
	}
}

int func_473()
{
	if (!func_285())
	{
		return 0;
	}
	if (func_48(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	return 1;
}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		if (!func_18())
		{
			MISC::SET_BIT(&Global_1687687, 24);
		}
	}
	else if (func_18())
	{
		MISC::CLEAR_BIT(&Global_1687687, 24);
	}
}

void func_475()
{
	if (CAM::DOES_CAM_EXIST(Local_181.f_131))
	{
		CAM::DESTROY_CAM(Local_181.f_131, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (!func_28() || MISC::IS_BIT_SET(Local_181.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_476(var uParam0, int iParam1)
{
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = -734905987;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_416, 1))
		{
			MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_416), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_10(&(uParam0->f_1)))
	{
		func_8(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_10(&(uParam0->f_1)) && !func_7(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_6(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_6(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_173(PLAYER::PLAYER_ID());
		if (iVar10 != -1)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_477(struct<12> Param0)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0);
	func_485(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_180, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_83, 97);
	if (!func_484())
	{
		func_452(0);
	}
	if (Param0.f_11)
	{
		MISC::SET_BIT(&(Local_181.f_6), 3);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_438())
		{
			Local_181.f_97 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(func_321()) && !ENTITY::IS_ENTITY_DEAD(func_321(), 0))
					{
						Local_181.f_106 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_321(), 1), ENTITY::GET_ENTITY_HEADING(func_321()), 0f, 1.6f, 2.9f) };
						Local_181.f_100 = { Local_181.f_106 };
					}
					func_424(1);
					Local_83[PLAYER::PLAYER_ID()].f_1 = 1;
					break;
				
				case 2:
					func_483(1);
					Local_181.f_106 = { Param0.f_5 };
					Local_83[PLAYER::PLAYER_ID()].f_1 = 2;
					break;
				
				case 3:
					func_482(1);
					Local_181.f_106 = { Param0.f_5 };
					Local_83[PLAYER::PLAYER_ID()].f_1 = 3;
					break;
				
				case 4:
					func_417(1);
					Local_181.f_106 = { Param0.f_5 };
					Local_83[PLAYER::PLAYER_ID()].f_1 = 4;
					break;
				
				case 5:
					func_481(1);
					Local_181.f_106 = { Param0.f_5 };
					Local_83[PLAYER::PLAYER_ID()].f_1 = 5;
					break;
				
				case 6:
					func_480(1);
					Local_181.f_106 = { Param0.f_5 };
					Local_83[PLAYER::PLAYER_ID()].f_1 = 6;
					break;
				
				default:
					func_479(1);
					Local_181.f_106 = { Param0.f_5 };
					break;
			}
			Local_181.f_103 = { Param0.f_8 };
			if (func_240(func_374()))
			{
				func_383(Local_181.f_106, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_452(0);
	}
	if (!func_438())
	{
		func_409(1, 1);
	}
	else
	{
		func_478();
	}
}

void func_478()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_181.f_45[iVar0] = -1;
		iVar0++;
	}
	func_356(5);
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687.f_2, 0))
		{
			Global_1687687.f_2 = 0;
			MISC::SET_BIT(&(Global_1687687.f_2), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1687687.f_2), 0);
	}
}

void func_480(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687.f_2, 6))
		{
			Global_1687687.f_2 = 0;
			MISC::SET_BIT(&(Global_1687687.f_2), 6);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1687687.f_2), 6);
	}
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687.f_2, 5))
		{
			Global_1687687.f_2 = 0;
			MISC::SET_BIT(&(Global_1687687.f_2), 5);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1687687.f_2), 5);
	}
}

void func_482(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687.f_2, 3))
		{
			Global_1687687.f_2 = 0;
			MISC::SET_BIT(&(Global_1687687.f_2), 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1687687.f_2), 3);
	}
}

void func_483(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687687.f_2, 2))
		{
			Global_1687687.f_2 = 0;
			MISC::SET_BIT(&(Global_1687687.f_2), 2);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687687.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1687687.f_2), 2);
	}
}

int func_484()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_447())
		{
			return 0;
		}
		if (func_445(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_485(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_454();
			}
			else
			{
				return 0;
			}
		}
		if (!func_486())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0;
					}
				}
				if (func_447())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0;
					}
				}
				if (func_445(157))
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_454();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_454();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_454();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_486()
{
	return Global_1312854;
}

