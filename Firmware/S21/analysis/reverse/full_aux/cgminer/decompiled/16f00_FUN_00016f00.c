// FUN_00016f00 @ 00016f00  size=520  callers=0
// program: cgminer


undefined4 FUN_00016f00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined2 local_824 [2];
  char acStack_820 [2052];
  
  local_824[0] = 0;
  if (param_2 == 0 || param_1 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_820,0x800,"%s: input bad api param\n","get_stats");
      FUN_0001dd98(3,acStack_820,0);
    }
    return 0x80000002;
  }
  FUN_000427b4(local_824,1);
  FUN_00016de4(param_1,param_2);
  FUN_00016920(param_1);
  uVar1 = FUN_00048fb8();
  iVar2 = 0;
  if (0 < DAT_00074ff0) {
    do {
      iVar5 = iVar2 + 1;
      iVar2 = FUN_0002e054(iVar2);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) &&
         (pcVar4 = *(code **)(*(int *)(iVar2 + 4) + 0x1c), pcVar4 != (code *)0x0)) {
        uVar3 = (*pcVar4)();
        FUN_00049f0c(uVar1,uVar3);
      }
      iVar2 = iVar5;
    } while (iVar5 < DAT_00074ff0);
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_820,0x800,
             "total_mhashes_done = %lf\n new_total_mhashes_done = %lf\n total_secs = %lf\n, new_total_secs = %lf"
             ,0x72d98,(ulong)DAT_00072d98,DAT_00072d98._4_4_,DAT_00072ee0);
    FUN_0001dd98(7,acStack_820,0);
  }
  FUN_00049a4c(param_1,"STATS",uVar1);
  return 0;
}

