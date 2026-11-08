// FUN_00db1dcc @ 00db1dcc size=76 calls_out=4 calls_in=23
// strings: 

void FUN_00db1dcc(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\x03') {
    FUN_00db1814(param_1 + 0x18);
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

