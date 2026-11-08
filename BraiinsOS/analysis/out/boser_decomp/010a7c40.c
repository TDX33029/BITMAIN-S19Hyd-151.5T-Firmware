// FUN_010a7c40 @ 010a7c40 size=60 calls_out=3 calls_in=2
// strings: 

void FUN_010a7c40(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0xab) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0xab) == '\x03') {
    FUN_010a7e9c(param_1 + 0x25);
    FUN_010a7c94(param_1 + 5);
    return;
  }
  return;
}

