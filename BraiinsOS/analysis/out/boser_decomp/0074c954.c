// FUN_0074c954 @ 0074c954 size=64 calls_out=2 calls_in=3
// strings: 

void FUN_0074c954(int param_1)

{
  if (*(char *)(param_1 + 0x375) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x36c));
    return;
  }
  if (*(char *)(param_1 + 0x375) == '\x03') {
    FUN_0074dba0(param_1);
    *(undefined1 *)(param_1 + 0x374) = 0;
    return;
  }
  return;
}

