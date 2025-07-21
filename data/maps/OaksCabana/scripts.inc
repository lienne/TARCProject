OaksCabana_MapScripts::
	.byte 0

OaksCabana_EventScript_ReceiveMons::
	lockall
	faceplayer
	msgbox OaksCabana_Text_TempDialogue, MSGBOX_DEFAULT
	givemon SPECIES_SCRAGGY, 30
	givemon SPECIES_ARCHEN, 30
	givemon SPECIES_SABLEYE, 30
	givemon SPECIES_LARVESTA, 30
	givemon SPECIES_SALANDIT, 30
	givemon SPECIES_DEERLING, 30
	givemon SPECIES_PAWMO, 30
	givemon SPECIES_STARAVIA, 30
	givemon SPECIES_VIBRAVA, 30
	givemon SPECIES_ROTOM, 30
	givemon SPECIES_PILOSWINE, 30
	givemon SPECIES_SNOVER, 30
	givemon SPECIES_METANG, 30
	givemon SPECIES_TYRUNT, 30
	givemon SPECIES_MAWILE, 30
	givemon SPECIES_BEEDRILL, 30
	givemon SPECIES_AZUMARILL, 30
	givemon SPECIES_STARYU, 30
	releaseall
	end


OaksCabana_Text_TempDialogue:
	.string "Generating Pokemon Sets...\p"
	.string "Did it work?$"
