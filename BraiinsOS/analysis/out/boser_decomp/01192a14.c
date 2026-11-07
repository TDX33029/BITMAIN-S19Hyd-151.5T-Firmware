// FUN_01192a14 @ 01192a14 size=76 calls_out=4 calls_in=63
// strings: 

void FUN_01192a14(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\x03') {
    FUN_011928d4(param_1 + 0x18);
  }
  else {
    if (*(char *)(param_1 + 0x15) != '\x04') {
      return;
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_009495dc(param_1 + 0x38);
    FUN_007bc140(param_1 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}

