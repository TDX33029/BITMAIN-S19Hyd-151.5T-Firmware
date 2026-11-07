// FUN_00f58dd0 @ 00f58dd0 size=52 calls_out=2 calls_in=6
// strings: 

void FUN_00f58dd0(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 < 9) {
    if ((1 << uVar1 & 0xfbU) != 0) {
      return;
    }
    if (uVar1 == 2) {
      FUN_006a41c0(param_1 + 4);
      return;
    }
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

