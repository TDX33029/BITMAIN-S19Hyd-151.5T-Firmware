// FUN_01a217c4 @ 01a217c4 size=268 calls_out=5 calls_in=0
// strings: 

void FUN_01a217c4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x2a);
  if (cVar1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a39294(*(undefined4 *)(param_1 + 0x24));
    }
    FUN_019fb37c(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_019faf5c(param_1 + 0x30);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x8c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x88);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x68);
    }
    piVar2 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x30));
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  FUN_019fb37c(param_1);
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

