// FUN_00c0a6bc @ 00c0a6bc size=160 calls_out=3 calls_in=1
// strings: 

void FUN_00c0a6bc(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x2c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x28);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      return;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    if (*(char *)(param_1 + 0xb4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x90);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_00ba638c(param_1 + 0x38);
      }
    }
    piVar2 = *(int **)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_1 + 0x10));
      return;
    }
    return;
  }
  return;
}

