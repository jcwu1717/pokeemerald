BattleFrontier_Lounge7_MapObjects: @ 853D3A4
	object_event 1, MAP_OBJ_GFX_SAILOR, 0, 0, 0, 7, 0, 2, 17, 0, 0, 0, BattleFrontier_Lounge7_EventScript_2656DB, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_OLD_WOMAN_1, 0, 0, 2, 5, 0, 10, 17, 0, 0, 0, BattleFrontier_Lounge7_EventScript_265255, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_OLD_WOMAN_1, 0, 0, 6, 5, 0, 9, 17, 0, 0, 0, BattleFrontier_Lounge7_EventScript_265445, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_GENTLEMAN, 0, 0, 8, 3, 0, 9, 17, 0, 0, 0, BattleFrontier_Lounge7_EventScript_2656E4, 0, 0, 0

BattleFrontier_Lounge7_MapWarps: @ 853D404
	warp_def 4, 9, 0, 7, BATTLE_FRONTIER_OUTSIDE_WEST

BattleFrontier_Lounge7_MapEvents:: @ 853D40C
	map_events BattleFrontier_Lounge7_MapObjects, BattleFrontier_Lounge7_MapWarps, 0x0, 0x0

