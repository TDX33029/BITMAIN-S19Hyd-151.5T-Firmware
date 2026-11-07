// FUN_0087ae3c @ 0087ae3c size=392 calls_out=4 calls_in=0
// strings: 

void FUN_0087ae3c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x5c);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x74) == '\x04') {
      cVar1 = *(char *)(param_1 + 0x11c);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x10c);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_007eb5d0(param_1 + 0xa0);
      }
    }
    piVar2 = *(int **)(param_1 + 0x60);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
  }
  else {
    if (cVar1 == '\x04') {
      cVar1 = *(char *)(param_1 + 0xf4);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0175d85c(param_1 + 0xbc);
      }
      piVar2 = *(int **)(param_1 + 0x1b0);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b4));
      }
      if (*(char *)(param_1 + 0x104) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x1ac);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0x19c);
        }
        if (bVar4 && cVar1 == '\x03') {
          FUN_007eb5d0(param_1 + 0x130);
        }
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xf0);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0175d85c(param_1 + 0xb8);
      }
      piVar2 = *(int **)(param_1 + 0xfc);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100));
      }
      FUN_0175d85c(param_1 + 0xf4);
    }
    *(undefined1 *)(param_1 + 0x5e) = 0;
    if (*(int *)(param_1 + 0x50) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    }
  }
  *(undefined1 *)(param_1 + 0x5d) = 0;
  return;
}

