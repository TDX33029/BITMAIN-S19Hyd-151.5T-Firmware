// FUN_00f96018 @ 00f96018 size=156 calls_out=5 calls_in=6
// strings: 

void FUN_00f96018(int *param_1)

{
  uint uVar1;
  
  FUN_00f80320(param_1[0x38],param_1[0x39]);
  FUN_005f6438(param_1[0x34],param_1[0x35]);
  uVar1 = param_1[0x10];
  if ((uVar1 != 3 || param_1[0x11] != 0) &&
     ((uint)-param_1[0x11] < (uint)(uVar1 < 4) || (uVar1 & 6) != 4)) {
    FUN_005f6588();
  }
  FUN_012840cc(param_1 + 0x2c);
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0142e6dc(param_1);
  }
  FUN_012840cc(param_1 + 0x30);
  return;
}

