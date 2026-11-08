// FUN_00c33fc8 @ 00c33fc8 size=60 calls_out=3 calls_in=1
// strings: 

void FUN_00c33fc8(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_006a41c0(param_1 + 3);
    return;
  }
  if (*(char *)(param_1 + 0x12) == '\x03') {
    FUN_00c33f78(param_1 + 8);
    return;
  }
  return;
}

