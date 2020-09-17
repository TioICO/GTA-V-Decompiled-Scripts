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
	sLocal_20 = "NULL";
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_51(ScriptParam_0);
	}
	else
	{
		func_46();
	}
	iLocal_53 = MISC::GET_GAME_TIMER();
	while (true)
	{
		func_45();
		if (((func_34() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || (func_33(PLAYER::PLAYER_ID()) || func_32(PLAYER::PLAYER_ID()))) || func_29(PLAYER::PLAYER_ID()))
		{
			func_46();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_46();
		}
	}
}

void func_1()
{
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if ((iLocal_54 % iVar0) == 0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
				{
					if (Local_58[iVar0].f_2)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_56)
							{
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
								STREAMING::REQUEST_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
								iLocal_56 = 1;
							}
							if (!MISC::IS_BIT_SET(iLocal_55, iVar0))
							{
								MISC::SET_BIT(&iLocal_55, iVar0);
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_55, iVar0))
						{
							MISC::CLEAR_BIT(&iLocal_55, iVar0);
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_55, iVar0))
					{
						MISC::CLEAR_BIT(&iLocal_55, iVar0);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_55, iVar0))
				{
					MISC::CLEAR_BIT(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !Local_58[iVar1].f_2)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
		iLocal_56 = 0;
	}
}

void func_2()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (iLocal_53 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar1 = PLAYER::PLAYER_PED_ID();
			if (func_28(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (((func_25(PLAYER::PLAYER_ID(), 1, 0) || func_24()) || !bVar3) || func_17())
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_13();
				if (iVar0 != func_12(iVar2) && iVar0 != 0)
				{
					func_11(iVar0);
					iLocal_53 = MISC::GET_GAME_TIMER();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = MISC::GET_GAME_TIMER() + 500;
				}
			}
			break;
		
		case 2:
			if (func_4())
			{
				Global_30921 = 0f;
				SCRIPT::REQUEST_SCRIPT("pb_prostitute");
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				Local_58[iVar2].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
			}
			break;
		
		case 3:
			if ((SCRIPT::HAS_SCRIPT_LOADED("pb_prostitute") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1788246410) <= 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1, 0))
			{
				iVar4 = func_12(iVar2);
				iLocal_57 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &iVar4, 1, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			if (func_4())
			{
				Local_58[iVar2].f_2 = 0;
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
		
		case 5:
			if (((!func_25(PLAYER::PLAYER_ID(), 1, 0) && !func_24()) && bVar3) && !func_3())
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
	}
}

bool func_3()
{
	return Global_1694135;
}

int func_4()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1788246410) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	return 0;
}

void func_5()
{
	Var0 = -1835440739;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar2 = func_6(1, 1);
	if (iVar2 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iVar2);
	}
}

var func_6(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_10(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_7(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312745;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
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

void func_11(int iParam0)
{
	Local_58[PLAYER::NETWORK_PLAYER_ID_TO_INT()] = iParam0;
}

int func_12(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_58[PLAYER::NETWORK_PLAYER_ID_TO_INT()];
	}
	return Local_58[iParam0];
}

int func_13()
{
	iVar0 = func_14();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!ENTITY::DOES_ENTITY_EXIST(func_12(iVar1)))
	{
		func_11(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_57))
	{
		if (Local_58[iVar1].f_2)
		{
			return func_12(iVar1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar2 = PLAYER::PLAYER_PED_ID();
				if (func_28(&uVar2))
				{
					uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(uVar3))
					{
						if (func_12(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar3, 0, 0) || PED::IS_PED_IN_VEHICLE(func_12(iVar1), uVar3, 1))
						{
							Local_58[iVar1].f_2 = 1;
							return func_12(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_12(iVar1);
					}
					Var4 = { ENTITY::GET_ENTITY_COORDS(func_12(iVar1), 0) };
					Var7 = { ENTITY::GET_ENTITY_COORDS(iVar0, 0) };
					Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					fVar13 = SYSTEM::VDIST(Var4, Var10);
					fVar14 = SYSTEM::VDIST(Var10, Var7);
					if (fVar13 > fVar14)
					{
						if ((fVar13 - fVar14) > 25f)
						{
							return iVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_14()
{
	iVar0 = 0;
	iVar10 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar11]))
			{
				if (PED::IS_PED_USING_SCENARIO(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || PED::IS_PED_USING_SCENARIO(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar11]))
					{
						if (!func_15(uVar1[iVar11]))
						{
							if (!PED::IS_PED_FLEEING(uVar1[iVar11]))
							{
								return uVar1[iVar11];
							}
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

int func_15(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_58[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(var uParam0)
{
	uVar1 = ENTITY::GET_ENTITY_SCRIPT(uParam0, &uVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar1))
	{
		if (MISC::ARE_STRINGS_EQUAL(uVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(uVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(uVar1, "BUSINESS_BATTLES"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(uVar1, "GB_CASINO"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(uVar1, "GB_CASINO_HEIST"))
		{
			return 0;
		}
	}
	return 1;
}

int func_17()
{
	if (func_3())
	{
		return 1;
	}
	if (func_22(PLAYER::PLAYER_ID()) != -1)
	{
		return 1;
	}
	if (func_18(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)
{
	if (func_19(func_20(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_20(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_21(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_22(int iParam0)
{
	if (func_20(iParam0) == 237 || func_20(iParam0) == 250)
	{
		return func_23(iParam0);
	}
	return -1;
}

int func_23(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

bool func_24()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

int func_25(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_26(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0);
}

bool func_27(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_28(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(*uParam0), -1, 0) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 != func_31())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_30(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_30(int iParam0)
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

int func_31()
{
	return -1;
}

bool func_32(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_33(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

int func_34()
{
	func_42(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_36()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_37()
{
	return Global_30768;
}

bool func_38()
{
	return Global_2450632.f_598;
}

int func_39(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()
{
	return Global_2460680;
}

bool func_41()
{
	return Global_2450632.f_593;
}

void func_42(var uParam0)
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
					func_43(iVar0);
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

void func_43(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_10(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_44(uVar4, &bVar5))
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

int func_44(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_45()
{
	SYSTEM::WAIT(0);
}

void func_46()
{
	if (iLocal_56)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
	}
	if (!func_50(PLAYER::PLAYER_ID()) && !func_49(PLAYER::PLAYER_ID()))
	{
		func_48();
	}
	func_4();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	Global_2537071.f_4 = 0;
	func_47();
}

void func_47()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_48()
{
	Global_2439138.f_1156.f_10 = 0;
}

int func_49(int iParam0)
{
	if (iParam0 != func_31())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 29);
	}
	return 0;
}

int func_50(int iParam0)
{
	if (iParam0 != func_31())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_393.f_2, 16);
	}
	return 0;
}

void func_51(struct<21> Param0)
{
	func_54(func_55(Param0), Param0);
	func_52(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_58, 97);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
}

int func_52(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_47();
			}
			else
			{
				return 0;
			}
		}
		if (!func_53())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_41())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_39(157))
				{
					if (!bParam2)
					{
						func_47();
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
					func_47();
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
				func_47();
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
			func_47();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_53()
{
	return Global_1312854;
}

void func_54(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_47();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

