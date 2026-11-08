// FUN_016c9114 @ 016c9114 size=76 calls_out=2 calls_in=5
// strings: 

void FUN_016c9114(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar2 = *param_1;
    FUN_016c9160(iVar2,param_1[3]);
    iVar1 = iVar3 * 0xc + 0xc;
    if (iVar3 + iVar1 != -5) {
      thunk_FUN_01be4678(iVar2 - iVar1);
      return;
    }
  }
  return;
}

