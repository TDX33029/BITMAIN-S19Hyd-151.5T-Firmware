// FUN_0141c8d4 @ 0141c8d4 size=52 calls_out=4 calls_in=5
// strings: 

void FUN_0141c8d4(int param_1)

{
  int iVar1;
  
  FUN_00a517d8();
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    FUN_0148eea4(iVar1);
    thunk_FUN_016d3fb4(iVar1);
  }
  FUN_0141852c(param_1 + 0x48);
  return;
}

