// FUN_00d4fd6c @ 00d4fd6c size=104 calls_out=2 calls_in=4
// strings: 

void FUN_00d4fd6c(int *param_1)

{
  uint uVar1;
  
  if ((*param_1 == 2 && param_1[1] == 0) ||
     ((*(byte *)(param_1 + 0xc) < 5 && ((1 << (uint)*(byte *)(param_1 + 0xc) & 0x16U) != 0)))) {
    return;
  }
  uVar1 = param_1[0xd];
  if (uVar1 < 0xb) {
    if ((1 << (uVar1 & 0xff) & 0x4fbU) != 0) {
      return;
    }
    if (uVar1 == 2) {
      FUN_006a41c0(param_1 + 0xe);
      return;
    }
  }
  FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  return;
}

