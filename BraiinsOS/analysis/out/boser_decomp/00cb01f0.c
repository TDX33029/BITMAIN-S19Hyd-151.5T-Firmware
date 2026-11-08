// FUN_00cb01f0 @ 00cb01f0 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00cb01f0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00cb01b4(param_1 + 8);
    return;
  }
  return;
}

