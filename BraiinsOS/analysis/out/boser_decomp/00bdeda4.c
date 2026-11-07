// FUN_00bdeda4 @ 00bdeda4 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_00bdeda4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    cVar1 = *(char *)(param_1 + 100);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x60);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00bba254(param_1 + 0x20);
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
      FUN_019db20c(*(undefined4 *)(param_1 + 0x10));
      return;
    }
    return;
  }
  return;
}

