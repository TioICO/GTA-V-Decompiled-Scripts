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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	MISC::SET_MISSION_FLAG(1);
	STREAMING::REQUEST_MODEL(-644710429);
	while (!STREAMING::HAS_MODEL_LOADED(-644710429))
	{
		SYSTEM::WAIT(0);
	}
	Local_19[0] = { 1169.976f, 3592.572f, 32.6481f };
	Local_19[1] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_26[0] = 277.7043f;
	fLocal_26[1] = 77.1113f;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1220.202f, 3596.281f, 33.259f, 1, 0, 0, 1);
	}
	STREAMING::LOAD_SCENE(1220.202f, 3596.281f, 33.259f);
	uLocal_18 = VEHICLE::CREATE_VEHICLE(-644710429, Local_19[0], fLocal_26[0], 1, 1, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_18, 1084227584);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-644710429);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_18, -1);
	}
	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_18))
	{
		VEHICLE::DELETE_VEHICLE(&uLocal_18);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-644710429);
	SCRIPT::TERMINATE_THIS_THREAD();
}

