void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_47 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_48 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_63 = { 1492.31f, 2136.53f, 89.15f };
	Local_66 = { 1408.24f, 2522.803f, 41.0419f };
	Local_114 = { 370.2576f, -1597.488f, 35.94954f };
	Local_117 = { 824.992f, -1289.267f, 27.24564f };
	Local_120 = { 450.1889f, -981.6754f, 42.69174f };
	Local_123 = { -1088.37f, -842.2911f, 30.27554f };
	Local_126 = { 608.9076f, 0.806411f, 100.2497f };
	Local_129 = { -562.0159f, -130.8113f, 37.4369f };
	Local_132 = { 1855.237f, 3683.236f, 33.29165f };
	Local_135 = { -443.5063f, 6016.231f, 30.71787f };
	Local_138 = { 1693.518f, 2579.21f, 44.95713f };
	Local_59 = { ScriptParam_0.f_1[0] };
	func_191();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_72))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_72);
			}
		}
		func_176();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (func_134(Local_59, 22, iLocal_69, 0, 0))
	{
		func_131(22);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_96)
		{
			if (!func_130())
			{
				if (func_129())
				{
					func_176();
				}
			}
			RECORDING::_0x208784099002BC30("RE_PL", 0);
			switch (iLocal_53)
			{
				case 0:
					if (func_117())
					{
						func_176();
					}
					if (!iLocal_58)
					{
						func_116();
					}
					else
					{
						func_115();
					}
					if (bLocal_57)
					{
						iLocal_141 = 1;
						iLocal_53 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_54)
						{
							case 0:
								switch (iLocal_55)
								{
									case 0:
										func_108();
										break;
									
									case 1:
										if (iLocal_56 == 0)
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 100f, 100f, 100f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_72)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_107();
													if (!func_130())
													{
														func_97(1);
														func_96(1);
													}
												}
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													if (HUD::DOES_BLIP_EXIST(uLocal_105))
													{
														HUD::SHOW_HEIGHT_ON_BLIP(uLocal_105, 1);
													}
													func_95();
													if (!func_94())
													{
														if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_72, "random@prisoner_lift", "arms_waving", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															TASK::CLEAR_PED_TASKS(iLocal_72);
														}
														func_93(&uLocal_107);
													}
												}
											}
											else
											{
												func_92();
											}
											func_91();
											func_90();
										}
										else if (iLocal_56 == 1)
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 105f, 105f, 105f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_72)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
												{
													func_107();
													if (!func_130())
													{
														func_97(1);
														func_96(1);
													}
												}
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_72, 0))
												{
													if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
													{
														if (HUD::DOES_BLIP_EXIST(uLocal_105))
														{
															HUD::SHOW_HEIGHT_ON_BLIP(uLocal_105, 1);
														}
														func_95();
													}
												}
												if (bLocal_99)
												{
													if (SYSTEM::TIMERA() > 2000 && SYSTEM::TIMERA() < 2100)
													{
														TASK::CLEAR_PED_SECONDARY_TASK(iLocal_72);
													}
													if (SYSTEM::TIMERA() > 3000)
													{
														if (!iLocal_102)
														{
															if (!func_89())
															{
																func_73(&uLocal_148, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_102 = 1;
															}
														}
													}
												}
												if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
													{
														if (!func_72(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
														{
															if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_72, 40f, 40f, 20f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_72, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 17))
															{
																TASK::CLEAR_PED_TASKS(iLocal_72);
																if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
																{
																	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
																}
																TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_72, PLAYER::GET_PLAYERS_LAST_VEHICLE(), PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
																PED::SET_PED_KEEP_TASK(iLocal_72, 1);
																iLocal_55 = 13;
															}
															else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 17))
															{
																func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_92();
															}
														}
														else
														{
															func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_92();
														}
													}
													else
													{
														func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_92();
													}
												}
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
													{
														if (((PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), 782665360)) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
														{
															func_73(&uLocal_148, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_92();
														}
													}
												}
											}
											if (func_71())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_72, 0))
												{
													if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), -713569950))
													{
														if (func_70(PLAYER::PLAYER_PED_ID(), iLocal_72) < 2.5f)
														{
															if (ENTITY::GET_ENTITY_SPEED(uLocal_75) < 1f)
															{
																func_69();
															}
														}
													}
													else if (func_70(PLAYER::PLAYER_PED_ID(), iLocal_72) < 10f)
													{
														if (ENTITY::GET_ENTITY_SPEED(uLocal_75) < 1f)
														{
															func_69();
														}
													}
												}
											}
										}
										if (func_65())
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												TASK::CLEAR_PED_TASKS(iLocal_72);
												if (PED::IS_PED_IN_GROUP(iLocal_72))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_72);
												}
											}
											func_92();
										}
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_72, 0);
										}
										break;
									
									case 2:
										func_64();
										func_90();
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_72, 0);
										}
										break;
									
									case 3:
										if (func_63())
										{
											iLocal_55 = 9;
										}
										func_55();
										func_90();
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_72, 0);
										}
										break;
									
									case 5:
										func_54();
										break;
									
									case 6:
										if (!iLocal_104 && !PED::IS_PED_INJURED(iLocal_72))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PAUSE(0, 1500);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
											TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
											PED::SET_PED_KEEP_TASK(iLocal_72, 1);
											func_73(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											PED::REMOVE_PED_FROM_GROUP(iLocal_72);
											iLocal_104 = 1;
										}
										if (func_65())
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												TASK::CLEAR_PED_TASKS(iLocal_72);
												if (PED::IS_PED_IN_GROUP(iLocal_72))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_72);
												}
												func_52();
												SYSTEM::WAIT(0);
												func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_72, 1);
												SYSTEM::WAIT(0);
											}
											func_92();
										}
										if (!func_89())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											if (!HUD::DOES_BLIP_EXIST(uLocal_70))
											{
												uLocal_70 = func_6(Local_86, 1);
											}
											if (func_73(&uLocal_148, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_55 = 3;
											}
										}
										if (bLocal_100)
										{
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_85))
											{
												if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || func_5(PLAYER::PLAYER_PED_ID(), uLocal_85, 1) > 200f)
												{
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_82[0]));
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_82[1]));
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_85);
												}
											}
										}
										if (func_65())
										{
											if (!PED::IS_PED_INJURED(iLocal_72))
											{
												TASK::CLEAR_PED_TASKS(iLocal_72);
												if (PED::IS_PED_IN_GROUP(iLocal_72))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_72);
												}
												TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_72, 1);
												func_52();
												SYSTEM::WAIT(0);
												func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_92();
										}
										break;
									
									case 11:
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_75, 0))
										{
											if (!func_72(iLocal_75))
											{
												if (!iLocal_101)
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_72, 0))
													{
														if (!PED::IS_PED_INJURED(iLocal_72))
														{
															if (!iLocal_103)
															{
																func_73(&uLocal_148, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_103 = 1;
															}
															TASK::TASK_ENTER_VEHICLE(iLocal_72, iLocal_75, -1, -1, 2f, 1, 0);
															PED::SET_PED_KEEP_TASK(iLocal_72, 1);
															iLocal_55 = 12;
														}
													}
													if (!PED::IS_PED_INJURED(iLocal_72))
													{
														if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_72) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_72) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_75) > 2.5f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_75, 0)))
														{
															TASK::TASK_COMBAT_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
															func_52();
															iLocal_101 = 1;
														}
													}
												}
											}
											else
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_105))
												{
													HUD::REMOVE_BLIP(&uLocal_105);
												}
												if (!PED::IS_PED_INJURED(iLocal_72))
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
													TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
													PED::SET_PED_KEEP_TASK(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 150f, 150f, 150f, 0, 1, 0))
											{
												TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
												TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
												PED::SET_PED_KEEP_TASK(iLocal_72, 1);
												iLocal_55 = 13;
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 12:
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_105))
												{
													HUD::SET_BLIP_AS_FRIENDLY(uLocal_105, 0);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_72);
												}
											}
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
											{
												if (!func_72(iLocal_75))
												{
													if (PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_75, 0))
													{
														if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_75))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_75, 1, 0);
														}
														TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_72, iLocal_75, PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
														PED::SET_PED_KEEP_TASK(iLocal_72, 1);
														iLocal_55 = 13;
													}
													else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_75, 0))
													{
														if (bLocal_110)
														{
															TASK::TASK_COMBAT_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
															func_52();
															iLocal_101 = 1;
															iLocal_55 = 11;
														}
														else
														{
															func_69();
														}
													}
													else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, -1794415470) != 0)
													{
														if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 780511057) != 0)
														{
														}
														else
														{
															iLocal_55 = 11;
														}
													}
												}
												else
												{
													if (HUD::DOES_BLIP_EXIST(uLocal_105))
													{
														HUD::REMOVE_BLIP(&uLocal_105);
													}
													TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
													TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
													PED::SET_PED_KEEP_TASK(iLocal_72, 1);
													iLocal_55 = 13;
												}
											}
											else
											{
												TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
												TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
												PED::SET_PED_KEEP_TASK(iLocal_72, 1);
												iLocal_55 = 13;
											}
											if (!iLocal_101)
											{
												if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_72) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_72) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_75) > 2.5f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_75, 0)))
												{
													TASK::TASK_COMBAT_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 0, 16);
													func_52();
													iLocal_101 = 1;
												}
											}
										}
										else
										{
											iLocal_55 = 13;
										}
										break;
									
									case 13:
										iLocal_96 = 1;
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											if (PED::IS_PED_BEING_JACKED(iLocal_72))
											{
												func_52();
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_72, 0))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_105))
												{
													HUD::SET_BLIP_AS_FRIENDLY(uLocal_105, 0);
												}
												if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0), -1323100960) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0), -442313018))
												{
													uLocal_81 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0));
													if (ENTITY::DOES_ENTITY_EXIST(uLocal_81))
													{
														iLocal_80 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uLocal_81);
														if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_80, 0))
														{
															if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0), iLocal_80))
															{
																VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0), iLocal_80);
															}
														}
													}
												}
												if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0)))
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
													TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
													TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
													PED::SET_PED_KEEP_TASK(iLocal_72, 1);
												}
												if (!iLocal_113)
												{
													if ((func_1(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0), 0)) || func_72(PED::GET_VEHICLE_PED_IS_IN(iLocal_72, 0)))
													{
														if (HUD::DOES_BLIP_EXIST(uLocal_105))
														{
															HUD::SET_BLIP_AS_FRIENDLY(uLocal_105, 0);
														}
														TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
														TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
														TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
														TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
														PED::SET_PED_KEEP_TASK(iLocal_72, 1);
														iLocal_113 = 1;
													}
												}
												if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 245f, 245f, 245f, 0, 1, 0))
												{
													func_92();
												}
											}
											else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 242628503) != 0)
											{
												iLocal_55 = 11;
											}
											else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 200f, 200f, 200f, 0, 1, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_95)
								{
									case 1:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											TASK::CLEAR_PED_TASKS(iLocal_72);
											if (PED::IS_PED_IN_GROUP(iLocal_72))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_72);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_72, 1);
											SYSTEM::WAIT(0);
											func_92();
										}
										break;
									
									case 2:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											TASK::CLEAR_PED_TASKS(iLocal_72);
											if (PED::IS_PED_IN_GROUP(iLocal_72))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_72);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_72, 1);
											SYSTEM::WAIT(0);
											func_92();
										}
										break;
									
									case 3:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											TASK::CLEAR_PED_TASKS(iLocal_72);
											if (PED::IS_PED_IN_GROUP(iLocal_72))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_72);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_72, 1);
											SYSTEM::WAIT(0);
											func_92();
										}
										break;
									
									case 4:
										if (!PED::IS_PED_INJURED(iLocal_72))
										{
											TASK::CLEAR_PED_TASKS(iLocal_72);
											if (PED::IS_PED_IN_GROUP(iLocal_72))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_72);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_72, 1);
											SYSTEM::WAIT(0);
											func_92();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_176();
		}
	}
}

int func_1(int iParam0)
{
	if ((func_4(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && func_2(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_2(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == -1323100960 || iVar1 == -442313018)
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_2(int iParam0)
{
	if (func_3(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
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

int func_4(int iParam0)
{
	if (func_3(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

float func_5(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

var func_6(struct<3> Param0, int iParam3)
{
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_7(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_8()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_94())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_72, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_72, 0, 0);
				}
				if (!iLocal_111)
				{
					if (!func_89())
					{
						if (func_9())
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_111 = 1;
					}
				}
			}
			else
			{
				iLocal_111 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_72, 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_72);
				}
			}
		}
	}
}

int func_9()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_72, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_105))
						{
							HUD::REMOVE_BLIP(&uLocal_105);
						}
						if (iLocal_55 != 10)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_105))
					{
						HUD::REMOVE_BLIP(&uLocal_105);
					}
					if (iLocal_55 != 10)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_70))
						{
							uLocal_70 = func_6(Local_86, 1);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_70))
			{
				HUD::REMOVE_BLIP(&uLocal_70);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_105))
			{
				uLocal_105 = func_11(iLocal_72, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_70))
			{
				HUD::REMOVE_BLIP(&uLocal_70);
			}
		}
	}
}

var func_11(int iParam0, bool bParam1, int iParam2)
{
	uVar0 = func_12(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_1798[iParam2].f_3));
	}
	return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(uVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_7(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_13()
{
	switch (iLocal_106)
	{
		case 0:
			if (func_14())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_72))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_72);
				}
				func_52();
				SYSTEM::WAIT(0);
				func_73(&uLocal_148, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_106++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 500)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
					{
						VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_75, -1f);
						if (HUD::DOES_BLIP_EXIST(uLocal_70))
						{
							HUD::REMOVE_BLIP(&uLocal_70);
						}
						iLocal_106++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 2000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_75, 24, 2000);
						iLocal_106++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 4000)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_72);
							VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_75, 0f);
							TASK::TASK_LEAVE_VEHICLE(iLocal_72, iLocal_75, 320);
							if (!HUD::DOES_BLIP_EXIST(uLocal_105))
							{
								uLocal_105 = func_11(iLocal_72, 1, 145);
							}
							iLocal_106++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_72) && !PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_75, 0))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_72, 1);
					func_52();
					SYSTEM::WAIT(0);
					func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		
		case 5:
			SYSTEM::WAIT(0);
			func_92();
			break;
	}
}

int func_14()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_75 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_72, iLocal_75))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()
{
	if ((!iLocal_104 && !PED::IS_PED_INJURED(iLocal_72)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_72);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_91, 1f, -1, 0.25f, 0, 333.9002f);
		TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
		PED::SET_PED_KEEP_TASK(iLocal_72, 1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_104 = 1;
	}
	if (func_65())
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			TASK::CLEAR_PED_TASKS(iLocal_72);
			if (PED::IS_PED_IN_GROUP(iLocal_72))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_72);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_72, 1);
			func_52();
			SYSTEM::WAIT(0);
			func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_92();
	}
	if (!func_89())
	{
		func_16();
	}
}

void func_16()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72, 0);
	}
	while (!func_51())
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_56 == 0)
	{
		func_46(func_50(), 4, 3);
	}
	func_20(22, iLocal_69);
	func_17();
	func_176();
}

void func_17()
{
	func_18();
}

int func_18()
{
	if (func_19(0))
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

bool func_19(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_43(iParam0))
	{
		func_42(iParam0, iParam1);
		if (!func_41(51))
		{
			func_31("RE_REWARD", 1, 0, 4000, 10000, func_34(), 0, 138, 0);
			func_30(51);
		}
		if (func_29(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_28(iParam0, iParam1) != 322)
		{
			func_22(func_28(iParam0, iParam1), Local_50.x, Local_50.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_21(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_21(7);
			}
			else
			{
				func_21(1);
			}
		}
	}
}

void func_21(int iParam0)
{
	Global_111624 = iParam0;
}

void func_22(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_26((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = uParam1;
		Global_111638.f_10189[iParam0].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_23();
	}
}

void func_23()
{
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
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
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
					STATS::_UPDATE_STAT_INT(-2122623864, Global_111361, 0);
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
	STATS::STAT_SET_INT(-1055525200, Global_111374, 1);
	STATS::STAT_SET_INT(-419750212, Global_111357, 1);
	STATS::STAT_SET_INT(1331385274, Global_111375, 1);
	STATS::STAT_SET_INT(542355616, Global_111358, 1);
	STATS::STAT_SET_INT(1561233577, Global_111376, 1);
	STATS::STAT_SET_INT(558499468, Global_111359, 1);
	STATS::STAT_SET_INT(-852659719, Global_111377, 1);
	STATS::STAT_SET_INT(-20401960, Global_111360, 1);
	STATS::STAT_SET_INT(-2122623864, iVar9, 1);
	STATS::STAT_SET_INT(-215705366, Global_111364, 1);
	STATS::STAT_SET_INT(-131898641, (Global_111380 + Global_111379), 1);
	STATS::STAT_SET_INT(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(1215094015, Global_111638.f_10189.f_3853, 1);
	STATS::STAT_SET_INT(1813094653, Global_111381, 1);
	STATS::STAT_SET_INT(-1205712980, Global_111382, 1);
	STATS::STAT_SET_INT(480408826, Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_25(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_24() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_18();
				}
			}
		}
	}
}

int func_24()
{
	return Global_30768;
}

int func_25(int iParam0, int iParam1)
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

int func_26(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0, int iParam1)
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

int func_29(int iParam0)
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

void func_30(int iParam0)
{
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

void func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_32(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_32(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
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
		if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_33();
	}
}

void func_33()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

int func_34()
{
	func_35();
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

void func_35()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_39(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_38(PLAYER::PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_36(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_37(Global_111638.f_2358.f_539.f_4321))
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

bool func_36(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return func_40(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_40(int iParam0)
{
	return Global_1798[iParam0];
}

int func_41(int iParam0)
{
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

void func_42(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)
{
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

int func_44()
{
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_45(Var0);
	return uVar16;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case -60745600:
			return 23;
			break;
		
		case 1149455824:
			return 0;
			break;
		
		case 1889800404:
			return 15;
			break;
		
		case 737712801:
			return 1;
			break;
		
		case 976199832:
			return 26;
			break;
		
		case 1531173018:
			return 29;
			break;
		
		case 1154171352:
			return 24;
			break;
		
		case -1325807529:
			return 2;
			break;
		
		case -2118978003:
			return 17;
			break;
		
		case -1363545320:
			return 11;
			break;
		
		case -129069433:
			return 16;
			break;
		
		case 1158398451:
			return 18;
			break;
		
		case -1669765523:
			return 12;
			break;
		
		case -1538568960:
			return 3;
			break;
		
		case -396020015:
			return 27;
			break;
		
		case 786118124:
			return 20;
			break;
		
		case -770891250:
			return 19;
			break;
		
		case 190582896:
			return 4;
			break;
		
		case -911763748:
			return 13;
			break;
		
		case -881321240:
			return 28;
			break;
		
		case 1337652317:
			return 7;
			break;
		
		case 1492712482:
			return 25;
			break;
		
		case -1612307213:
			return 10;
			break;
		
		case -201963189:
			return 22;
			break;
		
		case -1176354303:
			return 21;
			break;
		
		case 1735157309:
			return 9;
			break;
		
		case -1631807569:
			return 5;
			break;
		
		case 847041036:
			return 6;
			break;
		
		case -167923910:
			return 14;
			break;
		
		case 59976311:
			return 30;
			break;
		
		case 996703443:
			return 31;
			break;
		
		case -2088549946:
			return 32;
			break;
		
		case -1148693293:
			return 33;
			break;
	}
	return -1;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				iVar0 = func_49(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_47(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_48(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_48(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_48(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50()
{
	func_35();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_51()
{
	return 1;
}

void func_52()
{
	Global_19671 = 0;
	func_53();
}

void func_53()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_54()
{
	if (HUD::DOES_BLIP_EXIST(uLocal_70))
	{
		HUD::SET_BLIP_ROUTE(uLocal_70, 0);
		HUD::REMOVE_BLIP(&uLocal_70);
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			HUD::CLEAR_PRINTS();
			func_52();
			SYSTEM::WAIT(0);
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		iLocal_55 = 7;
	}
}

void func_55()
{
	func_10();
	func_62();
	func_61();
	func_8();
	if (!iLocal_97 && !iLocal_98)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
	}
	if (iLocal_97 && !iLocal_98)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_98 = 1;
			}
		}
	}
	if (iLocal_97 && iLocal_98)
	{
		if (func_50() == 0)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
		else if (func_50() == 1)
		{
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_97 = 0;
			}
		}
	}
	if (func_65())
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			TASK::CLEAR_PED_TASKS(iLocal_72);
			if (PED::IS_PED_IN_GROUP(iLocal_72))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_72);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_72, 1);
			func_52();
			SYSTEM::WAIT(0);
			func_73(&uLocal_148, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_92();
	}
	if (func_60(PLAYER::PLAYER_PED_ID(), Local_59, 1) > 200f)
	{
		if (!bLocal_100)
		{
			Var0[0] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[0], 0, &(Var0[0]), 0);
			Var0[1] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[1], 0, &(Var0[1]), 0);
			Var0[2] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[2], 0, &(Var0[2]), 0);
			Var0[3] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[3], 0, &(Var0[3]), 0);
			if (!CAM::IS_SPHERE_VISIBLE(Var0[0], 3f))
			{
				uLocal_85 = VEHICLE::CREATE_VEHICLE(-1683328900, Var0[0], func_58(Var0[0], func_59(PLAYER::PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, -1, 1, 1);
				uLocal_82[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[0], 453432689, -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[1], 453432689, -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_100 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[1], 3f))
			{
				uLocal_85 = VEHICLE::CREATE_VEHICLE(-1683328900, Var0[1], func_58(Var0[1], func_59(PLAYER::PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, -1, 1, 1);
				uLocal_82[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[0], 453432689, -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[1], 453432689, -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_100 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[2], 3f))
			{
				uLocal_85 = VEHICLE::CREATE_VEHICLE(-1683328900, Var0[2], func_58(Var0[2], func_59(PLAYER::PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, -1, 1, 1);
				uLocal_82[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[0], 453432689, -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[1], 453432689, -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_100 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[3], 3f))
			{
				uLocal_85 = VEHICLE::CREATE_VEHICLE(-1683328900, Var0[3], func_58(Var0[3], func_59(PLAYER::PLAYER_ID())), 1, 1, 0);
				uLocal_82[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, -1, 1, 1);
				uLocal_82[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_85, 6, -277793362, 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[0], 453432689, -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_82[1], 453432689, -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_100 = true;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_79, 0), 10f, 10f, 10f, 0, 0, 0) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_57();
	}
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_72, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_72, Local_86, Global_19, 1, 1, 0) && func_56(1, 0, 1)))
		{
			SYSTEM::SETTIMERA(0);
			if (func_14())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
				}
				HUD::CLEAR_PRINTS();
				iLocal_55 = 5;
			}
			else
			{
				iLocal_55 = 6;
			}
		}
	}
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_57()
{
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (func_14())
		{
			func_52();
			SYSTEM::WAIT(0);
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_55 = 10;
			}
		}
		else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.x - 50f), (Var0.y - 50f), (Var0.z - 50f), (Var0.x + 50f), (Var0.y + 50f), (Var0.z + 50f)))
		{
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				TASK::CLEAR_PED_TASKS(iLocal_72);
				if (PED::IS_PED_IN_GROUP(iLocal_72))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_72);
				}
				TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_72, 1);
				SYSTEM::WAIT(0);
			}
			func_92();
		}
	}
	else if (func_14())
	{
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.x - 10f), (Var0.y - 10f), (Var0.z - 10f), (Var0.x + 10f), (Var0.y + 10f), (Var0.z + 10f)))
		{
			func_52();
			SYSTEM::WAIT(0);
			if (func_73(&uLocal_148, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				if (HUD::DOES_BLIP_EXIST(uLocal_70))
				{
					HUD::REMOVE_BLIP(&uLocal_70);
				}
				iLocal_55 = 10;
			}
		}
	}
	else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.x - 10f), (Var0.y - 10f), (Var0.z - 10f), (Var0.x + 10f), (Var0.y + 10f), (Var0.z + 10f)))
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			TASK::CLEAR_PED_TASKS(iLocal_72);
			if (PED::IS_PED_IN_GROUP(iLocal_72))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_72);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_72, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_72, 1);
			SYSTEM::WAIT(0);
		}
		func_92();
	}
}

var func_58(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_59(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

float func_60(int iParam0, struct<3> Param1, int iParam4)
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

void func_61()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_72))
		{
			if (!iLocal_142)
			{
				iLocal_143 = MISC::GET_GAME_TIMER();
				iLocal_142 = 1;
			}
			else
			{
				iLocal_144 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	if ((iLocal_144 - iLocal_143) > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_72))
			{
				if (func_73(&uLocal_148, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_72);
					func_92();
				}
			}
		}
	}
}

void func_62()
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_145)
		{
			iLocal_146 = MISC::GET_GAME_TIMER();
			iLocal_145 = 1;
		}
		else
		{
			iLocal_147 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_145 = 0;
	}
	if ((iLocal_147 - iLocal_146) > 60000)
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_72))
			{
				if (func_73(&uLocal_148, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_72);
					func_92();
				}
			}
		}
	}
}

int func_63()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_72))
		{
			if ((((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_114, 50f, 50f, 50f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_117, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_120, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_123, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_126, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_129, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_132, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_135, 50f, 50f, 50f, 0, 1, 0)) || func_60(PLAYER::PLAYER_PED_ID(), Local_138, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_64()
{
	if (!PED::IS_PED_INJURED(iLocal_72) && func_94())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_72, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				SYSTEM::SETTIMERA(0);
				if (!PED::IS_PED_IN_GROUP(iLocal_72))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_72, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_72, 0);
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_72, 1);
				}
				if (iLocal_56 == 0)
				{
					if (!func_89())
					{
						if (func_73(&uLocal_148, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_70))
							{
								uLocal_70 = func_6(Local_86, 1);
							}
							MISC::CLEAR_BIT(&uLocal_94, 3);
							iLocal_96 = 1;
							iLocal_55 = 3;
						}
					}
				}
				else if (iLocal_56 == 1)
				{
					if (func_50() == 0)
					{
						func_73(&uLocal_148, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (func_50() == 1)
					{
						func_73(&uLocal_148, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (func_50() == 2)
					{
						func_73(&uLocal_148, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 2, 1);
					iLocal_55 = 3;
				}
			}
		}
	}
}

int func_65()
{
	if (!PED::IS_PED_INJURED(iLocal_72))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				func_52();
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_52();
			return 1;
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 250f, 250f, 250f, 0, 1, 0))
		{
			return 1;
		}
		if (iLocal_56 == 0)
		{
			iVar0 = 0;
			if (func_68())
			{
				iVar0 = 0;
				while (iVar0 < func_67())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_66(iVar0), PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_66(iVar0))) == -1865950624)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_55 < 2)
		{
			if (PED::HAS_PED_RECEIVED_EVENT(iLocal_72, 126))
			{
				return 1;
			}
			if (iLocal_56 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
				{
					if (((PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_79, 0) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_72, 1);
						return 1;
					}
				}
			}
			else if (iLocal_56 == 1)
			{
				if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_72, 0) - Vector(70f, 70f, 70f), ENTITY::GET_ENTITY_COORDS(iLocal_72, 0) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), 20f, 1))
			{
				return 1;
			}
			if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_72, 1) + Vector(15f, 15f, 15f), -37975472, 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_72, 1) + Vector(15f, 15f, 15f), -1813897027, 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_72, 1) + Vector(15f, 15f, 15f), -1568386805, 1))
			{
				return 1;
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), 3f))
			{
				return 1;
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_72, PLAYER::PLAYER_PED_ID())) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_72) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_72))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		func_52();
		return 1;
	}
	return 0;
}

var func_66(int iParam0)
{
	return Global_53763.f_25[iParam0];
}

int func_67()
{
	return Global_53763.f_24;
}

bool func_68()
{
	return Global_53763.f_24 > 0;
}

void func_69()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			if (!func_89())
			{
				if (func_9())
				{
					func_73(&uLocal_148, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					func_73(&uLocal_148, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_105))
				{
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_105, false);
				}
				TASK::CLEAR_PED_TASKS(iLocal_72);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500, 1);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 1f, 0.5f, 1, 0, -957453492);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, -1, 2f, 9, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				SYSTEM::SETTIMERA(0);
				bLocal_110 = true;
				iLocal_55 = 11;
			}
		}
	}
}

float func_70(var uParam0, int iParam1)
{
	return func_5(uParam0, iParam1, 1);
}

int func_71()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_75 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	if ((((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 3000) || FIRE::IS_ENTITY_ON_FIRE(iParam0)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, 0), 5f) > 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, 615608432, 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(5f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(iParam0, 0) + Vector(5f, 5f, 5f), 615608432, 0))
	{
		return 1;
	}
	return 0;
}

bool func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)
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
					func_87();
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
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_85();
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
				func_84();
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
				if (func_83())
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
			if (func_82())
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
			func_81();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_80();
		func_75();
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
		func_87();
	}
	return 0;
}

void func_75()
{
	if (!func_76())
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

int func_76()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_79())
	{
		return 0;
	}
	if (func_77(PLAYER::PLAYER_ID()))
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

bool func_77(int iParam0)
{
	return func_78(iParam0, 20);
}

bool func_78(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_79()
{
	return -1;
}

void func_80()
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

void func_81()
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

int func_82()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_83()
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

void func_84()
{
	if (func_36(14))
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
		Global_19486 = func_50();
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

void func_85()
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

bool func_86(int iParam0, int iParam1)
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

void func_87()
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

int func_89()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_90()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_79, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_79, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_79, -1, 0))
		{
			AUDIO::_0x9D3AF56E94C9AE98(iLocal_79, 60000f);
			AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_79);
		}
	}
}

void func_91()
{
	switch (iLocal_108)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 20f, 20f, 8f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2.5f || !(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_72, 15f, 15f, 8f, 0, 1, 0)))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 30000, 2050, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
						if (func_73(&uLocal_148, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_99 = true;
							iLocal_108++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_93(&uLocal_107);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (func_94())
				{
					iLocal_75 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_75) < 9f)
					{
						if (!PED::IS_PED_INJURED(iLocal_72))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_72, iLocal_75, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_108++;
							}
						}
					}
				}
				else if (!bLocal_110)
				{
					fLocal_109 = func_5(iLocal_72, PLAYER::PLAYER_PED_ID(), 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, (fLocal_109 - 3f), 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					if (!func_89())
					{
						if (func_9())
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							func_73(&uLocal_148, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_110 = true;
						bLocal_99 = true;
					}
				}
			}
			break;
		
		case 2:
			func_93(&uLocal_107);
			if (!iLocal_112)
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						TASK::CLEAR_PED_TASKS(iLocal_72);
						TASK::TASK_OPEN_VEHICLE_DOOR(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
				if (!func_89())
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						TASK::CLEAR_PED_TASKS(iLocal_72);
						TASK::TASK_OPEN_VEHICLE_DOOR(iLocal_72, iLocal_75, -1, 0, 1f);
						iLocal_112 = 1;
					}
				}
			}
			if (func_94())
			{
				iLocal_75 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_75) < 2.5f)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_75, ENTITY::GET_ENTITY_COORDS(iLocal_72, 1), 20f, 20f, 5f, 0, 1, 0))
					{
						if (iLocal_56 == 0)
						{
							if (!func_89())
							{
								if (func_50() == 0)
								{
									if (func_9())
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (func_50() == 1)
								{
									if (func_9())
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										func_73(&uLocal_148, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (func_50() == 2)
								{
									func_73(&uLocal_148, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_108++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_94())
			{
				iLocal_75 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_75) < 0.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						TASK::CLEAR_PED_TASKS(iLocal_72);
						if (!PED::IS_PED_IN_GROUP(iLocal_72))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_72, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_72, 0);
							PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_72, 1);
						}
						iLocal_108++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_56 == 0)
			{
				if (!func_89())
				{
					if (func_73(&uLocal_148, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_108++;
					}
				}
			}
			else
			{
				iLocal_108++;
			}
			break;
		
		case 5:
			if (func_94())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_72))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_72, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_105))
							{
								HUD::REMOVE_BLIP(&uLocal_105);
							}
							iLocal_55 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_92()
{
	func_176();
}

void func_93(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 90f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_72, PLAYER::PLAYER_PED_ID(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (PED::IS_PED_FACING_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_72))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_72, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_94()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if ((((((!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_BIG_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_95()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_75 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0) && !PED::IS_PED_INJURED(iLocal_72)) && !bLocal_99)
		{
			fLocal_109 = func_5(iLocal_72, PLAYER::PLAYER_PED_ID(), 1);
			if (fLocal_109 > 5f)
			{
				fLocal_109 = (fLocal_109 - 2.5f);
			}
			else
			{
				fLocal_109 = (fLocal_109 - 1f);
			}
			TASK::CLEAR_PED_TASKS(iLocal_72);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
			if (iLocal_56 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_75, 10000, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, fLocal_109, 1f, 1, 0, -957453492);
			}
			else if (iLocal_56 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_75, 10000, 2052, 2);
				TASK::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
			if (iLocal_56 == 0)
			{
				func_73(&uLocal_148, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_99 = true;
			}
			else if (iLocal_56 == 1)
			{
				if (func_73(&uLocal_148, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_99 = true;
				}
			}
		}
	}
}

void func_96(bool bParam0)
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

int func_97(int iParam0)
{
	if (func_101())
	{
		Global_111628 = 1;
		Global_111625 = MISC::GET_GAME_TIMER();
		if (func_29(Global_111627))
		{
			func_98(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_29(Global_111627))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
					Global_111638.f_24990.f_4++;
					MISC::SET_BIT(&Global_111634, 2);
				}
			}
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_100(int iParam0)
{
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

int func_101()
{
	switch (func_102(&Global_30827, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
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
		if (func_106(0))
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
				if (Global_41398[iVar0] == *uParam0)
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
		if (!func_104(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)
{
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
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_104(int iParam0)
{
	return func_105(iParam0, Global_41431);
}

int func_105(int iParam0, int iParam1)
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

int func_106(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_107()
{
	if (HUD::DOES_BLIP_EXIST(uLocal_71))
	{
		HUD::REMOVE_BLIP(&uLocal_71);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_105))
	{
		uLocal_105 = func_11(iLocal_72, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_105, 0);
	}
}

void func_108()
{
	func_110(39, 1);
	func_110(40, 1);
	func_110(41, 1);
	func_110(42, 1);
	func_110(43, 1);
	func_110(44, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(11, 0);
	iLocal_72 = PED::CREATE_PED(26, iLocal_90, Local_76, fLocal_89, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_72, 134, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_72, 137, 1);
	PED::ADD_RELATIONSHIP_GROUP("PedPrisoner", &iLocal_73);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_72, iLocal_73);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_73);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_73, -1533126372);
	TASK::TASK_PLAY_ANIM(iLocal_72, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_MONEY(iLocal_72, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 8, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 2, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 1, 0);
	MISC::SET_BIT(&uLocal_94, 3);
	MISC::SET_BIT(&uLocal_94, 5);
	MISC::SET_BIT(&uLocal_94, 0);
	if (iLocal_56 == 0)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_72, "REPRI1Lost");
		func_109(&uLocal_148, 3, iLocal_72, "REPRI1Lost", 0, 1);
		MISC::CLEAR_AREA_OF_PEDS(Local_76, 50f, 0);
		MISC::CLEAR_AREA(Local_76, 10f, 0, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_76 - Vector(50f, 50f, 50f), Local_76 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_86 - Vector(10f, 10f, 10f), Local_86 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 0, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_73, -1865950624);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, iLocal_73);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_72, 17, 1);
		iLocal_79 = VEHICLE::CREATE_VEHICLE(-1683328900, 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, 1, 0);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_79, 0f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_79, 4, 0, 0);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_79, 0, 0, 1148846080);
		VEHICLE::_0x0AD9E8F87FF7C16F(iLocal_79, 0);
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, -1074790547, 0, 1, 1, -1082130432);
		uVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_79, 26, -277793362, -1, 1, 1);
		PED::SET_PED_CONFIG_FLAG(uVar0, 326, 1);
		ENTITY::SET_ENTITY_HEALTH(iVar0, 99, 0);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iVar0, 1);
		uVar1[0] = VEHICLE::CREATE_VEHICLE(-667151410, 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, 1, 0);
		uVar1[1] = VEHICLE::CREATE_VEHICLE(1126868326, 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uVar1[0], 1084227584);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uVar1[1], 1084227584);
	}
	else if (iLocal_56 == 1)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_72, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		func_109(&uLocal_148, 3, iLocal_72, "REPRI2Prisoner", 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_72, 453432689, -1, 0, 1);
	}
	if (func_50() == 0)
	{
		func_109(&uLocal_148, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_50() == 1)
	{
		func_109(&uLocal_148, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_50() == 2)
	{
		func_109(&uLocal_148, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_55 = 1;
}

void func_109(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = uParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(uParam2))
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

void func_110(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_114(iParam0, 2, 1))
		{
			func_113(iParam0, 2, 1);
		}
	}
	else if (func_114(iParam0, 2, 1))
	{
		func_111(iParam0, 2, 1);
	}
}

void func_111(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			uVar0 = func_49(func_112(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_47(func_112(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_112(int iParam0)
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

void func_113(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_24() == 0)
		{
			uVar0 = func_49(func_112(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_47(func_112(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_114(int iParam0, int iParam1, bool bParam2)
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
		if (func_24() == 0)
		{
			return MISC::IS_BIT_SET(func_49(func_112(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_115()
{
	STREAMING::REQUEST_MODEL(iLocal_90);
	STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
	if (iLocal_56 == 0)
	{
		STREAMING::REQUEST_MODEL(-277793362);
		STREAMING::REQUEST_MODEL(-1683328900);
		STREAMING::REQUEST_MODEL(-667151410);
		STREAMING::REQUEST_MODEL(1126868326);
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_90) && STREAMING::HAS_ANIM_DICT_LOADED("random@prisoner_lift"))
	{
		if (iLocal_56 == 0)
		{
			if (((STREAMING::HAS_MODEL_LOADED(-277793362) && STREAMING::HAS_MODEL_LOADED(-1683328900)) && STREAMING::HAS_MODEL_LOADED(-667151410)) && STREAMING::HAS_MODEL_LOADED(1126868326))
			{
				bLocal_57 = true;
			}
		}
		else
		{
			bLocal_57 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_90);
		STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
		if (iLocal_56 == 0)
		{
			STREAMING::REQUEST_MODEL(-277793362);
			STREAMING::REQUEST_MODEL(-1683328900);
			STREAMING::REQUEST_MODEL(-667151410);
			STREAMING::REQUEST_MODEL(1126868326);
		}
	}
}

void func_116()
{
	if (iLocal_62 == 1)
	{
		iLocal_90 = 1032073858;
		Local_76 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_89 = 142.0201f;
		Local_91 = { 984.3975f, -106.9935f, 73.3531f };
		Local_86 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_62 == 2)
	{
		iLocal_90 = -1313105063;
		Local_76 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_89 = 301.2458f;
		Local_91 = { 938.5384f, -2167.42f, 29.5153f };
		Local_86 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_58 = 1;
}

int func_117()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_50) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_128())
		{
			return 0;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_118(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_37(func_50()))
		{
			iVar36 = func_34();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_111638.f_18569[iVar32], 2) && !MISC::IS_BIT_SET(Global_111638.f_18569[iVar32], 3))
				{
					func_119(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_119(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_120(uParam1, "Abigail1", func_122(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 1:
			func_120(uParam1, "Abigail2", func_122(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 2:
			func_120(uParam1, "Barry1", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 3:
			func_120(uParam1, "Barry2", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 4:
			func_120(uParam1, "Barry3", func_122(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 5:
			func_120(uParam1, "Barry3A", func_122(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 6:
			func_120(uParam1, "Barry3C", func_122(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 7:
			func_120(uParam1, "Barry4", func_122(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_121(iParam0), 0, 0);
			break;
		
		case 8:
			func_120(uParam1, "Dreyfuss1", func_122(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 9:
			func_120(uParam1, "Epsilon1", func_122(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 10:
			func_120(uParam1, "Epsilon2", func_122(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 11:
			func_120(uParam1, "Epsilon3", func_122(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 12:
			func_120(uParam1, "Epsilon4", func_122(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 13:
			func_120(uParam1, "Epsilon5", func_122(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 14:
			func_120(uParam1, "Epsilon6", func_122(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 15:
			func_120(uParam1, "Epsilon7", func_122(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 16:
			func_120(uParam1, "Epsilon8", func_122(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 17:
			func_120(uParam1, "Extreme1", func_122(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 18:
			func_120(uParam1, "Extreme2", func_122(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 19:
			func_120(uParam1, "Extreme3", func_122(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 20:
			func_120(uParam1, "Extreme4", func_122(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 21:
			func_120(uParam1, "Fanatic1", func_122(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 22:
			func_120(uParam1, "Fanatic2", func_122(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 23:
			func_120(uParam1, "Fanatic3", func_122(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_121(iParam0), 0, 1);
			break;
		
		case 24:
			func_120(uParam1, "Hao1", func_122(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_121(iParam0), 0, 1);
			break;
		
		case 25:
			func_120(uParam1, "Hunting1", func_122(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 26:
			func_120(uParam1, "Hunting2", func_122(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 27:
			func_120(uParam1, "Josh1", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 28:
			func_120(uParam1, "Josh2", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 29:
			func_120(uParam1, "Josh3", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 30:
			func_120(uParam1, "Josh4", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 31:
			func_120(uParam1, "Maude1", func_122(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 32:
			func_120(uParam1, "Minute1", func_122(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 33:
			func_120(uParam1, "Minute2", func_122(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 34:
			func_120(uParam1, "Minute3", func_122(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 35:
			func_120(uParam1, "MrsPhilips1", func_122(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 36:
			func_120(uParam1, "MrsPhilips2", func_122(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 37:
			func_120(uParam1, "Nigel1", func_122(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 38:
			func_120(uParam1, "Nigel1A", func_122(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 39:
			func_120(uParam1, "Nigel1B", func_122(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 40:
			func_120(uParam1, "Nigel1C", func_122(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 41:
			func_120(uParam1, "Nigel1D", func_122(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 42:
			func_120(uParam1, "Nigel2", func_122(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 43:
			func_120(uParam1, "Nigel3", func_122(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 44:
			func_120(uParam1, "Omega1", func_122(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 45:
			func_120(uParam1, "Omega2", func_122(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 46:
			func_120(uParam1, "Paparazzo1", func_122(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 47:
			func_120(uParam1, "Paparazzo2", func_122(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 48:
			func_120(uParam1, "Paparazzo3", func_122(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 49:
			func_120(uParam1, "Paparazzo3A", func_122(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 50:
			func_120(uParam1, "Paparazzo3B", func_122(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 51:
			func_120(uParam1, "Paparazzo4", func_122(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 52:
			func_120(uParam1, "Rampage1", func_122(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 54:
			func_120(uParam1, "Rampage3", func_122(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 55:
			func_120(uParam1, "Rampage4", func_122(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 56:
			func_120(uParam1, "Rampage5", func_122(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 53:
			func_120(uParam1, "Rampage2", func_122(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 57:
			func_120(uParam1, "TheLastOne", func_122(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 58:
			func_120(uParam1, "Tonya1", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 59:
			func_120(uParam1, "Tonya2", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 60:
			func_120(uParam1, "Tonya3", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 61:
			func_120(uParam1, "Tonya4", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 62:
			func_120(uParam1, "Tonya5", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_120(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_121(int iParam0)
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

struct<2> func_122(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_123(iParam0) };
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

struct<2> func_123(int iParam0)
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

int func_124()
{
	if (func_127() && !func_128())
	{
		return 1;
	}
	if (func_126() && func_125())
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_111356 > 0;
}

int func_126()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_127()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_128()
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

int func_129()
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_124())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_128())
		{
			return 0;
		}
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130()
{
	if ((Global_111627 == func_44() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_133(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_111624 = 0;
	func_132();
}

void func_132()
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

void func_133(int iParam0)
{
	Global_111627 = iParam0;
}

int func_134(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_44();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_175())
		{
			return 0;
		}
	}
	Local_50 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_128())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_19(0))
		{
			return 0;
		}
		if (func_124())
		{
			return 0;
		}
		if (func_174())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_37(func_50()))
		{
			if (func_118(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.z - Local_50.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_173(iParam3))
		{
			return 0;
		}
		if (func_37(func_50()))
		{
			if (func_172(func_50()) == 4 || func_172(func_50()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_50()))
		{
			if (!func_171(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_170(Global_111638.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_169())
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
		if (!func_160(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_159(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_159(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_173(30) && !func_159(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_50()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_158(iVar8))
				{
					if (func_136(iVar4))
					{
						if (!func_135(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_50() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_135(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

bool func_136(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_137(iVar0);
}

int func_137(int iParam0)
{
	return func_138(iParam0, 1);
}

int func_138(int iParam0, int iParam1)
{
	if (!func_158(iParam0))
	{
		return 0;
	}
	func_139(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_140(func_151(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_150(iParam0, iParam1))
	{
		iVar0 = func_149(iParam1);
		iVar1 = func_147(iParam0);
		iVar2 = (func_147(iParam0) - func_147(iParam1));
		iVar3 = (func_149(iParam0) - func_149(iParam1));
		iVar4 = (func_146(iParam0) - func_146(iParam1));
		iVar5 = (func_145(iParam0) - func_145(iParam1));
		iVar6 = (func_144(iParam0) - func_144(iParam1));
		iVar7 = (func_143(iParam0) - func_143(iParam1));
	}
	else
	{
		iVar0 = func_149(iParam0);
		iVar1 = func_147(iParam1);
		iVar2 = (func_147(iParam1) - func_147(iParam0));
		iVar3 = (func_149(iParam1) - func_149(iParam0));
		iVar4 = (func_146(iParam1) - func_146(iParam0));
		iVar5 = (func_145(iParam1) - func_145(iParam0));
		iVar6 = (func_144(iParam1) - func_144(iParam0));
		iVar7 = (func_143(iParam1) - func_143(iParam0));
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
		iVar4 = (iVar4 + func_142(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_141(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_141(float fParam0, float fParam1, float fParam2)
{
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

int func_142(int iParam0, int iParam1)
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

int func_143(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_144(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_145(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_146(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_147(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_148(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_148(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_149(int iParam0)
{
	return iParam0 & 15;
}

int func_150(int iParam0, int iParam1)
{
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	func_157(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_156(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_155(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_154(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_153(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_152(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_152(var uParam0, int iParam1)
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

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	iVar0 = func_149(*uParam0);
	iVar1 = func_147(*uParam0);
	if (iParam1 < 1 || iParam1 > func_142(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_156(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_158(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_145(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_147(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_149(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_146(iParam0);
	if (iVar5 < 1 || iVar5 > func_142(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_50();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_166()) || func_165()) || func_164()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_168()) || Global_30770) || func_167()) || func_86(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_166()) || func_165()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_168() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_86(8, -1)) || func_163()) || func_162()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_86(8, -1) || func_166()) || func_165()) || func_162()) || func_161())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_168()) || Global_30770) || func_167()) || func_86(8, -1)) || func_165()) || func_164()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_168()) || func_165()) || Global_110685) || Global_30770) || func_167()) || Global_42596) || func_86(8, -1)) || func_164()) || func_162()) || func_163()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_168()) || Global_110685) || Global_30770) || func_167()) || func_86(8, -1)) || func_164()) || func_162()) || func_166()) || func_165()) || func_163())
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

var func_161()
{
	return Global_98783.f_1;
}

int func_162()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_163()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_164()
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

bool func_165()
{
	return Global_98796.f_346 > 0;
}

bool func_166()
{
	return Global_98796.f_345 > 0;
}

var func_167()
{
	return Global_1312877;
}

int func_168()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_169()
{
	func_84();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_170(int iParam0)
{
	return func_150(func_151(), iParam0);
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_50();
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

int func_172(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_173(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_175())
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

int func_174()
{
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

int func_175()
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

void func_176()
{
	if (iLocal_141)
	{
		func_190(0);
		func_188();
		func_96(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_76 - Vector(10f, 10f, 10f), Local_76 + Vector(10f, 10f, 10f), 1, 1);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_72))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72, 0);
			if (iLocal_56 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_72, 317, 1);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_72, 1);
				}
			}
			else if (iLocal_56 == 1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_72, 1);
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_75, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_75, -1, -1, 2f, 9, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_72, 1);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_74);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_74);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_72, uLocal_74);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
					PED::SET_PED_KEEP_TASK(iLocal_72, 1);
				}
			}
		}
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::ENABLE_DISPATCH_SERVICE(11, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_177(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_177(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_130())
	{
		func_181(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_111629 = MISC::GET_GAME_TIMER();
		func_180(30000);
		StringCopy(&cVar0, func_179(Global_111627, 1), 64);
		if (func_43(Global_111627) > 0)
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
	func_178(&Global_30827);
	Global_111628 = 0;
	func_133(-1);
}

void func_178(var uParam0)
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

char* func_179(int iParam0, bool bParam1)
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

void func_180(int iParam0)
{
	Global_41982 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_181(int iParam0)
{
	func_182(iParam0, 0, func_187(iParam0));
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_151();
	func_185(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_184(iParam0, &uVar0);
	Var1 = { func_183(&uVar0) };
}

struct<16> func_183(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_145(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_144(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_143(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_149(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_147(*uParam0), 64);
	return Var0;
}

void func_184(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_147(*uParam0);
	iVar1 = func_149(*uParam0);
	iVar2 = func_146(*uParam0);
	iVar3 = func_145(*uParam0);
	iVar4 = func_144(*uParam0);
	iVar5 = func_143(*uParam0);
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
	iVar6 = func_142(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_142(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_186(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam1);
	func_156(uParam0, iParam2);
	func_155(uParam0, iParam3);
	func_153(uParam0, iParam5);
	func_154(uParam0, iParam4);
	func_152(uParam0, iParam6);
}

int func_187(int iParam0)
{
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

void func_188()
{
	Global_19671 = 0;
	func_189();
}

void func_189()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_190(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_110(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_191()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_63, 1);
		iLocal_62 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_66, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_66, 1);
			iLocal_62 = 2;
		}
		if (iLocal_62 == 1)
		{
			iLocal_69 = 1;
			iLocal_56 = 0;
			return Local_63;
		}
		if (iLocal_62 == 2)
		{
			iLocal_69 = 2;
			iLocal_56 = 1;
			return Local_66;
		}
	}
	return 0f, 0f, 0f;
}

