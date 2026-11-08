// FUN_0002b848 @ 0002b848  size=164  callers=1
// program: cgminer


undefined4 FUN_0002b848(int param_1,int param_2)

{
  int iVar1;
  char acStack_808 [2052];
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar1 + 0xec) != param_2) {
    *(int *)(iVar1 + 0xec) = param_2;
    return 1;
  }
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
    return 0;
  }
  snprintf(acStack_808,0x800,"%s %d duplicate share detected as HW error",
           *(char **)(*(int *)(iVar1 + 4) + 8),*(int *)(iVar1 + 8));
  FUN_0001dd98(6,acStack_808,0);
  return 0;
}

