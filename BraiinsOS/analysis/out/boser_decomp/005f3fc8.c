// FUN_005f3fc8 @ 005f3fc8 size=316 calls_out=5 calls_in=0
// strings: 

void FUN_005f3fc8(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0xac);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180cc4(*(undefined4 *)(param_1 + 0xa0));
    }
    piVar3 = *(int **)(param_1 + 0xa4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0xa4));
    }
    FUN_005fa438(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_005f9d80(param_1 + 0xb8);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
    *(undefined1 *)(param_1 + 0xae) = 0;
    (**(code **)(*(int *)(param_1 + 0x90) + 0x10))
              (param_1 + 0x9c,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0xad) != '\0') {
    piVar3 = *(int **)(param_1 + 0xb0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0xb0));
    }
  }
  piVar3 = *(int **)(param_1 + 0xa8);
  *(undefined1 *)(param_1 + 0xad) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180cc4(*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  return;
}

