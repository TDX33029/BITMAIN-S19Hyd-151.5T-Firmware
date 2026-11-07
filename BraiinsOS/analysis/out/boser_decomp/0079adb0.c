// FUN_0079adb0 @ 0079adb0 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_0079adb0(int param_1)

{
  if (*(char *)(param_1 + 0x141) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138));
    return;
  }
  if (*(char *)(param_1 + 0x141) == '\x03') {
    FUN_0079ae1c(param_1);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x128));
    *(undefined1 *)(param_1 + 0x140) = 0;
    return;
  }
  return;
}

