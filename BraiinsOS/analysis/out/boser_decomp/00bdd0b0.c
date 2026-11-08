// FUN_00bdd0b0 @ 00bdd0b0 size=152 calls_out=2 calls_in=1
// strings: 

void FUN_00bdd0b0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    if (param_1[3] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0x12) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_019bb7e0(param_1[8],param_1[9]);
    if (param_1[0xb] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
    return;
  }
  if (*(char *)(param_1 + 0x11) == '\x03') {
    FUN_01139b38(param_1[0xf],param_1[0x10]);
    return;
  }
  return;
}

