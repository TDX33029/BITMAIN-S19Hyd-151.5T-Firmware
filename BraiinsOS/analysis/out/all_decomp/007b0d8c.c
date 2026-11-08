// FUN_007b0d8c @ 007b0d8c size=252 calls_out=3 calls_in=1
// strings: 

void FUN_007b0d8c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*(undefined4 *)(param_1 + 0x24));
      return;
    }
    return;
  }
  if (cVar1 == '\x03') {
    FUN_007b0c00(param_1 + 0x30);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(byte *)(param_1 + 0x5f6) - 3 < 2) {
      piVar3 = *(int **)(param_1 + 0x504);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
    }
    else {
      if (*(byte *)(param_1 + 0x5f6) != 0) goto LAB_007b0e60;
      piVar3 = *(int **)(param_1 + 0x504);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*(undefined4 *)(param_1 + 0x504));
    }
  }
LAB_007b0e60:
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_005c3320(param_1);
  }
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

