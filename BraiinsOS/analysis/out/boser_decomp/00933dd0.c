// FUN_00933dd0 @ 00933dd0 size=104 calls_out=3 calls_in=0
// strings: 

void FUN_00933dd0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x641) != '\x03') {
      return;
    }
    FUN_00933768(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x640) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_01192a14(param_1 + 0x48);
    }
    FUN_0084e9cc(param_1 + 0x34);
    return;
  }
  return;
}

