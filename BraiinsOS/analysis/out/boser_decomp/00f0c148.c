// FUN_00f0c148 @ 00f0c148 size=176 calls_out=4 calls_in=0
// strings: 

void FUN_00f0c148(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x94);
  if (cVar1 == '\0') {
    FUN_01839f10(param_1);
    FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    piVar3 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x130) == '\x03' || *(char *)(param_1 + 0x130) == '\0') {
        FUN_01839f10(param_1 + 0x98);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00f0d4c4(param_1 + 0x98);
    }
    piVar3 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0x90));
    return;
  }
  return;
}

