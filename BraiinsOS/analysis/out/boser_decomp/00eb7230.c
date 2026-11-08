// FUN_00eb7230 @ 00eb7230 size=312 calls_out=7 calls_in=0
// strings: 

void FUN_00eb7230(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0xa8)) {
  case 0:
    FUN_0096a6b0(param_1);
    piVar2 = *(int **)(param_1 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fd4c(*(undefined4 *)(param_1 + 0xa0));
    }
    goto LAB_00eb737c;
  default:
    return;
  case 3:
    break;
  case 6:
    FUN_00971f10(param_1 + 0xb8);
    piVar2 = *(int **)(param_1 + 0xb0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0xb0));
    }
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  case 4:
    piVar2 = *(int **)(param_1 + 0xa4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fd4c(*(undefined4 *)(param_1 + 0xa4));
    }
    break;
  case 7:
    FUN_00eb8ae4(param_1 + 0xb0);
  }
  if (*(char *)(param_1 + 0xaa) != '\0') {
    FUN_0096a6b0(param_1);
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fd4c(*(undefined4 *)(param_1 + 0xa0));
  }
  if (*(char *)(param_1 + 0xa9) == '\0') {
    return;
  }
LAB_00eb737c:
  FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

