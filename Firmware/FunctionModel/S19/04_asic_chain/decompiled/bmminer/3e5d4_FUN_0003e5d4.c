// FUN_0003e5d4 @ 0003e5d4  size=168  callers=0
// program: bmminer


void FUN_0003e5d4(int param_1)

{
  int iVar1;
  char acStack_810 [2052];
  
  iVar1 = param_1;
  if (4 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"[DEBUG] Check if chain is unbalance happen, chain = %d.\n",param_1);
    iVar1 = FUN_00032218(4,acStack_810,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      FUN_0003dc10(iVar1);
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_0050748c + 4) + 0x24))(param_1);
  }
  return;
}

