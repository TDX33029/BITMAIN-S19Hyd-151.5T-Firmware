// FUN_01125c18 @ 01125c18 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_01125c18(int param_1)

{
  if (*(char *)(param_1 + 0x978) == '\0') {
    FUN_005fa5c4();
    return;
  }
  if (*(char *)(param_1 + 0x978) == '\x03') {
    FUN_01125c38(param_1 + 0x248);
    return;
  }
  return;
}

