// FUN_006bf3c8 @ 006bf3c8 size=116 calls_out=2 calls_in=1
// strings: 

void FUN_006bf3c8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (iVar2 = iVar1 * 0x14 + 0x14, iVar1 + iVar2 != -5)) {
    thunk_FUN_01be4678(*param_1 - iVar2);
  }
  iVar1 = param_1[9];
  if (iVar1 == 0) {
    return;
  }
  iVar2 = iVar1 * 8 + 8;
  if (iVar1 + iVar2 == -5) {
    return;
  }
  thunk_FUN_01be4678(param_1[8] - iVar2);
  return;
}

