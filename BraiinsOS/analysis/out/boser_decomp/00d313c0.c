// FUN_00d313c0 @ 00d313c0 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_00d313c0(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 1) {
    if (param_1[4] == 0) {
      return;
    }
    FUN_01443048(param_1[4],param_1[5]);
    return;
  }
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = (uint)(byte)param_1[0x16];
  }
  if (bVar2 && uVar1 == 3) {
    FUN_01431b40(param_1 + 2);
    return;
  }
  return;
}

