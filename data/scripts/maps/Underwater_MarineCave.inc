Underwater_MarineCave_MapScripts:: @ 823AFB8
	map_script 5, Underwater_MarineCave_MapScript1_23AFC7
	map_script 3, Underwater_MarineCave_MapScript1_23AFC3
	.byte 0

Underwater_MarineCave_MapScript1_23AFC3: @ 823AFC3
	setflag FLAG_0x8D9
	end

Underwater_MarineCave_MapScript1_23AFC7: @ 823AFC7
	setdivewarp MARINE_CAVE_ENTRANCE, 255, 10, 17
	end

