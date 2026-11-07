// FUN_0004e2c4 @ 0004e2c4  size=520
// callers: [FUN_0004f034, FUN_0004f1d4, FUN_0004fe60, FUN_0004eae4, FUN_00050390, FUN_0004e960, FUN_0004e544, FUN_0004e718, FUN_0004ea28, FUN_000506f8, FUN_0004e648, FUN_0004e7fc]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004e2c4(undefined4 param_1,char *param_2,uint param_3,short *param_4,uint param_5)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_829;
  char local_828 [4];
  char acStack_824 [4];
  char acStack_820 [4];
  char acStack_81c [4];
  char local_818 [4];
  char acStack_814 [4];
  char acStack_810 [4];
  char acStack_80c [4];
  char local_808 [4];
  char acStack_804 [4];
  char acStack_800 [4];
  char acStack_7fc [4];
  undefined2 local_7f8;
  
  local_829 = 0x11;
  if ((param_5 & 1) == 0) {
    pthread_mutex_lock(DAT_0004e4cc);
    cVar2 = '\x04';
    do {
      uVar5 = 0;
      do {
        pcVar4 = param_2 + uVar5;
        uVar5 = uVar5 + 1 & 0xff;
        FUN_00050e30(param_1,&local_829,1,pcVar4,1,0);
      } while (uVar5 < param_3);
      usleep(500000);
      uVar5 = 0;
      do {
        pcVar4 = (char *)((int)param_4 + uVar5);
        uVar5 = uVar5 + 1 & 0xff;
        FUN_00050d88(param_1,&local_829,1,pcVar4,1,0);
      } while (uVar5 < param_5);
      usleep(100000);
      sVar3 = 0;
      psVar1 = param_4;
      do {
        psVar1 = psVar1 + 1;
        sVar3 = sVar3 + *psVar1;
      } while ((short *)((int)param_4 + (param_5 - 5 & 0xfffffffe) + 2) != psVar1);
      if ((((sVar3 == CONCAT11(*(char *)((int)param_4 + (param_5 - 1)),
                               *(char *)((int)param_4 + (param_5 - 2)))) &&
           (*param_2 == (char)*param_4)) && (param_2[1] == *(char *)((int)param_4 + 1))) &&
         ((param_2[3] == *(char *)((int)param_4 + 3) && (param_5 == *(byte *)(param_4 + 1) + 2)))) {
        uVar6 = 0;
        goto LAB_0004e450;
      }
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    uVar6 = 0x80000300;
LAB_0004e450:
    pthread_mutex_unlock(DAT_0004e4cc);
  }
  else {
    uVar6 = 0xffffffff;
    local_828 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._0_4_;
    acStack_824 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._4_4_;
    acStack_820 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._8_4_;
    acStack_81c = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._12_4_;
    local_818 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._16_4_;
    acStack_814 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._20_4_;
    acStack_810 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._24_4_;
    acStack_80c = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._28_4_;
    local_808 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._32_4_;
    acStack_804 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._36_4_;
    acStack_800 = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._40_4_;
    acStack_7fc = (char  [4])s_WARNING__exec_power_cmd_v2_only_s_00072ad4._44_4_;
    local_7f8 = (undefined2)ram0x00072b04;
    FUN_00032218(3,local_828,0);
  }
  return uVar6;
}


