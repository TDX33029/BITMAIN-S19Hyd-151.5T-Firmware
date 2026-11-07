// FUN_00ba6fb0 @ 00ba6fb0 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_00ba6fb0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x4d) == '\x03') {
      FUN_00ba6a00(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x4c) = 0;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xac);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x98);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x40);
    }
    if (*(int *)(param_1 + 0x10) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

