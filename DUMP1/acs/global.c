#include "zcommon.acs"
#library "global"

script 999 ENTER
{
  int levelnum = GetLevelInfo(LEVELINFO_LEVELNUM);

    if (levelnum == 2) { HudMessage(s:"\cjhdoom got me into demons\n\cjand I have few regrets\n                       \cm- \cbSmashBroPlusB";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 3) { HudMessage(s:"\cjI wish there were more\n\cjcandelabras near the exit.\n                       \cm- \cbGardevoir";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 4) { HudMessage(s:"\cjfeels bad though\n                       \cm- \cb_sink";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 5) { HudMessage(s:"\cjFuck I just wasted time\n\cjmaking my map look pretty\n\cjinstead of finishing the layout.\n                       \cm- \cbDRL 3.33";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 6) { HudMessage(s:"\cjAdd this as a quote:\n                       \cm- \cbMystical";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 7) { HudMessage(s:"\cjHOW DO YOU PEOPLE MAP SO FAST\n\cjOMG\n                       \cm- \cbLaggyBlazko";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 8) { HudMessage(s:"\cjKotatsu dependence\n                       \cm- \cbKurashiki";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 9) { HudMessage(s:"\cjweekry hoppishi : kyou ha baron tokusyu\n                       \cm- \cbToooooasty";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 10) { HudMessage(s:"\cjSelf-inflicted sleep\n\cjdeprivation is awesome.\n                       \cm- \cbJimmy";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 11) { HudMessage(s:"\cjSo this is where all those\n\cjstolen hexagons are going.\n                       \cm- \cbSgt. Shivers";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 12) { HudMessage(s:"\cjI was supposed to put something here\n\cjbut I couldn't think of anything,\n\cjmuch like the layout of this map.\n                       \cm- \cbMarrub";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 13) { HudMessage(s:"\cjVoidfloors mean you\n\cjdon't have to decorate!\n                       \cm- \cbTerminusEst13";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 14) { HudMessage(s:"\cjHope you like using the chainsaw.\n                       \cm- \cbNyss";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 15) { HudMessage(s:"\cjGive me a moment--\n\cjWait, I don't have a moment.\n\cjLet's just roll with it.\n                       \cm- \cbLegoCS";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }
    if (levelnum == 16) { HudMessage(s:"\cjThree rooms and a single new monster.\n\cjKill me.\n                       \cm- \cbTerminusEst13";HUDMSG_TYPEON | HUDMSG_LOG,1423,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5); }

    if (levelnum == 20)
    {
    //SetHUDSize(320,240,0);
    SetFont("WA0rph4");
    HudMessage(s:"a";HUDMSG_TYPEON,1423,CR_UNTRANSLATED,0.1,0.75,7.00,0.05,0.5);
    SetFont("SMALLFONT");
    HudMessage(s:" \n \n \n \n \n \n                       \cm- \cbSgt. Shivers";HUDMSG_TYPEON | HUDMSG_LOG,1424,CR_UNTRANSLATED,0.1,0.75,5.00,0.05,0.5);
    }
}