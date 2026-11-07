// FUN_00ed3ad0 @ 00ed3ad0 size=128 calls_out=6 calls_in=1
// strings: 

void FUN_00ed3ad0(uint *param_1)

{
  if ((*param_1 & 3) == 2) {
    FUN_005f6588(param_1 + 2);
    return;
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_019bb7e0(param_1[0x36],param_1[0x37]);
  FUN_00d8fdbc(param_1 + 0x28);
  FUN_00d8fde4(param_1 + 0x42);
  FUN_019bb7e0(param_1[0x39],param_1[0x3a]);
  FUN_019bb7e0(param_1[0x3c],param_1[0x3d]);
  FUN_019bb7e0(param_1[0x3f],param_1[0x40]);
  FUN_00d8fe0c(param_1 + 4);
  if (param_1[0x49] != 0x80000000) {
    FUN_019bb7e0(param_1[0x49],param_1[0x4a]);
  }
  FUN_00d4fd6c(param_1 + 0x16);
  return;
}

