// FUN_0090c430 @ 0090c430 size=108 calls_out=3 calls_in=0
// strings: 

void FUN_0090c430(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x68);
    }
    FUN_0084f298(param_1 + 0x10);
    return;
  }
  cVar1 = *(char *)(param_1 + 100);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x60);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00bba254(param_1 + 0x20);
    return;
  }
  return;
}

