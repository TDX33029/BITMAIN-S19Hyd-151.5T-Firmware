// FUN_015aa5f4 @ 015aa5f4 size=164 calls_out=3 calls_in=2
// strings: 

void FUN_015aa5f4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0134bd64(param_1[0x15],param_1[0x16]);
  if (param_1[0x12] != -0x80000000) {
    FUN_0134bd64(param_1[0x12],param_1[0x13]);
  }
  FUN_0134bd64(param_1[0x18],param_1[0x19]);
  FUN_0134bd64(param_1[0x1b],param_1[0x1c]);
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (uVar2 = iVar1 * 0x11 + 0x14U & 0xfffffffc, iVar1 + uVar2 != -5)) {
    thunk_FUN_01be4678(*param_1 - uVar2);
  }
  FUN_015a8f24(param_1 + 0x1e);
  iVar1 = param_1[9];
  if ((iVar1 != 0) && (iVar3 = iVar1 * 8 + 8, iVar1 + iVar3 != -5)) {
    thunk_FUN_01be4678(param_1[8] - iVar3);
  }
  iVar1 = param_1[0x22];
  FUN_015e8be0(iVar1,param_1[0x23]);
  FUN_0134aee0(param_1[0x21],iVar1,4,0x14);
  return;
}

