// FUN_00c0d264 @ 00c0d264 size=176 calls_out=4 calls_in=1
// strings: 

void FUN_00c0d264(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    FUN_019bb7e0(param_1[6],param_1[7]);
    FUN_006a41c0(param_1 + 9);
    return;
  }
  if (*(char *)(param_1 + 0x29) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x27) == '\x03') {
    FUN_01139b38(param_1[0x25],param_1[0x26]);
    *(undefined1 *)((int)param_1 + 0xa1) = 0;
    FUN_0134aee0(param_1[0x22],param_1[0x23],1,4);
  }
  else if (*(char *)(param_1 + 0x27) != '\0') {
    return;
  }
  FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  FUN_019bb7e0(param_1[0x11],param_1[0x12]);
  FUN_019bb7e0(param_1[0x14],param_1[0x15]);
  FUN_006a41c0(param_1 + 0x17);
  return;
}

