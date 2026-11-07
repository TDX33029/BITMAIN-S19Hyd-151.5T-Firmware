// FUN_015d19e4 @ 015d19e4 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_015d19e4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar2 = *param_1;
    FUN_015d1a30(iVar2,param_1[3]);
    iVar1 = iVar3 * 0xb0 + 0xb0;
    if (iVar3 + iVar1 != -5) {
      thunk_FUN_01be4678(iVar2 - iVar1);
      return;
    }
  }
  return;
}

