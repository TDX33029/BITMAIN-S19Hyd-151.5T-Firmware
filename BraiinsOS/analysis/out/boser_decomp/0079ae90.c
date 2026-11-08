// FUN_0079ae90 @ 0079ae90 size=84 calls_out=4 calls_in=2
// strings: 

void FUN_0079ae90(int param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x03') {
    FUN_0079a974(param_1 + 0x38);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  if (*(char *)(param_1 + 0x19) == '\x04') {
    FUN_0079af4c(param_1 + 0x30);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    *(undefined1 *)(param_1 + 0x18) = 0;
    FUN_0079af8c(param_1 + 0x1c);
    return;
  }
  return;
}

