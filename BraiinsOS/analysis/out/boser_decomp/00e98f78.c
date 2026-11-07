// FUN_00e98f78 @ 00e98f78 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00e98f78(int param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x30) < 5) && ((1 << (uint)*(byte *)(param_1 + 0x30) & 0x16U) != 0)) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 < 0xb) {
    if ((1 << (uVar1 & 0xff) & 0x4fbU) != 0) {
      return;
    }
    if (uVar1 == 2) {
      FUN_006a41c0(param_1 + 0x38);
      return;
    }
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  return;
}

