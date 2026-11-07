// FUN_014bfd18 @ 014bfd18 size=136 calls_out=3 calls_in=2
// strings: 

void FUN_014bfd18(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 - 3U < 2) {
    return;
  }
  if (iVar1 == 2) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    if (*(int *)(param_1 + 0x60) != 2) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    }
    iVar2 = *(int *)(param_1 + 0x50);
    iVar1 = 0x50;
  }
  else {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0xa0) != 2) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
    }
    FUN_014c9d78(param_1 + 0x4c);
    iVar2 = *(int *)(param_1 + 0x90);
    iVar1 = 0x90;
  }
  if (iVar2 == 0) {
    return;
  }
  FUN_01960c70(param_1 + 4 + iVar1);
  return;
}

