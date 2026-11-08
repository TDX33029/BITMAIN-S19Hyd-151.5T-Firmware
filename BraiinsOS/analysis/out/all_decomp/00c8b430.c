// FUN_00c8b430 @ 00c8b430 size=140 calls_out=4 calls_in=2
// strings: 

void FUN_00c8b430(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x48);
    if ((cVar1 == '\a') || (cVar1 == '\x06')) {
      cVar1 = *(char *)(param_1 + 0xe4);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xd4);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00b9e31c(param_1 + 0x70);
        return;
      }
    }
    else {
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x68);
      }
      if (bVar2 && cVar1 == '\x04') {
        FUN_00a07b4c(param_1 + 0x70);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 8) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x18);
    if (cVar1 == '\x04') {
      FUN_00c8b4bc(param_1 + 0x20);
      return;
    }
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xb4);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00aca000(param_1 + 0x20);
      return;
    }
  }
  return;
}

