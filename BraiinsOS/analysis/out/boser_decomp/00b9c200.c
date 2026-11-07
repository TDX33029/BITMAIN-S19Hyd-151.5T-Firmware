// FUN_00b9c200 @ 00b9c200 size=56 calls_out=2 calls_in=11
// strings: 

void FUN_00b9c200(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0xf;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 == 0xe) {
    param_1 = param_1 + 1;
  }
  else if (uVar1 != 0xf) {
    if (uVar1 == 0x17) {
      FUN_019bb7e0(param_1[1],param_1[2]);
      return;
    }
    return;
  }
  FUN_00b9c308(param_1);
  return;
}

