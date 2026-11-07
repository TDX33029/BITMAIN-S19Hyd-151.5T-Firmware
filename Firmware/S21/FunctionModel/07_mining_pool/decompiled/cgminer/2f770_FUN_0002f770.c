// FUN_0002f770 @ 0002f770  size=832  callers=0
// program: cgminer


void FUN_0002f770(void)

{
  int iVar1;
  int iVar2;
  char local_820 [20];
  undefined4 local_80c;
  char acStack_808 [2024];
  
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
    if (DAT_000686f1 == '\0') goto LAB_0002f838;
LAB_0002fa48:
    if (DAT_00067848 < 7) goto LAB_0002f838;
  }
  else {
    builtin_strncpy(local_820,"Received kill messag",0x14);
    local_80c._0_1_ = 'e';
    local_80c._1_1_ = '\0';
    FUN_0001dd98(6,local_820,1);
    if (DAT_000686f1 == '\0') goto LAB_0002f838;
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0002fa48;
  }
  builtin_strncpy(local_820,"Killing off watchpoo",0x14);
  local_80c._0_1_ = 'l';
  local_80c._1_1_ = ' ';
  local_80c._2_1_ = 't';
  local_80c._3_1_ = 'h';
  builtin_strncpy(acStack_808,"read",5);
  FUN_0001dd98(7,local_820,1);
LAB_0002f838:
  FUN_00023258(FUN_000202bc,DAT_00072dd0 + DAT_00068b78 * 0x40,1000);
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    builtin_strncpy(local_820,"Killing off watchdog",0x14);
    local_80c._0_1_ = ' ';
    local_80c._1_1_ = 't';
    local_80c._2_1_ = 'h';
    local_80c._3_1_ = 'r';
    builtin_strncpy(acStack_808,"ead",4);
    FUN_0001dd98(7,local_820,1);
  }
  FUN_00023258(FUN_000202bc,DAT_00072dd0 + DAT_00068b7c * 0x40,1000);
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    builtin_strncpy(local_820,"Shutting down mining",0x14);
    local_80c._0_1_ = ' ';
    local_80c._1_1_ = 't';
    local_80c._2_1_ = 'h';
    local_80c._3_1_ = 'r';
    builtin_strncpy(acStack_808,"eads",5);
    FUN_0001dd98(7,local_820,1);
  }
  if (0 < DAT_00076238) {
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      iVar1 = FUN_0002f6e8(iVar1);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
        *(undefined1 *)(*(int *)(iVar1 + 0x24) + 0x16c) = 1;
      }
      iVar1 = iVar2;
    } while (iVar2 < DAT_00076238);
  }
  sleep(1);
  FUN_00023258(&DAT_0002fac8,0,3000);
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    builtin_strncpy(local_820,"Killing off API thre",0x14);
    local_80c._0_1_ = 'a';
    local_80c._1_1_ = 'd';
    local_80c._2_1_ = '\0';
    FUN_0001dd98(7,local_820,1);
  }
  FUN_00023258(FUN_000202bc,DAT_00072dd0 + DAT_00068b80 * 0x40,1000);
  return;
}

