// FUN_01a6bb88 @ 01a6bb88 size=52 calls_out=2 calls_in=8
// strings: 

void FUN_01a6bb88(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\0') {
    FUN_017999f4(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01a6b7d0(param_1 + 0x60);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_017999f4(param_1 + 0x60);
    return;
  }
  return;
}

