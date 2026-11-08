// FUN_006775a8 @ 006775a8 size=148 calls_out=7 calls_in=1
// strings: 

void FUN_006775a8(undefined4 *param_1)

{
  if (*(char *)((int)param_1 + 0xd5) != '\0') {
    if (*(char *)((int)param_1 + 0xd5) == '\x03') {
      FUN_01139b38(*param_1,param_1[1]);
      *(undefined1 *)(param_1 + 0x35) = 0;
      return;
    }
    return;
  }
  FUN_019bb7e0(param_1[0x2c],param_1[0x2d]);
  if (param_1[0x29] != -0x80000000) {
    FUN_019bb7e0(param_1[0x29],param_1[0x2a]);
  }
  FUN_007028c4(param_1 + 0x26);
  FUN_006775f0(param_1 + 0x2f);
  FUN_006b3d8c(param_1 + 0xc);
  FUN_006b3bf4(param_1 + 4);
  if (param_1[0x12] == -0x7fffffff) {
    return;
  }
  FUN_00f863d4(param_1 + 0x10);
  return;
}

