BattleFrontier_BattleTowerCorridor_MapScripts:: @ 8241AAA
	map_script 1, BattleFrontier_BattleTowerCorridor_MapScript1_241AB5
	map_script 2, BattleFrontier_BattleTowerCorridor_MapScript2_241AE6
	.byte 0

BattleFrontier_BattleTowerCorridor_MapScript1_241AB5: @ 8241AB5
	compare VAR_0x8006, 1
	goto_eq BattleFrontier_BattleTowerCorridor_EventScript_241AD3
	setmetatile 12, 0, 519, 0
	setmetatile 12, 1, 527, 0
	end

BattleFrontier_BattleTowerCorridor_EventScript_241AD3:: @ 8241AD3
	setmetatile 15, 0, 519, 0
	setmetatile 15, 1, 527, 0
	end

BattleFrontier_BattleTowerCorridor_MapScript2_241AE6: @ 8241AE6
	map_script_2 VAR_0x4000, 0, BattleFrontier_BattleTowerCorridor_EventScript_241AF0
	.2byte 0

BattleFrontier_BattleTowerCorridor_EventScript_241AF0:: @ 8241AF0
	setvar VAR_0x4000, 1
	compare VAR_0x8006, 1
	goto_eq BattleFrontier_BattleTowerCorridor_EventScript_241B16
	applymovement 1, BattleFrontier_BattleTowerCorridor_Movement_241B3A
	applymovement 255, BattleFrontier_BattleTowerCorridor_Movement_241B39
	waitmovement 0
	goto BattleFrontier_BattleTowerCorridor_EventScript_241B27

BattleFrontier_BattleTowerCorridor_EventScript_241B16:: @ 8241B16
	applymovement 1, BattleFrontier_BattleTowerCorridor_Movement_241B37
	applymovement 255, BattleFrontier_BattleTowerCorridor_Movement_241B36
	waitmovement 0

BattleFrontier_BattleTowerCorridor_EventScript_241B27:: @ 8241B27
	setvar VAR_0x4000, 0
	warp BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 255, 4, 8
	waitstate
	end

BattleFrontier_BattleTowerCorridor_Movement_241B36: @ 8241B36
	step_right

BattleFrontier_BattleTowerCorridor_Movement_241B37: @ 8241B37
	step_right
	step_right

BattleFrontier_BattleTowerCorridor_Movement_241B39: @ 8241B39
	step_right

BattleFrontier_BattleTowerCorridor_Movement_241B3A: @ 8241B3A
	step_right
	step_right
	step_right
	step_up
	step_54
	step_end

