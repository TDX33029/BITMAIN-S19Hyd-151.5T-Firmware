// FUN_00881d1c @ 00881d1c size=316 calls_out=4 calls_in=0
// strings: 

void FUN_00881d1c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x5c);
  if (cVar1 == '\x03') {
    FUN_00886970(param_1 + 0x68);
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
      piVar2 = *(int **)(param_1 + 0xf8);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
      }
      FUN_00886970(param_1 + 0x100);
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

