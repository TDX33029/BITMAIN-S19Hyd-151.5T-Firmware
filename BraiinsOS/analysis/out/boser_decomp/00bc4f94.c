// FUN_00bc4f94 @ 00bc4f94 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_00bc4f94(int param_1)

{
  if (*(char *)(param_1 + 0x978) == '\0') {
    FUN_005fa5c4();
    return;
  }
  if (*(char *)(param_1 + 0x978) == '\x03') {
    FUN_00bc4fb4(param_1 + 0x248);
    return;
  }
  return;
}

