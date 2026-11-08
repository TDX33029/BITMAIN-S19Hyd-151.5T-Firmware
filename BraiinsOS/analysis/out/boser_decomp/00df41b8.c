// FUN_00df41b8 @ 00df41b8 size=76 calls_out=4 calls_in=17
// strings: 

void FUN_00df41b8(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\x03') {
    FUN_00df3ef0(param_1 + 0x18);
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

