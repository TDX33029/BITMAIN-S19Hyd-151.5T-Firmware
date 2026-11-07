// FUN_010eac34 @ 010eac34 size=68 calls_out=3 calls_in=2
// strings: 

void FUN_010eac34(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x54) == '\x03') {
      FUN_00b71be0(param_1 + 0x40);
      return;
    }
    return;
  }
  if (cVar1 == '\x04') {
    FUN_00bd3030(param_1 + 0x30);
    return;
  }
  if (cVar1 == '\x05') {
    FUN_010eac78(param_1 + 0x30);
    return;
  }
  return;
}

