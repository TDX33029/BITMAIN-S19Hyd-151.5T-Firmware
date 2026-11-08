// FUN_0107afa4 @ 0107afa4 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0107afa4(int param_1)

{
  if (*(char *)(param_1 + 0x654) == '\x03') {
    FUN_01039d3c(param_1 + 0xa0);
    param_1 = param_1 + 0x50;
  }
  else if (*(char *)(param_1 + 0x654) != '\0') {
    return;
  }
  FUN_01073b40(param_1);
  return;
}

