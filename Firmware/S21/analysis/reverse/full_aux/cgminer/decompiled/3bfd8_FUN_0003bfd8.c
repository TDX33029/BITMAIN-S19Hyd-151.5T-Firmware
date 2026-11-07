// FUN_0003bfd8 @ 0003bfd8  size=232  callers=1
// program: cgminer


int FUN_0003bfd8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_810 [2048];
  
  FUN_000314b0(param_1 + 0x24);
  iVar1 = FUN_0001fe44(param_2 + 0xc0,param_2 + 0xa0);
  if (iVar1 != 0) {
    uVar2 = FUN_0002d974();
    FUN_0002a654(uVar2,param_2,0);
    FUN_0003b884(uVar2);
    return iVar1;
  }
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
    snprintf(acStack_810,0x800,"%s %s %d: Share above target","submit_tested_work",
             *(char **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 8),
             *(int *)(*(int *)(param_1 + 0x24) + 8));
    FUN_0001dd98(6,acStack_810,0);
  }
  return 0;
}

