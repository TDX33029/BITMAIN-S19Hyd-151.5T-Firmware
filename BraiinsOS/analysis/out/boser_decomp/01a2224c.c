// FUN_01a2224c @ 01a2224c size=292 calls_out=7 calls_in=0
// strings: 

void FUN_01a2224c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x32);
  if (cVar1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a39294(*(undefined4 *)(param_1 + 0x28));
    }
    FUN_019fcf58(param_1 + 0x10);
    FUN_0193c71c(param_1 + 0x2c);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_019faf5c(param_1 + 0x38);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xc4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0xa0);
    }
    piVar2 = *(int **)(param_1 + 0x38);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x38));
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
    FUN_019fdaec(param_1 + 0x40);
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  FUN_0193c71c(param_1 + 0x24);
  FUN_019fcf58(param_1);
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a39294(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

