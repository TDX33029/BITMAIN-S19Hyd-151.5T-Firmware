// FUN_0003e8a0 @ 0003e8a0  size=168  callers=1
// program: bmminer


void FUN_0003e8a0(int param_1)

{
  int iVar1;
  char acStack_810 [2052];
  
  iVar1 = param_1;
  if (4 < DAT_00087bbc) {
    snprintf(acStack_810,0x800,"[DEBUG] Check if recv nonce enough, chain = %d.\n",param_1);
    iVar1 = FUN_00032218(4,acStack_810,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      FUN_0003dc10(iVar1);
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_0050748c + 4) + 0x28))(param_1);
  }
  return;
}

