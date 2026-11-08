// FUN_008ef1d8 @ 008ef1d8 size=40 calls_out=2 calls_in=2
// strings: 

void FUN_008ef1d8(int param_1)

{
  if (*(char *)(param_1 + 0x624) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x618),*(undefined4 *)(param_1 + 0x61c));
    return;
  }
  if (*(char *)(param_1 + 0x624) == '\x03') {
    FUN_008ef0e8();
    return;
  }
  return;
}

