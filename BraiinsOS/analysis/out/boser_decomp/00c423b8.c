// FUN_00c423b8 @ 00c423b8 size=76 calls_out=4 calls_in=68
// strings: 

void FUN_00c423b8(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\x03') {
    FUN_00c4274c(param_1 + 0x18);
  }
  else {
    if (*(char *)(param_1 + 0x15) != '\x04') {
      return;
    }
    FUN_00fe4378(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_009495dc(param_1 + 0x38);
    FUN_007bc140(param_1 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}

