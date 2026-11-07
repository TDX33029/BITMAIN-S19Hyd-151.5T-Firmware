// FUN_00973090 @ 00973090 size=68 calls_out=4 calls_in=2
// strings: 

void FUN_00973090(int param_1)

{
  if (*(char *)(param_1 + 0x54) == '\x03') {
    FUN_00973100(param_1 + 0x58);
  }
  else {
    if (*(char *)(param_1 + 0x54) != '\x04') {
      return;
    }
    FUN_00a07b4c(param_1 + 0x88);
    FUN_008e7734(param_1 + 0x58);
  }
  FUN_007c50c4(param_1 + 4);
  return;
}

