// FUN_00d9c728 @ 00d9c728 size=568 calls_out=7 calls_in=0
// strings: 

void FUN_00d9c728(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 199)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0xb4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(*(undefined4 *)(param_1 + 0xb4));
    }
    piVar2 = *(int **)(param_1 + 0xb8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0xb8));
    }
    piVar2 = *(int **)(param_1 + 0xbc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0160ea2c(*(undefined4 *)(param_1 + 0xbc));
      return;
    }
  default:
    return;
  case 3:
    goto switchD_00d9c744_caseD_3;
  case 4:
    FUN_00d97bc4(param_1 + 200);
    break;
  case 5:
    FUN_00d97e4c(param_1 + 0xd8);
    *(undefined2 *)(param_1 + 0xc5) = 0;
    (**(code **)(*(int *)(param_1 + 200) + 0x10))
              (param_1 + 0xd4,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
  }
  *(undefined1 *)(param_1 + 0xc0) = 0;
switchD_00d9c744_caseD_3:
  if (*(char *)(param_1 + 0xc1) != '\0') {
    piVar2 = *(int **)(param_1 + 0xb0);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0xb0));
    }
  }
  *(undefined1 *)(param_1 + 0xc1) = 0;
  if (*(char *)(param_1 + 0xc2) != '\0') {
    piVar2 = *(int **)(param_1 + 0xac);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0xac));
    }
  }
  *(undefined1 *)(param_1 + 0xc2) = 0;
  if (*(char *)(param_1 + 0xc3) != '\0') {
    piVar2 = *(int **)(param_1 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0160ea2c(*(undefined4 *)(param_1 + 0xa8));
    }
  }
  *(undefined1 *)(param_1 + 0xc3) = 0;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    piVar2 = *(int **)(param_1 + 0xa4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0xa4));
    }
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0xc4) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011814ec(*(undefined4 *)(param_1 + 0xa0));
    return;
  }
  return;
}

