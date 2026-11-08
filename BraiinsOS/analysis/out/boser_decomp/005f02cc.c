// FUN_005f02cc @ 005f02cc size=84 calls_out=3 calls_in=6
// strings: 

void FUN_005f02cc(int param_1)

{
  if (*(char *)(param_1 + 0x549) == '\0') {
    FUN_005f6b38(param_1 + 0x468);
    return;
  }
  if (*(char *)(param_1 + 0x549) == '\x03') {
    FUN_005fc39c(param_1);
    *(undefined2 *)(param_1 + 0x546) = 0;
    *(undefined1 *)(param_1 + 0x548) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x454),*(undefined4 *)(param_1 + 0x458));
    return;
  }
  return;
}

