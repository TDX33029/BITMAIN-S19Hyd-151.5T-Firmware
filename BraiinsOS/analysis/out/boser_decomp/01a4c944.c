// FUN_01a4c944 @ 01a4c944 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_01a4c944(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && (iVar2 = iVar1 * 4 + 4, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0xc) - iVar2);
  }
  FUN_01a4c988(param_1);
  return;
}

