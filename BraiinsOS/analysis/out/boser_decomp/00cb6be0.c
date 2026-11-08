// FUN_00cb6be0 @ 00cb6be0 size=76 calls_out=3 calls_in=3
// strings: 

void FUN_00cb6be0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    FUN_019bb7e0(param_1[6],param_1[7]);
    FUN_006a41c0(param_1 + 9);
    return;
  }
  if (*(char *)(param_1 + 0x29) == '\x03') {
    FUN_00cb6b38(param_1 + 0xe);
    return;
  }
  return;
}

