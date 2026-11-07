// FUN_019c6e68 @ 019c6e68 size=156 calls_out=4 calls_in=1
// strings: 

void FUN_019c6e68(int param_1)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar2;
  int iVar3;
  
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  FUN_006a41c0(param_1 + 0xc4);
  if (*(int *)(param_1 + 0xe8) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
  }
  FUN_006a41c0(param_1 + 0xd0);
  iVar2 = extraout_r1;
  if (*(int *)(param_1 + 0xf4) != -0x80000000) {
    FUN_0134bd64();
    iVar2 = extraout_r1_00;
  }
  if (*(int *)(param_1 + 0x100) != -0x80000000) {
    FUN_0134bd64();
    iVar2 = extraout_r1_01;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (iVar3 = iVar2 * 4 + 4, iVar2 + iVar3 != -5)) {
    thunk_FUN_01be4678(iVar1 - iVar3);
  }
  FUN_019c5214(*(undefined4 *)(param_1 + 0x114));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0));
  return;
}

