Route128_MapObjects: @ 852C88C
	object_event 1, MAP_OBJ_GFX_SWIMMER_M, 0, 0, 35, 33, 1, 48, 85, 0, 1, 3, Route128_EventScript_1F6CBE, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_SWIMMER_F, 0, 0, 78, 24, 1, 28, 5, 0, 1, 7, Route128_EventScript_1F6D20, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_STEVEN, 0, 0, 40, 22, 3, 8, 0, 0, 0, 0, 0x0, 834, 0, 0
	object_event 4, MAP_OBJ_GFX_ARCHIE, 0, 0, 37, 22, 3, 9, 17, 0, 0, 0, 0x0, 944, 0, 0
	object_event 5, MAP_OBJ_GFX_MAXIE, 0, 0, 38, 21, 3, 7, 17, 0, 0, 0, 0x0, 945, 0, 0
	object_event 6, MAP_OBJ_GFX_FISHERMAN, 0, 0, 63, 28, 3, 7, 17, 0, 1, 0, Route128_EventScript_1F6DB0, 0, 0, 0
	object_event 7, MAP_OBJ_GFX_MAN_4, 0, 0, 47, 9, 3, 10, 17, 0, 1, 3, Route128_EventScript_1F6D99, 0, 0, 0
	object_event 8, MAP_OBJ_GFX_WOMAN_7, 0, 0, 24, 8, 3, 17, 17, 0, 1, 3, Route128_EventScript_1F6D82, 0, 0, 0
	object_event 9, MAP_OBJ_GFX_SWIMMER_F, 0, 0, 101, 29, 1, 25, 49, 0, 1, 4, Route128_EventScript_1F6DDE, 0, 0, 0
	object_event 10, MAP_OBJ_GFX_SWIMMER_M, 0, 0, 101, 22, 1, 26, 49, 0, 1, 4, Route128_EventScript_1F6DC7, 0, 0, 0

Route128_MapBGEvents: @ 852C97C
	bg_event 49, 9, 3, 7, 0, ITEM_HEART_SCALE, 92, 0
	bg_event 57, 21, 3, 7, 0, ITEM_HEART_SCALE, 93, 0
	bg_event 31, 33, 3, 7, 0, ITEM_HEART_SCALE, 94, 0

Route128_MapEvents:: @ 852C9A0
	map_events Route128_MapObjects, 0x0, 0x0, Route128_MapBGEvents

