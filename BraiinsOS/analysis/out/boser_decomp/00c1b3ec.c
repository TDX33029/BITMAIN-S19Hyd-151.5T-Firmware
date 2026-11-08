// FUN_00c1b3ec @ 00c1b3ec size=120 calls_out=2 calls_in=1
// strings: 

void FUN_00c1b3ec(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0x14) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    FUN_019bb7e0(param_1[8],param_1[9]);
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
    return;
  }
  if (*(char *)(param_1 + 0x13) == '\x03') {
    FUN_01139b38(param_1[0x11],param_1[0x12]);
    return;
  }
  return;
}

