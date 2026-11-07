// FUN_00de30a8 @ 00de30a8 size=252 calls_out=4 calls_in=2
// strings: 

void FUN_00de30a8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x11) != '\x03') {
    if (*(char *)(param_1 + 0x11) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x28) == '\x04') {
      cVar1 = *(char *)(param_1 + 0x58);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x54);
      }
      if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0x4c) != 0)) {
        FUN_00e44660(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),1);
      }
      FUN_00e44114(*(undefined4 *)(param_1 + 0x24));
    }
    else if ((*(char *)(param_1 + 0x28) == '\x03') && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078e66c(*(undefined4 *)(param_1 + 0x14));
      }
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    return;
  }
  cVar1 = *(char *)(param_1 + 0x28);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x24);
  }
  if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_00e43e74(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1);
    return;
  }
  return;
}

