// FUN_01750830 @ 01750830 size=276 calls_out=4 calls_in=0
// strings: 

void FUN_01750830(char *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = param_1[0x20];
  if (cVar1 == '\0') {
    FUN_017ce5f0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    piVar3 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_017ce5f0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_0174f868(param_1 + 0x28);
      piVar3 = *(int **)(param_1 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018fa168(*(undefined4 *)(param_1 + 0x24));
      }
    }
    if (param_1[0x22] != '\0') {
      piVar3 = *(int **)(param_1 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018fa168(*(undefined4 *)(param_1 + 0x1c));
      }
    }
    if (param_1[0x21] == '\0') {
      return;
    }
  }
  if ((*param_1 == '\0') && (*(int *)(param_1 + 4) != -0x80000000)) {
    FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

