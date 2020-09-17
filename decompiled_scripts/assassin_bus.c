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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_145 = 100;
	iLocal_146 = 3;
	uLocal_796 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_797 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_1042 = 1;
	iLocal_1443 = -1;
	fLocal_1445 = 1f;
	Local_1650 = { -26.1052f, -109.8479f, 56.0793f };
	Local_1653 = { -26.1052f, -109.8479f, 56.0793f };
	fLocal_1656 = 159.0238f;
	fLocal_1657 = 30f;
	Local_1660 = { -27.2053f, -109.6966f, 57.6161f };
	Local_1663 = { -8.1281f, -0.0574f, -140.8007f };
	Local_1666 = { -27.2053f, -109.6968f, 57.6161f };
	Local_1669 = { -1.4844f, -0.0472f, -124.6345f };
	Local_1681 = { 0f, 0f, 0f };
	Local_1684 = { 0f, 0f, 0f };
	iLocal_1705 = 1;
	iLocal_1727 = -1;
	iLocal_1730 = MISC::GET_RANDOM_INT_IN_RANGE(5, 15);
	iLocal_1735 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
	iLocal_1740 = 1000;
	fLocal_1752 = 0.5f;
	fLocal_1756 = 15f;
	Local_1776 = { 414.1398f, -640.002f, 27.5001f };
	Local_1787 = { -25.187f, -113.094f, 55.9396f };
	fLocal_1790 = 69.4062f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_543(&(Global_111638.f_19958.f_1), 1024);
		func_542();
		func_540();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1646))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1646, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_1646, 1, 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_1646, 1);
		}
		func_539();
		func_532(&uLocal_1972);
	}
	if (func_531())
	{
		if (func_530())
		{
			bLocal_1714 = true;
		}
		bLocal_1703 = true;
	}
	else
	{
		bLocal_1703 = false;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
	uLocal_1843 = func_529(Vector(28.3097f, -764.507f, 305.0073f) + Vector(2f, 2f, 2f), Vector(28.3097f, -764.507f, 305.0073f) - Vector(2f, 2f, 2f));
	uLocal_1844 = func_529(Vector(28.5672f, -1067.149f, 355.6028f) + Vector(2f, 2f, 2f), Vector(28.5672f, -1067.149f, 355.6028f) - Vector(2f, 2f, 2f));
	func_528();
	iLocal_1444 = 3;
	Local_1232 = { func_526(iLocal_1444) };
	func_543(&uLocal_122, 8);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	if (func_531())
	{
		bLocal_138 = true;
		iLocal_1750 = func_525();
		if (Global_92921)
		{
			if (iLocal_1750 < 1 || iLocal_1750 >= 2)
			{
				iLocal_1750++;
			}
			else if (iLocal_1750 == 1)
			{
				iLocal_1750 = 4;
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		if (iLocal_1750 == 0)
		{
			if (bLocal_1714)
			{
				func_523();
				while (!func_522())
				{
					SYSTEM::WAIT(0);
				}
				iVar0 = func_492(Local_1787, fLocal_1790);
				if ((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
			func_491(-22.4026f, -110.8498f, 56.0027f, 187.4018f, 1, 0);
		}
		else if (iLocal_1750 == 1)
		{
			func_491(421.5518f, -640.2153f, 27.5072f, 178.9499f, 1, 0);
		}
		else if (iLocal_1750 == 2)
		{
			func_491(96.6454f, -779.0001f, 30.4853f, 249.5191f, 1, 0);
		}
		else if (iLocal_1750 == 4)
		{
			func_491(96.6454f, -779.0001f, 30.4853f, 249.5191f, 1, 0);
		}
		else if (iLocal_1750 == 3)
		{
			func_491(79.6878f, -802.4135f, 30.5188f, 266.8253f, 1, 0);
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_488(&uLocal_1972);
		RECORDING::_0x208784099002BC30("M_ASS4", 0);
		if (func_487(&uScriptParam_0))
		{
			if (func_486())
			{
				func_542();
				func_485(&Local_1045);
				func_484(uLocal_1843, Vector(28.3097f, -764.507f, 305.0073f) + Vector(2f, 2f, 2f), Vector(28.3097f, -764.507f, 305.0073f) - Vector(2f, 2f, 2f));
				func_484(uLocal_1844, Vector(28.3097f, -764.507f, 305.0073f) + Vector(2f, 2f, 2f), Vector(28.3097f, -764.507f, 305.0073f) - Vector(2f, 2f, 2f));
				func_483();
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1808[0], 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1808[1], 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1808[2], 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1808[3], 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1808[4], 0);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1808[5], 0);
				func_482(&uLocal_2367, 0, 0);
				HUD::CLEAR_HELP(1);
				GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(1);
				func_539();
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				func_481(&uLocal_1972);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_169(&uScriptParam_0, &Local_1045))
			{
				Global_111638.f_19958.f_8 = func_165(&uLocal_1038);
				fLocal_134 = Global_111638.f_19958.f_8;
				func_164();
				func_114();
				func_1(Local_1232, &uLocal_1848, &uLocal_1972);
			}
		}
	}
}

void func_1(struct<39> Param0, var uParam39, var uParam40)
{
	HUD::CLEAR_PRINTS();
	switch (iLocal_1044)
	{
		case 0:
			if (!iLocal_139)
			{
				if (iLocal_1027 == 1)
				{
					func_113();
					bLocal_137 = true;
				}
				fLocal_134 = func_165(&uLocal_1038);
				func_106();
				iLocal_139 = 1;
				iLocal_1044 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1033)
			{
				AUDIO::PLAY_MISSION_COMPLETE_AUDIO("FRANKLIN_BIG_01");
				iLocal_1033 = 1;
			}
			if (func_102(&uLocal_150, 1, 0) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
			{
				func_101(uParam39, 0, 0, 0, 1);
				func_100(uParam39, &(Local_727.f_60), 2, 215, 1, 1, 0);
				func_100(uParam39, "ES_XPAND", 2, 216, 1, 1, 0);
				func_98(1);
				SYSTEM::SETTIMERA(0);
				iLocal_1044 = 2;
			}
			break;
		
		case 2:
			if (func_66(&uLocal_150, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1032 = true;
			}
			if (!bLocal_1032)
			{
				func_58(uParam39, 1128792064, 1, 0, 1, 1065353216);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
			{
				if (!bLocal_1032)
				{
					bLocal_1032 = true;
					func_57(&uLocal_150);
				}
			}
			if (bLocal_1032)
			{
				if (func_66(&uLocal_150, 0, 1065353216, 0, 0, 0))
				{
					func_55(&uLocal_150);
					func_98(0);
					Global_111638.f_19958++;
					func_54();
					func_51(0, 0);
					func_5(Param0);
					func_2();
					func_532(uParam40);
				}
			}
			break;
	}
}

void func_2()
{
	func_3();
}

int func_3()
{
	if (func_4(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_4(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_5(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	fVar0 = (1f + func_50());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_49(Global_111638.f_19958.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_6(func_43(), 97, SYSTEM::ROUND(fVar0), 0, 0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_42(iParam0) == 3)
	{
		return;
	}
	if (func_42(iParam0) == 4)
	{
		return;
	}
	func_7(func_42(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1762386298;
					break;
				
				case 1:
					iVar1 = -544246134;
					break;
				
				case 2:
					iVar1 = -1147816992;
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 138536943;
					break;
				
				case 1:
					iVar1 = 691239862;
					break;
				
				case 2:
					iVar1 = -1133981805;
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_41();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_40(99, 1);
					func_39(-656546900, iParam3);
					break;
				
				case 1:
					func_39(-2098183071, iParam3);
					break;
				
				case 2:
					func_39(1578119842, iParam3);
					break;
			}
			func_23(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_18(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_39(-1190521599, iParam3);
							break;
						
						case 1:
							func_39(490143716, iParam3);
							break;
						
						case 2:
							func_39(121069433, iParam3);
							break;
					}
					if (func_18(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_39(219506691, iParam3);
							break;
						
						case 1:
							func_39(1871505786, iParam3);
							break;
						
						case 2:
							func_39(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_39(27639974, iParam3);
							break;
						
						case 1:
							func_39(422258364, iParam3);
							break;
						
						case 2:
							func_39(316202960, iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_39(1806738963, iParam3);
							break;
						
						case 1:
							func_39(1576781520, iParam3);
							break;
						
						case 2:
							func_39(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_39(408653638, iParam3);
									break;
								
								case 1:
									func_39(-424799277, iParam3);
									break;
								
								case 2:
									func_39(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_39(2038531975, iParam3);
									break;
								
								case 1:
									func_39(-572903575, iParam3);
									break;
								
								case 2:
									func_39(-953947924, iParam3);
									break;
							}
							if (func_18(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_39(-445823242, iParam3);
									break;
								
								case 1:
									func_39(-1386757215, iParam3);
									break;
								
								case 2:
									func_39(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_39(-1744069936, iParam3);
									break;
								
								case 1:
									func_39(799609312, iParam3);
									break;
								
								case 2:
									func_39(181688102, iParam3);
									break;
							}
							func_17(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_40(95, iParam3);
					break;
				
				case 1:
					func_40(97, iParam3);
					break;
				
				case 2:
					func_40(96, iParam3);
					break;
			}
			func_40(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_10(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_10(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_39(-330339780, iParam3);
					break;
				
				case 1:
					func_39(1697564429, iParam3);
					break;
				
				case 2:
					func_39(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_9(iParam0);
	if (Global_41431 == 15)
	{
		func_8(0);
	}
	return 1;
}

void func_8(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_9(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(1153264002, iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(-1921710979, iVar0, 1);
			break;
	}
}

void func_10(int iParam0)
{
	if (iParam0 == 8)
	{
		func_16(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_16(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_16(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_16(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_13(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_13(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_13(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_13(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_13(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_13(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_12()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_12()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_11(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_12()
{
	iVar0 = 0;
	return iVar0;
}

void func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_14(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_14(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
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

int func_15()
{
	return Global_1312745;
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_17(int iParam0)
{
	func_40(93, iParam0);
	func_40(29, iParam0);
	func_40(30, iParam0);
}

bool func_18(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_20(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_20(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_20(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_20(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_19(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_19(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_19(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_19(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_19(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_19(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_12()].f_6174.f_10, iParam0);
}

int func_19(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_14(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_20(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = func_22(iParam0, iParam1);
	uVar2 = func_21(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_21(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_22(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_23(bool bParam0)
{
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(-422142831, iVar1, 1);
		func_38(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_24(27, 1);
	return 1;
}

int func_24(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_25(iParam0, iParam1);
}

int func_25(int iParam0, int iParam1)
{
	if (func_37(14) && !func_36(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_35(&Global_4270065))
	{
		if (func_33(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_26(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_26(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_37(14) && !func_36(iParam1))
	{
		return 0;
	}
	if (func_33(uParam0, iParam1))
	{
		return 0;
	}
	if (func_32(uParam0) < 0f)
	{
		func_31(uParam0, 0);
	}
	func_29(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_27(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_27(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_37(14) && !func_36(iParam1))
	{
		return 0;
	}
	if (func_33(uParam0, iParam1))
	{
		return 0;
	}
	if (func_32(uParam0) < 0f)
	{
		func_31(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_28(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_29(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_30(uParam0, iVar0);
		iVar0++;
	}
	func_31(uParam0, (Global_4270064 - 0.5f));
}

void func_30(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_31(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_32(var uParam0)
{
	return uParam0->f_80;
}

bool func_33(var uParam0, int iParam1)
{
	return func_34(uParam0, iParam1) != -1;
}

int func_34(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_35(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_37(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_39(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_40(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

void func_41()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_42(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_43()
{
	func_44();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_44()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_45(iVar0) && (!func_37(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_45(Global_111638.f_2358.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_50()
{
	fVar0 = 0f;
	if (func_49(Global_111638.f_19958.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_49(Global_111638.f_19958.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_49(Global_111638.f_19958.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_49(Global_111638.f_19958.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_49(Global_111638.f_19958.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_49(Global_111638.f_19958.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_49(Global_111638.f_19958.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_49(Global_111638.f_19958.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_49(Global_111638.f_19958.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_51(bool bParam0, int iParam1)
{
	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_4(0) && Global_76868.f_1 == 1) && func_53(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_4(0))
	{
		iVar0 = func_52();
		iVar1 = Global_89496[iVar0];
		uVar2 = Global_76891.f_109[iVar1];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_89496[iVar0].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_89496[iVar0].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_89496[iVar0].f_1), 4);
		MISC::SET_BIT(&Global_76870, 1);
		Global_76886 = uVar2;
		Global_76887 = MISC::GET_GAME_TIMER();
	}
}

int func_52()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_89496[iVar0].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_54()
{
	func_543(&(Global_111638.f_19958.f_1), 2048);
}

void func_55(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76891)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_4(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_56(0);
}

void func_56(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_57(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_58(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_65(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_64(uParam0->f_1, 256) || (func_64(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_64(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						iVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6].f_12, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_63(uVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6]))
					{
						func_62(uParam0->f_2[iVar6]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_64(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_61(bParam4, func_61(func_64(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_60(&(uParam0->f_1), 256);
		func_59(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_61(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_62(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_63(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_65(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_60(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_66(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	if (MISC::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_91(0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_46(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_90(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_90(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_90((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_90(30f) - func_90(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_56(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_69(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_68(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_68(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_68(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_67(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_67(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = func_68((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_68((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_68((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_68((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_56(0);
			}
			return !bVar0;
		}
	}
	func_56(0);
	return 1;
}

void func_67(var uParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_63(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_62("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_63(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_62("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_68(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_69(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_89() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_62(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_88(&(uParam0->f_13));
				}
				else
				{
					func_62(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				if (uParam0->f_556 == 4)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_87();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_90((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_89());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_86(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_86(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_89()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_83((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_90(6f));
	fVar1 = (fVar1 + (func_90(30f) - func_90((2f * 2f))));
	fVar11 = (fVar2 - func_90((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_68((fVar11 / (0.6f * func_90(25f))), 0f, 1f);
		func_87();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_90((2f - 0.5f)) - 0.001388889f)), fVar6, func_82(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_90((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_90((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_89())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_68((fVar11 / (0.8f * func_90(25f))), 0f, 1f);
			func_79(uParam0, iVar17, (fVar1 + func_90(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_90(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_90((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_89())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_90(2f));
					fVar12 = func_68((fVar11 / (0.6f * func_90(25f))), 0f, 1f);
					func_87();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_90((2f * 0.5f))), fVar6, func_82(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_90((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_90((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_90((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_89())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_90(2f));
			fVar12 = func_68((fVar11 / (0.6f * func_90(25f))), 0f, 1f);
			func_87();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_90((2f * 0.5f))), fVar6, func_82(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_90((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_89())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_68((fVar11 / (0.8f * func_90(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_72(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_89()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_89()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_89()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_89()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				HUD::SET_TEXT_WRAP(fVar20, fVar21);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_71(&(uParam0->f_550), fVar20, (fVar1 + func_90((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_87();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_90((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_90((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_90((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_554, 1);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_90((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_70(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_90(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_90(30f) - 2f));
		}
	}
}

float func_70(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_71(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_87();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_72(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_78(iParam0), 64);
	StringCopy(&cVar16, func_75(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_74())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_74())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_73(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_73(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.y = (Var37.y - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
		{
			Var37.x = 106f;
			Var37.y = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.y / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_73(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_74()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uVar0, &uVar1);
	fVar2 = (SYSTEM::TO_FLOAT(uVar0) / SYSTEM::TO_FLOAT(uVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_75(int iParam0, bool bParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_77(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_76(&uVar3);
			}
		}
		else
		{
			return func_76(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_76(var uParam0)
{
	return uParam0;
}

struct<13> func_77(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_78(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_77(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_76(&uVar0);
		}
		else
		{
			return func_76(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_79(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_81(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_87();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_72(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_75(7, 0), (fParam4 - 0.006f), ((fParam2 + func_90(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_72(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_75(5, 0), (fParam4 - 0.006f), ((fParam2 + func_90(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_72(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_75(6, 0), (fParam4 - 0.006f), ((fParam2 + func_90(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_81(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	func_80(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1]), uParam0->f_57[iParam1]);
}

void func_80(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_87();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_81(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_81(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_81(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 20:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_81(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_81(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_82(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_83(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_85(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_84(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_84(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_85(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

float func_86(char* sParam0)
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_87()
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

void func_88(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

float func_89()
{
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_90(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_91(int iParam0)
{
	if (func_97())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_96(0))
		{
			func_92(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_92(int iParam0)
{
	if (func_97())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_95())
		{
			func_94(1, 1);
		}
		else
		{
			func_94(0, 0);
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
	if (!func_93())
	{
		Global_19486.f_1 = 3;
	}
}

int func_93()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_94(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_96(0))
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

bool func_95()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_96(int iParam0)
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

bool func_97()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		func_99();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_96(0))
		{
			func_92(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_99()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_100(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1] = sParam1;
		uParam0->f_2[iVar1].f_1 = iVar0;
		uParam0->f_2[iVar1].f_2 = iParam6;
		uParam0->f_2[iVar1].f_12 = 0;
		uParam0->f_2[iVar1].f_13 = 0;
		uParam0->f_2[iVar1].f_14 = 0;
		uParam0->f_2[iVar1].f_3[0] = iParam2;
		uParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_101(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_60(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_60(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_60(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_60(&(uParam0->f_1), 8192);
	}
}

int func_102(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_105(uParam0);
	func_104(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_103(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_67(uParam0, 1);
		}
		else
		{
			func_67(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return 1;
}

void func_103(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_63(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_62("ES_HELP_TU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_63(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_62("ES_HELP_TD");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_63(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_62("ES_HELP_AB");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_104(var uParam0)
{
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_81(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_105(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_106()
{
	if (!iLocal_139)
	{
		func_112(&uLocal_150, &Local_727, &Global_61527, 0);
		fLocal_134 = (fLocal_134 * 1000f);
		if (Global_92921)
		{
			func_111(&uLocal_150, 6, &(Local_727.f_12), "MTPHPERSKI", SYSTEM::FLOOR(fLocal_134), 0, 3, 0);
			func_111(&uLocal_150, 6, &(Local_727.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_111(&uLocal_150, 6, &(Local_727.f_30), "MTPHPERSKI", SYSTEM::ROUND((fLocal_136 + fLocal_135)), 0, 3, 0);
			func_110();
		}
		else
		{
			if (bLocal_138)
			{
				func_111(&uLocal_150, 6, &(Local_727.f_12), "MTPHPERRET", SYSTEM::FLOOR(fLocal_134), 0, 3, 0);
			}
			else
			{
				func_111(&uLocal_150, 9, &(Local_727.f_12), "", SYSTEM::FLOOR(fLocal_134), 0, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_727.f_18)))
			{
				if (bLocal_137)
				{
					func_111(&uLocal_150, 6, &(Local_727.f_24), "", 0, 0, 2, 0);
					func_111(&uLocal_150, 3, &(Local_727.f_30), "", SYSTEM::ROUND((fLocal_136 + fLocal_135)), 0, 2, 0);
				}
				else
				{
					func_111(&uLocal_150, 6, &(Local_727.f_24), "", 0, 0, 1, 0);
					func_111(&uLocal_150, 3, &(Local_727.f_30), "", SYSTEM::ROUND(fLocal_135), 0, 0, 0);
				}
			}
			else
			{
				func_111(&uLocal_150, 3, &(Local_727.f_30), "", SYSTEM::ROUND(fLocal_135), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_92921)
		{
			iVar1 = 0;
			while (iVar1 < Global_73607)
			{
				if (Global_73608[iVar1] >= 0 && !Global_61737[Global_73608[iVar1]].f_7)
				{
					if (Global_73608[iVar1].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_145 = 50;
			iLocal_146 = 1;
			func_109(&uLocal_150, 1, &(Local_727.f_48), iLocal_145, 0, 0, 1, 0);
		}
		else if (bLocal_137)
		{
			if (bLocal_138)
			{
				iLocal_145 = 75;
				iLocal_146 = 2;
				func_109(&uLocal_150, 1, &(Local_727.f_42), iLocal_145, 0, 0, 2, 0);
			}
			else
			{
				iLocal_145 = 100;
				iLocal_146 = 3;
				func_109(&uLocal_150, 1, &(Local_727.f_36), iLocal_145, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_137 && !bLocal_138)
		{
			iLocal_145 = 75;
			iLocal_146 = 2;
			func_109(&uLocal_150, 1, &(Local_727.f_42), iLocal_145, 0, 0, 2, 0);
		}
		else
		{
			iLocal_145 = 50;
			iLocal_146 = 1;
			func_109(&uLocal_150, 1, &(Local_727.f_48), iLocal_145, 0, 0, 1, 0);
		}
		func_107();
		iLocal_139 = 1;
	}
}

void func_107()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1802680602) == 1)
	{
		func_108(38, SYSTEM::FLOOR(fLocal_134), 1);
		if (bLocal_137)
		{
			func_108(39, 1, 1);
		}
		else
		{
			func_108(39, 0, 1);
		}
		if (bLocal_137)
		{
			func_108(40, SYSTEM::ROUND((fLocal_136 + fLocal_135)), 1);
		}
		else
		{
			func_108(40, SYSTEM::ROUND(fLocal_135), 1);
		}
		func_108(41, iLocal_145, 1);
		func_108(42, iLocal_146, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1294874482) == 1)
	{
		func_108(52, SYSTEM::FLOOR(fLocal_134), 1);
		if (bLocal_137)
		{
			func_108(53, 1, 1);
		}
		else
		{
			func_108(53, 0, 1);
		}
		if (bLocal_137)
		{
			func_108(56, SYSTEM::ROUND((fLocal_136 + fLocal_135)), 1);
		}
		else
		{
			func_108(56, SYSTEM::ROUND(fLocal_135), 1);
		}
		func_108(54, iLocal_145, 1);
		func_108(55, iLocal_146, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1622569355) == 1)
	{
		func_108(66, SYSTEM::FLOOR(fLocal_134), 1);
		if (bLocal_137)
		{
			func_108(67, 1, 1);
		}
		else
		{
			func_108(67, 0, 1);
		}
		if (bLocal_137)
		{
			func_108(68, SYSTEM::ROUND((fLocal_136 + fLocal_135)), 1);
		}
		else
		{
			func_108(68, SYSTEM::ROUND(fLocal_135), 1);
		}
		func_108(69, iLocal_145, 1);
		func_108(70, iLocal_146, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-357584136) == 1)
	{
		func_108(81, SYSTEM::FLOOR(fLocal_134), 1);
		if (bLocal_137)
		{
			func_108(82, 1, 1);
		}
		else
		{
			func_108(82, 0, 1);
		}
		if (bLocal_137)
		{
			func_108(83, SYSTEM::ROUND((fLocal_136 + fLocal_135)), 1);
		}
		else
		{
			func_108(83, SYSTEM::ROUND(fLocal_135), 1);
		}
		func_108(84, iLocal_145, 1);
		func_108(85, iLocal_146, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1877867280) == 1)
	{
		func_108(97, SYSTEM::FLOOR(fLocal_134), 1);
		if (bLocal_137)
		{
			func_108(98, 1, 1);
		}
		else
		{
			func_108(98, 0, 1);
		}
		if (bLocal_137)
		{
			func_108(99, SYSTEM::ROUND((fLocal_136 + fLocal_135)), 1);
		}
		else
		{
			func_108(99, SYSTEM::ROUND(fLocal_135), 1);
		}
		func_108(100, iLocal_145, 1);
		func_108(101, iLocal_146, 1);
	}
}

void func_108(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (Global_73608[iVar0] == iParam0)
		{
			if (bParam2)
			{
				Global_73608[iVar0].f_1 = iParam1;
			}
			else
			{
				Global_73608[iVar0].f_1 = (Global_73608[iVar0].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_73608[iVar0] != -1)
	{
		if (Global_61737[Global_73608[iVar0]] == 3)
		{
			if (Global_73608[iVar0].f_1 > 1)
			{
				Global_73608[iVar0].f_1 = 1;
			}
			if (Global_73608[iVar0].f_1 < 0)
			{
				Global_73608[iVar0].f_1 = 0;
			}
		}
	}
}

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_110()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_111(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_112(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_113()
{
	func_543(&(Global_111638.f_19958.f_1), 4194304);
}

void func_114()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1805) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1805, 0))
	{
		func_115(iLocal_1805, -25.2554f, -1438.239f, 29.6542f, 2.31f, 24, 0);
	}
}

void func_115(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == -713569950) || ENTITY::GET_ENTITY_MODEL(iParam0) == 1941029835)
			{
				return;
			}
		}
		func_163(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_158(iParam0, &Var0);
		if (func_157(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != 241912366)
			{
				Global_76429 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_150(iParam5, &Var0, Param1, fParam4, func_156(iParam0));
		func_116(iParam5, iParam0, 0);
	}
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_147(&(Global_75441.f_555[0]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_75441.f_555[0].f_9, 12) && !MISC::IS_BIT_SET(Global_75441.f_555[0].f_9, 10))
	{
		if (Global_75441.f_555[0].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_136();
			}
			if (iParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_135(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_117(iVar0, 145);
					}
				}
				Global_76347 = iParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_117(int iParam0, int iParam1)
{
	if (!func_118(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == 225514697)
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1692214353)
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1686040670)
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5038[iVar1][iVar2].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1][iVar2].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5600[iVar1].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5600[iVar1].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5600[iVar1].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_158(iParam0, &(Global_111638.f_32744.f_5510));
}

int func_118(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_133(iParam0, 0, 0)) || func_133(iParam0, 1, 0)) || func_133(iParam0, 2, 0)) || func_156(iParam0) != 145) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || !func_119(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_131(iParam0))
		{
		}
		if (func_131(iParam0))
		{
		}
		if (func_133(iParam0, 0, 0))
		{
		}
		if (func_133(iParam0, 1, 0))
		{
		}
		if (func_133(iParam0, 2, 0))
		{
		}
		if (func_156(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_119(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_120(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return 0;
			break;
	}
	return 1;
}

int func_120(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == -613725916) || (iParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_128())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_127() && !func_126()) && !func_125()) && !func_124()) && !func_128())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_125())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_123(iParam0))
		{
			return 0;
		}
	}
	if (!func_121(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_121(int iParam0)
{
	if (!func_122())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_122()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_123(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_124()
{
	return 0;
}

int func_125()
{
	return 1;
}

int func_126()
{
	return 1;
}

int func_127()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(1571103992, &uVar0, -1);
				MISC::SET_BIT(&uVar0, 2);
				MISC::SET_BIT(&uVar0, 4);
				MISC::SET_BIT(&uVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, uVar0, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == -810318068 && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_120(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96075[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_134(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_111638.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_134(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

var func_136()
{
	func_146(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_145(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_144(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_139(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_138(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_137(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_137(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_139(var uParam0, int iParam1)
{
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_140(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_141(var uParam0)
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_142(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(var uParam0)
{
	return uParam0 & 15;
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_147(var uParam0, int iParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_148(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_148(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_148(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_148(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_148(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_148(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_148(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_148(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_148(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = -186537451;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = -1008861746;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = 356391690;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = 771711535;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = -1323100960;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = 1917016601;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = -823509173;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_128())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_128())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = -1269889662;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = -326143852;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = -326143852;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = -901163259;
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = -901163259;
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_157(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_157(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_157(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_148(int iParam0, int iParam1)
{
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_149(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_149(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_150(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_147(&(Global_75441.f_555[0]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_75441.f_555[0].f_9, 10))
		{
			func_155(iParam0);
			func_154(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]));
			if (MISC::IS_BIT_SET(Global_75441.f_555[0].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { Param2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = uParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] = iParam6 + 1;
			func_151(iParam0, 1);
		}
	}
}

void func_151(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_153(iParam0, 0))
		{
			func_152(iParam0, 1, 0);
			func_152(iParam0, 2, 0);
			func_152(iParam0, 3, 0);
			func_152(iParam0, 4, 0);
			func_152(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_152(iParam0, 0, 0);
	}
}

void func_152(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

bool func_153(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_111638.f_32744[iParam0], iParam1);
}

void func_154(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_155(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_147(&(Global_75441.f_555[0]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_75441.f_139[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (MISC::IS_BIT_SET(Global_75441.f_555[0].f_9, 13))
		{
			func_151(iParam0, 0);
		}
	}
}

int func_156(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_157(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

void func_158(int iParam0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_162(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_161(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_160(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_159(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_160(int iParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_162(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_163(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_155(iParam0);
	func_151(iParam0, 0);
}

void func_164()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (!PED::IS_PED_INJURED(Local_2246[iVar0].f_14[iVar1]) && PED::IS_PED_IN_ANY_VEHICLE(Local_2246[iVar0].f_14[iVar1], 0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_2246[iVar0].f_14[iVar1], 3, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_2246[iVar0].f_14[iVar1], 2, 0);
				PED::SET_PED_KEEP_TASK(Local_2246[iVar0].f_14[iVar1], 1);
			}
			iVar1++;
		}
		iVar0++;
	}
}

float func_165(var uParam0)
{
	if (func_168(uParam0))
	{
		if (func_167(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_166(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_166(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_167(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_168(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_169(var uParam0, var uParam1)
{
	switch (iLocal_1042)
	{
		case 1:
			if (func_531())
			{
				bLocal_1703 = true;
				iLocal_1042 = 4;
				break;
			}
			func_471(uParam1);
			break;
		
		case 4:
			func_466(uParam0);
			func_461(uParam0, &uLocal_1972, 0);
			func_460();
			PED::SET_PED_MODEL_IS_SUPPRESSED(*uParam0, 1);
			func_457(uParam0, &Local_1045);
			func_456(uParam0);
			if (bLocal_1703)
			{
				if (Global_111638.f_19958.f_8 != 0f)
				{
					func_455(&uLocal_1038, Global_111638.f_19958.f_8);
				}
				if (iLocal_1750 == 0)
				{
					func_454(uParam0, uParam1);
				}
				else if (iLocal_1750 == 1)
				{
					func_453(uParam0, uParam1);
				}
				else if (iLocal_1750 == 4)
				{
					func_452(uParam0, uParam1);
				}
				else if (iLocal_1750 == 2)
				{
					func_448(uParam0, uParam1);
				}
				else if (iLocal_1750 == 3)
				{
					func_443(uParam1);
				}
			}
			else
			{
				if (!func_168(&uLocal_1038))
				{
					func_442(&uLocal_1038);
					Global_111638.f_19958.f_8 = 0f;
				}
				iLocal_1042 = 5;
			}
			break;
		
		case 5:
			if (func_435(uParam0, &uLocal_1972, 0))
			{
				iLocal_1042 = 6;
			}
			break;
		
		case 6:
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_434(&(uParam0->f_63[0]), 7500, 1);
				}
				else
				{
					HUD::REMOVE_BLIP(&(uParam1->f_2));
					func_434("ASS_BS_COPS", 7500, 1);
				}
				func_433(&(uParam1->f_2), 388.7943f, -681.7061f, 28.149f, 272.5919f);
				func_383(0, "assassin_bus_enter_bus", 0, 0, 0, 1);
				func_377(iLocal_1804);
				iLocal_1042 = 7;
			}
			break;
		
		case 7:
			func_376();
			func_375();
			if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
			{
				func_372();
				if (func_370(uParam0->f_6, fLocal_1756) && PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_2));
					}
					func_98(1);
					iLocal_1042 = 10;
				}
				else
				{
					func_369(uParam1->f_2, "ASS_BS_COPS");
					if (func_368(uParam0->f_6, 1) < 200f)
					{
						func_367(uParam0);
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				uParam1->f_2 = HUD::ADD_BLIP_FOR_COORD(uParam0->f_6);
				HUD::SET_BLIP_ROUTE(uParam1->f_2, 1);
			}
			else
			{
				func_366();
			}
			func_365(uParam1);
			func_364();
			if ((((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_363(uParam1->f_1, 1) < fLocal_1756) || !func_362(uParam1->f_1)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_9, 25f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_1, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_352(Local_1462, uParam0, 2);
			}
			break;
		
		case 10:
			func_351(&Local_1045);
			func_365(uParam1);
			func_364();
			if (func_350(&Local_1045, uParam0))
			{
				if (iLocal_1027 == 1)
				{
					if (PED::GET_PED_LAST_DAMAGE_BONE(*uParam1, &iVar0) && iVar0 != -1)
					{
						if (!func_349(*uParam1))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_ojbusass_bus_impact", *uParam1, 0f, 0f, 0f, ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam1->f_1), iVar0, 2f, 0, 0, 0);
						}
					}
					else if (!func_349(*uParam1))
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_ojbusass_bus_impact", *uParam1, 0f, 0f, 0f, ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam1->f_1), 31086, 2f, 0, 0, 0);
					}
				}
				func_348(&iLocal_1719, &(uParam1->f_16), "OJASAUD", "OJAS_BUCOM", 9, 1, 0, 0);
				func_347(uParam1, 1);
				iLocal_1042 = 11;
			}
			else
			{
				func_207(uParam0, &Local_1045);
				func_206(uParam1);
			}
			break;
		
		case 11:
			if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_2));
			}
			func_482(&uLocal_2367, 0, 0);
			HUD::CLEAR_HELP(1);
			func_205();
			iLocal_1696 = 0;
			func_347(uParam1, 0);
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			func_348(&iLocal_1719, &(uParam1->f_16), "OJASAUD", "OJAS_BUCOM", 9, 1, 0, 0);
			iLocal_1042 = 12;
			break;
		
		case 12:
			func_351(&Local_1045);
			func_348(&iLocal_1719, &(uParam1->f_16), "OJASAUD", "OJAS_BUCOM", 9, 1, 0, 0);
			func_204(uParam1->f_1, 0);
			if (func_202(uParam1))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_184(uParam1))
					{
						return 1;
					}
				}
				else if (!iLocal_1030)
				{
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
					func_434("ASS_BS_COPS", 7500, 1);
					func_183(&uLocal_1831);
					func_183(&uLocal_1825);
					iLocal_1030 = 1;
				}
				else
				{
					func_179();
				}
			}
			else
			{
				func_179();
			}
			break;
	}
	if (iLocal_1042 >= 7)
	{
		if (func_170())
		{
			func_352(Local_1462, uParam0, 4);
		}
	}
	return 0;
}

int func_170()
{
	if (iLocal_1747 >= 1)
	{
		if (func_171())
		{
			return 1;
		}
	}
	else if (func_171())
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	if (func_178())
	{
		if (!func_172(3))
		{
			return 1;
		}
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_178())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_177(iVar0) == iParam0)
			{
				if (func_173(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_173(int iParam0)
{
	return func_174(iParam0, 5, 1);
}

int func_174(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_176() == 0)
		{
			return MISC::IS_BIT_SET(func_19(func_175(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

int func_176()
{
	return Global_30768;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_178()
{
	return Global_98796.f_345 > 0;
}

void func_179()
{
	if (!iLocal_1722)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (!func_168(&uLocal_1840))
			{
				func_183(&uLocal_1840);
			}
			else if (func_180(&uLocal_1840, 10f))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ASS_BUS_01", 0f);
				iLocal_1722 = 1;
			}
		}
	}
}

int func_180(var uParam0, float fParam1)
{
	if (func_182(uParam0, fParam1))
	{
		func_181(uParam0);
		return 1;
	}
	return 0;
}

void func_181(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_182(var uParam0, float fParam1)
{
	if (func_168(uParam0))
	{
		if (func_165(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(var uParam0)
{
	func_455(uParam0, 0f);
}

int func_184(var uParam0)
{
	if (!iLocal_1717)
	{
		func_98(0);
		func_201(&(uParam0->f_16), 3, 0, "LESTER", 0, 1);
		if (func_186(&(uParam0->f_16), 12, "OJASAUD", "OJAS_BUS_C", 14, 1, 0, 0, 0))
		{
			iLocal_1717 = 1;
		}
	}
	if (iLocal_1717 && func_185())
	{
		return 1;
	}
	return 0;
}

int func_185()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_186(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_200(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam5 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_187(sParam3, iParam4, bParam8);
}

int func_187(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_199();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_198(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_197();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_196();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_195())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_93())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_194();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_193();
		func_188();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_199();
	}
	return 0;
}

void func_188()
{
	if (!func_189())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_189()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_192())
	{
		return 0;
	}
	if (func_190(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_190(int iParam0)
{
	return func_191(iParam0, 20);
}

bool func_191(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_192()
{
	return -1;
}

void func_193()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_194()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_195()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_196()
{
	if (func_37(14))
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
		Global_19486 = func_43();
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

void func_197()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_198(int iParam0, int iParam1)
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

void func_199()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_200(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_201(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_202(var uParam0)
{
	switch (iLocal_1751)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
				{
					func_434("ASS_BS_EXIT", 7500, 1);
				}
			}
			iLocal_1751 = 1;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 0) };
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					if (SYSTEM::VDIST2(Var3, Var0) < 2500f)
					{
						func_434("ASS_BS_AREA", 7500, 1);
					}
					iLocal_1751 = 2;
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 0) };
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					if (SYSTEM::VDIST2(Var3, Var0) < 2500f)
					{
						func_434("ASS_BS_AREA", 7500, 1);
					}
					iLocal_1751 = 2;
				}
			}
			else
			{
				iLocal_1751 = 2;
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
				{
					iLocal_1751 = 0;
				}
			}
			Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 0) };
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			if (SYSTEM::VDIST2(Var3, Var0) > 2500f)
			{
				if (func_203("ASS_BS_EXIT", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("ASS_BS_EXIT");
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool func_203(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_204(int iParam0, bool bParam1)
{
	if (!func_168(&uLocal_1837))
	{
		func_183(&uLocal_1837);
	}
	if (func_165(&uLocal_1837) > fLocal_1757)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar0, 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				if (!bParam1)
				{
					if (iVar1 == 0)
					{
						AUDIO::PLAY_PAIN(iVar2, 6, 0, 0);
					}
					else if (iVar1 == 1)
					{
						AUDIO::PLAY_PAIN(iVar2, 7, 0, 0);
					}
					else if (iVar1 == 2)
					{
						AUDIO::PLAY_PAIN(iVar2, 3, 0, 0);
					}
				}
			}
		}
		fLocal_1757 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
		func_183(&uLocal_1837);
	}
}

void func_205()
{
	if (CAM::DOES_CAM_EXIST(uLocal_142))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_142))
		{
			CAM::SET_CAM_ACTIVE(uLocal_142, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_HUD(1);
			CAM::DESTROY_CAM(uLocal_142, 0);
		}
	}
}

void func_206(var uParam0)
{
	if (!func_168(&uLocal_1035))
	{
		func_183(&uLocal_1035);
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0) && PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_8, 0))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1, *uParam0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1, uParam0->f_8))
					{
						func_183(&uLocal_1035);
					}
				}
				else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1, *uParam0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1, uParam0->f_8))
				{
					func_183(&uLocal_1035);
				}
			}
		}
	}
}

void func_207(var uParam0, var uParam1)
{
	func_346(uParam1);
	switch (iLocal_1461)
	{
		case 0:
			if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_2));
			}
			if (!HUD::DOES_BLIP_EXIST(uParam1->f_2))
			{
				uParam1->f_2 = func_345(uParam1->f_1, 1, 0);
			}
			if (func_344(uParam0) && func_343(uParam0))
			{
				iLocal_1461 = 1;
			}
			break;
		
		case 1:
			if (func_344(uParam0) && func_343(uParam0))
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				func_342();
				func_341(uParam0, uParam1);
				iLocal_1461 = 2;
			}
			break;
		
		case 2:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_1, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_352(Local_1462, uParam0, 2);
				return;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, 0))
			{
				if (func_340(uParam1))
				{
					func_339();
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-713569950, 1);
					if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_2));
					}
					if (func_368(Local_1776, 1) <= 75f)
					{
						func_383(1, "assassin_bus_stage_drive_to_stops", 0, 0, 0, 1);
					}
					bLocal_1692 = true;
					func_337();
					func_434("ASS_BS_FIND", 7500, 1);
					SYSTEM::SETTIMERA(0);
					iLocal_1461 = 3;
				}
			}
			break;
		
		case 3:
			func_307(uParam1, uParam0);
			func_305(uParam1, 0);
			break;
		
		case 4:
			func_281(uParam1, uParam1);
			break;
		
		case 5:
			func_179();
			func_280();
			func_279();
			func_275(*uParam1, uParam1->f_8, uParam1);
			func_246(&uLocal_2367, *uParam1, 0, 0, 1, 1, 1);
			func_347(uParam1, 1);
			break;
		
		case 6:
			func_179();
			func_243(uParam1);
			func_246(&uLocal_2367, *uParam1, 0, 0, 1, 1, 1);
			break;
	}
	func_226(uParam0, uParam1);
	if (iLocal_1461 > 4)
	{
		if (func_225(*uParam1, 175f, 0))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam1) || ENTITY::IS_ENTITY_OCCLUDED(*uParam1))
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_2));
					}
					func_352(Local_1462, uParam0, 0);
				}
			}
		}
	}
	func_222(uParam0, uParam1);
	func_209(uParam1);
	func_208(&iLocal_1738);
	func_206(uParam1);
}

var func_208(int iParam0)
{
	if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
	{
		*iParam0++;
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	}
	return *iParam0;
}

void func_209(var uParam0)
{
	if (!func_221())
	{
		if (func_168(&uLocal_1831))
		{
			if (func_165(&uLocal_1831) > 5f)
			{
				if (iLocal_1696)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
						{
							fVar0 = ENTITY::GET_ENTITY_SPEED(uParam0->f_1);
							if (fVar0 > 10f)
							{
								if (!PED::IS_PED_INJURED(*uParam0))
								{
									if (func_165(&uLocal_1822) >= IntToFloat(iLocal_1730) && func_363(*uParam0, 1) <= 50f)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
										{
											if (PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_8, 0))
											{
												func_220(uParam0);
											}
											else if (!iLocal_1694)
											{
												func_219(&(uParam0->f_16), "OJASAUD", "OJASbs_FOOT", "OJASbs_FOOT_1", 9, 0, 0);
												func_218(3, 12);
												iLocal_1694 = 1;
											}
										}
									}
									else if (func_165(&uLocal_1825) >= IntToFloat(iLocal_1735))
									{
										func_216(uParam0);
									}
								}
							}
						}
						else
						{
							func_215(uParam0);
						}
					}
				}
			}
		}
		else
		{
			func_183(&uLocal_1831);
		}
		func_210(uParam0);
	}
}

void func_210(var uParam0)
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (func_168(&uLocal_1825))
		{
			if (!func_221())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
					{
						if (iLocal_1747 != 0)
						{
							func_214(uParam0);
							func_211(uParam0);
						}
					}
				}
			}
		}
		else
		{
			func_442(&uLocal_1825);
		}
	}
}

void func_211(var uParam0)
{
	if (iLocal_1738 > 0)
	{
		switch (iLocal_1733)
		{
			case 0:
				iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
				if (iVar0 == 0)
				{
					if (func_213(uParam0, iLocal_1791))
					{
						func_201(&(uParam0->f_16), 4, iLocal_1791, "BusPed1", 0, 1);
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_DMG", 9, 0, 0, 0);
						iLocal_1739 = iLocal_1738;
						iLocal_1733++;
					}
				}
				else if (func_213(uParam0, iLocal_1793))
				{
					func_201(&(uParam0->f_16), 6, iLocal_1793, "BusPed3", 0, 1);
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_DMG3", 9, 0, 0, 0);
					iLocal_1739 = iLocal_1738;
					iLocal_1733++;
				}
				break;
			
			case 1:
				if (iLocal_1738 > iLocal_1739)
				{
					if (func_213(uParam0, iLocal_1792))
					{
						func_201(&(uParam0->f_16), 5, iLocal_1792, "BusPed2", 0, 1);
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_DMG2", 9, 0, 0, 0);
						iLocal_1739 = iLocal_1738;
						iLocal_1733++;
					}
				}
				break;
			
			case 3:
				break;
			}
	}
}

bool func_212(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_200(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_187(sParam2, iParam3, 0);
}

int func_213(var uParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam1) && PED::IS_PED_IN_VEHICLE(iParam1, uParam0->f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_214(var uParam0)
{
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_1);
	switch (iLocal_1741)
	{
		case 0:
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(uParam0->f_1) >= 2)
			{
				iLocal_1740 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_1);
				iLocal_1741++;
			}
			break;
		
		case 1:
			if (!func_221())
			{
				if (iVar0 < (iLocal_1740 - 50) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_1))
				{
					if (func_213(uParam0, iLocal_1791))
					{
						func_201(&(uParam0->f_16), 4, iLocal_1791, "BusPed1", 0, 1);
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_DMG4", 9, 0, 0, 0);
						iLocal_1740 = iVar0;
						iLocal_1741++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_221())
			{
				if (iVar0 < (iLocal_1740 - 150) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_1))
				{
					if (func_213(uParam0, iLocal_1792))
					{
						func_201(&(uParam0->f_16), 5, iLocal_1792, "BusPed2", 0, 1);
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_DMG5", 9, 0, 0, 0);
						iLocal_1740 = iVar0;
						iLocal_1741++;
					}
				}
			}
			break;
		
		case 3:
			if (!func_221())
			{
				if (iVar0 < (iLocal_1740 - 200) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_1))
				{
					if (func_213(uParam0, iLocal_1793))
					{
						func_201(&(uParam0->f_16), 6, iLocal_1793, "BusPed3", 0, 1);
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_DMG6", 9, 0, 0, 0);
						iLocal_1740 = iVar0;
						iLocal_1741++;
					}
				}
			}
			break;
	}
}

void func_215(var uParam0)
{
	if (!iLocal_1695)
	{
		if (!func_221())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
			{
				if (func_363(uParam0->f_1, 1) < 20f)
				{
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_BAIL", 9, 0, 0, 0);
				}
			}
			iLocal_1695 = 1;
		}
	}
	else if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			if (func_165(&uLocal_1822) >= IntToFloat(iLocal_1730))
			{
				if (func_363(*uParam0, 1) < 50f && func_363(*uParam0, 1) > 10f)
				{
					switch (iLocal_1736)
					{
						case 0:
							func_201(&(uParam0->f_16), 3, *uParam0, "INVESTOR", 0, 1);
							func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_FOOT2", 9, 0, 0, 0);
							break;
						
						case 1:
							if (!bLocal_1697)
							{
								if (func_165(&uLocal_1822) >= IntToFloat(iLocal_1730))
								{
									func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_FOOT3", 9, 0, 0, 0);
								}
							}
							break;
						
						case 2:
							if (func_165(&uLocal_1822) >= IntToFloat(iLocal_1730))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_FOOT4", 9, 0, 0, 0);
							}
							break;
						
						case 3:
							if (func_165(&uLocal_1822) >= IntToFloat(iLocal_1730))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_FOOT5", 9, 0, 0, 0);
							}
							break;
						
						case 4:
							if (func_165(&uLocal_1822) >= IntToFloat(iLocal_1730))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_FOOT6", 9, 0, 0, 0);
							}
							break;
					}
					func_183(&uLocal_1822);
					iLocal_1736++;
				}
			}
		}
	}
}

void func_216(var uParam0)
{
	if (func_168(&uLocal_1825))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
			{
				if (func_165(&uLocal_1825) >= IntToFloat(iLocal_1735))
				{
					switch (iLocal_1731)
					{
						case 0:
							if (func_213(uParam0, iLocal_1791))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_PASS1", 9, 0, 0, 0);
							}
							break;
						
						case 1:
							if (func_213(uParam0, iLocal_1792))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_PASS2", 9, 0, 0, 0);
							}
							break;
						
						case 2:
							if (func_213(uParam0, iLocal_1793))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_PASS3", 9, 0, 0, 0);
							}
							break;
						
						case 3:
							if (func_213(uParam0, iLocal_1791))
							{
								func_201(&(uParam0->f_16), 6, iLocal_1791, "BusPed3", 0, 1);
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_ARGUE", 9, 0, 0, 0);
							}
							break;
						
						case 4:
							if (func_213(uParam0, iLocal_1791))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_PASS4", 9, 0, 0, 0);
							}
							break;
						
						case 5:
							if (func_213(uParam0, iLocal_1792))
							{
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_PASS5", 9, 0, 0, 0);
							}
							break;
					}
					func_217(10, 20);
				}
			}
		}
	}
}

void func_217(int iParam0, int iParam1)
{
	iLocal_1735 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	func_183(&uLocal_1825);
	func_183(&uLocal_1831);
	iLocal_1731++;
}

void func_218(int iParam0, int iParam1)
{
	iLocal_1730 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	func_183(&uLocal_1822);
	func_183(&uLocal_1831);
	iLocal_1729++;
}

int func_219(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_200(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_187(sParam2, iParam4, 0);
}

void func_220(var uParam0)
{
	switch (iLocal_1729)
	{
		case 0:
			func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_SPOT", 9, 0, 0, 0);
			break;
		
		case 1:
			func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_CHAS1", 9, 0, 0, 0);
			break;
		
		case 2:
			func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_CHAS2", 9, 0, 0, 0);
			break;
		
		case 3:
			func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_CHAS3", 9, 0, 0, 0);
			break;
		
		case 4:
			func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_CHAS4", 9, 0, 0, 0);
			break;
		
		case 5:
			func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_CHAS5", 9, 0, 0, 0);
			break;
		
		case 6:
			func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_CHAS6", 9, 0, 0, 0);
			break;
	}
	func_218(6, 12);
}

int func_221()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_222(var uParam0, var uParam1)
{
	if (iLocal_1461 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_2));
				}
				func_352(Local_1462, uParam0, 3);
			}
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam1->f_1, 0, 1000))
			{
				func_352(Local_1462, uParam0, 3);
			}
			if (iLocal_1461 >= 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_1, 0))
					{
						if (bLocal_1692 == 1)
						{
							bLocal_1692 = false;
							func_224();
							if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
							{
								HUD::REMOVE_BLIP(&(uParam1->f_2));
							}
							if (!HUD::DOES_BLIP_EXIST(uParam1->f_2))
							{
								uParam1->f_2 = func_345(uParam1->f_1, 1, 0);
							}
							if (!func_168(&uLocal_1819))
							{
								func_442(&uLocal_1819);
							}
							else
							{
								func_183(&uLocal_1819);
							}
							if (!iLocal_1693)
							{
								func_434("ASS_BS_RETURN", 7500, 1);
								iLocal_1693 = 1;
							}
						}
					}
					else if (!bLocal_1692)
					{
						bLocal_1692 = true;
						HUD::CLEAR_PRINTS();
						func_337();
						if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_2));
						}
						if (func_168(&uLocal_1819))
						{
							func_223(&uLocal_1819);
						}
					}
				}
			}
		}
		if (!bLocal_1692)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_1, 0))
			{
				Local_1779 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_1, 1) };
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Local_1782 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (SYSTEM::VDIST2(Local_1782, Local_1779) > 10000f)
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					func_352(Local_1462, uParam0, 1);
				}
			}
		}
	}
}

void func_223(var uParam0)
{
	if (func_168(uParam0))
	{
		if (!func_167(uParam0))
		{
			uParam0->f_2 = (func_166(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			MISC::SET_BIT(uParam0, 2);
		}
	}
}

void func_224()
{
	HUD::REMOVE_BLIP(&(Local_2246[0].f_9));
	HUD::REMOVE_BLIP(&(Local_2246[1].f_9));
	HUD::REMOVE_BLIP(&(Local_2246[2].f_9));
	HUD::REMOVE_BLIP(&(Local_2246[3].f_9));
}

int func_225(int iParam0, float fParam1, float fParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				fVar1 = func_363(iParam0, 1);
				if (fVar1 > fParam1)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar0) || ENTITY::IS_ENTITY_OCCLUDED(iVar0))
					{
						return 1;
					}
					else if (fParam2 != 0f)
					{
						if (fVar1 > fParam2)
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								return 1;
							}
						}
					}
				}
			}
			else if (func_363(iParam0, 1) > fParam1)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) || ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_226(var uParam0, var uParam1)
{
	if (!iLocal_1691 == 1)
	{
		if (iLocal_1461 < 4)
		{
			if (((((func_235(*uParam1, 0, &uLocal_122, &uLocal_133, 0, 0, 0, 1, 1) || func_233(&uLocal_1728)) || iLocal_1738 >= 2) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, 0)) || func_232(*uParam1, uParam1->f_8, 1097859072))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
				}
				if (iLocal_1738 >= 2)
				{
				}
				iLocal_1691 = 1;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							if (func_363(*uParam1, 1) < 30f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), 1))
							{
								func_224();
								if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
								{
									HUD::REMOVE_BLIP(&(uParam1->f_2));
								}
								iLocal_1695 = 1;
								if ((func_230(uParam1) && !ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_1)) && !ENTITY::IS_ENTITY_ON_SCREEN(*uParam1))
								{
									PED::SET_PED_INTO_VEHICLE(*uParam1, uParam1->f_8, -1);
									func_228(uParam1, &(uParam1->f_8));
									iLocal_1461 = 5;
								}
								else
								{
									bLocal_1697 = true;
									func_212(&(uParam1->f_16), "OJASAUD", "OJASbs_FOOT3", 9, 0, 0, 0);
									iLocal_1696 = 1;
									iLocal_1461 = 6;
								}
							}
							else
							{
								func_352(Local_1462, uParam0, 2);
							}
						}
					}
					else
					{
						func_352(Local_1462, uParam0, 2);
					}
				}
			}
		}
		else if (!iLocal_1691)
		{
			if (iLocal_1738 >= 4)
			{
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_227(1, 1036831949, 1050253722);
					iLocal_1691 = 1;
				}
			}
		}
	}
}

void func_227(int iParam0, int iParam1, float fParam2)
{
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), iParam0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), iParam1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
}

void func_228(var uParam0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam1, 0))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam1))
				{
					func_229(*uParam0, *uParam1);
					iLocal_1696 = 1;
				}
			}
		}
	}
}

void func_229(int iParam0, var uParam1)
{
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0, uParam1, "OJASbs_102", 52, 0, 20, -1, -1082130432, 0, 1073741824);
	Local_1758 = { -455.2892f, -326.1364f, 41.22218f };
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("OJASbs_102", &uLocal_1748);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1, 1);
	fLocal_1753 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1);
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uParam1, (fLocal_1752 * 100f));
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam1, 1.5f);
}

int func_230(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
			{
				if (func_231(uParam0->f_8, Local_2246[iLocal_1727].f_5, 1) > 5f || ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1, uParam0->f_8))
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

float func_231(int iParam0, struct<3> Param1, int iParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam4);
}

int func_232(int iParam0, int iParam1, float fParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (!PED::IS_PED_INJURED(iParam0))
					{
						if (func_363(iParam0, 1) < fParam2)
						{
							return 1;
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_233(var uParam0)
{
	if (Local_2246[0])
	{
		iVar1 = 0;
	}
	else if (Local_2246[1])
	{
		iVar1 = 1;
	}
	else if (Local_2246[2])
	{
		iVar1 = 2;
	}
	else if (Local_2246[3])
	{
		iVar1 = 3;
	}
	if (*uParam0 == 0)
	{
		iVar0 = Local_2246[iVar1].f_14[0];
	}
	else if (*uParam0 == 1)
	{
		iVar0 = Local_2246[iVar1].f_14[1];
	}
	else if (*uParam0 == 2)
	{
		iVar0 = Local_2246[iVar1].f_14[2];
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (func_235(iVar0, 0, &uLocal_122, &uLocal_133, 0, 0, 0, 1, 1) || func_234())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	*uParam0++;
	if (*uParam0 > 2)
	{
		*uParam0 = 0;
	}
	return 0;
}

int func_234()
{
	if (bLocal_1692)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_49(*uParam2, 1))
		{
			if (func_242(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_49(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_49(*uParam2, 4))
		{
			if (func_239(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_49(*uParam2, 8))
		{
			if (func_238(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_49(*uParam2, 128);
		if (bParam4)
		{
			if (func_236(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_49(*uParam2, 16))
		{
			if (func_236(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3)
	{
		if (!bLocal_118)
		{
			iLocal_119 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_118 = true;
		}
		iLocal_120 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_121 = (iLocal_119 - iLocal_120);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_121) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_118)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_121) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_237(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_363(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1)
{
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == 883325847)
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_238(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_239(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_240(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.x - IntToFloat(uParam2->f_6)), (Var0.y - IntToFloat(uParam2->f_6)), (Var0.z - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.y + IntToFloat(uParam2->f_6)), (Var0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == 741814745)
					{
						if (func_241(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_241(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_242(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_363(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_243(var uParam0)
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -1824940423) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1)
			{
				TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(*uParam0, 2f);
		}
		else if (((TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 1805844857) != 0) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503) != 0)
		{
			TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
		}
	}
	func_244(uParam0, 0);
}

void func_244(var uParam0, int iParam1)
{
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_2))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (iParam1 || !func_221())
			{
				HUD::REMOVE_BLIP(&(uParam0->f_2));
				func_224();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_2));
				}
				uParam0->f_2 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
				func_434("ASS_BS_KILL", 7500, 1);
				func_245();
			}
		}
	}
}

void func_245()
{
	func_183(&uLocal_1822);
	func_183(&uLocal_1831);
	func_183(&uLocal_1825);
}

void func_246(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_247(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_247(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_248(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_248(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_482(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_249(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_249(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_274(iVar0))
	{
		func_273();
	}
	if (func_272(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_267(uParam0, bParam7, bParam9, 0))
			{
				func_264(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_254(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_274(iVar0))
							{
								func_253(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_252(1);
								}
							}
						}
					}
				}
			}
			else if (func_254(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_274(iVar0))
						{
							func_253(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_252(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_274(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_482(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_482(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_482(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_482(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_482(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_482(uParam0, iVar0, 1);
				}
			}
			if (!func_267(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_251(uParam0))
				{
					func_250(uParam0);
				}
			}
		}
	}
	else
	{
		func_482(uParam0, iVar0, 0);
	}
}

void func_250(var uParam0)
{
	if (func_272(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_251(var uParam0)
{
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_252(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_253(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_254(char* sParam0)
{
	if (!func_255(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_274(sParam0)) || func_274("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_252(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_252(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_252(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_255(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_96(0))
	{
		return 0;
	}
	if (func_263())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) > 0)
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_262() || func_261(Global_4456448.f_232883)) || func_260())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_259(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_258(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_256(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0)
{
	if (iParam0 != func_192())
	{
		if (func_257(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_257(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_257(int iParam0, bool bParam1, bool bParam2)
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

int func_258(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_259(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_260()
{
	return Global_2450632.f_17;
}

bool func_261(int iParam0)
{
	return iParam0 == 51;
}

var func_262()
{
	return Global_2450632.f_16;
}

bool func_263()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_264(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_482(uParam0, 0, 0);
	}
	if (func_157(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_265())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_265()
{
	return func_266(PLAYER::PLAYER_ID());
}

int func_266(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_267(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_271(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_270(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_270(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_271(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_251(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_271(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_270(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_270(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_271(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_271(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_270(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_270(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_271(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_269(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_268(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_268(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_269(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_251(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_255(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_273();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_268(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_255(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_269(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_255(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_270(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_255(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_271(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_255(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_272(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_273()
{
	MISC::SET_BIT(&Global_7357, 4);
}

bool func_274(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_275(int iParam0, int iParam1, var uParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 451360105) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 451360105) != 0)
					{
						TASK::TASK_LEAVE_VEHICLE(iParam0, iParam1, 0);
					}
				}
				else
				{
					func_278(*uParam2, uParam2->f_8);
				}
				if (func_277(&(uParam2->f_8)))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 451360105) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 451360105) != 0)
					{
						TASK::TASK_LEAVE_VEHICLE(iParam0, iParam1, 0);
					}
				}
				func_244(uParam2, 0);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470) != 1)
			{
				func_276(iParam0);
			}
		}
	}
	else
	{
		func_276(iParam0);
	}
}

void func_276(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0)
		{
			if (func_231(iParam0, Local_1758, 1) <= 50f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_1758, 2f, 0, 0, 786603, -1082130432);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
			iLocal_1461 = 6;
		}
	}
}

int func_277(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_278(int iParam0, int iParam1)
{
	if (!func_168(&uLocal_1834))
	{
		func_442(&uLocal_1834);
	}
	if (func_165(&uLocal_1834) > 1f)
	{
		fVar0 = func_363(iParam0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
			{
				if (fVar0 > 150f)
				{
					fLocal_1754 = 10f;
				}
				else if (fVar0 < 100f && fVar0 > 75f)
				{
					fLocal_1754 = 11f;
				}
				else if (fVar0 < 75f && fVar0 > 50f)
				{
					fLocal_1754 = 12f;
				}
				else if (fVar0 < 50f && fVar0 > 35f)
				{
					fLocal_1754 = 13f;
				}
				else if (fVar0 < 35f)
				{
					fLocal_1754 = 14f;
				}
				uVar1 = TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iParam1);
				fVar2 = SYSTEM::TO_FLOAT(uVar1);
				fVar3 = SYSTEM::TO_FLOAT(uLocal_1748);
				if ((iLocal_1727 == 3 && fVar2 >= (fVar3 * 0.625f)) && fVar2 <= (fVar3 * 0.75f))
				{
					if (fLocal_1754 < fLocal_1753)
					{
						fLocal_1754 = fLocal_1753;
					}
				}
				else if (fVar2 > (fVar3 * 0.75f))
				{
					if (fLocal_1754 > (fLocal_1753 - (fLocal_1753 * 0.15f)))
					{
						fLocal_1754 = (fLocal_1753 - (fLocal_1753 * 0.15f));
					}
				}
				else if (fVar2 > (fVar3 * 0.5f))
				{
					if (fLocal_1754 > (fLocal_1753 - (fLocal_1753 * 0.05f)))
					{
						fLocal_1754 = (fLocal_1753 - (fLocal_1753 * 0.05f));
					}
				}
				if (fLocal_1754 != 0f)
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0, fLocal_1754);
				}
			}
		}
	}
	else if (func_165(&uLocal_1834) >= 2f)
	{
		func_183(&uLocal_1834);
	}
}

void func_279()
{
	if (!iLocal_1710)
	{
		if (!PED::IS_PED_INJURED(iLocal_1846))
		{
			TASK::CLEAR_PED_TASKS(iLocal_1846);
			TASK::TASK_PLAY_ANIM(iLocal_1846, "oddjobs@assassinate@bus@", "looking_for_help", 8f, -8f, -1, 1, 0, 0, 0, 0);
			AUDIO::PLAY_PAIN(iLocal_1846, 6, 0, 0);
			iLocal_1710 = 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1846))
	{
		if (func_235(iLocal_1846, 0, &uLocal_122, &uLocal_133, 0, 0, 0, 1, 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1846, 1805844857) != 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_1846);
				TASK::TASK_SMART_FLEE_PED(iLocal_1846, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
		}
		if (func_363(iLocal_1846, 1) > 100f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1846) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_1846))
			{
				PED::DELETE_PED(&iLocal_1846);
			}
		}
	}
}

void func_280()
{
	if (!iLocal_1715)
	{
		func_383(2, "assassin_bus_stage_kill_target", 0, 0, 0, 1);
		iLocal_1715 = 1;
	}
}

void func_281(var uParam0, var uParam1)
{
	switch (iLocal_1726)
	{
		case 0:
			if (func_300(1, 3f))
			{
				func_299();
				GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(1);
				GRAPHICS::_0x03FC694AE06C5A20();
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_1, 0))
				{
					VEHICLE::_SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(uParam1->f_1, 1);
				}
				func_298(uParam1->f_1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(*uParam0, "Mugger", 0, ENTITY::GET_ENTITY_MODEL(*uParam0), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1846, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1846, "Mugging_Victim", 0, 1640504453, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_1, 0))
				{
					if (bLocal_1713)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_1, "Franklins_Coach", 0, -2072933068, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklins_Bus", 3, -713569950, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_1, "Franklins_Bus", 0, -713569950, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklins_Coach", 3, -2072933068, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_8, "Stolen_Bike", 0, -186537451, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				func_295(102.748f, -782.9255f, 35.7965f, 102.748f, -782.9255f, 35.7965f, 0f, 1, 1, 1, 1);
				iLocal_1726++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (Global_92921)
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_1806) && CAM::IS_CAM_ACTIVE(uLocal_1806))
				{
					CAM::SET_CAM_ACTIVE(uLocal_1806, 0);
					CAM::DESTROY_CAM(uLocal_1806, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				else if (CAM::DOES_CAM_EXIST(uLocal_1806))
				{
					CAM::DESTROY_CAM(uLocal_1806, 0);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_8, 0))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mugger", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Stolen_Bike", 0))
					{
						TASK::TASK_ENTER_VEHICLE(*uParam0, uParam1->f_8, 20000, -1, 2f, 1, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 0);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam0, 3);
						func_229(*uParam0, uParam1->f_8);
						iLocal_1696 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mugging_Victim", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1846) && !PED::IS_PED_INJURED(iLocal_1846))
					{
						func_279();
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_1)) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_1, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_1, -1);
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				func_294(1, 1);
				if (!PED::IS_PED_INJURED(*uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_8) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_8, 0))
					{
						PED::SET_PED_INTO_VEHICLE(*uParam0, uParam1->f_8, -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 0);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam0, 3);
					}
					else
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_8))
						{
						}
						else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_8, 0))
						{
						}
						TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					}
				}
				func_228(uParam1, &(uParam1->f_8));
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				func_284(1, 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_1, 0);
				func_212(&(uParam1->f_16), "OJASAUD", "OJAS_MCS1LO", 9, 1, 0, 0);
				func_244(uParam1, 1);
				iLocal_1726++;
			}
			break;
		
		case 2:
			func_283(*uParam1, iLocal_1727);
			func_282(uParam1->f_1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_1, 0))
			{
				VEHICLE::_SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(uParam1->f_1, 0);
			}
			iLocal_1461 = 5;
			break;
	}
}

void func_282(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 1, iParam1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 0, iParam1);
	}
}

void func_283(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!PED::IS_PED_INJURED(Local_2246[iParam1].f_14[iVar0]))
			{
				if (iVar0 == 0)
				{
					sVar2 = "give_me_a_break";
				}
				else if (iVar0 == 1)
				{
					sVar2 = "numbnuts";
				}
				else
				{
					sVar2 = "threaten";
				}
				TASK::CLEAR_PED_TASKS(Local_2246[iParam1].f_14[iVar0]);
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0);
				TASK::TASK_PLAY_ANIM(0, "misscommon@response", sVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(Local_2246[iParam1].f_14[iVar0], uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
			}
			iVar0++;
		}
	}
}

void func_284(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_286(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	func_285(23, 0);
}

void func_285(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_31015, iParam0);
	}
}

void func_286(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_293(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_93())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_292(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_293(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_292(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_290(PLAYER::PLAYER_ID())) && !func_288(PLAYER::PLAYER_ID(), 0)) && !func_287()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_290(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_287()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_288(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_289(-1, 0) == 8;
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

int func_289(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
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

int func_290(int iParam0)
{
	if (func_288(iParam0, 0))
	{
		return 1;
	}
	if (func_291())
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

bool func_291()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_292(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_293(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_294(int iParam0, int iParam1)
{
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 0);
	func_286(0, 1, 1, 0, 0, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_1847 != 0 && iLocal_1847 != 966099553) && iLocal_1847 != -72657034)
		{
			if (func_349(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_1847, 0);
			}
		}
	}
}

void func_295(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		func_297();
		PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 0);
		if (iParam10 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(func_296(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		HUD::DISPLAY_RADAR(0);
		HUD::DISPLAY_HUD(0);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		if (iParam7 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam8 == 1)
		{
			iLocal_1847 = 0;
			if (func_349(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_1847 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_157(Param0, 0f, 0f, 0f, 0) && !func_157(Param3, 0f, 0f, 0f, 0))
			{
				fParam6 = fParam6;
			}
		}
		if (iParam9 == 1)
		{
		}
	}
}

Vector3 func_296(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_297()
{
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, 0, 32);
		func_286(1, 1, 1, 0, 0, 0);
	}
}

void func_298(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!bLocal_1713)
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 1, 0, 0);
		}
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 0, 0, 0);
	}
}

void func_299()
{
	if (STREAMING::_0x07C313F94746702C(uLocal_1845))
	{
		STREAMING::_0x1EE7D8DF4425F053(uLocal_1845);
		iLocal_1720 = 0;
	}
}

int func_300(int iParam0, float fParam1)
{
	iVar0 = 1;
	CUTSCENE::REQUEST_CUTSCENE("ASS_MCS_1", 8);
	STREAMING::_0xEF39EE20C537E98C(133.2094f, -791.931f, 35.3551f, -4.9404f, 0f, 68.7852f);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_303(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1, 0))
		{
			iVar0 = 0;
		}
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			iVar0 = 0;
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	}
	if (iParam0 == 1)
	{
		if (!func_302())
		{
			iVar0 = 0;
		}
	}
	if (func_221())
	{
		func_301();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}

void func_301()
{
	Global_19671 = 0;
	func_199();
}

bool func_302()
{
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

int func_303(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 352, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_304(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_304(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

void func_305(var uParam0, bool bParam1)
{
	if (iLocal_1747 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	}
	if (!iLocal_1707)
	{
		if (iLocal_1747 > 0)
		{
			func_253("ASS_HELP_02", -1);
			iLocal_1707 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
		{
			iLocal_1721 = 0;
			if (func_267(&uLocal_2367, 1, 0, 0))
			{
				if (!bParam1)
				{
					if (iLocal_1732 == 0)
					{
						iLocal_1708 = 1;
					}
					func_306(uParam0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ASSASSINATION_BUS_SCREAMS_INT_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("ASSASSINATION_BUS_SCREAMS_INT_SCENE");
					}
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ASSASSINATION_BUS_SCREAMS_INT_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("ASSASSINATION_BUS_SCREAMS_INT_SCENE");
				}
				if (!CAM::DOES_CAM_EXIST(uLocal_142))
				{
					uLocal_142 = CAM::CREATE_CAMERA(26379945, 0);
					CAM::_0x661B5C8654ADD825(uLocal_142, 1);
					if (func_274("ASS_HELP_02"))
					{
						HUD::CLEAR_HELP(1);
					}
					GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(0);
					if (bLocal_1712)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_142, uParam0->f_1, 0.0467f, -6.4343f, 1.5665f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_142, uParam0->f_1, -0.0074f, -3.4691f, 1.1139f, 1);
					}
					else if (bLocal_1713)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_142, uParam0->f_1, -0.0387f, -5.3568f, 0.8942f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_142, uParam0->f_1, 0.0245f, -2.4095f, 0.3379f, 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY(uLocal_142, uParam0->f_1, 0.0467f, -6.4343f, 1.5665f, 1);
						CAM::POINT_CAM_AT_ENTITY(uLocal_142, uParam0->f_1, -0.0074f, -3.4691f, 1.1139f, 1);
					}
					CAM::SET_CAM_FOV(uLocal_142, 35f);
				}
				if (!CAM::IS_CAM_ACTIVE(uLocal_142))
				{
					CAM::SET_CAM_ACTIVE(uLocal_142, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_HUD(0);
				}
			}
			else if (CAM::DOES_CAM_EXIST(uLocal_142))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_142))
				{
					CAM::SET_CAM_ACTIVE(uLocal_142, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_HUD(1);
					CAM::DESTROY_CAM(uLocal_142, 0);
					GRAPHICS::_0x03FC694AE06C5A20();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ASSASSINATION_BUS_SCREAMS_INT_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("ASSASSINATION_BUS_SCREAMS_INT_SCENE");
					}
				}
			}
		}
		else
		{
			if (!iLocal_1721)
			{
				HUD::CLEAR_HELP(1);
				iLocal_1721 = 1;
			}
			func_205();
		}
	}
}

void func_306(var uParam0)
{
	if (iLocal_1747 == 0)
	{
		return;
	}
	if (func_168(&uLocal_1828))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
			{
				if (func_165(&uLocal_1828) >= 7f || iLocal_1708)
				{
					switch (iLocal_1732)
					{
						case 0:
							if (func_213(uParam0, iLocal_1791))
							{
								func_201(&(uParam0->f_16), 4, iLocal_1791, "BusPed1", 0, 1);
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_BCH1", 9, 0, 0, 0);
								iLocal_1708 = 0;
								func_183(&uLocal_1828);
								iLocal_1732 = 1;
							}
							break;
						
						case 1:
							if (func_213(uParam0, iLocal_1792))
							{
								func_201(&(uParam0->f_16), 5, iLocal_1792, "BusPed2", 0, 1);
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_BCH2", 9, 0, 0, 0);
								func_183(&uLocal_1828);
								iLocal_1732 = 2;
							}
							break;
						
						case 2:
							if (func_213(uParam0, iLocal_1793))
							{
								func_201(&(uParam0->f_16), 6, iLocal_1793, "BusPed3", 0, 1);
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_BCH3", 9, 0, 0, 0);
								func_183(&uLocal_1828);
								iLocal_1732 = 3;
							}
							break;
						
						case 3:
							if (func_213(uParam0, iLocal_1791))
							{
								func_201(&(uParam0->f_16), 4, iLocal_1791, "BusPed1", 0, 1);
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_BCH4", 9, 0, 0, 0);
								func_183(&uLocal_1828);
								iLocal_1732 = 4;
							}
							break;
						
						case 4:
							if (func_213(uParam0, iLocal_1792))
							{
								func_201(&(uParam0->f_16), 5, iLocal_1792, "BusPed2", 0, 1);
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_BCH5", 9, 0, 0, 0);
								func_183(&uLocal_1828);
								iLocal_1732 = 5;
							}
							break;
						
						case 5:
							if (func_213(uParam0, iLocal_1793))
							{
								func_201(&(uParam0->f_16), 6, iLocal_1793, "BusPed3", 0, 1);
								func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_BCH6", 9, 0, 0, 0);
								func_183(&uLocal_1828);
								iLocal_1732 = 6;
							}
							break;
						
						case 6:
							break;
						}
					}
				}
		}
	}
	else
	{
		func_442(&uLocal_1828);
	}
}

void func_307(var uParam0, var uParam1)
{
	iVar0 = iLocal_1742[iLocal_1747];
	func_335(iVar0);
	if (iVar0 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0->f_1, 112.8744f, -780.2048f, 29.41912f, 118.2785f, -782.2339f, 34.38423f, 2.5f, 0, 1, 0))
				{
					func_352(Local_1462, uParam1, 2);
				}
			}
		}
	}
	if (!CAM::IS_SPHERE_VISIBLE(Local_2246[iVar0].f_1, 15f))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_2246[iVar0].f_1, 15f, 0, 0, 0, 0, 0, 0);
	}
	if (iLocal_1705)
	{
		fVar1 = ((ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) / 5f) + 6f);
		if (func_168(&uLocal_1816))
		{
			func_181(&uLocal_1816);
		}
	}
	if (bLocal_1700)
	{
		bLocal_1701 = true;
	}
	if (bLocal_1701)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0))
		{
			if (func_231(uParam0->f_1, Local_2246[iVar0].f_1, 1) >= 10f)
			{
				bLocal_1701 = false;
			}
			else
			{
				fVar2 = func_231(uParam0->f_1, Local_2246[iVar0].f_1, 1);
			}
		}
	}
	if (iLocal_1705)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2246[iVar0].f_21, 5f, 5f, 2f, 1, 1, 0))
			{
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1))
		{
			if (Local_2246[iVar0])
			{
				Var3 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
				if ((((MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Local_2246[iVar0].f_21, 1) <= fVar1 && PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) && STREAMING::_0x7D41E9D2D17C5B2D(uLocal_1845)) && !func_334(iVar0)) && !bLocal_1701)
				{
					iLocal_1705 = 0;
				}
				if (iLocal_1747 > 0)
				{
					func_333();
					if (!iLocal_1718)
					{
						fLocal_1786 = func_231(uParam0->f_1, Local_2246[iVar0].f_1, 1);
						iLocal_1718 = 1;
					}
					if (func_231(uParam0->f_1, Local_2246[iVar0].f_1, 1) > (fLocal_1786 + 100f) && func_231(uParam0->f_1, Local_2246[iVar0].f_1, 1) < (fLocal_1786 + 200f))
					{
						func_332(uParam0);
					}
					else if (func_231(uParam0->f_1, Local_2246[iVar0].f_1, 1) > (fLocal_1786 + 200f))
					{
						func_352(Local_1462, uParam1, 4);
					}
				}
			}
			if (!iLocal_1705)
			{
				func_308(uParam0, uParam1, iVar0);
			}
		}
	}
}

void func_308(var uParam0, var uParam1, int iParam2)
{
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 287, 1);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 309, 1);
	switch (iLocal_1725)
	{
		case 0:
			if (Local_2246[iParam2])
			{
				if (CAM::DOES_CAM_EXIST(uLocal_142))
				{
					if (CAM::IS_CAM_ACTIVE(uLocal_142))
					{
						CAM::SET_CAM_ACTIVE(uLocal_142, 0);
					}
				}
				func_331(0, 0, 1);
				func_329(iParam2);
				Var0 = { VEHICLE::GET_VEHICLE_DEFORMATION_AT_POS(uParam0->f_1, 1.21f, 6.15f, 0.3f) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, 0f, 0f, 0f, 1) > 0.23f)
				{
					bLocal_1702 = true;
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(uParam0->f_1, 1, 1);
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(uParam0->f_1, 0, 1);
				}
				if (iLocal_1747 == 0)
				{
					func_383(1, "assassin_bus_stage_drive_to_stops", 0, 0, 0, 1);
					func_114();
					if (bLocal_1698)
					{
						Local_1767 = { 298.8621f, -771.5198f, 29.477f };
						Local_1770 = { 8.793f, 0f, -52.1743f };
					}
				}
				else if (iLocal_1747 == 1)
				{
					if (bLocal_1698)
					{
						Local_1767 = { 364.4333f, -1071.314f, 30.1969f };
						Local_1770 = { 0.8394f, 0f, 42.3892f };
					}
				}
				else if (iLocal_1747 == 2)
				{
					if (bLocal_1698)
					{
						Local_1767 = { 255.5488f, -1118.931f, 30.1211f };
						Local_1770 = { -0.9803f, 0f, -137.7603f };
					}
				}
				else if (iLocal_1747 == 3)
				{
					if (bLocal_1698)
					{
						Local_1767 = { 104.8598f, -774.3508f, 31.6923f };
						Local_1770 = { 4.8718f, 0f, -144.4729f };
					}
				}
				uLocal_1806 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1767, Local_1770, 65f, 0, 2);
				CAM::SET_CAM_FOV(uLocal_1806, 38f);
				CAM::SET_CAM_ACTIVE(uLocal_1806, 1);
				if (!bLocal_1698)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uLocal_1806, uParam0->f_1, -4.4984f, 8.6802f, -0.3745f, 1);
					CAM::POINT_CAM_AT_ENTITY(uLocal_1806, uParam0->f_1, -2.0642f, 7.0391f, 0.243f, 1);
				}
				MISC::CLEAR_AREA_OF_OBJECTS(Local_2246[iParam2].f_1, 30f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_2246[iParam2].f_1, 30f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_2246[iParam2].f_1, 7f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (iParam2 == 0)
				{
					func_328(uParam0);
				}
				if (bLocal_1698)
				{
					func_327(uParam0, iParam2, 1);
				}
				else
				{
					if (iParam2 == 0)
					{
						Local_1764 = { 306.7456f, -771.3451f, 28.2966f };
						fLocal_1785 = 340.8777f;
					}
					else if (iParam2 == 1)
					{
						Local_1764 = { 373.7143f, -1064.021f, 28.2864f };
						fLocal_1785 = 89.7653f;
					}
					else if (iParam2 == 2)
					{
						Local_1764 = { 250.6179f, -1126.453f, 28.204f };
						fLocal_1785 = 274.4086f;
					}
					else if (iParam2 == 3)
					{
						Local_1764 = { 96.6454f, -779.0001f, 30.4853f };
						fLocal_1785 = 249.5191f;
					}
					ENTITY::SET_ENTITY_COORDS(uParam0->f_1, Local_1764, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_1, fLocal_1785);
					VEHICLE::SET_VEHICLE_FIXED(uParam0->f_1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_1, 1084227584);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1, 2f);
					Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, 1) };
					fVar10 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
					Var7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var4, fVar10, 2f, 5.6201f, 0.1098f) };
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Var7, 5000, 0, 2);
				}
				func_298(uParam0->f_1);
				HUD::CLEAR_HELP(1);
				if (!func_168(&uLocal_1816))
				{
					func_442(&uLocal_1816);
				}
				else
				{
					func_183(&uLocal_1816);
				}
				iLocal_1711 = 0;
				iLocal_1725++;
			}
			break;
		
		case 1:
			if (!bLocal_1698)
			{
				func_326(uParam0, iParam2);
			}
			if (!iLocal_1711)
			{
				if (bLocal_1698)
				{
					func_325(uParam0, iParam2);
					iLocal_1711 = 1;
				}
				else if (func_168(&uLocal_1816))
				{
					if (func_165(&uLocal_1816) > 4f)
					{
						func_325(uParam0, iParam2);
						iLocal_1711 = 1;
					}
				}
			}
			if (func_168(&uLocal_1816))
			{
				if (func_165(&uLocal_1816) > fLocal_1755)
				{
					if (iParam2 == iLocal_1727)
					{
						iLocal_1725 = 0;
						iLocal_1461 = 4;
						break;
					}
					iLocal_1711 = 0;
					func_324(uParam0, iParam2);
					func_323(uParam0);
					iVar3 = func_322(Local_1761, iParam2);
					if (iParam2 == 0)
					{
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_NOPE", 9, 0, 0, 0);
						func_219(&(uParam0->f_16), "OJASAUD", "OJASbs_NOPE", "OJASbs_NOPE_1", 9, 1, 0);
						if (!PED::IS_PED_INJURED(iVar3))
						{
							TASK::TASK_ENTER_VEHICLE(iVar3, uParam0->f_1, 20000, 0, 2f, 258, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar3))
							{
								PED::_0x2208438012482A1A(iVar3, 1, 0);
							}
						}
					}
					else if (iParam2 == 1)
					{
						if (!PED::IS_PED_INJURED(iVar3))
						{
							TASK::TASK_ENTER_VEHICLE(iVar3, uParam0->f_1, 20000, 0, 2f, 258, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar3))
							{
								PED::_0x2208438012482A1A(iVar3, 1, 0);
							}
						}
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_NOPE3", 9, 0, 0, 0);
					}
					else if (iParam2 == 2)
					{
						if (!PED::IS_PED_INJURED(iVar3))
						{
							TASK::TASK_ENTER_VEHICLE(iVar3, uParam0->f_1, 20000, 0, 2f, 258, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar3))
							{
								PED::_0x2208438012482A1A(iVar3, 1, 0);
							}
						}
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_NOPE4", 9, 0, 0, 0);
					}
					func_183(&uLocal_1816);
					iLocal_1725++;
				}
			}
			break;
		
		case 2:
			if (!iLocal_1724)
			{
				if (func_321())
				{
					if (func_165(&uLocal_1816) > 1.2f)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1724 = 1;
					}
				}
			}
			if ((func_165(&uLocal_1816) > 1.5f && !bLocal_1702) || (bLocal_1702 && !func_221()))
			{
				func_317(uParam0, iParam2);
				func_183(&uLocal_1816);
				HUD::REMOVE_BLIP(&(Local_2246[iParam2].f_9));
				Local_2246[iParam2] = 0;
				func_312(uParam1, uParam0, iLocal_1742[iLocal_1747], 1);
			}
			break;
	}
	if (iLocal_1725 == 1)
	{
		if (func_310(iLocal_144))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0))
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_1, Local_2246[iParam2].f_20);
			}
			HUD::REMOVE_BLIP(&(Local_2246[iParam2].f_9));
			if (iParam2 == iLocal_1727)
			{
				Local_2246[iParam2] = 0;
				func_317(uParam0, iParam2);
				iLocal_1725 = 0;
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (!PED::IS_PED_INJURED(*uParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_8, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(*uParam0, 1, 0);
						TASK::CLEAR_PED_TASKS(*uParam0);
						ENTITY::SET_ENTITY_COORDS(uParam0->f_8, Local_2246[iLocal_1727].f_5, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uParam0->f_8, Local_2246[iLocal_1727].f_8);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_8, 1084227584);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam0, 3);
						if (!PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_8, 0))
						{
							PED::SET_PED_INTO_VEHICLE(*uParam0, uParam0->f_8, -1);
						}
					}
				}
				MISC::CLEAR_AREA(Local_2246[iLocal_1727].f_5, 30f, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_2246[iLocal_1727].f_5, 30f, 0);
				func_283(*uParam0, iLocal_1727);
				func_309(uParam0);
				func_244(uParam0, 1);
				func_228(uParam0, &(uParam0->f_8));
				iLocal_1461 = 5;
			}
			else
			{
				func_317(uParam0, iParam2);
				Local_2246[iParam2] = 0;
				func_312(uParam1, uParam0, iLocal_1742[iLocal_1747], 1);
			}
		}
	}
}

void func_309(var uParam0)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	func_284(1, 1, 1);
	CAM::DO_SCREEN_FADE_IN(500);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, 0);
	iLocal_1724 = 0;
	STREAMING::CLEAR_FOCUS();
}

int func_310(int iParam0)
{
	if (func_311() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_92(0);
		func_301();
		return 1;
	}
	return 0;
}

int func_311()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_312(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	Local_2246[iParam2] = 1;
	func_316(uParam0, iParam2);
	if (iParam2 == iLocal_1727)
	{
		func_314(uParam0, uParam1, iLocal_1727);
		func_313(uParam1);
		uParam1->f_182 = 1;
	}
	if (bParam3)
	{
		func_337();
	}
}

void func_313(var uParam0)
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, 2, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
	}
}

void func_314(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		Var0 = { 260.71f, -1121.16f, 28.42f };
	}
	else if (iParam2 == 3)
	{
		Var0 = { 110.8041f, -777.9626f, 30.43521f };
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2246[iParam2].f_14[2]))
	{
		PED::DELETE_PED(&(Local_2246[iParam2].f_14[2]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam0->f_1 = { Var0 };
		uParam0->f_4 = Local_2246[iParam2].f_4;
		func_315(uParam0, uParam1);
		ENTITY::SET_ENTITY_HEALTH(*uParam1, 175, 0);
	}
	uParam1->f_8 = Local_2246[iParam2].f_19;
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam1, "oddjobs@assassinate@bus@", "base", 3))
	{
		TASK::TASK_PLAY_ANIM(*uParam1, "oddjobs@assassinate@bus@", "base", 8f, -16f, -1, 1, 0, 0, 0, 0);
	}
}

void func_315(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = PED::CREATE_PED(4, *uParam0, uParam0->f_1, uParam0->f_4, 1, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(*uParam0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(*uParam1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam1, 1);
		PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(*uParam1, 1);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 29, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam1, 1, 0);
		if (!iLocal_1031)
		{
			PED::ADD_RELATIONSHIP_GROUP("Target", &iLocal_1041);
			iLocal_1031 = 1;
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1041, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1041);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iLocal_1041);
		if (uParam0->f_268)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, 1);
		}
		if (uParam0->f_269)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 3, 0);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(*uParam1, 1);
		}
		if (uParam0->f_13 != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(*uParam1, uParam0->f_13, -1, 0, 1);
		}
		if (uParam0->f_274 == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 1, 2, 0);
			func_201(&(uParam1->f_16), 3, *uParam1, "INVESTOR", 0, 1);
		}
		else if (uParam0->f_274 == 1)
		{
			func_201(&(uParam1->f_16), 3, *uParam1, "OJAhkJUNKIE", 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(*uParam1, 134, 1);
			PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(*uParam1, 1);
			PED::SET_PED_MONEY(*uParam1, MISC::GET_RANDOM_INT_IN_RANGE(80, 100));
			WEAPON::GIVE_WEAPON_TO_PED(*uParam1, 1593441988, -1, 0, 1);
			PED::SET_PED_ACCURACY(*uParam1, 50);
		}
	}
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		Var0[0] = { 303.68f, -766.33f, 28.31f };
		Var0[1] = { 305.28f, -762.28f, 28.41f };
		Var0[2] = { 302.7f, -770.61f, 28.45f };
	}
	else if (iParam1 == 1)
	{
		Var0[0] = { 351.41f, -1068.09f, 28.6f };
		Var0[1] = { 360.98f, -1068.01f, 28.53f };
		Var0[2] = { 357.6896f, -1071.089f, 28.5567f };
	}
	else if (iParam1 == 2)
	{
		Var0[0] = { 260.96f, -1119.53f, 28.36f };
		Var0[1] = { 266.74f, -1119.44f, 28.37f };
		Var0[2] = { 258.61f, -1121.24f, 28.45f };
	}
	else if (iParam1 == 3)
	{
		Var0[0] = { 119.2f, -781.85f, 30.53f };
		Var0[1] = { 116.39f, -778.02f, 30.4f };
		Var0[2] = { 119.1f, -781.83f, 30.38f };
	}
	MISC::CLEAR_AREA(Local_2246[iParam1].f_1, 10f, 0, 0, 0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((Local_2246[iParam1].f_1 - 30f), (Local_2246[iParam1].f_1.f_1 - 30f), (Local_2246[iParam1].f_1.f_2 - 30f), (Local_2246[iParam1].f_1 + 30f), (Local_2246[iParam1].f_1.f_1 + 30f), (Local_2246[iParam1].f_1.f_2 + 30f), 0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2246[iParam1].f_14[0]))
	{
		Local_2246[iParam1].f_14[0] = PED::CREATE_PED(4, uParam0->f_16, Var0[0], Local_2246[iParam1].f_4, 1, 1);
		if (iParam1 == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 8, 0, 0, 0);
		}
		else if (iParam1 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 4, 0, 0, 0);
		}
		else if (iParam1 == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 8, 1, 0, 0);
		}
		else if (iParam1 == 3)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[0], 4, 0, 0, 0);
		}
		TASK::TASK_LOOK_AT_ENTITY(Local_2246[iParam1].f_14[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
		TASK::TASK_PLAY_ANIM(Local_2246[iParam1].f_14[0], "oddjobs@assassinate@bus@", "base", 4f, -4f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[iParam1].f_14[0], 1);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2246[iParam1].f_14[0], "PASSENGERS_Group", 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2246[iParam1].f_14[1]))
	{
		Local_2246[iParam1].f_14[1] = PED::CREATE_PED(4, -106498753, Var0[1], Local_2246[iParam1].f_4, 1, 1);
		if (iParam1 == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 4, 0, 1, 0);
		}
		else if (iParam1 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 4, 0, 0, 0);
		}
		else if (iParam1 == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 4, 0, 2, 0);
		}
		else if (iParam1 == 3)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[1], 4, 0, 1, 0);
		}
		TASK::TASK_LOOK_AT_ENTITY(Local_2246[iParam1].f_14[1], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
		TASK::TASK_PLAY_ANIM(Local_2246[iParam1].f_14[1], "oddjobs@assassinate@bus@", "base", 4f, -4f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[iParam1].f_14[1], 1);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2246[iParam1].f_14[1], "PASSENGERS_Group", 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2246[iParam1].f_14[2]))
	{
		Local_2246[iParam1].f_14[2] = PED::CREATE_PED(4, uParam0->f_14, Var0[2], Local_2246[iParam1].f_4, 1, 1);
		if (iParam1 == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 4, 0, 2, 0);
		}
		else if (iParam1 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 4, 0, 1, 0);
		}
		else if (iParam1 == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 4, 0, 1, 0);
		}
		else if (iParam1 == 3)
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2246[iParam1].f_14[2], 4, 0, 1, 0);
		}
		TASK::TASK_LOOK_AT_ENTITY(Local_2246[iParam1].f_14[2], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
		TASK::TASK_PLAY_ANIM(Local_2246[iParam1].f_14[2], "oddjobs@assassinate@bus@", "base", 4f, -4f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[iParam1].f_14[2], 1);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2246[iParam1].f_14[2], "PASSENGERS_Group", 0);
	}
	if (iParam1 == 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2246[iParam1].f_19))
		{
			Local_2246[iParam1].f_19 = VEHICLE::CREATE_VEHICLE(uParam0->f_15, Local_2246[iParam1].f_5, Local_2246[iParam1].f_8, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2246[iParam1].f_19, 1084227584);
		}
	}
}

void func_317(var uParam0, int iParam1)
{
	iLocal_1705 = 1;
	iLocal_1749 = 0;
	iLocal_1738 = 0;
	iLocal_1725 = 0;
	iLocal_1747++;
	iLocal_1718 = 0;
	if (iLocal_1747 == 2)
	{
		func_320();
	}
	func_319(uParam0, iParam1);
	func_318(uParam0);
	func_309(uParam0);
	func_282(uParam0->f_1, 1);
	func_299();
	GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(1);
	GRAPHICS::_0x03FC694AE06C5A20();
}

void func_318(var uParam0)
{
	iLocal_1737 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (iLocal_1737 < 4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar1, 0) != 0)
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar1, 0);
					if (iLocal_1737 == 0)
					{
						func_201(&(uParam0->f_16), 4, iVar0, "BusPed1", 0, 1);
						iLocal_1791 = iVar0;
						iLocal_1737++;
					}
					else if (iLocal_1737 == 1)
					{
						func_201(&(uParam0->f_16), 5, iVar0, "BusPed2", 0, 1);
						iLocal_1792 = iVar0;
						iLocal_1737++;
					}
					else if (iLocal_1737 == 2)
					{
						func_201(&(uParam0->f_16), 6, iVar0, "BusPed3", 0, 1);
						iLocal_1793 = iVar0;
						iLocal_1737++;
					}
					else if (iLocal_1737 == 3)
					{
						func_201(&(uParam0->f_16), 7, iVar0, "BusPed4", 0, 1);
						iLocal_1794 = iLocal_1794;
						iLocal_1794 = iVar0;
						iLocal_1737++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_319(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
		{
			if (!PED::IS_PED_INJURED(Local_2246[iParam1].f_14[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_2246[iParam1].f_14[iVar0]);
				if (iLocal_1747 == 1)
				{
					if (iVar0 == 0)
					{
						iVar1 = 3;
					}
					else if (iVar0 == 1)
					{
						iVar1 = 4;
					}
					else if (iVar0 == 2)
					{
						iVar1 = 5;
					}
				}
				else if (iLocal_1747 == 2)
				{
					if (iVar0 == 0)
					{
						iVar1 = 6;
					}
					else if (iVar0 == 1)
					{
						iVar1 = 7;
					}
					else if (iVar0 == 2)
					{
						iVar1 = 8;
					}
				}
				else if (iLocal_1747 == 3)
				{
					if (iVar0 == 0)
					{
						iVar1 = 0;
					}
					else if (iVar0 == 1)
					{
						iVar1 = 1;
					}
					else if (iVar0 == 2)
					{
						iVar1 = 2;
					}
				}
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_1, iVar1, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_2246[iParam1].f_14[iVar0], uParam0->f_1, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_320()
{
	iLocal_1846 = PED::CREATE_PED(5, 1640504453, 110.6556f, -776.3679f, 30.439f, 346.1708f, 1, 1);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1846, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1846, 2, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1846, 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1846, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_1846, 8, 1, 2, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1846, 1);
}

int func_321()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_322(struct<3> Param0, int iParam3)
{
	fVar2 = 1000f;
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2246[iParam3].f_14[iVar3], 0))
		{
			fVar1 = func_231(Local_2246[iParam3].f_14[iVar3], Param0, 1);
			if (fVar1 < fVar2)
			{
				uVar0 = Local_2246[iParam3].f_14[iVar3];
				fVar2 = fVar1;
			}
		}
		iVar3++;
	}
	return uVar0;
}

void func_323(var uParam0)
{
	if (!CAM::DOES_CAM_EXIST(uLocal_1806))
	{
		uLocal_1806 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), 35f, 0, 2);
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_1807))
	{
		uLocal_1807 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), 34f, 0, 2);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0))
	{
		if (bLocal_1712)
		{
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_1806, uParam0->f_1, -1.7004f, 5.5826f, 1.0005f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_1806, uParam0->f_1, 1.2599f, 5.969f, 0.7051f, 1);
		}
		else if (bLocal_1713)
		{
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_1806, uParam0->f_1, -1.6144f, 4.8097f, 0.4117f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_1806, uParam0->f_1, 1.328f, 4.756f, -0.1711f, 1);
		}
		else
		{
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_1806, uParam0->f_1, -1.7004f, 5.5826f, 1.0005f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_1806, uParam0->f_1, 1.2599f, 5.969f, 0.7051f, 1);
		}
		CAM::SET_CAM_NEAR_CLIP(uLocal_1806, 0.55f);
		CAM::SET_CAM_ACTIVE(uLocal_1806, 1);
	}
	GRAPHICS::_SET_FAR_SHADOWS_SUPPRESSED(0);
	GRAPHICS::_0x5F0F3F56635809EF(0.3f);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

void func_324(var uParam0, int iParam1)
{
	fVar9 = Local_2246[iParam1].f_4;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar7 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	}
	if (bLocal_1712)
	{
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var4, fVar7, 2.519f, 5.6f, 0.1098f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar8, 0, 0);
	}
	else if (bLocal_1713)
	{
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var4, fVar7, 2.519f, 5.6f, 0.1098f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar8, 0, 0);
	}
	if (iParam1 == iLocal_1727)
	{
		iVar3 = *uParam0;
	}
	else
	{
		iVar3 = func_322(Local_1761, iParam1);
	}
	if (!PED::IS_PED_INJURED(iVar3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3);
		ENTITY::SET_ENTITY_COORDS(iVar3, Var0.x, Var0.y, fVar8, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iVar3, fVar9);
	}
}

void func_325(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		iVar0 = func_322(360.98f, -1068.01f, 28.53f, iParam1);
	}
	else if (iParam1 == 3)
	{
		iVar0 = *uParam0;
	}
	else
	{
		iVar0 = func_322(Local_1761, iParam1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		PED::_0x2208438012482A1A(iVar0, 0, 0);
		if (iParam1 == 0)
		{
			PED::SET_PED_MOVEMENT_CLIPSET(iVar0, "move_m@casual@d", 1048576000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, 305.2689f, -768.1415f, 28.17335f, 1f, 20000, 1048576000, 0, 1193033728);
			PED::FORCE_PED_MOTION_STATE(iVar0, -668482597, 0, 0, 0);
		}
		else if (iParam1 == 1)
		{
			PED::SET_PED_MOVEMENT_CLIPSET(iVar0, "move_m@casual@d", 1048576000);
			TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, 358.6953f, -1065.935f, 28.39328f, 1f, 20000, 1193033728, 1056964608);
		}
		else if (iParam1 == 3)
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(iVar0, 111.6832f, -781.5098f, 30.26971f, 1f, 20000, 1193033728, 1056964608);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, uParam0->f_1, 20000, 0, 1f, 256, 0);
		}
	}
}

void func_326(var uParam0, int iParam1)
{
	switch (iLocal_1749)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), uParam0->f_1, "OJASbs01", 786603, 0, 16, -1, 3f, 0, 1073741824);
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_WRNG", 9, 0, 0, 0);
					break;
				
				case 1:
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), uParam0->f_1, "OJASbs02", 786603, 0, 16, -1, 3f, 0, 1073741824);
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_WRNGa", 9, 0, 0, 0);
					break;
				
				case 2:
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), uParam0->f_1, "OJASbs03", 786603, 0, 16, -1, 3f, 0, 1073741824);
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_WRNGb", 9, 0, 0, 0);
					break;
				
				case 3:
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), uParam0->f_1, "OJASbs04", 786603, 0, 16, -1, 3f, 0, 1073741824);
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_WRNGc", 9, 0, 0, 0);
					break;
			}
			iLocal_1749++;
			break;
		
		case 1:
			if (func_168(&uLocal_1816))
			{
				if (func_165(&uLocal_1816) > 3f)
				{
					if (iLocal_1747 == 0)
					{
						Local_1767 = { 298.8621f, -771.5198f, 29.477f };
						Local_1770 = { 8.793f, 0f, -52.1743f };
					}
					else if (iLocal_1747 == 1)
					{
						Local_1767 = { 364.4333f, -1071.314f, 30.1969f };
						Local_1770 = { 0.8394f, 0f, 42.3892f };
					}
					else if (iLocal_1747 == 2)
					{
						Local_1767 = { 254.3144f, -1118.194f, 30.1446f };
						Local_1770 = { -0.9803f, 0f, -137.7603f };
					}
					else if (iLocal_1747 == 3)
					{
						Local_1767 = { 104.8598f, -774.3508f, 31.6923f };
						Local_1770 = { 4.8718f, 0f, -144.4729f };
					}
					CAM::DETACH_CAM(uLocal_1806);
					CAM::STOP_CAM_POINTING(uLocal_1806);
					CAM::SET_CAM_COORD(uLocal_1806, Local_1767);
					CAM::SET_CAM_ROT(uLocal_1806, Local_1770, 2);
					func_327(uParam0, iParam1, 1);
					func_298(uParam0->f_1);
					iLocal_1749++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_327(var uParam0, int iParam1, bool bParam2)
{
	Var1 = { 0f, -3f, 0f };
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1))
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uParam0->f_1);
	}
	if (iParam1 == 0)
	{
		Local_1764 = { 308.0244f, -765.3675f, 29.2651f };
		fLocal_1785 = 160.65f;
		Local_1773 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1764, fLocal_1785, Var1) };
	}
	else if (iParam1 == 1)
	{
		Local_1764 = { 355.0645f, -1064.266f, 28.3992f };
		fLocal_1785 = 269.7723f;
		Local_1773 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1764, fLocal_1785, Var1) };
	}
	else if (iParam1 == 2)
	{
		Local_1764 = { 265.439f, -1125.068f, 29.2194f };
		fLocal_1785 = 88.828f;
		Local_1773 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1764, fLocal_1785, Var1) };
	}
	else if (iParam1 == 3)
	{
		Local_1764 = { 115.0176f, -785.317f, 31.349f };
		fLocal_1785 = 68.7612f;
		Local_1773 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1764, fLocal_1785, Var1) };
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(Local_1764, &uVar0, 0, 0);
	PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1773);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_1, fLocal_1785);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_1, 1084227584);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1, 5f);
	VEHICLE::SET_VEHICLE_FIXED(uParam0->f_1);
	if (bLocal_1712)
	{
		Local_1761 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1764, fLocal_1785, 2f, 5.6201f, 0.1098f) };
	}
	else if (bLocal_1713)
	{
		Local_1761 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1764, fLocal_1785, 2f, 5.6201f, 0.1098f) };
	}
	if (bParam2)
	{
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1761, 5000, 0, 2);
	}
}

void func_328(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0))
	{
		iVar9 = 0;
		while (iVar9 < 8)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_1, iVar9, 0))
			{
				iVar0[iVar9] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar9, 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0[iVar9], 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar9]))
				{
					PED::DELETE_PED(&(iVar0[iVar9]));
				}
			}
			iVar9++;
		}
	}
}

void func_329(int iParam0)
{
	Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	fVar1 = (Local_2246[iParam0].f_4 + 180f);
	Var2 = { -SYSTEM::SIN(fVar0), SYSTEM::COS(fVar0), 0f };
	Var5 = { Local_2246[iParam0].f_1 - Var8 };
	Var11 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PLAYER::PLAYER_PED_ID(), 0) };
	Var14 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	if (!bLocal_1700)
	{
		if (func_330(Var2, Var5) < 0f && func_330(Var11, Var14) > 0f)
		{
			bLocal_1699 = true;
			bLocal_1698 = false;
		}
		else
		{
			bLocal_1699 = false;
			bLocal_1698 = true;
		}
	}
	if (!bLocal_1700 && !bLocal_1699)
	{
		if (fVar1 < 360f)
		{
			if (fVar0 > Local_2246[iParam0].f_4 && fVar0 < fVar1)
			{
				bLocal_1698 = false;
			}
			else
			{
				bLocal_1698 = true;
			}
		}
		else if (fVar0 < Local_2246[iParam0].f_4 && fVar0 > (fVar1 - 360f))
		{
			bLocal_1698 = true;
		}
		else
		{
			bLocal_1698 = false;
		}
	}
	if (bLocal_1698 && iParam0 != iLocal_1727)
	{
		fLocal_1755 = 2f;
	}
	else
	{
		fLocal_1755 = 5f;
	}
	if (iParam0 == iLocal_1727)
	{
		bLocal_1698 = true;
		fLocal_1755 = 2f;
	}
}

float func_330(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

void func_331(int iParam0, int iParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_92(0);
	func_286(1, 1, iParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_285(23, 1);
}

void func_332(var uParam0)
{
	switch (iLocal_1734)
	{
		case 0:
			iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
			if (iVar0 == 0)
			{
				if (!func_221())
				{
					if (func_213(uParam0, iLocal_1793))
					{
						func_201(&(uParam0->f_16), 6, iLocal_1793, "BusPed3", 0, 1);
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_WAY3", 9, 0, 0, 0);
						iLocal_1734++;
					}
				}
			}
			else if (func_213(uParam0, iLocal_1791))
			{
				if (!func_221())
				{
					func_201(&(uParam0->f_16), 4, iLocal_1791, "BusPed1", 0, 1);
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_WAY", 9, 0, 0, 0);
					iLocal_1734++;
				}
			}
			break;
		
		case 1:
			if (!func_221())
			{
				if (func_213(uParam0, iLocal_1792))
				{
					func_201(&(uParam0->f_16), 5, iLocal_1792, "BusPed2", 0, 1);
					func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_WAY2", 9, 0, 0, 0);
					iLocal_1734++;
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_333()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1796[0]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1796[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1796[1]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1796[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1796[2]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1796[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1796[3]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1796[3]));
	}
}

int func_334(int iParam0)
{
	fVar0 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	fVar1 = (Local_2246[iParam0].f_4 - 180f);
	if (SYSTEM::COS(MISC::ABSF((fVar0 - fVar1))) <= 0.766f)
	{
		bLocal_1700 = false;
		iVar2 = 0;
	}
	else
	{
		bLocal_1700 = true;
		if (func_274("ASS_BS_BOARD"))
		{
			HUD::CLEAR_THIS_PRINT("ASS_BS_BOARD");
		}
		func_253("ASS_HELP_01", -1);
		iVar2 = 1;
	}
	return iVar2;
}

void func_335(int iParam0)
{
	if (!iLocal_1720)
	{
		if (func_368(Local_2246[iParam0].f_1, 1) <= 100f)
		{
			if (!func_336(Local_2246[iParam0].f_24))
			{
				uLocal_1845 = STREAMING::_0x1F3F018BC3AFA77C(Local_2246[iParam0].f_24, Local_2246[iParam0].f_27, 25f, 12, 127);
				if (iLocal_1747 == 3)
				{
					CUTSCENE::REQUEST_CUTSCENE("ASS_MCS_1", 8);
					STREAMING::_0xEF39EE20C537E98C(133.2094f, -791.931f, 35.3551f, -4.9404f, 0f, 68.7852f);
				}
				iLocal_1720 = 1;
			}
		}
	}
	else if (func_368(Local_2246[iParam0].f_1, 1) > 120f)
	{
		func_299();
		CUTSCENE::REMOVE_CUTSCENE();
	}
}

int func_336(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_337()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_2246[iVar0] == 1)
		{
			if (!HUD::DOES_BLIP_EXIST(Local_2246[iVar0].f_9))
			{
				Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_2246[iVar0].f_1, Local_2246[iVar0].f_4, 0f, 3f, 0f) };
				Local_2246[iVar0].f_9 = func_338(Var1, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2246[iVar0].f_9, &(Local_2246[iVar0].f_10));
			}
		}
		iVar0++;
	}
}

var func_338(struct<3> Param0, int iParam3)
{
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

void func_339()
{
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1801, 0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1801);
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1802, 0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1802);
	}
}

int func_340(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1, 1, 0);
			return 1;
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == -713569950)
			{
				uParam0->f_1 = iVar0;
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1, 1, 0);
				bLocal_1712 = true;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -2072933068)
			{
				uParam0->f_1 = iVar0;
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1, 1, 0);
				bLocal_1713 = true;
			}
		}
	}
	return 0;
}

void func_341(var uParam0, var uParam1)
{
	iLocal_1742[0] = 0;
	iLocal_1742[1] = 1;
	iLocal_1742[2] = 2;
	iLocal_1742[3] = 3;
	iLocal_1727 = iLocal_1742[3];
	func_312(uParam0, uParam1, iLocal_1742[0], 0);
}

void func_342()
{
	Local_2246[0] = 0;
	Local_2246[0].f_1 = { 303.6007f, -765.1572f, 28.3112f };
	Local_2246[0].f_4 = 255.4414f;
	Local_2246[0].f_5 = { 300.9491f, -757.7515f, 28.324f };
	Local_2246[0].f_8 = 342.2245f;
	StringCopy(&(Local_2246[0].f_10), "ASS_BS_STOP0", 16);
	Local_2246[0].f_20 = 160.5196f;
	Local_2246[0].f_21 = { 307.4789f, -766.0983f, 28.2473f };
	Local_2246[0].f_24 = { 298.8621f, -771.5198f, 29.477f };
	Local_2246[0].f_27 = { 8.793f, 0f, -52.1743f };
	Local_2246[1] = 0;
	Local_2246[1].f_1 = { 356.1f, -1067.84f, 28.57f };
	Local_2246[1].f_4 = 6.6156f;
	Local_2246[1].f_5 = { 362.1344f, -1073.387f, 28.5679f };
	Local_2246[1].f_8 = 272.8605f;
	StringCopy(&(Local_2246[1].f_10), "ASS_BS_STOP1", 16);
	Local_2246[1].f_20 = 269.7676f;
	Local_2246[1].f_21 = { 355.5678f, -1063.897f, 28.3927f };
	Local_2246[1].f_24 = { 364.4333f, -1071.314f, 30.1969f };
	Local_2246[1].f_27 = { 0.8394f, 0f, 42.3892f };
	Local_2246[2] = 0;
	Local_2246[2].f_1 = { 264.05f, -1120.78f, 28.35f };
	Local_2246[2].f_4 = 179.7187f;
	Local_2246[2].f_5 = { 258.1293f, -1119.197f, 28.3053f };
	Local_2246[2].f_8 = 95.72f;
	StringCopy(&(Local_2246[2].f_10), "ASS_BS_STOP3", 16);
	Local_2246[2].f_20 = 88.6072f;
	Local_2246[2].f_21 = { 264.2879f, -1124.393f, 28.2193f };
	Local_2246[2].f_24 = { 254.3144f, -1118.194f, 30.1446f };
	Local_2246[2].f_27 = { -0.9803f, 0f, -137.7603f };
	Local_2246[3] = 0;
	Local_2246[3].f_1 = { 115.62f, -781.09f, 30.4f };
	Local_2246[3].f_4 = 154.9924f;
	Local_2246[3].f_5 = { 109.4136f, -774.7261f, 30.4493f };
	Local_2246[3].f_8 = 68.8722f;
	StringCopy(&(Local_2246[3].f_10), "ASS_BS_STOP2", 16);
	Local_2246[3].f_20 = 68.452f;
	Local_2246[3].f_21 = { 115.7016f, -785.4189f, 30.3382f };
	Local_2246[3].f_24 = { 104.8598f, -774.3508f, 31.6923f };
	Local_2246[3].f_27 = { 4.8718f, 0f, -144.4729f };
}

int func_343(var uParam0)
{
	STREAMING::REQUEST_MODEL(*uParam0);
	STREAMING::REQUEST_MODEL(1640504453);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0) && STREAMING::HAS_MODEL_LOADED(1640504453))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_344(var uParam0)
{
	STREAMING::REQUEST_MODEL(uParam0->f_16);
	STREAMING::REQUEST_MODEL(uParam0->f_14);
	STREAMING::REQUEST_MODEL(-106498753);
	if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_16) && STREAMING::HAS_MODEL_LOADED(uParam0->f_14)) && STREAMING::HAS_MODEL_LOADED(-106498753))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_345(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_346(var uParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_1747 > 0)
			{
				if (!iLocal_1709)
				{
					iVar0 = 0;
					while (iVar0 < 9)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar0, 0) != 0)
							{
								iLocal_1795 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar0, 0);
								func_201(&(uParam0->f_16), 7, iLocal_1795, "BusPed7", 0, 1);
								iLocal_1709 = 1;
							}
						}
						iVar0++;
					}
					if (func_213(uParam0, iLocal_1795))
					{
						func_212(&(uParam0->f_16), "OJASAUD", "OJASbs_SHOT", 9, 0, 0, 0);
						func_227(1, 1036831949, 1050253722);
					}
				}
			}
		}
	}
}

void func_347(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		iLocal_1704 = 0;
	}
	STREAMING::REQUEST_ANIM_DICT("veh@bus@passenger@rds@idle_panic");
	STREAMING::REQUEST_ANIM_DICT("veh@bus@passenger@rps@idle_panic");
	if (!iLocal_1706)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED("veh@bus@passenger@rds@idle_panic") && STREAMING::HAS_ANIM_DICT_LOADED("veh@bus@passenger@rps@idle_panic"))
		{
			iLocal_1706 = 1;
		}
	}
	if (!iLocal_1716)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_1) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_1716 = 1;
			}
		}
	}
	if (iLocal_1706 && iLocal_1716)
	{
		if (!iLocal_1704)
		{
			iVar0 = 0;
			while (iVar0 < 9)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar0, 0) != 0)
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar0, 0);
						if (!bParam1)
						{
							if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) < 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, "veh@bus@passenger@rds@idle_panic", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, "veh@bus@passenger@rps@idle_panic", "sit", 3))
								{
									TASK::CLEAR_PED_TASKS(iVar1);
								}
							}
						}
						if (bParam1)
						{
							if ((iVar0 % 2) == 0)
							{
								TASK::TASK_PLAY_ANIM(iVar1, "veh@bus@passenger@rps@idle_panic", "sit", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(iVar1, "veh@bus@passenger@rds@idle_panic", "sit", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0, 0, 0);
							}
						}
					}
				}
				iVar0++;
			}
			iLocal_1704 = 1;
		}
		if (bParam1)
		{
			func_204(uParam0->f_1, 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ASSASSINATION_BUS_SCREAMS_EXT_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("ASSASSINATION_BUS_SCREAMS_EXT_SCENE");
			}
		}
	}
}

int func_348(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_212(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0)
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

int func_350(var uParam0, var uParam1)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (uParam1->f_274 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
					return 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (PED::IS_PED_INJURED(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, uParam0->f_1, 1))
				{
					iLocal_1027 = 1;
				}
				else if (func_168(&uLocal_1035) && func_165(&uLocal_1035) < 3f)
				{
					iLocal_1027 = 1;
				}
				RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
				return 1;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 10f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1, *uParam0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
						{
							PED::KNOCK_PED_OFF_VEHICLE(*uParam0);
						}
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
						iLocal_1027 = 1;
						RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_351(var uParam0)
{
	if (!iLocal_1723)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_8, 0))
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uParam0->f_8, 0f);
				iLocal_1723 = 1;
			}
		}
	}
}

void func_352(struct<182> Param0, var uParam182, var uParam183, int iParam184)
{
	if (uParam183->f_270 == 0)
	{
		Param0.f_181 = iParam184;
		switch (Param0.f_181)
		{
			case 0:
				if (uParam183->f_274 == 1)
				{
					StringCopy(&Var0, "ASS_HK_LOST", 16);
				}
				else if (uParam183->f_274 == 0)
				{
					StringCopy(&Var0, "ASS_BS_LOST", 16);
				}
				else if (uParam183->f_274 == 2)
				{
					StringCopy(&Var0, "ASS_ML_LOST", 16);
				}
				break;
			
			case 1:
				if (uParam183->f_274 == 1)
				{
					StringCopy(&Var0, "ASS_HK_LOST", 16);
				}
				else if (uParam183->f_274 == 0)
				{
					StringCopy(&Var0, "ASS_BS_LEFTBUS", 16);
				}
				else if (uParam183->f_274 == 2)
				{
					StringCopy(&Var0, "ASS_ML_TIMEFAIL", 16);
				}
				break;
			
			case 2:
				if (uParam183->f_274 == 1)
				{
					StringCopy(&Var0, "ASS_HK_COVER", 16);
				}
				else if (uParam183->f_274 == 0)
				{
					StringCopy(&Var0, "ASS_BS_COVER", 16);
				}
				break;
			
			case 3:
				if (uParam183->f_274 == 0)
				{
					StringCopy(&Var0, "ASS_BS_VEHDEST", 16);
				}
				break;
			
			case 4:
				if (uParam183->f_274 == 1)
				{
					StringCopy(&Var0, "ASS_HK_ABAND", 16);
				}
				else if (uParam183->f_274 == 0)
				{
					StringCopy(&Var0, "ASS_BS_ABAND", 16);
				}
				break;
		}
		uParam183->f_270 = 1;
		func_360(&Var0);
		func_353(0);
	}
}

void func_353(int iParam0)
{
	if (Global_111638.f_9080 || func_4(0))
	{
		iVar0 = func_52();
		if (!func_354(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_89496[iVar0].f_1), 5);
		Global_98780 = iParam0;
	}
}

int func_354(int iParam0)
{
	func_359();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_89496[iParam0];
	iVar1 = Global_76891.f_109[iVar0];
	func_358(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_355(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_89532[iVar1].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_89496[iParam0].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_89496[iParam0].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_355(var uParam0, int iParam1)
{
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_357(Global_111638.f_18528[iVar0], &Var2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_356(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0] = { 0f, 0f, 0f };
				Global_96134[iVar0].f_9 = 0f;
				Global_96134[iVar0].f_12 = 0f;
				Global_96134[iVar0].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_10 = 0f;
				Global_96134[iVar0].f_13 = 0f;
				Global_96134[iVar0].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_11 = 0f;
				Global_96134[iVar0].f_14 = 0f;
				Global_96134[iVar0].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_26 = 0f;
				Global_96134[iVar0].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_27 = 0f;
				Global_96134[iVar0].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_356(var uParam0)
{
	*uParam0 = -15;
}

int func_357(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_357(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_357(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_358(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0] = 1;
		}
	}
	else
	{
		Global_92729[iParam0] = 0;
	}
}

void func_359()
{
	Global_98779 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_43())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_43())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		MISC::SET_BIT(&(Global_98744.f_20), 25);
	}
}

void func_360(char* sParam0)
{
	func_543(&(Global_111638.f_19958.f_1), 1024);
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		func_361(sParam0);
	}
}

void func_361(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

int func_362(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 0;
		}
	}
	return 1;
}

float func_363(int iParam0, int iParam1)
{
	return func_241(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

void func_364()
{
	if (iLocal_1042 > 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if ((iVar0 != iLocal_1805 && ENTITY::GET_ENTITY_MODEL(iVar0) != -713569950) && ENTITY::GET_ENTITY_MODEL(iVar0) != -2072933068)
					{
						iLocal_1805 = iVar0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1805, 1, 1);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_1805, 0);
					}
				}
			}
		}
	}
}

void func_365(var uParam0)
{
	if (iLocal_1747 > 0)
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_1803 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			iLocal_1815 = ENTITY::GET_ENTITY_MODEL(iLocal_1803);
			if (iLocal_1815 != 0)
			{
				if (iLocal_1815 == -713569950)
				{
					func_98(1);
					uParam0->f_1 = iLocal_1803;
					bLocal_1712 = true;
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_1, 1);
					iLocal_1042 = 10;
				}
				else if (iLocal_1815 == -2072933068)
				{
					func_98(1);
					uParam0->f_1 = iLocal_1803;
					bLocal_1713 = true;
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_1, 1);
					iLocal_1042 = 10;
				}
			}
		}
	}
}

void func_366()
{
	if (!func_49(uLocal_122, 2))
	{
		func_543(&uLocal_122, 2);
	}
}

int func_367(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1796[3]))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_16);
		STREAMING::REQUEST_MODEL(uParam0->f_14);
		STREAMING::REQUEST_MODEL(-106498753);
		if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_16) && STREAMING::HAS_MODEL_LOADED(uParam0->f_14)) && STREAMING::HAS_MODEL_LOADED(-106498753))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1796[0]))
			{
				uLocal_1796[0] = PED::CREATE_PED(4, -106498753, 435.0773f, -650.2194f, 27.74271f, 85.9928f, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[0], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[0], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[0], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[0], 4, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[0], 10, 1, 1, 0);
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(435.0773f, -650.2194f, 27.74271f, 2f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_1796[0], 435.0773f, -650.2194f, 27.74271f, 2f, -1);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(uLocal_1796[0], 1193033728, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1796[1]))
			{
				uLocal_1796[1] = PED::CREATE_PED(4, uParam0->f_16, 436.3171f, -642.8832f, 27.73943f, 32.8396f, 1, 1);
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(436.3171f, -642.8832f, 27.73943f, 2f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_1796[1], 436.3171f, -642.8832f, 27.73943f, 2f, -1);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(uLocal_1796[1], 1193033728, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1796[2]))
			{
				uLocal_1796[2] = PED::CREATE_PED(4, uParam0->f_14, 435.6569f, -645.5588f, 27.73775f, 343.8998f, 1, 1);
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(435.6569f, -645.5588f, 27.73775f, 2f, 1))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_1796[2], 435.6569f, -645.5588f, 27.73775f, 2f, -1);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(uLocal_1796[2], 1193033728, 0);
				}
			}
			uLocal_1796[3] = PED::CREATE_PED(4, -106498753, 436.6802f, -629.7325f, 27.71444f, 179.4746f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[1], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[1], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[1], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[1], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_1796[1], 10, 1, 0, 0);
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(436.6802f, -629.7325f, 27.71444f, 2f, 1))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_1796[3], 436.6802f, -629.7325f, 27.71444f, 2f, -1);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(uLocal_1796[3], 1193033728, 0);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

float func_368(struct<3> Param0, int iParam3)
{
	return func_231(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, iParam3);
}

void func_369(var uParam0, char* sParam1)
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0))
		{
			HUD::REMOVE_BLIP(&uParam0);
			HUD::CLEAR_PRINTS();
			func_434(sParam1, 7500, 1);
		}
	}
}

int func_370(struct<3> Param0, float fParam3)
{
	if (func_368(Param0, 1) <= fParam3 && !func_371())
	{
		return 1;
	}
	return 0;
}

int func_371()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -956048545))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1, 0) != PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_372()
{
	if (func_49(uLocal_122, 2))
	{
		func_373(&uLocal_122, 2);
	}
}

void func_373(var uParam0, int iParam1)
{
	func_374(uParam0, iParam1);
}

void func_374(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_375()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1804))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_1804 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1804) && !ENTITY::IS_ENTITY_DEAD(iLocal_1804, 0))
				{
					func_377(iLocal_1804);
				}
			}
		}
	}
}

void func_376()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1647))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (SYSTEM::VDIST2(Var0, Local_1650) > 10000f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1647))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1559354806);
			OBJECT::DELETE_OBJECT(&iLocal_1647);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1646))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1646, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_1646, 1, 0);
		}
	}
}

void func_377(int iParam0)
{
	func_378(&(Global_105187.f_2890), &Global_105187, iParam0, 1);
}

int func_378(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_380(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_379(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_379(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_380(var uParam0, int iParam1, int iParam2)
{
	func_158(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_382(iParam1, 145, 0);
	uParam0->f_11 = func_156(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_381(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_381(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if (iParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_382(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_148(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_383(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98781)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98781)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_8(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_431(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1].f_1 = 0;
			uVar2 = func_429(iVar1);
			cVar3 = { Global_89532[iVar1].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111638.f_9080.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_98781, iParam0);
		}
		else
		{
			iVar5 = func_424(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_111638.f_18569[iVar5].f_4 = 0;
				MemCopy(&uVar6, {func_423(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_98781, iParam0);
			}
			else
			{
				iVar10 = func_422(&(Global_98744.f_3));
				if (iVar10 > -1)
				{
					Global_111638.f_24981.f_4[iVar10] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_384(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_384(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_385(&Global_105187, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_385(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	*uParam0 = func_43();
	uParam0->f_1 = func_136();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_402(&(uParam0->f_2884), 0);
		func_401(PLAYER::PLAYER_PED_ID());
		func_394(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == 966099553)
		{
			uParam0->f_2 = -1569615261;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_393())
		{
			func_389(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1][iVar0] = Global_98469[iVar1][iVar0];
				uParam0->f_616[iVar1].f_13[iVar0] = Global_98469[iVar1].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1].f_59 = Global_98469[iVar1].f_59;
			uParam0->f_616[iVar1].f_60 = Global_98469[iVar1].f_60;
			uParam0->f_616[iVar1].f_61 = Global_98469[iVar1].f_61;
			uParam0->f_616[iVar1].f_62 = Global_98469[iVar1].f_62;
			uParam0->f_616[iVar1].f_63 = Global_98469[iVar1].f_63;
			uParam0->f_616[iVar1].f_64 = Global_98469[iVar1].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1].f_39[iVar0] = Global_98469[iVar1].f_39[iVar0];
				uParam0->f_616[iVar1].f_49[iVar0] = Global_98469[iVar1].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1][iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1][iVar0] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1].f_221[iVar0] = { Global_111638.f_2358.f_539.f_298[iVar1].f_221[iVar0] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(-1142440288, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(-1123368730, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(1081345962, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-1371118771, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(-765547619, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(-1080850937, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-2022861412, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(-2018548694, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(1323790999, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(760098661, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(-260459075, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(1085789752, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(334003354, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-500524769, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(-1456330957, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(-142720058, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(-855707956, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(-1539506602, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(1915755069, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(-126492964, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(190514318, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(-739329202, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-1185380830, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(1030852186, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(1801284145, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-1873234909, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(-1315299114, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(-2073999771, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(1865030647, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(-419525730, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(-121557213, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(-1021590567, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-732338604, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(758650912, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(1090437037, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(164057391, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(1607797744, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(-1852248201, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(177632919, &(uParam0->f_2244[iVar1][0]), -1);
				STATS::STAT_GET_INT(-464115177, &(uParam0->f_2244[iVar1][1]), -1);
				STATS::STAT_GET_INT(111865610, &(uParam0->f_2244[iVar1].f_5[0]), -1);
				STATS::STAT_GET_INT(-194950537, &(uParam0->f_2244[iVar1].f_5[1]), -1);
				STATS::STAT_GET_INT(-378588013, &(uParam0->f_2244[iVar1].f_5[2]), -1);
				STATS::STAT_GET_INT(-626223346, &(uParam0->f_2244[iVar1].f_5[3]), -1);
				STATS::STAT_GET_INT(-848331628, &(uParam0->f_2244[iVar1].f_5[4]), -1);
				STATS::STAT_GET_INT(226994293, &(uParam0->f_2244[iVar1].f_16[0]), -1);
				STATS::STAT_GET_INT(-1921832882, &(uParam0->f_2244[iVar1].f_16[1]), -1);
				STATS::STAT_GET_INT(1934357500, &(uParam0->f_2244[iVar1].f_16[2]), -1);
				STATS::STAT_GET_INT(1106022718, &(uParam0->f_2244[iVar1].f_16[3]), -1);
				STATS::STAT_GET_INT(1478409634, &(uParam0->f_2244[iVar1].f_16[4]), -1);
				STATS::STAT_GET_INT(-863918486, &(uParam0->f_2244[iVar1].f_16[5]), -1);
				STATS::STAT_GET_INT(-1699495217, &(uParam0->f_2244[iVar1].f_16[6]), -1);
				STATS::STAT_GET_INT(-1327567067, &(uParam0->f_2244[iVar1].f_16[7]), -1);
				STATS::STAT_GET_INT(2133068720, &(uParam0->f_2244[iVar1].f_16[8]), -1);
				STATS::STAT_GET_INT(-7828357, &(uParam0->f_2244[iVar1].f_16[9]), -1);
				STATS::STAT_GET_INT(-4568869, &(uParam0->f_2244[iVar1].f_16[10]), -1);
				STATS::STAT_GET_INT(-225202546, &(uParam0->f_2244[iVar1].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0][iVar1] = { Global_111638.f_2358.f_539.f_2407[0][iVar1] };
		uParam0->f_25[1][iVar1] = { Global_111638.f_2358.f_539.f_2407[1][iVar1] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1][iVar0] = Global_111638.f_2358.f_493[iVar1][iVar0];
			uParam0->f_2838[iVar1].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1].f_5[iVar0];
			uParam0->f_2838[iVar1].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1][iVar0] = Global_111638.f_2358[iVar1][iVar0];
			uParam0->f_2345[iVar1].f_4[iVar0] = Global_111638.f_2358[iVar1].f_4[iVar0];
			uParam0->f_2345[iVar1].f_8[iVar0] = Global_111638.f_2358[iVar1].f_8[iVar0];
			uParam0->f_2345[iVar1].f_12[iVar0] = Global_111638.f_2358[iVar1].f_12[iVar0];
			uParam0->f_2345[iVar1].f_16[iVar0] = Global_111638.f_2358[iVar1].f_16[iVar0];
			uParam0->f_2345[iVar1].f_20[iVar0] = Global_111638.f_2358[iVar1].f_20[iVar0];
			uParam0->f_2345[iVar1].f_24[iVar0] = Global_111638.f_2358[iVar1].f_24[iVar0];
			uParam0->f_2345[iVar1].f_28[iVar0] = Global_111638.f_2358[iVar1].f_28[iVar0];
			uParam0->f_2345[iVar1].f_32[iVar0] = Global_111638.f_2358[iVar1].f_32[iVar0];
			uParam0->f_2345[iVar1].f_36[iVar0] = Global_111638.f_2358[iVar1].f_36[iVar0];
			uParam0->f_2345[iVar1].f_40[iVar0] = Global_111638.f_2358[iVar1].f_40[iVar0];
			uParam0->f_2345[iVar1].f_44[iVar0] = Global_111638.f_2358[iVar1].f_44[iVar0];
			uParam0->f_2345[iVar1].f_48[iVar0] = Global_111638.f_2358[iVar1].f_48[iVar0];
			uParam0->f_2345[iVar1].f_52[iVar0] = Global_111638.f_2358[iVar1].f_52[iVar0];
			uParam0->f_2345[iVar1].f_56[iVar0] = Global_111638.f_2358[iVar1].f_56[iVar0];
			uParam0->f_2345[iVar1].f_60[iVar0] = Global_111638.f_2358[iVar1].f_60[iVar0];
			uParam0->f_2345[iVar1].f_64[iVar0] = Global_111638.f_2358[iVar1].f_64[iVar0];
			uParam0->f_2345[iVar1].f_68[iVar0] = Global_111638.f_2358[iVar1].f_68[iVar0];
			uParam0->f_2345[iVar1].f_72[iVar0] = Global_111638.f_2358[iVar1].f_72[iVar0];
			uParam0->f_2345[iVar1].f_76[iVar0] = Global_111638.f_2358[iVar1].f_76[iVar0];
			uParam0->f_2345[iVar1].f_80[iVar0] = Global_111638.f_2358[iVar1].f_80[iVar0];
			uParam0->f_2345[iVar1].f_84[iVar0] = Global_111638.f_2358[iVar1].f_84[iVar0];
			uParam0->f_2345[iVar1].f_88[iVar0] = Global_111638.f_2358[iVar1].f_88[iVar0];
			uParam0->f_2345[iVar1].f_92[iVar0] = Global_111638.f_2358[iVar1].f_92[iVar0];
			uParam0->f_2345[iVar1].f_96[iVar0] = Global_111638.f_2358[iVar1].f_96[iVar0];
			uParam0->f_2345[iVar1].f_100[iVar0] = Global_111638.f_2358[iVar1].f_100[iVar0];
			uParam0->f_2345[iVar1].f_104[iVar0] = Global_111638.f_2358[iVar1].f_104[iVar0];
			uParam0->f_2345[iVar1].f_108[iVar0] = Global_111638.f_2358[iVar1].f_108[iVar0];
			uParam0->f_2345[iVar1].f_112[iVar0] = Global_111638.f_2358[iVar1].f_112[iVar0];
			uParam0->f_2345[iVar1].f_116[iVar0] = Global_111638.f_2358[iVar1].f_116[iVar0];
			uParam0->f_2345[iVar1].f_120[iVar0] = Global_111638.f_2358[iVar1].f_120[iVar0];
			uParam0->f_2345[iVar1].f_124[iVar0] = Global_111638.f_2358[iVar1].f_124[iVar0];
			uParam0->f_2345[iVar1].f_128[iVar0] = Global_111638.f_2358[iVar1].f_128[iVar0];
			uParam0->f_2345[iVar1].f_132[iVar0] = Global_111638.f_2358[iVar1].f_132[iVar0];
			uParam0->f_2345[iVar1].f_136[iVar0] = Global_111638.f_2358[iVar1].f_136[iVar0];
			uParam0->f_2345[iVar1].f_140[iVar0] = Global_111638.f_2358[iVar1].f_140[iVar0];
			uParam0->f_2345[iVar1].f_144[iVar0] = Global_111638.f_2358[iVar1].f_144[iVar0];
			uParam0->f_2345[iVar1].f_148[iVar0] = Global_111638.f_2358[iVar1].f_148[iVar0];
			uParam0->f_2345[iVar1].f_152[iVar0] = Global_111638.f_2358[iVar1].f_152[iVar0];
			uParam0->f_2345[iVar1].f_156[iVar0] = Global_111638.f_2358[iVar1].f_156[iVar0];
			uParam0->f_2345[iVar1].f_160[iVar0] = Global_111638.f_2358[iVar1].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(-589476696, &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(353703542, &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(126871459, &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_387(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_386(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_386(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_387(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_388(iParam2, &iVar0, iParam3, iParam5))
	{
		func_378(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, 1044954915) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_378(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_388(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -956048545))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_133(*uParam1, func_43(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, -150975354))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_389(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_392(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_391(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_390(161, iParam3))
			{
				uParam1->f_59 = func_19(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_19(752, iParam3, 0);
			}
			uParam1->f_60 = func_19(753, iParam3, 0);
			uParam1->f_61 = func_19(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_390(161, iParam3))
			{
				uParam1->f_59 = func_19(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_19(752, iParam3, 0);
			}
		}
	}
}

int func_390(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_14(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_391(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_392(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_393()
{
	func_44();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_394(int iParam0, bool bParam1)
{
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_395(iParam0, &(Global_111638.f_2358.f_539.f_298[iVar0]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_111638.f_2358.f_539.f_1730[iVar2][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(-922941372, uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(-753526687, iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(-502936933, iVar3, 1);
			}
		}
	}
}

void func_395(int iParam0, var uParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			uParam1[iVar0]->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_400(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_400(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != -1569615261)
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == -72657034)
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1[iVar0]->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_398(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_398(Var4, iVar1);
					}
				}
				*uParam1[iVar0] = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::_GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::_GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_397(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::_GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::_GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &Var50))
						{
							if (!func_396(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_397(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return 0;
				break;
			
			case -102323637:
			case -1076751822:
			case 1627465347:
				return 0;
				break;
			
			case -771403250:
			case -1063057011:
				return 0;
				break;
			
			case 2132975508:
				return 0;
				break;
			
			case -1834847097:
			case 137902532:
				return 0;
				break;
			
			case 2138347493:
			case -1466123874:
				return 0;
				break;
			
			case 984333226:
			case -952879014:
				return 0;
				break;
			
			case 1672152130:
			case -1420407917:
				return 0;
				break;
			
			case 171789620:
			case -656458692:
			case -598887786:
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_398(int iParam0, int iParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -19858063;
					break;
				
				case 2:
					iVar0 = -316253668;
					break;
				
				case 3:
					iVar0 = 899381934;
					break;
				
				case 4:
					iVar0 = 1709866683;
					break;
				
				case 5:
					iVar0 = -684126074;
					break;
			}
			break;
		
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					iVar0 = 119648377;
					break;
				
				case 1:
					iVar0 = -696561875;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -966439566;
					break;
			}
			break;
		
		case 584646201:
			switch (iParam1)
			{
				case 0:
					iVar0 = 834974250;
					break;
				
				case 1:
					iVar0 = 614078421;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
				
				case 4:
					iVar0 = -1686714580;
					break;
			}
			break;
		
		case 324215364:
			switch (iParam1)
			{
				case 0:
					iVar0 = -884429072;
					break;
				
				case 1:
					iVar0 = 283556395;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 1215999497;
					break;
			}
			break;
		
		case 736523883:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 643254679;
					break;
				
				case 2:
					iVar0 = 889808635;
					break;
				
				case 3:
					iVar0 = 2043113590;
					break;
				
				case 4:
					iVar0 = 2076495324;
					break;
				
				case 5:
					iVar0 = -1023114086;
					break;
				
				case 6:
					iVar0 = 1019656791;
					break;
				
				case 7:
					iVar0 = 202788691;
					break;
				
				case 8:
					iVar0 = 663170192;
					break;
			}
			break;
		
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1101075946;
					break;
				
				case 2:
					iVar0 = -1323216997;
					break;
				
				case 3:
					iVar0 = -604986051;
					break;
				
				case 4:
					iVar0 = 202788691;
					break;
				
				case 5:
					iVar0 = 2076495324;
					break;
				
				case 6:
					iVar0 = -1657815255;
					break;
				
				case 7:
					iVar0 = -1489156508;
					break;
				
				case 8:
					iVar0 = 1319990579;
					break;
			}
			break;
		
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -1614924820;
					break;
				
				case 2:
					iVar0 = -1861183855;
					break;
				
				case 3:
					iVar0 = -1167922891;
					break;
				
				case 4:
					iVar0 = 1967214384;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = 2076495324;
					break;
				
				case 7:
					iVar0 = -1596416958;
					break;
				
				case 8:
					iVar0 = -2089531990;
					break;
				
				case 9:
					iVar0 = -660892072;
					break;
			}
			break;
		
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					iVar0 = -91250417;
					break;
				
				case 1:
					iVar0 = -1899902599;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 930927479;
					break;
			}
			break;
		
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					iVar0 = -197857404;
					break;
				
				case 1:
					iVar0 = -2112517305;
					break;
				
				case 2:
					iVar0 = 1006677997;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -690308418;
					break;
			}
			break;
		
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = -503336118;
					break;
				
				case 2:
					iVar0 = -691692330;
					break;
				
				case 3:
					iVar0 = 202788691;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1828795171;
					break;
			}
			break;
		
		case 487013001:
			switch (iParam1)
			{
				case 0:
					iVar0 = -435637410;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1562927653;
					break;
			}
			break;
		
		case -494615257:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1796727865;
					break;
				
				case 1:
					iVar0 = -2034401422;
					break;
				
				case 2:
					iVar0 = 202788691;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
			}
			break;
		
		case 100416529:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1681506167;
					break;
				
				case 1:
					iVar0 = -767279652;
					break;
				
				case 2:
					iVar0 = -1135289737;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 1077065191;
					break;
			}
			break;
		
		case 205991906:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = 1198478068;
					break;
				
				case 2:
					iVar0 = -767279652;
					break;
				
				case 3:
					iVar0 = -1135289737;
					break;
			}
			break;
		
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1439939148;
					break;
			}
			break;
		
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					iVar0 = -924946682;
					break;
			}
			break;
		
		case -270015777:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1928132688;
					break;
				
				case 1:
					iVar0 = -1152981993;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1657815255;
					break;
				
				case 4:
					iVar0 = -1489156508;
					break;
				
				case 5:
					iVar0 = 663517359;
					break;
			}
			break;
		
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					iVar0 = 202788691;
					break;
				
				case 1:
					iVar0 = 2076495324;
					break;
				
				case 2:
					iVar0 = -1489156508;
					break;
			}
			break;
		
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					iVar0 = 580369945;
					break;
				
				case 1:
					iVar0 = -640439150;
					break;
				
				case 2:
					iVar0 = 899381934;
					break;
				
				case 3:
					iVar0 = -1489156508;
					break;
				
				case 4:
					iVar0 = 2008591151;
					break;
			}
			break;
		
		case 171789620:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1125642654;
					break;
				
				case 1:
					iVar0 = 860508675;
					break;
				
				case 2:
					iVar0 = 1857603803;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1439939148;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
			}
			break;
		
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2052698631;
					break;
			}
			break;
		
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					iVar0 = -979292288;
					break;
				
				case 1:
					iVar0 = -1284994289;
					break;
				
				case 2:
					iVar0 = 2076495324;
					break;
				
				case 3:
					iVar0 = -1439939148;
					break;
				
				case 4:
					iVar0 = -2089531990;
					break;
				
				case 5:
					iVar0 = 202788691;
					break;
				
				case 6:
					iVar0 = -1470645128;
					break;
			}
			break;
		
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					iVar0 = -125817127;
					break;
				
				case 1:
					iVar0 = 2063610803;
					break;
				
				case 2:
					iVar0 = -2144080721;
					break;
			}
			break;
		
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					iVar0 = -959978111;
					break;
				
				case 1:
					iVar0 = 2089537806;
					break;
				
				case 2:
					iVar0 = 1801039530;
					break;
				
				case 3:
					iVar0 = 2076495324;
					break;
				
				case 4:
					iVar0 = -1596416958;
					break;
				
				case 5:
					iVar0 = -1489156508;
					break;
				
				case 6:
					iVar0 = 202788691;
					break;
				
				case 7:
					iVar0 = 1929467122;
					break;
			}
			break;
		
		case -656458692:
			switch (iParam1)
			{
				case 0:
					iVar0 = -971770235;
					break;
				
				case 1:
					iVar0 = -287703709;
					break;
				
				case 2:
					iVar0 = 1351683121;
					break;
				
				case 3:
					iVar0 = -1755194916;
					break;
				
				case 4:
					iVar0 = 2112683568;
					break;
				
				case 5:
					iVar0 = 1062111910;
					break;
				
				case 6:
					iVar0 = 146278587;
					break;
				
				case 7:
					iVar0 = -494162961;
					break;
				
				case 8:
					iVar0 = 2062808965;
					break;
			}
			break;
		
		case -619010992:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1198425599;
					break;
				
				case 1:
					iVar0 = -1188271751;
					break;
				
				case 2:
					iVar0 = -1444295948;
					break;
				
				case 3:
					iVar0 = -1023114086;
					break;
			}
			break;
		
		case -538741184:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1530822070;
					break;
				
				case 1:
					iVar0 = -409758110;
					break;
			}
			break;
		
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					iVar0 = -377062173;
					break;
				
				case 1:
					iVar0 = 384708672;
					break;
				
				case 2:
					iVar0 = -1802258419;
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_399(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_396(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_399(int iParam0, var uParam1)
{
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_400(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_401(int iParam0)
{
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_402(var uParam0, int iParam1)
{
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(912405861) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (MISC::IS_BIT_SET(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_405(&iVar0))
		{
			if (func_404(iVar0, &Var1, &uVar4))
			{
				Var1.z = (Var1.z + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_43();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_403(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_403(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_404(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_157(*uParam1, 0f, 0f, 0f, 0);
}

int func_405(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_178())
		{
			*uParam0 = func_407(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
			if (func_173(*uParam0) && !func_406(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_406(int iParam0)
{
	return func_174(iParam0, 0, 1);
}

int func_407(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_177(iVar0))
		{
			if (!bParam5 || func_421(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_408(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_408(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_418(Global_100839);
			break;
		
		case 46:
			if (Global_1590374 != func_192())
			{
				if (func_417(Global_1590374))
				{
					return func_410(2, 2);
				}
				else if (func_409(Global_1590374))
				{
					return func_410(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696048;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_409(int iParam0)
{
	if (iParam0 != func_192())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_410(int iParam0, int iParam1)
{
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_192())
	{
		if (iParam1 == 3)
		{
			if (func_411(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 4))
			{
				if (func_411(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1590535[Global_1590374].f_274.f_259, 5))
			{
				if (func_411(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_411(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_416(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_416(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_414(iParam0) };
	}
	else
	{
		Var12 = { func_413(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_412(Var18, -Var0.f_3.f_2) };
	Var18 = { func_412(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_412(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

struct<6> func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_414(int iParam0)
{
	return func_415(iParam0);
}

struct<6> func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_416(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_192())
	{
		if ((MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_418(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_419() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_419()
{
	return func_420(PLAYER::PLAYER_ID());
}

var func_420(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_421(int iParam0)
{
	return func_174(iParam0, 0, 0);
}

int func_422(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_423(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_424(char* sParam0, int iParam1)
{
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_425(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_425(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_426(uParam1, "Abigail1", func_428(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 1:
			func_426(uParam1, "Abigail2", func_428(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 2:
			func_426(uParam1, "Barry1", func_428(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 3:
			func_426(uParam1, "Barry2", func_428(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 4:
			func_426(uParam1, "Barry3", func_428(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 5:
			func_426(uParam1, "Barry3A", func_428(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 6:
			func_426(uParam1, "Barry3C", func_428(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 7:
			func_426(uParam1, "Barry4", func_428(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_427(iParam0), 0, 0);
			break;
		
		case 8:
			func_426(uParam1, "Dreyfuss1", func_428(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 9:
			func_426(uParam1, "Epsilon1", func_428(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 10:
			func_426(uParam1, "Epsilon2", func_428(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 11:
			func_426(uParam1, "Epsilon3", func_428(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 12:
			func_426(uParam1, "Epsilon4", func_428(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 13:
			func_426(uParam1, "Epsilon5", func_428(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 14:
			func_426(uParam1, "Epsilon6", func_428(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 15:
			func_426(uParam1, "Epsilon7", func_428(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 16:
			func_426(uParam1, "Epsilon8", func_428(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 17:
			func_426(uParam1, "Extreme1", func_428(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 18:
			func_426(uParam1, "Extreme2", func_428(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 19:
			func_426(uParam1, "Extreme3", func_428(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 20:
			func_426(uParam1, "Extreme4", func_428(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 21:
			func_426(uParam1, "Fanatic1", func_428(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_427(iParam0), 1, 0);
			break;
		
		case 22:
			func_426(uParam1, "Fanatic2", func_428(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_427(iParam0), 1, 0);
			break;
		
		case 23:
			func_426(uParam1, "Fanatic3", func_428(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_427(iParam0), 0, 1);
			break;
		
		case 24:
			func_426(uParam1, "Hao1", func_428(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_427(iParam0), 0, 1);
			break;
		
		case 25:
			func_426(uParam1, "Hunting1", func_428(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 26:
			func_426(uParam1, "Hunting2", func_428(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 27:
			func_426(uParam1, "Josh1", func_428(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 28:
			func_426(uParam1, "Josh2", func_428(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 29:
			func_426(uParam1, "Josh3", func_428(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 30:
			func_426(uParam1, "Josh4", func_428(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 31:
			func_426(uParam1, "Maude1", func_428(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 32:
			func_426(uParam1, "Minute1", func_428(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 33:
			func_426(uParam1, "Minute2", func_428(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 34:
			func_426(uParam1, "Minute3", func_428(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 35:
			func_426(uParam1, "MrsPhilips1", func_428(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 36:
			func_426(uParam1, "MrsPhilips2", func_428(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 37:
			func_426(uParam1, "Nigel1", func_428(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 38:
			func_426(uParam1, "Nigel1A", func_428(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 39:
			func_426(uParam1, "Nigel1B", func_428(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_427(iParam0), 1, 1);
			break;
		
		case 40:
			func_426(uParam1, "Nigel1C", func_428(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_427(iParam0), 1, 1);
			break;
		
		case 41:
			func_426(uParam1, "Nigel1D", func_428(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_427(iParam0), 1, 1);
			break;
		
		case 42:
			func_426(uParam1, "Nigel2", func_428(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 43:
			func_426(uParam1, "Nigel3", func_428(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 1);
			break;
		
		case 44:
			func_426(uParam1, "Omega1", func_428(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 45:
			func_426(uParam1, "Omega2", func_428(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 46:
			func_426(uParam1, "Paparazzo1", func_428(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 47:
			func_426(uParam1, "Paparazzo2", func_428(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 48:
			func_426(uParam1, "Paparazzo3", func_428(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 49:
			func_426(uParam1, "Paparazzo3A", func_428(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 50:
			func_426(uParam1, "Paparazzo3B", func_428(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 51:
			func_426(uParam1, "Paparazzo4", func_428(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 52:
			func_426(uParam1, "Rampage1", func_428(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 54:
			func_426(uParam1, "Rampage3", func_428(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 55:
			func_426(uParam1, "Rampage4", func_428(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 56:
			func_426(uParam1, "Rampage5", func_428(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_427(iParam0), 0, 0);
			break;
		
		case 53:
			func_426(uParam1, "Rampage2", func_428(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_427(iParam0), 1, 0);
			break;
		
		case 57:
			func_426(uParam1, "TheLastOne", func_428(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 58:
			func_426(uParam1, "Tonya1", func_428(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 59:
			func_426(uParam1, "Tonya2", func_428(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 60:
			func_426(uParam1, "Tonya3", func_428(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 61:
			func_426(uParam1, "Tonya4", func_428(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		case 62:
			func_426(uParam1, "Tonya5", func_428(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_427(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_426(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_428(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_423(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_430(Global_111638.f_9080.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_430(Global_111638.f_9080.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_430(Global_111638.f_9080.f_99.f_205[11]);
			break;
		
		case 90:
			return func_430(Global_111638.f_9080.f_99.f_205[7]);
			break;
		
		case 93:
			return func_430(Global_111638.f_9080.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_431(char* sParam0, bool bParam1)
{
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_432(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_432(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_433(var uParam0, struct<3> Param1, float fParam4)
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		Global_110674 = *uParam0;
		Global_110679 = { Param1 };
		Global_110683 = fParam4;
	}
}

void func_434(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_435(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_522())
		{
			return 0;
		}
	}
	if (uParam0->f_274 == 0)
	{
		if (((((((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs_102") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs01")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs02")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs03")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs04")) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_5)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_15)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			return 0;
		}
	}
	else if (uParam0->f_274 == 1)
	{
		if ((((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_101") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_102")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_103")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_104")) || !STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@assassinate@vice@incar"))
		{
		}
	}
	else if (uParam0->f_274 == 2)
	{
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
		}
	}
	if ((!HUD::HAS_ADDITIONAL_TEXT_LOADED(3) && !func_441(&(uParam0->f_34))) && !func_436(uParam1))
	{
		func_488(uParam1);
		return 0;
	}
	return 1;
}

bool func_436(var uParam0)
{
	return func_437(uParam0);
}

int func_437(var uParam0)
{
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0], 29))
			{
				return 0;
			}
			if (!func_438(uParam0[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_438(var uParam0)
{
	return func_439(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_439(var uParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (func_440(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(uParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_440(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_441(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_442(var uParam0)
{
	if (!func_168(uParam0))
	{
		func_183(uParam0);
	}
}

void func_443(var uParam0)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::DELETE_PED(uParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_8));
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	func_301();
	func_445(0, -1, 1);
	func_444(500);
	HUD::DISPLAY_RADAR(1);
	iLocal_1042 = 12;
}

void func_444(int iParam0)
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_445(int iParam0, int iParam1, int iParam2)
{
	if (func_531() && func_447())
	{
		while (Global_98739 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_446(0);
	}
}

void func_446(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_98744.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_98744.f_20), 13);
	}
}

bool func_447()
{
	return MISC::IS_BIT_SET(Global_98744.f_20, 13);
}

void func_448(var uParam0, var uParam1)
{
	func_451();
	func_450(uParam1);
	if (!bLocal_1703)
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_1, -1);
	}
	if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam1->f_2));
	}
	while (!func_344(uParam0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_343(uParam0))
	{
		SYSTEM::WAIT(0);
	}
	func_445(uParam1->f_1, -1, 1);
	func_444(500);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2246[3].f_19))
	{
		Local_2246[3].f_19 = VEHICLE::CREATE_VEHICLE(uParam0->f_15, Local_2246[3].f_5, Local_2246[3].f_8, 1, 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2246[3].f_19, 1084227584);
	}
	iLocal_1719 = 0;
	iLocal_1722 = 0;
	iLocal_1747 = 3;
	func_314(uParam0, uParam1, 3);
	func_313(uParam1);
	uParam1->f_8 = Local_2246[3].f_19;
	ENTITY::SET_ENTITY_COORDS(uParam1->f_8, 110.2194f, -775.8312f, 30.4426f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(uParam1->f_8, 77.2454f);
	PED::SET_PED_INTO_VEHICLE(*uParam1, uParam1->f_8, -1);
	iLocal_1706 = 0;
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(*uParam1, uParam1->f_8, "OJASbs_102", 52, 0, 20, -1, -1082130432, 0, 1073741824);
	Local_1758 = { -455.2892f, -326.1364f, 41.22218f };
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("OJASbs_102", &iLocal_1748);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam1, 1, 1);
	fLocal_1753 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1->f_8);
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uParam1->f_8, (fLocal_1752 * 100f));
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 3, 1);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam1->f_8, 1.5f);
	iLocal_1696 = 1;
	ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_1, 0);
	func_449(uParam0, uParam1);
	func_318(uParam1);
	HUD::DISPLAY_RADAR(1);
	func_299();
	iLocal_1461 = 5;
	iLocal_1042 = 10;
}

void func_449(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_1, 0))
	{
		Local_2246[0].f_14[0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, uParam0->f_16, 3, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[0].f_14[0], 1);
		Local_2246[0].f_14[1] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, -106498753, 4, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[1], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[1], 4, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[0].f_14[1], 1);
		Local_2246[0].f_14[2] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, uParam0->f_14, 5, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[2], 2, 2, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[2], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[2], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[0].f_14[2], 8, 1, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[0].f_14[2], 1);
		Local_2246[1].f_14[0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, uParam0->f_16, 6, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[1].f_14[0], 1);
		Local_2246[1].f_14[1] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, -106498753, 7, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[1].f_14[1], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[1].f_14[1], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[1].f_14[1], 4, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[1].f_14[1], 1);
		Local_2246[1].f_14[2] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, uParam0->f_14, 8, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[1].f_14[2], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[1].f_14[2], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[1].f_14[2], 4, 0, 2, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[1].f_14[2], 1);
		Local_2246[2].f_14[0] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, uParam0->f_16, 0, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[2].f_14[0], 1);
		Local_2246[2].f_14[1] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, -106498753, 1, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[1], 4, 0, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[2].f_14[1], 1);
		Local_2246[2].f_14[2] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_1, 4, uParam0->f_14, 2, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[2], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[2], 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[2], 3, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_2246[2].f_14[2], 4, 0, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2246[2].f_14[2], 1);
	}
}

void func_450(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_1));
	}
	if (bLocal_1713)
	{
		uParam0->f_1 = VEHICLE::CREATE_VEHICLE(-2072933068, 118.3466f, -786.1586f, 30.3105f, 68.7988f, 1, 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_1, 1084227584);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_1, 0);
	}
	else
	{
		uParam0->f_1 = VEHICLE::CREATE_VEHICLE(-713569950, 118.3466f, -786.1586f, 30.3105f, 68.7988f, 1, 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_1, 1084227584);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_1, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_1, 118.3466f, -786.1586f, 30.3105f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_1, 68.7988f);
	}
}

void func_451()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2246[iVar0].f_14[iVar1]))
			{
				PED::DELETE_PED(&(Local_2246[iVar0].f_14[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_452(var uParam0, var uParam1)
{
	func_451();
	func_450(uParam1);
	if (!bLocal_1703)
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_1, -1);
	}
	if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam1->f_2));
	}
	while (!func_344(uParam0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_343(uParam0))
	{
		SYSTEM::WAIT(0);
	}
	func_342();
	iLocal_1727 = 3;
	iLocal_1747 = 3;
	iLocal_1696 = 0;
	bLocal_1697 = false;
	iLocal_1719 = 0;
	func_312(uParam0, uParam1, iLocal_1742[iLocal_1727], 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2246[3].f_19))
	{
		uParam1->f_8 = Local_2246[3].f_19;
	}
	else
	{
		Local_2246[3].f_19 = VEHICLE::CREATE_VEHICLE(uParam0->f_15, Local_2246[3].f_5, Local_2246[3].f_8, 1, 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2246[3].f_19, 1084227584);
		uParam1->f_8 = Local_2246[3].f_19;
	}
	func_314(uParam0, uParam1, 3);
	func_313(uParam1);
	func_449(uParam0, uParam1);
	func_445(uParam1->f_1, -1, 1);
	func_299();
	iLocal_1461 = 4;
	iLocal_1042 = 10;
}

void func_453(var uParam0, var uParam1)
{
	MISC::CLEAR_AREA(Local_1776, 50f, 1, 0, 0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((Local_1776.x - 40f), (Local_1776.y - 40f), (Local_1776.z - 40f), (Local_1776.x + 40f), (Local_1776.y + 40f), (Local_1776.z + 40f), 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
	{
		if (!bLocal_1703)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_1, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_9, 1, 0, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 423.25f, -641.36f, 28.5068f, 1, 0, 0, 1);
			}
		}
		VEHICLE::DELETE_VEHICLE(&(uParam1->f_1));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
	{
		if (bLocal_1713)
		{
			uParam1->f_1 = VEHICLE::CREATE_VEHICLE(-2072933068, uParam0->f_9, uParam0->f_12, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_1, 1084227584);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam1->f_1, 0);
		}
		else
		{
			uParam1->f_1 = VEHICLE::CREATE_VEHICLE(-713569950, uParam0->f_9, uParam0->f_12, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_1, 1084227584);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam1->f_1, 0);
		}
	}
	if (!bLocal_1703)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, 0))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam1->f_1, -1);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam1->f_2));
	}
	if (bLocal_1703)
	{
		while (!func_367(uParam0))
		{
			SYSTEM::WAIT(0);
		}
		bLocal_1703 = false;
	}
	while (!func_344(uParam0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_343(uParam0))
	{
		SYSTEM::WAIT(0);
	}
	func_445(uParam1->f_1, -1, 1);
	func_444(500);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	HUD::DISPLAY_RADAR(1);
	func_342();
	func_341(uParam0, uParam1);
	iLocal_1696 = 0;
	bLocal_1697 = false;
	iLocal_1719 = 0;
	func_299();
	iLocal_1461 = 2;
	iLocal_1042 = 10;
}

void func_454(var uParam0, var uParam1)
{
	iLocal_1696 = 0;
	bLocal_1697 = false;
	HUD::DISPLAY_RADAR(1);
	func_445(0, -1, 1);
	func_299();
	func_444(500);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	iLocal_1042 = 6;
}

void func_455(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_166(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_456(var uParam0)
{
	iLocal_1801 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, 439.7705f, -571.9359f, 27.5068f, 325f, 1, 1, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1801, 1084227584);
	iLocal_1802 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, 406.7046f, -625.4039f, 27.5068f, 91f, 1, 1, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1802, 1084227584);
}

void func_457(var uParam0, var uParam1)
{
	func_201(&(uParam1->f_16), 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	if (uParam0->f_274 == 1)
	{
		uParam1->f_3 = { -547.167f, -1827.514f, 21.9023f };
		uParam1->f_6 = 81.6995f;
	}
	else if (uParam0->f_274 == 0)
	{
		uParam1->f_3 = { 359.6962f, -687.8932f, 28.188f };
		uParam1->f_6 = 326.413f;
	}
	if (HUD::DOES_BLIP_EXIST(uParam1->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam1->f_2));
	}
	if (uParam0->f_274 == 1)
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_2, "ASS_HK_DESTBLIP");
	}
	else if (uParam0->f_274 == 0)
	{
	}
	if (!func_157(uParam1->f_3, func_459(), 0))
	{
		func_433(&(uParam1->f_2), uParam1->f_3, uParam1->f_6);
	}
	if (uParam0->f_274 != 0 && uParam0->f_274 != 1)
	{
		func_315(uParam0, uParam1);
	}
	if (uParam0->f_274 != 1)
	{
		func_458(uParam0, uParam1);
	}
	if (uParam0->f_14 != 0 && uParam0->f_274 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
		{
			uParam1->f_7 = PED::CREATE_PED(4, uParam0->f_14, uParam0->f_18, uParam0->f_21, 1, 1);
			if (uParam0->f_274 == 1)
			{
				TASK::TASK_PLAY_ANIM(uParam1->f_7, "ODDJOBS@ASSASSINATE@VICE@HOOKER", "idle_b", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam1->f_7, 1);
				func_201(&(uParam1->f_16), 4, uParam1->f_7, "OJAhkHOOKER", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_7, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7, 17, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(uParam1->f_7, 128, 1);
				PED::SET_PED_CONFIG_FLAG(uParam1->f_7, 134, 1);
			}
		}
	}
	if (uParam0->f_15 != 0)
	{
		if (uParam0->f_274 != 0)
		{
			uParam1->f_8 = VEHICLE::CREATE_VEHICLE(uParam0->f_15, uParam0->f_26, uParam0->f_29, 1, 1, 0);
		}
		if (uParam0->f_274 == 1)
		{
			VEHICLE::SET_VEHICLE_EXTRA(uParam1->f_8, 3, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(uParam1->f_8, 1);
			VEHICLE::REMOVE_VEHICLE_WINDOW(uParam1->f_8, 0);
			iLocal_1029 = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_8, 4, uParam0->f_16, -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1029, 1);
			func_201(&(Local_1045.f_16), 5, iLocal_1029, "KerbCrawler", 0, 1);
		}
	}
	if (uParam0->f_274 == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam1->f_2))
		{
			uParam1->f_2 = HUD::ADD_BLIP_FOR_COORD(uParam0->f_6);
			HUD::SET_BLIP_ROUTE(uParam1->f_2, 1);
			HUD::SET_BLIP_ROUTE_COLOUR(uParam1->f_2, 1);
			HUD::SET_BLIP_COLOUR(uParam1->f_2, 1);
		}
	}
	else if (uParam0->f_274 == 0)
	{
		uParam1->f_2 = HUD::ADD_BLIP_FOR_COORD(uParam0->f_6);
		HUD::SET_BLIP_ROUTE(uParam1->f_2, 1);
		HUD::SET_BLIP_ROUTE_COLOUR(uParam1->f_2, 3);
		HUD::SET_BLIP_COLOUR(uParam1->f_2, 3);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_2, "ASS_BS_BLIP");
	}
	else
	{
		uParam1->f_2 = HUD::ADD_BLIP_FOR_COORD(uParam0->f_6);
		HUD::SET_BLIP_ROUTE(uParam1->f_2, 1);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_336(uParam0->f_249[iVar0]))
		{
			uParam1->f_11[iVar0] = OBJECT::CREATE_OBJECT(uParam0->f_244[iVar0], uParam0->f_249[iVar0], 1, 1, 0);
			ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam1->f_11[iVar0], 1);
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_11[iVar0], 1, 0);
			if (iVar0 == 1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11[iVar0], 1);
			}
			if (uParam0->f_262[iVar0] != 0f)
			{
				ENTITY::SET_ENTITY_HEADING(uParam1->f_11[iVar0], uParam0->f_262[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_458(var uParam0, var uParam1)
{
	if (uParam0->f_5 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, uParam0->f_9, uParam0->f_12, 1, 1, 0);
			if (uParam0->f_274 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(uParam1->f_1, 2, 1);
				VEHICLE::REMOVE_VEHICLE_WINDOW(uParam1->f_1, 1);
				VEHICLE::REMOVE_VEHICLE_WINDOW(uParam1->f_1, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam1->f_1, 3);
			}
			else if (uParam0->f_274 == 0)
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_1, 1, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam1->f_1, 0);
			}
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam1->f_1);
			if (uParam0->f_267 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_1, 0))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE(*uParam1, uParam1->f_1, -1);
						}
					}
				}
			}
		}
	}
}

Vector3 func_459()
{
	return Var0;
}

void func_460()
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1.5f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(426.035f, -644.93f, -100f, 421.035f, -644.93f, 100f, 55f, 0, 0, 1);
	Var0[0] = { 421.9403f, -652.3276f, 27.50035f };
	Var0[1] = { 404.6367f, -636.3543f, 27.50008f };
	Var0[2] = { 425.5966f, -613.0894f, 27.56621f };
	Var0[3] = { 423.3468f, -636.7864f, 27.50008f };
	Var0[4] = { 421.8836f, -667.1424f, 28.04054f };
	Var0[5] = { 423.5143f, -677.3956f, 28.33767f };
	uLocal_1808[0] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0[0] - Vector(8f, 8f, 8f), Var0[0] + Vector(8f, 8f, 8f), 0, 1, 1, 1);
	uLocal_1808[1] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0[1] - Vector(8.5f, 8.5f, 8.5f), Var0[1] + Vector(8.5f, 8.5f, 8.5f), 0, 1, 1, 1);
	uLocal_1808[2] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0[2] - Vector(8.5f, 8.5f, 8.5f), Var0[2] + Vector(8.5f, 8.5f, 8.5f), 0, 1, 1, 1);
	uLocal_1808[3] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0[3] - Vector(9.5f, 9.5f, 9.5f), Var0[3] + Vector(9.5f, 9.5f, 9.5f), 0, 1, 1, 1);
	uLocal_1808[4] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0[4] - Vector(8f, 8f, 8f), Var0[4] + Vector(8f, 8f, 8f), 0, 1, 1, 1);
	uLocal_1808[5] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0[5] - Vector(15f, 15f, 15f), Var0[5] + Vector(15f, 15f, 15f), 0, 1, 1, 1);
}

void func_461(var uParam0, var uParam1, bool bParam2)
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	if (uParam0->f_274 == 1)
	{
		HUD::REQUEST_ADDITIONAL_TEXT("ASS_hk", 3);
		TASK::REQUEST_WAYPOINT_RECORDING("OJAShk_101");
		TASK::REQUEST_WAYPOINT_RECORDING("OJAShk_102");
		TASK::REQUEST_WAYPOINT_RECORDING("OJAShk_103");
		TASK::REQUEST_WAYPOINT_RECORDING("OJAShk_104");
		STREAMING::REQUEST_ANIM_DICT("ODDJOBS@assassinate@vice@incar");
		STREAMING::REQUEST_ANIM_DICT("mini@hookers_spvanilla");
	}
	else if (uParam0->f_274 == 0)
	{
		HUD::REQUEST_ADDITIONAL_TEXT("ASS_bs", 3);
		TASK::REQUEST_WAYPOINT_RECORDING("OJASbs_102");
		TASK::REQUEST_WAYPOINT_RECORDING("OJASbs01");
		TASK::REQUEST_WAYPOINT_RECORDING("OJASbs02");
		TASK::REQUEST_WAYPOINT_RECORDING("OJASbs03");
		TASK::REQUEST_WAYPOINT_RECORDING("OJASbs04");
		STREAMING::REQUEST_ANIM_DICT("ODDJOBS@assassinate@old_lady");
		STREAMING::REQUEST_CLIP_SET("move_m@casual@d");
		VEHICLE::REQUEST_VEHICLE_ASSET(uParam0->f_5, 3);
		VEHICLE::REQUEST_VEHICLE_ASSET(uParam0->f_15, 3);
		STREAMING::REQUEST_PTFX_ASSET();
	}
	else if (uParam0->f_274 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT("ASS_ml", 3);
		STREAMING::REQUEST_PTFX_ASSET();
	}
	func_465(&(uParam0->f_34));
	func_462(&(uParam0->f_46), uParam1);
	if (bParam2)
	{
		func_523();
		while (!func_522())
		{
			func_488(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	if (uParam0->f_274 == 0)
	{
		while (((((((((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs_102") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs01")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs02")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs03")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASbs04")) || !STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@assassinate@old_lady")) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_5)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_15)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_CLIP_SET_LOADED("move_m@casual@d"))
		{
			func_488(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	else if (uParam0->f_274 == 1)
	{
		while (((((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_101") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_102")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_103")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAShk_104")) || !STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@assassinate@vice@incar")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@hookers_spvanilla"))
		{
			func_488(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	else if (uParam0->f_274 == 2)
	{
		while (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			func_488(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	while ((!HUD::HAS_ADDITIONAL_TEXT_LOADED(3) || !func_441(&(uParam0->f_34))) || !func_436(uParam1))
	{
		func_488(uParam1);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_274 == 1)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_18, 100f, 0, 0, 0, 0, 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-690.763f, -1607.467f, -100.9649f, -404.4197f, -1856.529f, 100.5908f, 0, 1);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
		StringCopy(&Local_727, "ASS_HK_PASSED", 24);
		StringCopy(&(Local_727.f_6), "ASS_HK_NAME", 24);
		StringCopy(&(Local_727.f_12), "ASS_HK_TIMER", 24);
		StringCopy(&(Local_727.f_18), "ASS_HK_BASE", 24);
		StringCopy(&(Local_727.f_24), "ASS_HK_BDESC", 24);
		StringCopy(&(Local_727.f_30), "ASS_HK_CASH", 24);
		StringCopy(&(Local_727.f_36), "ASS_HK_COMP", 24);
		StringCopy(&(Local_727.f_42), "ASS_HK_COMP", 24);
		StringCopy(&(Local_727.f_48), "ASS_HK_COMP", 24);
		StringCopy(&(Local_727.f_54), "ASS_HK_COMP", 24);
		StringCopy(&(Local_727.f_60), "ASS_HK_CONT", 24);
		fLocal_135 = 3000f;
		fLocal_136 = 2000f;
	}
	else if (uParam0->f_274 == 0)
	{
		StringCopy(&Local_727, "ASS_BS_PASSED", 24);
		StringCopy(&(Local_727.f_6), "ASS_BS_NAME", 24);
		StringCopy(&(Local_727.f_12), "ASS_BS_TIMER", 24);
		StringCopy(&(Local_727.f_18), "ASS_BS_BASE", 24);
		StringCopy(&(Local_727.f_24), "ASS_BS_BDESC", 24);
		StringCopy(&(Local_727.f_30), "ASS_BS_CASH", 24);
		StringCopy(&(Local_727.f_36), "ASS_BS_COMP", 24);
		StringCopy(&(Local_727.f_42), "ASS_BS_COMP", 24);
		StringCopy(&(Local_727.f_48), "ASS_BS_COMP", 24);
		StringCopy(&(Local_727.f_54), "ASS_BS_COMP", 24);
		StringCopy(&(Local_727.f_60), "ASS_BS_CONT", 24);
		fLocal_135 = 5000f;
		fLocal_136 = 2000f;
	}
	else if (uParam0->f_274 == 2)
	{
		StringCopy(&Local_727, "ASS_ML_PASSED", 24);
		StringCopy(&(Local_727.f_6), "ASS_ML_NAME", 24);
		StringCopy(&(Local_727.f_12), "ASS_ML_TIMER", 24);
		StringCopy(&(Local_727.f_18), "ASS_ML_BASE", 24);
		StringCopy(&(Local_727.f_24), "ASS_ML_BDESC", 24);
		StringCopy(&(Local_727.f_30), "ASS_ML_CASH", 24);
		StringCopy(&(Local_727.f_36), "ASS_ML_COMP", 24);
		StringCopy(&(Local_727.f_42), "ASS_ML_COMP", 24);
		StringCopy(&(Local_727.f_48), "ASS_ML_COMP", 24);
		StringCopy(&(Local_727.f_54), "ASS_ML_COMP", 24);
		StringCopy(&(Local_727.f_60), "ASS_ML_CONT", 24);
		fLocal_135 = 5000f;
		fLocal_136 = 2000f;
	}
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_462(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			func_463(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_463(var uParam0, char* sParam1)
{
	func_464(uParam0, 1, -1, sParam1, 0);
}

void func_464(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0], iParam1))
			{
				if (iParam2 != -1)
				{
					if (uParam0[iVar0]->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(uParam0[iVar0]->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			StringCopy(&(uParam0[iVar0]->f_2), sParam3, 64);
			uParam0[iVar0]->f_1 = iParam2;
			(*uParam0)[iVar0] = iParam4;
			MISC::SET_BIT(uParam0[iVar0], iParam1);
			MISC::SET_BIT(uParam0[iVar0], 30);
			return;
		}
		iVar0++;
	}
}

void func_465(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_466(var uParam0)
{
	*uParam0 = 2120901815;
	uParam0->f_14 = 131961260;
	uParam0->f_16 = 390939205;
	uParam0->f_5 = -713569950;
	uParam0->f_15 = -186537451;
	uParam0->f_1 = { 477.8577f, -605.9913f, 28.5108f };
	uParam0->f_4 = 352f;
	uParam0->f_6 = { 421.5518f, -640.2146f, 27.5068f };
	uParam0->f_9 = { 421.5518f, -640.2146f, 27.5068f };
	uParam0->f_12 = 178.95f;
	uParam0->f_76 = { 420.3106f, -676.6454f, 36.0428f };
	uParam0->f_79 = { -1.2817f, 0f, -9.4208f };
	uParam0->f_82 = 39.8344f;
	StringCopy(&(uParam0->f_57), "ASS_BS", 24);
	StringCopy(&(uParam0->f_83[0]), "oddjobs@assassinate@bus@", 64);
	StringCopy(&(uParam0->f_83[1]), "misscommon@response", 64);
	func_469(&(uParam0->f_34), uParam0->f_5);
	func_469(&(uParam0->f_34), uParam0->f_15);
	func_467(&(uParam0->f_46), &(uParam0->f_83[0]));
	func_467(&(uParam0->f_46), &(uParam0->f_83[1]));
	StringCopy(&(uParam0->f_63[0]), "ASS_BS_ENTER", 24);
	uParam0->f_271 = { 421.4034f, -675.3058f, 28.2859f };
	uParam0->f_274 = 0;
	uParam0->f_268 = 1;
	uParam0->f_269 = 1;
}

int func_467(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_468(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_468(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_469(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_470(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_470(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_471(var uParam0)
{
	switch (iLocal_1645)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@bus@call");
			STREAMING::REQUEST_MODEL(-1559354806);
			if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@bus@call") && STREAMING::HAS_MODEL_LOADED(-1559354806))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				bLocal_1680 = true;
			}
			if (bLocal_1680)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1646))
				{
					func_475(-23.95966f, -110.5681f, 56.03526f, -28.19492f, -109.039f, 57.12716f, 6f, -33.4344f, -110.1356f, 56.1898f, 68.6902f, 1, 1, 1, 0, 0);
					MISC::CLEAR_AREA(-26.48f, -110.66f, 56.0227f, 3f, 1, 0, 0, 0);
					if (!func_168(&uLocal_1675))
					{
						func_442(&uLocal_1675);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1646))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1646, 0, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_1646, 0, 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_1646, 0);
						iLocal_1647 = OBJECT::CREATE_OBJECT(-1559354806, -26.48f, -110.66f, 56.0227f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1647, 0f, 0f, 157.62f, 2, 1);
						ENTITY::SET_ENTITY_COLLISION(iLocal_1647, 0, 0);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_1647, 0);
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
					}
					uLocal_1690 = STREAMING::FORMAT_FOCUS_HEADING(-26.48f, -110.66f, 56.0227f, 350f, 12, 127);
					func_286(1, 1, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_1653, 5f, 0);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1653, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1656);
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					}
					uLocal_1687 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1681, Local_1684, 2);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1647))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_1687, iLocal_1647, -1);
					}
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1687, "oddjobs@assassinate@bus@call", "ass_bus_call_p1", 1000f, -2f, 2, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_1647, uLocal_1687, "ass_bus_call_phone", "oddjobs@assassinate@bus@call", 1000f, -2f, 0, 1148846080);
					if (!CAM::DOES_CAM_EXIST(uLocal_1648))
					{
						uLocal_1649 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1660, Local_1663, 36f, 1, 2);
						uLocal_1648 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1666, Local_1669, 36f, 0, 2);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1648, uLocal_1649, 2500, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						CAM::SHAKE_CAM(uLocal_1648, "HAND_SHAKE", 0.2f);
					}
					func_201(&(uParam0->f_16), 3, 0, "LESTER", 0, 1);
					func_201(&(uParam0->f_16), 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					uLocal_1689 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-26.48f, -110.66f, 56.0227f, 3f, 3f, 3f, 0f, 0, 7);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
					func_285(23, 1);
					iLocal_1645 = 1;
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@bus@call");
					STREAMING::REQUEST_MODEL(-1559354806);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1646))
					{
						iLocal_1646 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_1650, 5f, 1281992692, 1, 0, 1);
					}
				}
			}
			break;
		
		case 1:
			func_473();
			if (func_168(&uLocal_1672))
			{
				if (func_165(&uLocal_1672) > 1f)
				{
					if (func_311())
					{
						bLocal_1678 = true;
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							func_472(800);
						}
						iLocal_1645 = 2;
						break;
					}
				}
			}
			if (!iLocal_1679)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1687))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1687) > 0.05f)
						{
							if (func_212(&(uParam0->f_16), "OJASAUD", "OJAScnt_bs", 9, 0, 0, 0))
							{
								if (!func_168(&uLocal_1672))
								{
									func_442(&uLocal_1672);
									iLocal_1679 = 1;
									if (func_4(0))
									{
										func_444(500);
									}
								}
							}
						}
					}
				}
			}
			if (func_168(&uLocal_1672))
			{
				if ((func_165(&uLocal_1672) > fLocal_1657 || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_1687) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1687) >= 0.962f)) || bLocal_1678)
				{
					iLocal_1645 = 3;
				}
			}
			break;
		
		case 2:
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			if (bLocal_1678)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -25.8488f, -109.9882f, 56.0738f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 236.2218f);
					}
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_1647, -1000f, 1);
					SYSTEM::WAIT(0);
					CAM::DO_SCREEN_FADE_IN(500);
					CAM::DESTROY_ALL_CAMS(0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					iLocal_1645 = 3;
				}
			}
			break;
		
		case 3:
			if (!bLocal_1678)
			{
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				CAM::DESTROY_ALL_CAMS(0);
			}
			if (STREAMING::_0x07C313F94746702C(uLocal_1690))
			{
				STREAMING::_0x1EE7D8DF4425F053(uLocal_1690);
			}
			ENTITY::SET_ENTITY_COLLISION(iLocal_1647, 1, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
			func_285(23, 0);
			func_286(0, 1, 1, 0, 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			STREAMING::REMOVE_ANIM_DICT("oddjobs@assassinate@bus@call");
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1646);
			iLocal_1042 = 4;
			break;
	}
}

int func_472(int iParam0)
{
	CAM::DO_SCREEN_FADE_OUT(iParam0);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

void func_473()
{
	switch (iLocal_1688)
	{
		case 0:
			if (func_474(&uLocal_1648, 4f, -24.8539f, -110.49f, 57.5606f, -1.6505f, 0.0546f, 82.1926f, 35f, 1, 0.2f))
			{
				iLocal_1688 = 1;
			}
			break;
		
		case 1:
			if (func_474(&uLocal_1648, 11f, -27.3634f, -109.3758f, 57.7306f, -6.4572f, 0.0825f, -115.486f, 40f, 1, 0.3f))
			{
				iLocal_1688 = 2;
			}
			break;
		
		case 2:
			if (func_474(&uLocal_1648, 19f, -24.5192f, -111.0343f, 57.4342f, 0.7037f, -0.0769f, 66.6607f, 28.6009f, 1, 0.3f))
			{
				iLocal_1688 = 3;
			}
			break;
		
		case 3:
			if (func_474(&uLocal_1648, 27f, -28.7803f, -108.8278f, 57.6104f, -3.9667f, -0.0497f, -116.5466f, 35.122f, 1, 0.2f))
			{
				iLocal_1688 = 4;
			}
			break;
		
		case 4:
			break;
	}
}

int func_474(var uParam0, float fParam1, struct<3> Param2, struct<3> Param5, float fParam8, bool bParam9, float fParam10)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (func_168(&uLocal_1675))
		{
			if (func_165(&uLocal_1675) >= fParam1)
			{
				CAM::SET_CAM_COORD(uLocal_1648, Param2);
				CAM::SET_CAM_ROT(uLocal_1648, Param5, 2);
				CAM::SET_CAM_FOV(uLocal_1648, fParam8);
				if (bParam9)
				{
					CAM::SHAKE_CAM(uLocal_1648, "HAND_SHAKE", fParam10);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_475(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_476(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_476(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam18)
			{
				func_480(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var10.z > Param0.z && Var10.z < Param3.z) || (Var10.z > Param3.z && Var10.z < Param0.z))
				{
					if (func_477(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, -956048545))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_133(iVar0, func_43(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_336(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.x = (Param11.x + 3f);
							Param11.y = (Param11.y + 3f);
						}
						if (((iVar13 == -1403128555 || iVar13 == 117401876) || iVar13 == -1237253773) || iVar13 == -845961253)
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == 1663218586 || iVar13 == -498054846)
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.x - Var4.x) > Param11.x)
						{
							bVar2 = false;
						}
						else if ((Var7.y - Var4.y) > Param11.y)
						{
							bVar2 = false;
						}
						else if ((Var7.z - Var4.z) > Param11.z)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, uParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1, 0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_477(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Param1.z = Param4.z;
		Var0 = { func_479(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.x = -Var3.y;
		Var0.y = Var3.x;
		Var0.z = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		Var18[0] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31, Var31.f_1, 0f) };
		Var18[1] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31, Var34.f_1, 0f) };
		Var18[2] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34, Var31.f_1, 0f) };
		Var18[3] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34, Var34.f_1, 0f) };
		if (((((((((((((((func_478(Var18[0], Var18[1], Var6, Var9) || func_478(Var18[0], Var18[1], Var9, Var15)) || func_478(Var18[0], Var18[1], Var12, Var15)) || func_478(Var18[0], Var18[1], Var6, Var12)) || func_478(Var18[1], Var18[3], Var6, Var9)) || func_478(Var18[1], Var18[3], Var9, Var15)) || func_478(Var18[1], Var18[3], Var12, Var15)) || func_478(Var18[1], Var18[3], Var6, Var12)) || func_478(Var18[3], Var18[2], Var6, Var9)) || func_478(Var18[3], Var18[2], Var9, Var15)) || func_478(Var18[3], Var18[2], Var12, Var15)) || func_478(Var18[3], Var18[2], Var6, Var12)) || func_478(Var18[2], Var18[0], Var6, Var9)) || func_478(Var18[2], Var18[0], Var9, Var15)) || func_478(Var18[2], Var18[0], Var12, Var15)) || func_478(Var18[2], Var18[0], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_478(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_479(struct<3> Param0)
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

void func_480(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

void func_481(var uParam0)
{
	func_532(uParam0);
}

void func_482(var uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_274(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_274(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_483()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1803))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1803, 0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 421.5518f, -640.2153f, 27.5072f, 1, 0, 0, 1);
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1803, 1, 0);
		VEHICLE::DELETE_VEHICLE(&iLocal_1803);
	}
}

void func_484(var uParam0, struct<3> Param1, struct<3> Param4)
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param1, Param4, 0);
}

void func_485(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar1, 0) != 0)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, iVar1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar0, 0);
				}
			}
		}
		iVar1++;
	}
}

int func_486()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return 1;
	}
	return 0;
}

int func_487(var uParam0)
{
	if (uParam0->f_270)
	{
		return 1;
	}
	return 0;
}

void func_488(var uParam0)
{
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_98744.f_20, 2)) || MISC::IS_BIT_SET(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0], 29))
					{
						func_489(uParam0[iVar0]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_489(var uParam0)
{
	func_490(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_490(var uParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_440(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}

void func_491(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_531())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_98744.f_20), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_98740 = { Param0 };
		Global_98743 = fParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_98744.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_98744.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_98744.f_20), 24);
		}
		func_446(1);
	}
}

int func_492(struct<3> Param0, float fParam3)
{
	return func_493(&(Global_105187.f_2890), Param0, fParam3, 0);
}

int func_493(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if (func_521(uParam0))
	{
		if (func_157(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == -845961253 || uParam0->f_12.f_66 == 1233534620)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_520(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			func_519(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_503(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.y, (Param1.z + 30f), Param1.x, Param1.y, (Param1.z - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_502(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_502(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					func_501(iVar0, uParam0->f_11);
				}
				else if ((!func_498(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = func_497(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_494(iVar8);
					}
				}
				if (((Global_98744 != 13 && Global_98744 != 10) && Global_98744 != 11) && Global_98744 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_98744.f_3)) == Global_76429)
					{
						if (uParam0->f_12.f_66 == Global_111638.f_32744.f_69[21].f_66)
						{
							func_151(24, 0);
							func_494(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_117(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_494(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_147(&(Global_75441.f_555[0]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_75441.f_139[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_75441.f_555[0].f_9, 13))
		{
			if (((((iParam0 == 24 && func_153(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] > 3) && (!func_495(0, Global_75441.f_555[0].f_12) || !func_495(1, Global_75441.f_555[0].f_12)))
			{
				func_154(&(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_151(iParam0, 0);
		}
	}
}

int func_495(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_496(&(Global_111638.f_32744.f_5038[iVar0])))
	{
		return 0;
	}
	return func_120(Global_111638.f_32744.f_5038[iVar0][iParam0].f_66, 0);
}

int func_496(var uParam0)
{
	return *uParam0;
}

int func_497(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_75441.f_484[iVar0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_484[iVar0], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(uParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_75441.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_75441.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_75441.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_498(int iParam0, struct<3> Param1, bool bParam4)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	switch (iVar0)
	{
		case -50547061:
			if (func_500(iParam0, Global_75441.f_139[38], 0))
			{
				func_494(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_500(iParam0, Global_75441.f_139[43], 1))
			{
				func_494(43);
				return 1;
			}
			break;
		
		case -644710429:
			iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_500(iParam0, uVar1[iVar6], 1) && func_499(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_157(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], 1), 1) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case -1214293858:
			if ((ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_484[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_75441.f_484[14]) == -1214293858 && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_75441.f_484[14]))
				{
					func_494(14);
					return 1;
				}
			}
			break;
		
		case 1075432268:
			if ((ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_484[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_75441.f_484[20]) == 1075432268 && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_75441.f_484[20]))
				{
					func_494(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_499(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (MISC::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0, int iParam1, bool bParam2)
{
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(uParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_501(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			Global_96075[iVar0] = uParam0;
			Global_96085[iVar0] = iParam1;
			Global_96095[iVar0] = ENTITY::GET_ENTITY_MODEL(uParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_96095[iVar0]))
			{
				Global_96123[iParam1][0] = -1;
			}
			else
			{
				Global_96123[iParam1][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_502(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (iParam0 == 145 || Global_96085[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_96075[iVar0]) == func_148(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96075[iVar0], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96075[iVar0], 0, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_96075[iVar0]));
						Global_96085[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_503(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (!func_512(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			iVar0 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_159(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			iVar1 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_159(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_159(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_159(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_159(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, 1);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_511(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_510())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_161(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_77, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_509(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_509(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_504(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar5 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == 819197656 || ENTITY::GET_ENTITY_MODEL(iParam0) == -777172681) || ENTITY::GET_ENTITY_MODEL(iParam0) == -1232836011)
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, 0);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, -2118308144)) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_77, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_504(var uParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*uParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_508(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_507(*uParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_507(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_506(uParam0);
	if (func_505(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
	}
	return 1;
}

int func_505(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_506(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_507(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case -1797613329:
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case -2039755226:
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		uVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(uVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_508(int iParam0, int iParam1)
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

void func_509(int iParam0, var uParam1)
{
	if (VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == -1558399629 || ENTITY::GET_ENTITY_MODEL(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_510()
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_511(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_518(PLAYER::PLAYER_ID(), -1))
		{
			uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_514(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_513(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_513(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_514(int iParam0)
{
	if (func_517(iParam0) == 233)
	{
		return func_515(iParam0);
	}
	return -1;
}

int func_515(int iParam0)
{
	if (func_516(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_516(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_517(int iParam0)
{
	if (func_516(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_518(int iParam0, int iParam1)
{
	if (func_257(uParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(uParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_519(struct<3> Param0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_147(&(Global_75441.f_555[0]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_75441.f_555[0], iParam4) <= fParam3)
			{
				func_494(iVar0);
			}
		}
		iVar0++;
	}
}

int func_520(var uParam0)
{
	if (func_521(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_521(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_120(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == -2122757008 && func_499(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_522()
{
	return func_520(&(Global_105187.f_2890));
}

void func_523()
{
	func_524(&(Global_105187.f_2890));
}

void func_524(var uParam0)
{
	if (func_521(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

int func_525()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

struct<39> func_526(int iParam0)
{
	if (iParam0 == 0)
	{
		Var0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_527(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_527(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_527(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_527(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_527(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_528()
{
	bVar0 = func_49(Global_111638.f_19958.f_1, 4096);
	Global_111638.f_19958.f_1 = 0;
	if (bVar0)
	{
		func_543(&(Global_111638.f_19958.f_1), 4096);
	}
}

var func_529(struct<3> Param0, struct<3> Param3)
{
	PED::SET_PED_NON_CREATION_AREA(Param0, Param3);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param0, Param3, 1);
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0, Param3, 0, 1, 1, 1);
}

bool func_530()
{
	return func_521(&(Global_105187.f_2890));
}

int func_531()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_532(var uParam0)
{
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	func_538(0);
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	func_98(0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	uLocal_1028 = uLocal_1028;
	VEHICLE::_REMOVE_SPEED_ZONE(uLocal_1028);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-690.763f, -1607.467f, -100.9649f, -404.4197f, -1856.529f, 100.5908f, 1, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-706.106f, -1708.865f, -100f, -512.576f, -1842.173f, 100f, 100f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-480.9742f, -1801.922f, 19.28045f, -712.8968f, -1671.164f, 29.93867f, 170f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-674.8915f, -1683.639f, 9.116446f, -446.189f, -1807.7f, 31.72464f, 200f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-662.6993f, -1645.326f, 24.07147f, -672.2144f, -1777.59f, 38.81248f, 45f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-382.9608f, -1688.732f, 17.8985f, -431.2512f, -1811.23f, 37.6825f, 80f, 1);
	Var0 = { 414.1398f, -640.002f, 27.5001f };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((Var0.x - 40f), (Var0.y - 40f), (Var0.z - 40f), (Var0.x + 40f), (Var0.y + 40f), (Var0.z + 40f), 1, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(426.035f, -644.93f, -100f, 421.035f, -644.93f, 100f, 55f, 1);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED();
	AUDIO::STOP_STREAM();
	func_533(uParam0, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_533(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_535(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_534(uParam0[iVar0]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_534(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_535(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			func_536(uParam0[iVar0]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_536(var uParam0)
{
	func_537(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_537(var uParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (func_440(uParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(uParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_538(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_539()
{
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_1689))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_1689);
	}
}

void func_540()
{
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_4(0))
	{
		if (!func_541())
		{
			iVar0 = func_52();
			if (iVar0 != -1)
			{
				if (!func_354(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_89496[iVar0].f_1), 5);
				return;
			}
		}
		else
		{
			func_359();
		}
	}
}

int func_541()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_542()
{
	if (func_168(&uLocal_1038))
	{
		Global_111638.f_19958.f_8 = func_165(&uLocal_1038);
	}
}

void func_543(var uParam0, int iParam1)
{
	func_544(uParam0, iParam1);
}

void func_544(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

