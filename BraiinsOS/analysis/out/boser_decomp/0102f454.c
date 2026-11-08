// FUN_0102f454 @ 0102f454 size=188 calls_out=5 calls_in=0
// strings: 

void FUN_0102f454(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x408) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x3f8);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x3ec);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0102d354(param_1 + 0x10);
        return;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x100) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xec);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xd8);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0102bd74(param_1 + 0x80);
    }
  }
  if (*(int *)(param_1 + 0x10) == -0x80000000) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    return;
  }
  if (*(int *)(param_1 + 0x10) == -0x7fffffff) {
    return;
  }
  FUN_0102f508();
  FUN_014a632c(param_1 + 0x50);
  return;
}

