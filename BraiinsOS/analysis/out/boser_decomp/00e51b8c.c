// FUN_00e51b8c @ 00e51b8c size=140 calls_out=2 calls_in=1
// strings: 

void FUN_00e51b8c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 9) != '\x03') {
    if (*(char *)(param_1 + 9) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x5c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x58);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x54);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x34);
      }
    }
    FUN_00e51c34(param_1 + 0xc);
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x40) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x3c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x18);
      return;
    }
  }
  return;
}

