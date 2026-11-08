// FUN_01a21980 @ 01a21980 size=264 calls_out=6 calls_in=0
// strings: 

void FUN_01a21980(int param_1)

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
    FUN_019fba9c(param_1 + 0x10);
    FUN_019fb03c(param_1 + 0x2c);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_019faf5c(param_1 + 0x38);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x80);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x7c);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x5c);
    }
    if (*(int *)(param_1 + 0x38) != -0x80000000) {
      FUN_0134c054(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),4,4);
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  FUN_019fb03c(param_1 + 0x24);
  FUN_019fba9c(param_1);
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

