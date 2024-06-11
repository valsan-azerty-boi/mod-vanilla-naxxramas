/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#include "VanillaNaxxramas.h"

void AddSC_omarion_40();
void AddSC_instance_naxxramas_combined();
void AddSC_boss_anubrekhan_40();
void AddSC_boss_faerlina_40();
void AddSC_boss_four_horsemen_40();
void AddSC_boss_gluth_40();
void AddSC_boss_gothik_40();
void AddSC_boss_grobbulus_40();
void AddSC_boss_heigan_40();
void AddSC_boss_kelthuzad_40();
void AddSC_boss_loatheb_40();
void AddSC_boss_maexxna_40();
void AddSC_boss_noth_40();
void AddSC_boss_patchwerk_40();
void AddSC_boss_razuvious_40();
void AddSC_boss_sapphiron_40();
void AddSC_boss_thaddius_40();
void AddSC_custom_spells_40();
void AddSC_custom_creatures_40();
void AddSC_custom_gameobjects_40();

void AddNaxxramas_Scripts()
{
    if (!(sConfigMgr->GetOption<bool>("VanillaNaxxramas.Naxxramas", false)))
        return;
    AddSC_omarion_40();
    AddSC_instance_naxxramas_combined();
    AddSC_boss_anubrekhan_40();
    AddSC_boss_faerlina_40();
    AddSC_boss_four_horsemen_40();
    AddSC_boss_gluth_40();
    AddSC_boss_gothik_40();
    AddSC_boss_grobbulus_40();
    AddSC_boss_heigan_40();
    AddSC_boss_kelthuzad_40();
    AddSC_boss_loatheb_40();
    AddSC_boss_maexxna_40();
    AddSC_boss_noth_40();
    AddSC_boss_patchwerk_40();
    AddSC_boss_razuvious_40();
    AddSC_boss_sapphiron_40();
    AddSC_boss_thaddius_40();
    AddSC_custom_spells_40();
    AddSC_custom_creatures_40();
    AddSC_custom_gameobjects_40();
}
