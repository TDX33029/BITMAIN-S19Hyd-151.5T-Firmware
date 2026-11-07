// FUN_005fac68 @ 005fac68 size=304 calls_out=6 calls_in=0
// strings: 

void FUN_005fac68(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x98)) {
  case 0:
    FUN_0096a6b0(param_1);
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180cc4(*(undefined4 *)(param_1 + 0x90));
    }
    goto LAB_005fada8;
  default:
    return;
  case 3:
    break;
  case 5:
    FUN_005f6028(param_1 + 0xa8);
    piVar2 = *(int **)(param_1 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0xa0));
    }
  case 4:
    piVar2 = *(int **)(param_1 + 0x94);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180cc4(*(undefined4 *)(param_1 + 0x94));
    }
    break;
  case 6:
    FUN_005f3950(param_1 + 0xa0);
  }
  if (*(char *)(param_1 + 0x9a) != '\0') {
    FUN_0096a6b0(param_1);
  }
  piVar2 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180cc4(*(undefined4 *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 0x99) == '\0') {
    return;
  }
LAB_005fada8:
  FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

