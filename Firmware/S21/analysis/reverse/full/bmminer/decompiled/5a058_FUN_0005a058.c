// FUN_0005a058 @ 0005a058  size=168  callers=0
// program: bmminer


void FUN_0005a058(int param_1)

{
  int iVar1;
  char acStack_2010 [8196];
  
  iVar1 = param_1;
  if (4 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"[DEBUG] Check if chain is unbalance happen, chain = %d.\n",param_1
            );
    iVar1 = FUN_0004948c(4,acStack_2010,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      FUN_00059694(iVar1);
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_00944b84 + 4) + 0x24))(param_1);
  }
  return;
}

