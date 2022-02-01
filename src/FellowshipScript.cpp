/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#include "ScriptMgr.h"
#include "FellowshipMgr.h"
#include "Log.h"
#include "Config.h"
#include "WorldSession.h"
// #include "Player.h"
// #include "Chat.h"


// Add player scripts
/*class Fellowship_PlayerScript : public PlayerScript
{
public:
    Fellowship() : PlayerScript("Fellowship") { }

    void OnLogin(Player* player) override
    {
        if (sConfigMgr->GetOption<bool>("Fellowship.Enable", false))
        {
            ChatHandler(player->GetSession()).SendSysMessage("Hello World from Fellowship!");
        }
    }
};*/

class Fellowship_WorldScript : public WorldScript
{
public:
    Fellowship_WorldScript() : WorldScript("Fellowship_WorldScript") { }

    void OnBeforeConfigLoad(bool /*reload*/) override
    {
        sFellowshipMgr->InitializeConfiguration();
    }

    void OnStartup() override
    {
        LOG_INFO("server.loading", "Initialize Fellowship...");
        sFellowshipMgr->Initialize();
    }
};

// Add all scripts in one
void AddFellowshipScripts()
{
    new Fellowship_WorldScript();
}
