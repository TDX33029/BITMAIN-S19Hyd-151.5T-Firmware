// FUN_009f6fb8 @ 009f6fb8 size=76 calls_out=4 calls_in=18
// strings: 

void FUN_009f6fb8(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\x03') {
    FUN_009e8dc0(param_1 + 0x18);
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

