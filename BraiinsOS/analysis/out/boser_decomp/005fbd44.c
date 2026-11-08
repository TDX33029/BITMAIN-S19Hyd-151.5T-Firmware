// FUN_005fbd44 @ 005fbd44 size=168 calls_out=3 calls_in=6
// strings: 

void FUN_005fbd44(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 9) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x3c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00b71be0(param_1 + 0x24);
    }
  }
  else {
    if (*(char *)(param_1 + 9) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x4c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x48);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x44);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x24);
      }
    }
    piVar2 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(*(undefined4 *)(param_1 + 0xc));
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

