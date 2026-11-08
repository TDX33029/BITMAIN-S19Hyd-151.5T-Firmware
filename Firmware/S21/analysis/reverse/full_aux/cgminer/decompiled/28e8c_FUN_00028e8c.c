// FUN_00028e8c @ 00028e8c  size=312  callers=0
// program: cgminer


undefined4 FUN_00028e8c(int *param_1)

{
  int iVar1;
  time_t tVar2;
  int iVar3;
  int iVar4;
  char acStack_820 [16];
  char local_810 [2048];
  
  iVar4 = param_1[9];
  iVar3 = *(int *)(iVar4 + 4);
  snprintf(acStack_820,0x10,"%d/Miner",*param_1);
  FUN_00022ed0(acStack_820);
  FUN_000287cc(param_1);
  iVar1 = (**(code **)(iVar3 + 0x34))(param_1);
  if (iVar1 == 0) {
    FUN_00022bec(iVar4);
    return 0;
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    builtin_strncpy(local_810,"Waiting on sem in miner thread",0x1f);
    FUN_0001dd98(7,local_810,0);
  }
  FUN_00023050(param_1 + 4,"cgminer.c","miner_thread",0x26a6);
  tVar2 = time((time_t *)0x0);
  *(time_t *)(iVar4 + 0xe8) = tVar2;
  (**(code **)(iVar3 + 0x3c))(param_1);
  (**(code **)(iVar3 + 0x58))(param_1);
  return 0;
}

