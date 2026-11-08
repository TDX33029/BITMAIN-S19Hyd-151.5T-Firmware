// FUN_015d1ac0 @ 015d1ac0 size=164 calls_out=4 calls_in=1
// strings: 

void FUN_015d1ac0(int *param_1)

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
  FUN_015d1b84(param_1 + 0x21);
  return;
}

