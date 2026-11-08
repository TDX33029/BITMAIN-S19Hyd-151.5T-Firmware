// FUN_00a16ca0 @ 00a16ca0 size=60 calls_out=3 calls_in=0
// strings: 

void FUN_00a16ca0(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x03') {
    FUN_00a07b4c(param_1 + 0x20);
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\x04') {
    FUN_00a9abbc(param_1 + 0x30);
    FUN_005c3320(param_1 + 0x30);
    return;
  }
  return;
}

