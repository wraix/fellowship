/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
*/

#include "ScriptMgr.h"
#include "FellowshipMgr.h"
#include "Log.h"
#include "Config.h"

FellowshipMgr::FellowshipMgr() {

}

FellowshipMgr::~FellowshipMgr()
{
}

void FellowshipMgr::InitializeConfiguration()
{
    bEnable = sConfigMgr->GetOption<bool>("Fellowship.Enable", false);
}

void FellowshipMgr::Initialize() {
  LOG_INFO("module", "Fellowship have been loaded.");
}
