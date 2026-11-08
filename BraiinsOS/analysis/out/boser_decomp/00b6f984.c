// FUN_00b6f984 @ 00b6f984 size=76 calls_out=5 calls_in=1
// strings: 

void FUN_00b6f984(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00b6fa50(param_1 + 0x18);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00b6fc94(param_1 + 0x3c);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_00b8d8f8(param_1 + 0xa8);
  }
  FUN_00b6fa00(param_1 + 8);
  return;
}

