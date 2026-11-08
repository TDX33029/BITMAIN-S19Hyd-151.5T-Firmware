// FUN_0156af84 @ 0156af84 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_0156af84(int *param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  FUN_0134aee0(param_1[0x18],param_1[0x19],4,8);
  iVar1 = *param_1;
  iVar2 = extraout_r1;
  if (iVar1 != 0) {
    iVar2 = param_1[1];
  }
  if ((iVar1 != 0 && iVar2 != 0) && (iVar3 = iVar2 * 0xc + 0xc, iVar2 + iVar3 != -5)) {
    thunk_FUN_01be4678(iVar1 - iVar3);
  }
  if (param_1[0xc] == 0) {
    return;
  }
  FUN_0152acb8(param_1 + 0xc);
  return;
}

