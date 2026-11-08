// FUN_01a4caac @ 01a4caac size=76 calls_out=3 calls_in=2
// strings: 

void FUN_01a4caac(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_01a49da0(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x24) - iVar2);
  }
  FUN_01a4c988(param_1 + 0x18);
  return;
}

