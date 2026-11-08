// FUN_01aed308 @ 01aed308 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_01aed308(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 4;
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x80000000;
  }
  if (uVar1 != 4) {
    if (uVar1 == 0x1b) {
      FUN_016bcae0(param_1 + 4);
      return;
    }
    return;
  }
  if (((char)param_1[3] == '\0') && (param_1[4] != 0x80000000)) {
    FUN_0134bd64(param_1[4],param_1[5]);
  }
  FUN_006a41c0(param_1);
  return;
}

