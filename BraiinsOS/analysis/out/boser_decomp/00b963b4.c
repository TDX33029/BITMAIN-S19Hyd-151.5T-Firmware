// FUN_00b963b4 @ 00b963b4 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00b963b4(undefined4 *param_1)

{
  if (*(char *)((int)param_1 + 0xd5) == '\0') {
    FUN_00b96170(param_1 + 4);
    return;
  }
  if (*(char *)((int)param_1 + 0xd5) == '\x03') {
    FUN_01139b38(*param_1,param_1[1]);
    *(undefined1 *)(param_1 + 0x35) = 0;
    return;
  }
  return;
}

