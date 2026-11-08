// FUN_019c5164 @ 019c5164 size=156 calls_out=4 calls_in=2
// strings: 

void FUN_019c5164(int param_1)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar2;
  int iVar3;
  
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  FUN_006a41c0(param_1 + 0xcc);
  if (*(int *)(param_1 + 0xf0) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4));
  }
  FUN_006a41c0(param_1 + 0xd8);
  iVar2 = extraout_r1;
  if (*(int *)(param_1 + 0xfc) != -0x80000000) {
    FUN_0134bd64();
    iVar2 = extraout_r1_00;
  }
  if (*(int *)(param_1 + 0x108) != -0x80000000) {
    FUN_0134bd64();
    iVar2 = extraout_r1_01;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x84);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (iVar3 = iVar2 * 4 + 4, iVar2 + iVar3 != -5)) {
    thunk_FUN_01be4678(iVar1 - iVar3);
  }
  FUN_019c5214(*(undefined4 *)(param_1 + 0x11c));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
  return;
}

