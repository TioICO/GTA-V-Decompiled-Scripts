#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<15> Local_50[14];
	struct<15> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[5] = { 0, 0, 0, 0, 0 };
	int iLocal_60[5] = { 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62[5] = { 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	var uLocal_96 = 16;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	char* sLocal_267[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	struct<2> Local_277 = { 0, 5 } ;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 5;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
#endregion

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
	Local_77 = { 0f, 0f, 0f };
	Local_78 = { 0f, 0f, 0f };
	sLocal_262 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_264 = 524459;
	iLocal_265 = 40;
	iLocal_273 = 7500;
	Local_53 = { ScriptParam_277.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_63, 2.5f, 1.5f, 0f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(iLocal_63));
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
					AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_63, 0);
				}
			}
		}
		func_231();
	}
	if (!func_230())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_197(Local_53, 2, 0, 1, 0))
	{
		func_194(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_192();
	func_191();
	while (true)
	{
		func_190();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (iLocal_69)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
				{
					if (func_230())
					{
						switch (iLocal_46)
						{
							case 0:
								func_186();
								break;
							
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
								{
									if (PED::IS_PED_INJURED(iLocal_57) || PED::IS_PED_INJURED(uLocal_58))
									{
										func_231();
									}
									else
									{
										iLocal_69 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_231();
					}
				}
				else
				{
					func_231();
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
				{
					func_1();
				}
				else
				{
					func_231();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	func_185();
	func_184();
	func_183();
	func_182();
	switch (iLocal_47)
	{
		case 0:
			func_128();
			break;
		
		case 1:
			func_92();
			break;
		
		case 2:
			func_91();
			func_2();
			break;
	}
}

void func_2()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_261, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_52, 64);
	GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
	if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_57))
	{
		if (iLocal_268)
		{
			if (!func_90())
			{
				if (iLocal_261 < 14)
				{
					func_89(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0);
				}
				func_231();
			}
		}
		else if (!func_88())
		{
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63) && iLocal_52 + 1 < 13)
				{
					func_231();
				}
			}
			if (!iLocal_74)
			{
				if (SYSTEM::TIMERA() > 12000)
				{
					func_86();
				}
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_47();
			func_33();
			func_27(0);
			if (func_26(iLocal_63))
			{
				iLocal_73 = 1;
			}
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_63);
		}
		else
		{
			func_3(&uLocal_96, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, 0);
			iLocal_268 = 1;
		}
	}
	else
	{
		func_231();
	}
}

int func_3(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					func_24();
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
		if (func_23(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_22();
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
				func_14();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
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
				if (func_13())
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
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
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
			if (func_12())
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
			func_11();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_10();
		func_5();
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
		func_24();
	}
	return 0;
}

void func_5()
{
	if (!func_6())
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

int func_6()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return 0;
	}
	if (func_7(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_7(int iParam0)
{
	return func_8(iParam0, 20);
}

bool func_8(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_9()
{
	return -1;
}

void func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_11()
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

int func_12()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	int iVar0;
	int iVar1;
	
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
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

void func_14()
{
	if (func_21(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
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
		Global_19486 = func_15();
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

int func_15()
{
	func_16();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_21(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_17(Global_111638.f_2358.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_21(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_23(int iParam0, int iParam1)
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

void func_24()
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

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_26(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(bool bParam0)
{
	if (!bParam0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 225))
		{
			if (iLocal_76)
			{
				iLocal_76 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				GRAPHICS::_0xEF398BEEE4EF45F9(1);
			}
			else
			{
				iLocal_76 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				GRAPHICS::_0xEF398BEEE4EF45F9(0);
			}
		}
	}
	if (iLocal_76 && !Local_50[13 /*15*/].f_9)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		func_30();
	}
	else if (iLocal_74)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_81))
		{
			CAM::DESTROY_CAM(uLocal_81, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
			func_28(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
		}
	}
	else if (CAM::DOES_CAM_EXIST(uLocal_81))
	{
		CAM::DESTROY_CAM(uLocal_81, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
	}
}

void func_28(struct<3> Param0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
	{
		if (!CAM::DOES_CAM_EXIST(uLocal_81) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51.f_4, 12f, 12f, 12f, 0, 1, 0))
			{
				CAM::SET_GAMEPLAY_COORD_HINT(Param0, uParam1, 3000, 3000, 0);
				func_29(Param0);
				iLocal_71 = MISC::GET_GAME_TIMER();
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_57, 3f);
		}
		iLocal_74 = 1;
	}
}

void func_29(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iLocal_61 = MISC::GET_GAME_TIMER();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!PED::IS_PED_INJURED(uLocal_59[iVar0]))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 16000);
			iLocal_60[iVar0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2000);
			iLocal_62[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_30()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	Var7 = { 0.2f, 0.9f, -0.15f };
	if (CAM::DOES_CAM_EXIST(uLocal_81))
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_32();
		iVar8 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		iVar9 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		iVar10 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		iVar11 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar9 = (iVar9 * -1);
			iVar11 = (iVar11 * -1);
		}
		if ((iVar11 > 28 || iVar11 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		if ((iVar9 > 28 || iVar9 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar9);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar9 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar8 > 28 || iVar8 < -28) || PAD::_IS_USING_KEYBOARD(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar8);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar8 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		func_31(PLAYER::PLAYER_PED_ID(), &uLocal_81, fLocal_95, 0f, fLocal_94);
		CAM::SET_CAM_FOV(uLocal_81, fVar1);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_81, PLAYER::PLAYER_PED_ID(), Var7.x, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
	}
	else
	{
		uLocal_81 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_81, PLAYER::PLAYER_PED_ID(), Var7.x, (Var7.f_1 - 1f), (Var7.f_2 + 1f), 1);
		CAM::SET_CAM_NEAR_CLIP(uLocal_81, 0.01f);
		fLocal_94 = -70f;
		fLocal_95 = 3f;
		func_31(PLAYER::PLAYER_PED_ID(), &uLocal_81, fLocal_95, 0f, fLocal_94);
		CAM::SET_CAM_FOV(uLocal_81, fVar1);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 2000, 1, 0, 0);
	}
}

void func_31(int iParam0, var uParam1, struct<3> Param2)
{
	var uVar0;
	struct<3> Var1;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (CAM::DOES_CAM_EXIST(*uParam1))
		{
			uVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
			Var1.x = 0f;
			Var1.f_1 = 0f;
			Var1.f_2 = uVar0;
			Var1 = { Var1 + Param2 };
			CAM::SET_CAM_ROT(*uParam1, Var1.x, Var1.f_1, Var1.f_2, 2);
		}
	}
}

void func_32()
{
	struct<3> Var0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(uLocal_59[2]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_59[2], -880529684) == 7)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_89 + 8000)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_59[2], 0);
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_59[2], MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f), 0.5f) };
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000);
				TASK::TASK_LOOK_AT_COORD(uLocal_59[2], Var0, iVar1, 2049, 2);
				iLocal_89 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	if (!iLocal_92 && CAM::IS_SCREEN_FADED_IN())
	{
		HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 223) || iLocal_73 == 1)
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_57))
					{
						if (!Local_50[iVar0 /*15*/].f_14 && !Local_50[iVar0 /*15*/].f_9)
						{
							SYSTEM::SETTIMERA(0);
							Local_50[iLocal_52 /*15*/].f_9 = 1;
							func_36(Local_50[iVar0 /*15*/].f_10, Local_50[iVar0 /*15*/].f_13);
							func_35();
							if (iVar0 == 13)
							{
								iLocal_92 = 1;
								func_34();
							}
							Local_50[iVar0 /*15*/].f_14 = 1;
							iLocal_52 = iVar0;
						}
						iLocal_73 = 0;
					}
				}
			}
		}
	}
}

void func_34()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			TASK::CLEAR_PED_TASKS(iLocal_57);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_79);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, Local_51.f_1, 3f, 0, joaat("tourbus"), iLocal_264, 3f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_79);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_79);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_79);
		}
	}
}

void func_35()
{
	Global_19671 = 0;
	func_24();
}

void func_36(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_OUT(1000);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
		{
			func_231();
		}
		if (PED::IS_PED_INJURED(iLocal_57))
		{
			func_231();
		}
		SYSTEM::WAIT(0);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(1);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param0.x, Param0.f_1, Param0.f_2, 5f, 0, 0, 0, 0, 0, 0);
		ENTITY::SET_ENTITY_COORDS(iLocal_63, Param0.x, Param0.f_1, Param0.f_2, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_63, fParam1);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_63, 0f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, ENTITY::GET_ENTITY_COORDS(iLocal_63, 1), 0f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		func_39(Param0, 1112014848, 12, 5000, 0, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_63, 1, 1, 0);
		if (iVar0 < 13)
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_50[iVar0 /*15*/].f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_57))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_51.f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_63, 8f);
	}
	func_37();
	CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
	iLocal_48 = 3;
	func_27(1);
	AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_FADE_OUT_WORLD");
	CAM::DO_SCREEN_FADE_IN(1000);
	while (CAM::IS_SCREEN_FADING_IN())
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		func_27(1);
		SYSTEM::WAIT(0);
	}
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	func_27(1);
}

void func_37()
{
	Global_19671 = 0;
	func_38();
}

void func_38()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_39(struct<3> Param0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	uVar0 = STREAMING::FORMAT_FOCUS_HEADING(Param0, iParam1, iParam2, 127);
	if (STREAMING::_0x07C313F94746702C(uVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam3);
		while (!STREAMING::_0x7D41E9D2D17C5B2D(uVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam5)
			{
				func_41(0);
			}
			if (bParam4)
			{
				func_40();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::_0x1EE7D8DF4425F053(uVar0);
	}
}

void func_40()
{
	Global_22211.f_6 = 1;
}

void func_41(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_45(0))
		{
			func_42(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_42(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_44())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_12())
	{
		Global_19486.f_1 = 3;
	}
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
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

bool func_44()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_45(int iParam0)
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_46()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_47()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = iLocal_52 + 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!iLocal_92)
				{
					if (Local_50[12 /*15*/].f_9 || Local_50[13 /*15*/].f_14)
					{
						iLocal_92 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_50[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50[iVar0 /*15*/].f_1, 30f, 30f, 15f, 0, 1, 0))
							{
								if (Local_50[12 /*15*/].f_9)
								{
									Local_50[13 /*15*/].f_9 = 1;
									iLocal_71 = MISC::GET_GAME_TIMER();
									iLocal_48 = 2;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50[iVar0 /*15*/].f_1, 40f, 40f, 12f, 0, 1, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0))
							{
								func_28(Local_50[iVar0 /*15*/].f_4, Local_50[iVar0 /*15*/].f_7);
								iLocal_52 = iVar0;
								if (iLocal_75)
								{
									iLocal_75 = 0;
								}
								func_35();
								iLocal_48 = 1;
							}
							else
							{
								iLocal_48 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 1:
				func_28(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
				iLocal_70 = MISC::GET_GAME_TIMER();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
				{
					if (iVar1 <= 13)
					{
						func_85(ENTITY::GET_ENTITY_COORDS(iLocal_63, 1), Local_50[iVar1 /*15*/].f_1, &Local_77, &Local_78, 500);
					}
					if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(Local_77.x, Local_77.f_1, Local_78.x, Local_78.f_1))
					{
						if ((iLocal_70 - iLocal_71) > 0)
						{
							if (func_84(&uLocal_96, "BUSTOAU", Local_50[iLocal_52 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar2);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, -100.461f, -206.1412f, 44.4215f, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										TASK::CLOSE_SEQUENCE_TASK(uVar2);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uVar2);
										TASK::CLEAR_SEQUENCE_TASK(&uVar2);
									}
									else
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
									}
								}
								iLocal_71 = MISC::GET_GAME_TIMER();
								Local_50[iLocal_52 /*15*/].f_14 = 1;
								Local_50[iLocal_52 /*15*/].f_9 = 1;
								iLocal_48 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_49())
				{
					iLocal_48 = 3;
				}
				break;
			
			case 3:
				iLocal_70 = MISC::GET_GAME_TIMER();
				func_48(Local_50[iLocal_52 /*15*/].f_4);
				if ((iLocal_70 - iLocal_71) > 5000)
				{
					if (!func_90())
					{
						iLocal_74 = 0;
						iLocal_71 = MISC::GET_GAME_TIMER();
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(1);
						}
						if (Local_50[13 /*15*/].f_9 == 1)
						{
							iLocal_48 = 4;
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_57))
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_57, 15f);
							}
							iLocal_48 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_231();
				break;
			}
	}
}

void func_48(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_61) > iLocal_60[iVar0] && iLocal_62[iVar0] == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_59[iVar0], 0))
			{
				TASK::TASK_LOOK_AT_COORD(uLocal_59[iVar0], Param0, 20000, 2050, 4);
			}
			iLocal_62[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_49()
{
	float fVar0[5];
	struct<3> Var1[5];
	
	if (func_82(1000))
	{
		iLocal_86 = 3;
	}
	iLocal_269 = 1;
	switch (iLocal_86)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(uLocal_81))
			{
				CAM::DESTROY_CAM(uLocal_81, 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
			func_74(1, 1, 1, 0, 0, 0);
			MISC::SET_MINIGAME_IN_PROGRESS(1);
			HUD::DISPLAY_RADAR(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			GRAPHICS::_0xEF398BEEE4EF45F9(1);
			uLocal_82 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			uLocal_83 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			CAM::SET_CAM_ACTIVE(uLocal_82, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_83, uLocal_82, 17000, 1, 1);
			func_84(&uLocal_96, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_63, Local_51.f_1, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_63, Local_51.f_13);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 1084227584);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::CLEAR_PED_TASKS(iLocal_57);
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_57, 0f);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_79);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_63, 24, 10000);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_79);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_79);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_79);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
			PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
			iLocal_74 = 1;
			iLocal_71 = MISC::GET_GAME_TIMER();
			iLocal_86 = 1;
			break;
		
		case 1:
			iLocal_70 = MISC::GET_GAME_TIMER();
			if ((iLocal_70 - iLocal_71) > 3000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 101.4382f, 250.0447f, 107.2579f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 268.4057f);
				PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
				Var1[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				Var1[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				Var1[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				Var1[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				Var1[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_88 = 0;
				while (iLocal_88 < 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iLocal_88]))
					{
						if (!PED::IS_PED_INJURED(uLocal_59[iLocal_88]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_59[iLocal_88]);
							ENTITY::SET_ENTITY_HEADING(uLocal_59[iLocal_88], fVar0[iLocal_88]);
							ENTITY::SET_ENTITY_COORDS(uLocal_59[iLocal_88], Var1[iLocal_88 /*3*/], 1, 0, 0, 1);
							TASK::TASK_WANDER_STANDARD(uLocal_59[iLocal_88], 1193033728, 0);
						}
					}
					iLocal_88++;
				}
				iLocal_71 = MISC::GET_GAME_TIMER();
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			iLocal_70 = MISC::GET_GAME_TIMER();
			if ((iLocal_70 - iLocal_71) > 13000)
			{
				iLocal_86 = 3;
			}
			break;
		
		case 3:
			CAM::SET_CAM_ACTIVE(uLocal_82, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 0, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::DESTROY_CAM(uLocal_82, 0);
			CAM::DESTROY_CAM(uLocal_83, 0);
			MISC::SET_MINIGAME_IN_PROGRESS(0);
			HUD::DISPLAY_RADAR(1);
			func_74(0, 1, 1, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_71 = 10000;
			func_50();
			return 1;
			break;
	}
	return 0;
}

void func_50()
{
	func_54(-1, 0);
	func_51();
	func_231();
}

void func_51()
{
	func_52();
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_54(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_71(iParam0))
	{
		func_70(iParam0, iParam1);
		if (!func_69(51))
		{
			func_65("RE_REWARD", 1, 0, 4000, 10000, func_68(), 0, 138, 0);
			func_64(51);
		}
		if (func_63(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_62(iParam0, iParam1) != 322)
		{
			func_56(func_62(iParam0, iParam1), Local_44.x, Local_44.f_1);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_55(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_55(7);
			}
			else
			{
				func_55(1);
			}
		}
	}
}

void func_55(int iParam0)
{
	Global_111624 = iParam0;
}

void func_56(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_60((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_57();
	}
}

void func_57()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!MISC::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_UPDATE_STAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111361, 0);
					MISC::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_111374, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_111357, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_111375, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111358, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_111376, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111359, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111377, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111360, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111364, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_111380 + Global_111379), 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_111638.f_10189.f_3853, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_111381, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111382, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_59(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_58() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_52();
				}
			}
		}
	}
}

int func_58()
{
	return Global_30768;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
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

int func_60(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == -1)
	{
		iParam2 = func_61();
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

int func_61()
{
	return Global_1312745;
}

int func_62(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_67();
	}
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_68()
{
	func_16();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_70(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_72()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_73(Var0);
	return uVar1;
}

int func_73(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_74(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_81(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_12())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_80(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_81(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_80(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_78(PLAYER::PLAYER_ID())) && !func_76(PLAYER::PLAYER_ID(), 0)) && !func_75()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_78(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_75()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_39.f_18, 14);
}

bool func_76(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_77(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
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

int func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
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

int func_78(int iParam0)
{
	if (func_76(iParam0, 0))
	{
		return 1;
	}
	if (func_79())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_79()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_80(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
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

void func_81(int iParam0)
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

int func_82(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_83())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_83()
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

bool func_84(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

void func_85(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	if (!iLocal_75)
	{
		if (Param2 <= Param0)
		{
			*uParam4 = Param2;
			*uParam5 = Param0;
		}
		else
		{
			*uParam4 = Param0;
			*uParam5 = Param2;
		}
		if (Param2.f_1 <= Param0.f_1)
		{
			uParam4->f_1 = Param2.f_1;
			uParam5->f_1 = Param0.f_1;
		}
		else
		{
			uParam4->f_1 = Param0.f_1;
			uParam5->f_1 = Param2.f_1;
		}
		*uParam4 = { *uParam4 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		*uParam5 = { *uParam5 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		iLocal_75 = 1;
	}
}

void func_86()
{
	int iVar0[24];
	char* sVar1;
	
	sLocal_267[0] = "BUSTO_RAMB_1";
	sLocal_267[1] = "BUSTO_RAMB_2";
	sLocal_267[2] = "BUSTO_RAMB_3";
	sLocal_267[3] = "BUSTO_RAMB_4";
	sLocal_267[4] = "BUSTO_RAMB_5";
	sLocal_267[5] = "BUSTO_RAMB_6";
	sLocal_267[6] = "BUSTO_RAMB_7";
	sLocal_267[7] = "BUSTO_RAMB_8";
	sLocal_267[8] = "BUSTO_RAMB_9";
	sLocal_267[9] = "BUSTO_RAMB_10";
	sLocal_267[10] = "BUSTO_RAMB_11";
	sLocal_267[11] = "BUSTO_RAMB_12";
	sLocal_267[12] = "BUSTO_RAMB_13";
	sLocal_267[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_72)
	{
		case 0:
			iLocal_71 = MISC::GET_GAME_TIMER();
			iLocal_72 = 1;
			break;
		
		case 1:
			iLocal_70 = MISC::GET_GAME_TIMER();
			if ((iLocal_70 - iLocal_71) > 2000)
			{
				if (!func_90())
				{
					iLocal_71 = MISC::GET_GAME_TIMER();
					iLocal_72 = 2;
				}
			}
			break;
		
		case 2:
			if (func_90())
			{
				GRAPHICS::DRAW_DEBUG_TEXT_2D("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_270)
			{
				iLocal_70 = MISC::GET_GAME_TIMER();
				if ((iLocal_70 - iLocal_71) > iLocal_273)
				{
					if (func_87(uLocal_59[iLocal_271]))
					{
						if (iLocal_52 == 0)
						{
							sVar1 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_52 % 2) == 0)
						{
							sVar1 = "TOUR_CHAT";
						}
						else
						{
							sVar1 = "TOUR_LANDMARK";
						}
						GRAPHICS::DRAW_DEBUG_TEXT_2D("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						AUDIO::_PLAY_AMBIENT_SPEECH1(uLocal_59[iLocal_271], sVar1, "SPEECH_PARAMS_FORCE", 1);
						iLocal_272++;
						if (iLocal_272 == 3)
						{
							iLocal_270 = 0;
						}
						iLocal_273 = MISC::GET_RANDOM_INT_IN_RANGE(9000, 14000);
						iLocal_71 = MISC::GET_GAME_TIMER();
					}
					iLocal_271++;
					if (iLocal_271 == 5)
					{
						iLocal_271 = 0;
					}
				}
			}
			else if (iLocal_261 < 14)
			{
				iLocal_70 = MISC::GET_GAME_TIMER();
				if ((iLocal_70 - iLocal_71) > 10000)
				{
					if (!func_90())
					{
						if (func_89(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0))
						{
							iLocal_261++;
							iLocal_71 = MISC::GET_GAME_TIMER();
							iLocal_270 = 1;
							iLocal_272 = 0;
						}
						else
						{
							GRAPHICS::DRAW_DEBUG_TEXT_2D("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_270 = 1;
			}
			break;
	}
}

int func_87(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		if (AUDIO::_CAN_PED_SPEAK(uParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) && !iLocal_269)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_57))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_57, iLocal_63, 24, 5000);
							fLocal_65 = ENTITY::GET_ENTITY_SPEED(iLocal_63);
							while (fLocal_65 > 5f)
							{
								SYSTEM::WAIT(0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
								{
									fLocal_65 = ENTITY::GET_ENTITY_SPEED(iLocal_63);
								}
							}
							func_35();
							CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_263);
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
							AUDIO::STOP_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_63, 0);
							if (CAM::DOES_CAM_EXIST(uLocal_81))
							{
								CAM::DESTROY_CAM(uLocal_81, 0);
								CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
							}
							TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_89(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_4(sParam2, iParam4, 0);
}

int func_90()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	switch (iLocal_52)
	{
		case 0:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			break;
		
		case 1:
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
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
			break;
	}
}

void func_92()
{
	if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_57))
	{
		switch (iLocal_49)
		{
			case 0:
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				AUDIO::START_AUDIO_SCENE("RE_BUS_TOUR_SCENE");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_63, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				func_74(1, 1, 1, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_51.f_1, 30f, 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_57, 0);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 2);
				MISC::SET_MINIGAME_IN_PROGRESS(1);
				HUD::DISPLAY_RADAR(0);
				uLocal_82 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				uLocal_83 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				CAM::SET_CAM_ACTIVE(uLocal_82, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_83, uLocal_82, 6500, 1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_63, 8f, 8f, 5f, 0, 1, 0))
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 65f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.1136f, 241.6893f, 106.6493f, 1, 0, 0, 1);
					}
				}
				PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("BusTours");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
				{
					func_85(ENTITY::GET_ENTITY_COORDS(iLocal_63, 1), Local_50[0 /*15*/].f_1, &Local_77, &Local_78, 500);
					iLocal_275 = MISC::GET_GAME_TIMER();
					iLocal_49 = 1;
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					iLocal_76 = 1;
				}
				iLocal_276 = 0;
				break;
			
			case 1:
				if (!iLocal_93)
				{
					func_127();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_275) > 5000 && !iLocal_274)
				{
					func_84(&uLocal_96, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_126("Enter_bus"))
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_274 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_275) > 6200)
				{
					if (iLocal_76 == 1)
					{
						if (iLocal_276 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_276 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_58, iLocal_63)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_57, iLocal_63))
					{
						iLocal_49 = 2;
					}
					else if (func_82(1000))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_63, 0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_58, iLocal_63, 0);
						}
						iLocal_49 = 2;
					}
				}
				break;
			
			case 2:
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_57, iLocal_63, Local_50[0 /*15*/].f_1, Local_50[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
				CAM::SET_CAM_ACTIVE(uLocal_82, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(uLocal_82, 0);
				CAM::DESTROY_CAM(uLocal_83, 0);
				MISC::SET_MINIGAME_IN_PROGRESS(0);
				HUD::DISPLAY_RADAR(1);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				func_74(0, 1, 1, 0, 0, 0);
				iLocal_84 = func_15();
				func_93(iLocal_84, 1, iLocal_265);
				iLocal_263 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
				if (!iLocal_76)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(3);
				}
				else
				{
					func_27(1);
				}
				HUD::REMOVE_BLIP(&uLocal_67);
				iLocal_47 = 2;
				break;
		}
	}
	else
	{
		func_231();
	}
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (func_125(iParam0) == 3)
	{
		return 0;
	}
	if (func_125(iParam0) == 4)
	{
		return 0;
	}
	return func_94(func_125(iParam0), 0, iParam1, iParam2, 0);
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_124();
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
					func_123(99, 1);
					func_122(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_122(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_122(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_108(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_103(5))
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
							func_122(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_122(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_122(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_103(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_122(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_122(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_122(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_122(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_122(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_122(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_122(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_122(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_122(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_122(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_122(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_122(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_122(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_122(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_122(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_103(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_122(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_122(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_122(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_122(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_122(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_122(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_102(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_123(95, iParam3);
					break;
				
				case 1:
					func_123(97, iParam3);
					break;
				
				case 2:
					func_123(96, iParam3);
					break;
			}
			func_123(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_97(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_97(iVar1);
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
					func_122(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_122(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_122(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_2[Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2 /*69*/]++;
		Global_111638.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_96(iParam0);
	if (Global_41431 == 15)
	{
		func_95(0);
	}
	return 1;
}

void func_95(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_97(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_60(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_60(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_60(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_60(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_100(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_100(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_100(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_100(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_100(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_100(8274, 0, -1, 1, 0);
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
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_99() /*10930*/].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_99() /*10930*/].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_98(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_98(int iParam0)
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

int func_99()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_61();
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

void func_102(int iParam0)
{
	func_123(93, iParam0);
	func_123(29, iParam0);
	func_123(30, iParam0);
}

bool func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_105(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_105(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_105(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_105(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_104(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_104(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_104(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_104(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_104(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_104(8274, -1, 0);
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
	return MISC::IS_BIT_SET(Global_2097152[func_99() /*10930*/].f_6174.f_10, iParam0);
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_101(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_61();
	}
	iVar1 = func_107(iParam0, iParam1);
	uVar2 = func_106(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;
	
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

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_61();
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

int func_108(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_109(27, 1);
	return 1;
}

int func_109(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_110(iParam0, iParam1);
}

int func_110(int iParam0, int iParam1)
{
	if (func_21(14) && !func_121(iParam0))
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
	if (func_120(&Global_4270065))
	{
		if (func_118(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_111(&Global_4270065, iParam0))
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

int func_111(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_21(14) && !func_121(iParam1))
	{
		return 0;
	}
	if (func_118(uParam0, iParam1))
	{
		return 0;
	}
	if (func_117(uParam0) < 0f)
	{
		func_116(uParam0, 0);
	}
	func_114(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_112(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_112(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_21(14) && !func_121(iParam1))
	{
		return 0;
	}
	if (func_118(uParam0, iParam1))
	{
		return 0;
	}
	if (func_117(uParam0) < 0f)
	{
		func_116(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_113(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_113(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_114(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_115(uParam0, iVar0);
		iVar0++;
	}
	func_116(uParam0, (Global_4270064 - 0.5f));
}

void func_115(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_116(var uParam0, float fParam1)
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

float func_117(var uParam0)
{
	return uParam0->f_80;
}

bool func_118(var uParam0, int iParam1)
{
	return func_119(uParam0, iParam1) != -1;
}

int func_119(var uParam0, int iParam1)
{
	int iVar0;
	
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

bool func_120(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_121(int iParam0)
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

void func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_124()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_125(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

bool func_126(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_127()
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		TASK::CLEAR_PED_TASKS(iLocal_58);
		TASK::TASK_ENTER_VEHICLE(iLocal_58, iLocal_63, 10000, 0, 2f, 262144, 0);
		PED::SET_PED_KEEP_TASK(iLocal_58, 1);
		iLocal_93 = 1;
	}
}

void func_128()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_168())
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, 0);
			func_231();
		}
		else if (func_159(4))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 5f, 5f, 5f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !func_126("TX_H02"))
			{
				if (func_157())
				{
					if (!iLocal_266)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 1);
						iLocal_266 = 1;
					}
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("Enter_bus", 0);
					if (PAD::IS_CONTROL_PRESSED(2, 23))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, -1, 2, 1f, 8, 0);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_67))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_68))
						{
							HUD::REMOVE_BLIP(&uLocal_68);
						}
						uLocal_67 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_63);
						HUD::SET_BLIP_AS_FRIENDLY(uLocal_67, 1);
						HUD::SET_BLIP_SCALE(uLocal_67, Global_30814);
						if (!PED::IS_PED_INJURED(iLocal_58))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!func_156())
						{
							if (func_144())
							{
								func_231();
							}
							else
							{
								func_134(1);
							}
						}
					}
					if (func_133())
					{
						iLocal_269 = 0;
						func_132(1);
					}
				}
				else
				{
					HUD::DISPLAY_HELP_TEXT_THIS_FRAME("No_bus_money", 0);
					if (iLocal_266)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 2);
						iLocal_266 = 0;
					}
				}
			}
		}
		if (iLocal_88 < 5)
		{
			if (func_129(&(uLocal_59[iLocal_88])))
			{
				iLocal_88++;
			}
		}
	}
}

int func_129(var uParam0)
{
	char* sVar0;
	
	*uParam0 = 0;
	if (PED::GET_CLOSEST_PED(Local_53, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (func_131(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
					TASK::CLEAR_PED_TASKS(*uParam0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
					PED::SET_PED_NAME_DEBUG(*uParam0, "randompassenger");
					PED::SET_PED_CONFIG_FLAG(*uParam0, 134, 1);
					switch (iLocal_88)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_63, 3);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_63, 7);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_63, 6);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_63, 8);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
						
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, iLocal_63, 1);
								PED::SET_PED_KEEP_TASK(*uParam0, 1);
							}
							break;
					}
					sVar0 = func_130(PED::IS_PED_MALE(*uParam0));
					AUDIO::SET_AMBIENT_VOICE_NAME(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_130(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
		if (iVar0 == 0)
		{
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1)
		{
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2)
		{
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3)
		{
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4)
		{
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5)
		{
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6)
		{
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7)
		{
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8)
		{
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9)
		{
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10)
		{
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11)
		{
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12)
		{
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13)
		{
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14)
		{
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else
		{
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 33);
	if (iVar0 == 0)
	{
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1)
	{
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2)
	{
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3)
	{
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4)
	{
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5)
	{
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6)
	{
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7)
	{
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8)
	{
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9)
	{
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10)
	{
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11)
	{
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12)
	{
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13)
	{
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14)
	{
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15)
	{
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18)
	{
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21)
	{
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22)
	{
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23)
	{
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24)
	{
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25)
	{
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26)
	{
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27)
	{
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28)
	{
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29)
	{
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30)
	{
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31)
	{
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (((((ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("a_m_m_tramp_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_m_tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_m_o_tramp_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_cop_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_m_y_fireman_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_132(int iParam0)
{
	iLocal_49 = 0;
	iLocal_47 = iParam0;
}

int func_133()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, 0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == iLocal_63)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_134(int iParam0)
{
	if (func_138())
	{
		Global_111628 = 1;
		Global_111625 = MISC::GET_GAME_TIMER();
		if (func_63(Global_111627))
		{
			func_135(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_63(Global_111627))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_136(func_137(iParam0), -1);
					Global_111638.f_24990.f_2++;
					MISC::SET_BIT(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_111634, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_136(func_137(iParam0), -1);
					Global_111638.f_24990.f_3++;
					MISC::SET_BIT(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_111634, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_136(func_137(iParam0), -1);
					Global_111638.f_24990.f_4++;
					MISC::SET_BIT(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_136(var uParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_137(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_138()
{
	switch (func_139(&Global_30827, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_139(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_143(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_141(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392 /*4*/] = Global_41395;
		Global_41398[Global_41392 /*4*/].f_1 = iParam1;
		Global_41398[Global_41392 /*4*/].f_2 = iParam2;
		Global_41398[Global_41392 /*4*/].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_140(uParam0, iParam4);
		}
	}
	return 2;
}

void func_140(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0 /*4*/] == *uParam0)
		{
			Global_41398[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_141(int iParam0)
{
	return func_142(iParam0, Global_41431);
}

int func_142(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_141(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_144()
{
	if (!func_141(5))
	{
		return 1;
	}
	if (func_152())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_151())
		{
			return 0;
		}
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_145(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_17(func_15()))
		{
			iVar5 = func_68();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_111638.f_18569[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_111638.f_18569[iVar1 /*6*/], 3))
				{
					func_146(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_146(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_147(uParam1, "Abigail1", func_149(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 1:
			func_147(uParam1, "Abigail2", func_149(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 2:
			func_147(uParam1, "Barry1", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 3:
			func_147(uParam1, "Barry2", func_149(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 4:
			func_147(uParam1, "Barry3", func_149(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 5:
			func_147(uParam1, "Barry3A", func_149(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 6:
			func_147(uParam1, "Barry3C", func_149(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 7:
			func_147(uParam1, "Barry4", func_149(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_148(iParam0), 0, 0);
			break;
		
		case 8:
			func_147(uParam1, "Dreyfuss1", func_149(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 9:
			func_147(uParam1, "Epsilon1", func_149(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 10:
			func_147(uParam1, "Epsilon2", func_149(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 11:
			func_147(uParam1, "Epsilon3", func_149(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 12:
			func_147(uParam1, "Epsilon4", func_149(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 13:
			func_147(uParam1, "Epsilon5", func_149(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 14:
			func_147(uParam1, "Epsilon6", func_149(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 15:
			func_147(uParam1, "Epsilon7", func_149(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 16:
			func_147(uParam1, "Epsilon8", func_149(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 17:
			func_147(uParam1, "Extreme1", func_149(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 18:
			func_147(uParam1, "Extreme2", func_149(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 19:
			func_147(uParam1, "Extreme3", func_149(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 20:
			func_147(uParam1, "Extreme4", func_149(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 21:
			func_147(uParam1, "Fanatic1", func_149(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 22:
			func_147(uParam1, "Fanatic2", func_149(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_148(iParam0), 1, 0);
			break;
		
		case 23:
			func_147(uParam1, "Fanatic3", func_149(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_148(iParam0), 0, 1);
			break;
		
		case 24:
			func_147(uParam1, "Hao1", func_149(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_148(iParam0), 0, 1);
			break;
		
		case 25:
			func_147(uParam1, "Hunting1", func_149(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 26:
			func_147(uParam1, "Hunting2", func_149(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 27:
			func_147(uParam1, "Josh1", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 28:
			func_147(uParam1, "Josh2", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 29:
			func_147(uParam1, "Josh3", func_149(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 30:
			func_147(uParam1, "Josh4", func_149(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 31:
			func_147(uParam1, "Maude1", func_149(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 32:
			func_147(uParam1, "Minute1", func_149(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 33:
			func_147(uParam1, "Minute2", func_149(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 34:
			func_147(uParam1, "Minute3", func_149(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 35:
			func_147(uParam1, "MrsPhilips1", func_149(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 36:
			func_147(uParam1, "MrsPhilips2", func_149(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 37:
			func_147(uParam1, "Nigel1", func_149(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 38:
			func_147(uParam1, "Nigel1A", func_149(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 39:
			func_147(uParam1, "Nigel1B", func_149(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 40:
			func_147(uParam1, "Nigel1C", func_149(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 41:
			func_147(uParam1, "Nigel1D", func_149(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_148(iParam0), 1, 1);
			break;
		
		case 42:
			func_147(uParam1, "Nigel2", func_149(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 43:
			func_147(uParam1, "Nigel3", func_149(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 1);
			break;
		
		case 44:
			func_147(uParam1, "Omega1", func_149(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 45:
			func_147(uParam1, "Omega2", func_149(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 46:
			func_147(uParam1, "Paparazzo1", func_149(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 47:
			func_147(uParam1, "Paparazzo2", func_149(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 48:
			func_147(uParam1, "Paparazzo3", func_149(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 49:
			func_147(uParam1, "Paparazzo3A", func_149(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 50:
			func_147(uParam1, "Paparazzo3B", func_149(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 51:
			func_147(uParam1, "Paparazzo4", func_149(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 52:
			func_147(uParam1, "Rampage1", func_149(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 54:
			func_147(uParam1, "Rampage3", func_149(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 55:
			func_147(uParam1, "Rampage4", func_149(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 56:
			func_147(uParam1, "Rampage5", func_149(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_148(iParam0), 0, 0);
			break;
		
		case 53:
			func_147(uParam1, "Rampage2", func_149(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_148(iParam0), 1, 0);
			break;
		
		case 57:
			func_147(uParam1, "TheLastOne", func_149(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 58:
			func_147(uParam1, "Tonya1", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 59:
			func_147(uParam1, "Tonya2", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 60:
			func_147(uParam1, "Tonya3", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 61:
			func_147(uParam1, "Tonya4", func_149(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		case 62:
			func_147(uParam1, "Tonya5", func_149(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_148(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_147(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_148(int iParam0)
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

struct<2> func_149(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_150(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_150(int iParam0)
{
	struct<2> Var0;
	
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

int func_151()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	if (func_155() && !func_151())
	{
		return 1;
	}
	if (func_154() && func_153())
	{
		return 1;
	}
	return 0;
}

bool func_153()
{
	return Global_111356 > 0;
}

int func_154()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 20);
	}
	return 0;
}

int func_156()
{
	if ((Global_111627 == func_72() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (func_158(func_15()) >= iLocal_265)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_15();
				if (!func_17(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_167()) || Global_110685) || Global_30770) || func_166()) || func_23(8, -1)) || func_165()) || func_164()) || func_163()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_167()) || Global_30770) || func_166()) || func_23(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_167()) || Global_110685) || Global_30770) || func_166()) || func_23(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_167()) || Global_110685) || Global_30770) || func_166()) || func_23(8, -1)) || func_165()) || func_164()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_167() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_23(8, -1)) || func_162()) || func_161()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_23(8, -1) || func_165()) || func_164()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_167()) || Global_30770) || func_166()) || func_23(8, -1)) || func_164()) || func_163()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_167()) || func_164()) || Global_110685) || Global_30770) || func_166()) || Global_42596) || func_23(8, -1)) || func_163()) || func_161()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_167()) || Global_110685) || Global_30770) || func_166()) || func_23(8, -1)) || func_163()) || func_161()) || func_165()) || func_164()) || func_162())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_160()
{
	return Global_98783.f_1;
}

int func_161()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666 /*34*/].f_15, 13);
	}
	return 0;
}

int func_162()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_164()
{
	return Global_98796.f_346 > 0;
}

bool func_165()
{
	return Global_98796.f_345 > 0;
}

var func_166()
{
	return Global_1312877;
}

int func_167()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_168()
{
	if (func_181(iLocal_58))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			if (func_173(iLocal_58))
			{
				func_171(iLocal_58, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_170();
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (((func_173(iLocal_57) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_57)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_57))
		{
			func_169(iLocal_58);
			return 1;
		}
	}
	else
	{
		func_169(iLocal_58);
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), 1))
	{
		if (func_181(iLocal_58))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				func_169(iLocal_58);
				func_171(iLocal_58, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_231();
	}
	if (CLOCK::GET_CLOCK_HOURS() >= 19 || CLOCK::GET_CLOCK_HOURS() <= 6)
	{
		if (!func_90())
		{
			if (func_84(&uLocal_96, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0)
{
	if (func_181(iLocal_58))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0, 0);
			TASK::CLEAR_PED_TASKS(uParam0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iParam0, 1);
			func_37();
		}
	}
}

void func_170()
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_70 = MISC::GET_GAME_TIMER();
		if ((iLocal_70 - iLocal_71) > 10000)
		{
			if (!func_90())
			{
				func_84(&uLocal_96, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_71 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_171(var uParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, sParam1, func_172(iParam2), 1);
}

int func_172(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_173(var uParam0)
{
	if (func_174(uParam0, &uLocal_90, &uLocal_87, uLocal_85, bLocal_91, 1077936128, 0) || PED::IS_PED_RAGDOLL(uParam0))
	{
		func_169(uParam0);
		return 1;
	}
	return 0;
}

int func_174(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
			fVar5 = SYSTEM::VDIST(Var3, Var4);
			if (!MISC::IS_BIT_SET(uParam3, 3))
			{
				if (func_180(iParam0, iParam6))
				{
					func_179("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_179("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_178(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var4, fParam5, 1))
				{
					func_179("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_179("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_178(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_179("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_179("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_178(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_179("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_179("	aggro Ped knows player is pointing gun\n");
								func_175("		lockOnTimer = ", *uParam2);
								func_179("\n");
								func_175("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_43));
								func_179("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_43 + *uParam2))
								{
									func_179("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_178(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_179("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_179("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_178(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_175(char* sParam0, int iParam1)
{
	func_177(sParam0);
	func_176(iParam1);
}

void func_176(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_177(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

void func_178(var uParam0)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0);
}

void func_179(char* sParam0)
{
	func_177(sParam0);
}

int func_180(int iParam0, int iParam1)
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_182()
{
	MISC::_0x1EAE0A6E978894A2(0, 1);
	MISC::_0x1EAE0A6E978894A2(1, 1);
	MISC::_0x1EAE0A6E978894A2(2, 1);
	MISC::_0x1EAE0A6E978894A2(3, 1);
	MISC::_0x1EAE0A6E978894A2(4, 1);
	MISC::_0x1EAE0A6E978894A2(5, 1);
	MISC::_0x1EAE0A6E978894A2(6, 1);
	MISC::_0x1EAE0A6E978894A2(7, 1);
	MISC::_0x1EAE0A6E978894A2(8, 1);
}

void func_183()
{
	PLAYER::_0x36F1B38855F2A8DF(PLAYER::PLAYER_ID());
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 5);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 3);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 15);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 2);
	PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 4);
}

void func_184()
{
	if (iLocal_75)
	{
		PATHFIND::_0x07FB139B592FA687(Local_77.x, Local_77.f_1, Local_78.x, Local_78.f_1);
	}
}

void func_185()
{
	if (MISC::IS_NEXT_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("THUNDER"))
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10000f);
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	
	if (func_189())
	{
		func_231();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		STREAMING::REQUEST_MODEL(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		STREAMING::REQUEST_ANIM_DICT(sLocal_262);
		STREAMING::REQUEST_MODEL(joaat("tourbus"));
		HUD::REQUEST_ADDITIONAL_TEXT("BUSTOUR", 2);
		if ((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_262)) && STREAMING::HAS_MODEL_LOADED(joaat("tourbus"))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
		{
			AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
			PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Local_53, &uLocal_54, &uLocal_64, 1, 1077936128, 0);
			iLocal_63 = VEHICLE::CREATE_VEHICLE(joaat("tourbus"), Local_51.f_1, Local_51.f_13, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 1084227584);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_63, 0);
			AUDIO::SET_VEH_RADIO_STATION(iLocal_63, "OFF");
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_63, 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_63, 2, 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tourbus"), 1);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_63, 100f);
			iLocal_57 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_63, 26, iVar1, -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_57, 251, 1);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_57, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 4, 0, 2, 0);
				}
			}
			iLocal_58 = PED::CREATE_PED(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_58, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 4, 1, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_80);
			TASK::TASK_PLAY_ANIM(0, sLocal_262, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_262, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, sLocal_262, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_80, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_80);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_58, uLocal_80);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_80);
			func_188(&uLocal_96, 3, iLocal_58, "TOURGUIDE", 0, 1);
			if (!HUD::DOES_BLIP_EXIST(uLocal_68))
			{
				uLocal_68 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_63);
				HUD::SET_BLIP_SPRITE(uLocal_68, 85);
			}
			func_187();
			iLocal_46 = 1;
		}
	}
}

void func_187()
{
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_57, 17, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 17, 1);
	PED::ADD_RELATIONSHIP_GROUP("re_bus_tours1", &uLocal_66);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_57, uLocal_66);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_58, uLocal_66);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_66, 1862763509);
}

void func_188(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
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
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
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

int func_189()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_151())
		{
			return 0;
		}
	}
	if (func_152())
	{
		return 1;
	}
	if (func_145(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_190()
{
}

void func_191()
{
}

void func_192()
{
	struct<15> Var0;
	struct<15> Var1;
	struct<15> Var2;
	struct<15> Var3;
	struct<15> Var4;
	struct<15> Var5;
	struct<15> Var6;
	struct<15> Var7;
	struct<15> Var8;
	struct<15> Var9;
	struct<15> Var10;
	struct<15> Var11;
	struct<15> Var12;
	
	Var0.f_1 = { -24.85f, 263.6119f, 106.5301f };
	Var0.f_4 = { -62.9588f, 335.2273f, 136.055f };
	Var0.f_7 = 10000;
	Var0.f_8 = (8f - 1f);
	Var0.f_10 = { -0.9281f, 266.8539f, 108.0699f };
	Var0.f_13 = 82f;
	Var0 = "BUSTO_P1";
	Var1.f_1 = { -214.9f, 267.4f, 91.5f };
	Var1.f_4 = { -253.7246f, 247.9038f, 95.2063f };
	Var1.f_7 = 9000;
	Var1.f_8 = (8f - 1f);
	Var1.f_10 = { -188.67f, 265.43f, 92.15f };
	Var1.f_13 = 81.79f;
	Var1 = "BUSTO_P5";
	Var2.f_1 = { -522.1094f, 260.8653f, 82.063f };
	Var2.f_4 = { -549.5739f, 272.7824f, 82.9753f };
	Var2.f_7 = 9000;
	Var2.f_8 = 8f;
	Var2.f_10 = { -435.0476f, 249.8727f, 82.0866f };
	Var2.f_13 = 85f;
	Var2 = "BUSTO_P6";
	Var3.f_1 = { -575.5643f, 512.5427f, 105.0293f };
	Var3.f_4 = { -586.4406f, 529.1188f, 108.8539f };
	Var3.f_7 = 9000;
	Var3.f_8 = (8f + 2f);
	Var3.f_10 = { -552.3732f, 481.7021f, 102.1826f };
	Var3.f_13 = 25f;
	Var3 = "BUSTO_P7";
	Var4.f_1 = { -732.2224f, 474.0897f, 105.0424f };
	Var4.f_4 = { -728.4921f, 448.0321f, 107.9036f };
	Var4.f_7 = 9000;
	Var4.f_8 = (8f + 3f);
	Var4.f_10 = { -688.5469f, 490.5489f, 108.784f };
	Var4.f_13 = 105f;
	Var4 = "BUSTO_P8";
	Var5.f_1 = { -1037.97f, 468.9468f, 76.7167f };
	Var5.f_4 = { -1065.762f, 469.4401f, 80.3204f };
	Var5.f_7 = 9000;
	Var5.f_8 = (8f + 2f);
	Var5.f_10 = { -973.6752f, 499.3758f, 78.8246f };
	Var5.f_13 = 47f;
	Var5 = "BUSTO_P9";
	Var6.f_1 = { -1231.581f, 239.014f, 64.8339f };
	Var6.f_4 = { -1309.778f, 261.4181f, 65.87f };
	Var6.f_7 = 9000;
	Var6.f_8 = (8f + 4f);
	Var6.f_10 = { -1168.448f, 257.0845f, 66.3477f };
	Var6.f_13 = 105f;
	Var6 = "BUSTO_P10";
	Var7.f_1 = { -1406.729f, -160.0764f, 46.5244f };
	Var7.f_4 = { -1421.479f, -193.5715f, 50f };
	Var7.f_7 = 9000;
	Var7.f_8 = (8f + 4f);
	Var7.f_10 = { -1398.391f, -114.7998f, 50.028f };
	Var7.f_13 = 178f;
	Var7 = "BUSTO_P11";
	Var8.f_1 = { -1316.205f, -487.0228f, 32.3407f };
	Var8.f_4 = { -1271.75f, -500.2502f, 44.4638f };
	Var8.f_7 = 9000;
	Var8.f_8 = (15f + 4f);
	Var8.f_10 = { -1356.912f, -437.5389f, 34.0665f };
	Var8.f_13 = 215f;
	Var8 = "BUSTO_P3";
	Var9.f_1 = { -723.1427f, -239.0515f, 36.0196f };
	Var9.f_4 = { -696.7581f, -239.2147f, 40.8147f };
	Var9.f_7 = 9000;
	Var9.f_8 = (15f + 6f);
	Var9.f_10 = { -777.5432f, -262.5703f, 36.0082f };
	Var9.f_13 = 290f;
	Var9 = "BUSTO_P2";
	Var10.f_1 = { -690.7699f, -25.762f, 36.9897f };
	Var10.f_4 = { -695f, 22f, 53f };
	Var10.f_7 = 9000;
	Var10.f_8 = (15f + 5f);
	Var10.f_10 = { -696.695f, -40.7958f, 36.8186f };
	Var10.f_13 = 27.9347f;
	Var10 = "BUSTO_P14";
	Var11.f_1 = { 179.6443f, -340.3767f, 43.0448f };
	Var11.f_4 = { 235.139f, -393.0182f, 50.0242f };
	Var11.f_7 = 6000;
	Var11.f_8 = (15f + 5f);
	Var11.f_10 = { 113.5266f, -317.9667f, 44.6514f };
	Var11.f_13 = 250f;
	Var11 = "BUSTO_P13";
	Var12.f_1 = { 288.2845f, 166.6872f, 103.309f };
	Var12.f_4 = { 299.9585f, 198.3281f, 113.3522f };
	Var12.f_7 = 6000;
	Var12.f_8 = (15f + 3f);
	Var12.f_10 = { 344.1458f, 148.4554f, 102.159f };
	Var12.f_13 = 70f;
	Var12 = "BUSTO_P4";
	Local_51.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_51.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_51.f_7 = -1;
	Local_51.f_8 = 8f;
	Local_51.f_10 = { 177.5471f, 209.657f, 105.0543f };
	Local_51.f_13 = 70f;
	Local_51 = "BUSTO_Px";
	func_193(Var0);
	func_193(Var1);
	func_193(Var2);
	func_193(Var3);
	func_193(Var4);
	func_193(Var5);
	func_193(Var6);
	func_193(Var7);
	func_193(Var8);
	func_193(Var9);
	func_193(Var10);
	func_193(Var11);
	func_193(Var12);
	func_193(Local_51);
	iLocal_52 = 0;
}

void func_193(char[60] cParam0)
{
	Local_50[iLocal_52 /*15*/] = { cParam0 };
	iLocal_52++;
}

void func_194(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_196(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_111624 = 0;
	func_195();
}

void func_195()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_196(int iParam0)
{
	Global_111627 = iParam0;
}

int func_197(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_72();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_229())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_151())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_53(0))
		{
			return 0;
		}
		if (func_152())
		{
			return 0;
		}
		if (func_228())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_145(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_227(iParam1))
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_226(func_15()) == 4 || func_226(func_15()) == 5)
			{
				return 0;
			}
		}
		if (func_17(func_15()))
		{
			if (!func_225(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_224(Global_111638.f_24990.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_111629) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_223())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_159(4))
		{
			return 0;
		}
		if (!func_141(5))
		{
			return 0;
		}
		if (func_222(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_222(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_227(30) && !func_222(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_17(func_15()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111638.f_2358.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111638.f_2358.f_539.f_2296[iVar2];
				if (func_221(iVar4))
				{
					if (func_199(iVar2))
					{
						if (!func_198(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f))
							{
								if (func_15() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_198(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_200(iVar0);
}

int func_200(int iParam0)
{
	return func_201(iParam0, 1);
}

int func_201(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_221(iParam0))
	{
		return 0;
	}
	func_202(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_202(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_203(func_214(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_203(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_213(iParam0, iParam1))
	{
		iVar0 = func_212(iParam1);
		iVar1 = func_210(iParam0);
		iVar2 = (func_210(iParam0) - func_210(iParam1));
		iVar3 = (func_212(iParam0) - func_212(iParam1));
		iVar4 = (func_209(iParam0) - func_209(iParam1));
		iVar5 = (func_208(iParam0) - func_208(iParam1));
		iVar6 = (func_207(iParam0) - func_207(iParam1));
		iVar7 = (func_206(iParam0) - func_206(iParam1));
	}
	else
	{
		iVar0 = func_212(iParam0);
		iVar1 = func_210(iParam1);
		iVar2 = (func_210(iParam1) - func_210(iParam0));
		iVar3 = (func_212(iParam1) - func_212(iParam0));
		iVar4 = (func_209(iParam1) - func_209(iParam0));
		iVar5 = (func_208(iParam1) - func_208(iParam0));
		iVar6 = (func_207(iParam1) - func_207(iParam0));
		iVar7 = (func_206(iParam1) - func_206(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_205(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_204(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_204(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_205(int iParam0, int iParam1)
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

int func_206(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_207(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_208(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_209(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_210(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_211(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_211(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_212(int iParam0)
{
	return iParam0 & 15;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_221(iParam1) || !func_221(iParam0))
	{
		return 1;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_207(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	var uVar0;
	
	func_220(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_219(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_218(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_217(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_216(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_215(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_215(var uParam0, int iParam1)
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

void func_216(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_217(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_212(*uParam0);
	iVar1 = func_210(*uParam0);
	if (iParam1 < 1 || iParam1 > func_205(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_218(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_219(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_220(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_206(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_207(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_208(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_210(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_212(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_209(iParam0);
	if (iVar5 < 1 || iVar5 > func_205(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_222(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	func_14();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_224(int iParam0)
{
	return func_213(func_214(), iParam0);
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_15();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_226(int iParam0)
{
	if (!func_17(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_227(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_229())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_228()
{
	var uVar0;
	
	if (Global_30918)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_229()
{
	var uVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				MISC::SET_BIT(&uVar0, 2);
				MISC::SET_BIT(&uVar0, 4);
				MISC::SET_BIT(&uVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
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

int func_230()
{
	if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 0;
	}
	return 1;
}

void func_231()
{
	int iVar0;
	
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_82))
	{
		CAM::SET_CAM_ACTIVE(uLocal_82, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_82, 0);
		MISC::SET_MINIGAME_IN_PROGRESS(0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_83))
	{
		CAM::DESTROY_CAM(uLocal_83, 0);
	}
	if (iLocal_47 >= 2)
	{
		CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_263);
	}
	HUD::DISPLAY_RADAR(1);
	if (iLocal_47 >= 1)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_57, 251, 0);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_57, 1);
			PED::SET_PED_KEEP_TASK(iLocal_57, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_57);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, 1);
			PED::SET_PED_KEEP_TASK(iLocal_58, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, 0);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_58);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_59[iVar0]))
		{
			if (func_181(uLocal_59[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_59[iVar0], 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_59[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_63);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	if (func_156())
	{
		func_243();
	}
	else
	{
		func_242(&Global_30827);
	}
	GRAPHICS::_0xEF398BEEE4EF45F9(1);
	func_232(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_232(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_72();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156())
	{
		func_235(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_111629 = MISC::GET_GAME_TIMER();
		func_234(30000);
		StringCopy(&cVar0, func_233(Global_111627, 1), 64);
		if (func_71(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111624, (MISC::GET_GAME_TIMER() - Global_111625), 0);
	}
	else if (MISC::IS_BIT_SET(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_111634, 0);
	}
	func_242(&Global_30827);
	Global_111628 = 0;
	func_196(-1);
}

char* func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_234(int iParam0)
{
	Global_41982 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_235(int iParam0)
{
	func_236(iParam0, 0, func_241(iParam0));
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_214();
	func_239(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_238(iParam0, &uVar0);
	Var1 = { func_237(&uVar0) };
}

struct<16> func_237(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_208(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_207(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_206(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_209(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_212(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_210(*uParam0), 64);
	return Var0;
}

void func_238(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_210(*uParam0);
	iVar1 = func_212(*uParam0);
	iVar2 = func_209(*uParam0);
	iVar3 = func_208(*uParam0);
	iVar4 = func_207(*uParam0);
	iVar5 = func_206(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_205(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_205(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_240(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_220(uParam0, iParam1);
	func_219(uParam0, iParam2);
	func_218(uParam0, iParam3);
	func_216(uParam0, iParam5);
	func_217(uParam0, iParam4);
	func_215(uParam0, iParam6);
}

int func_241(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_242(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_243()
{
	func_234(30000);
	func_242(&Global_30827);
	Global_30815 = MISC::GET_GAME_TIMER();
}

