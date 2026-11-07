// FUN_00e149dc @ 00e149dc size=148 calls_out=2 calls_in=0
// strings: 

void FUN_00e149dc(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x1b);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x50);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x4c);
    }
    if (bVar2 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x48);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x45);
      }
      if (bVar2 && cVar1 == '\x03') {
        if (*(int *)(param_1 + 0x30) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
        }
        *(undefined1 *)(param_1 + 0x44) = 0;
        return;
      }
    }
  }
  else {
    bVar2 = cVar1 == '\x04';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x6c);
    }
    if (!bVar2 || cVar1 != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x68);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 100);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00de3884(param_1 + 0x2c);
      return;
    }
  }
  return;
}

