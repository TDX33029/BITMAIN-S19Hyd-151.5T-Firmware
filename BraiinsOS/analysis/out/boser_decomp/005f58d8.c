// FUN_005f58d8 @ 005f58d8 size=744 calls_out=16 calls_in=1
// strings: 

void FUN_005f58d8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x408)) {
  case 0:
    FUN_005f1224(param_1);
    piVar2 = *(int **)(param_1 + 0x3a0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x3a0));
    }
    piVar2 = *(int **)(param_1 + 0x3a4);
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
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x3a4));
    }
    piVar2 = *(int **)(param_1 + 0x3a8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x3a8));
      return;
    }
    return;
  default:
    return;
  case 3:
    goto switchD_005f58f4_caseD_3;
  case 4:
    if (*(char *)(param_1 + 0x434) == '\x03') {
      FUN_00b71be0(param_1 + 0x420);
    }
    goto LAB_005f5aec;
  case 6:
    FUN_005fac38(param_1 + 0x428);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x41c),*(undefined4 *)(param_1 + 0x420));
    piVar2 = *(int **)(param_1 + 0x418);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db41c(*(undefined4 *)(param_1 + 0x418));
    }
    if (*(int *)(param_1 + 0x3f0) == 3) {
      FUN_005f24fc();
    }
  case 5:
    FUN_005f70b4(param_1 + 0x3d4);
    if (*(int *)(param_1 + 0x3b8) == -0x7ffffffe) {
      FUN_005efdd4();
    }
    goto LAB_005f5aec;
  case 7:
    FUN_005f1a58(param_1 + 0x410);
    goto LAB_005f5ae4;
  case 8:
    FUN_005f56fc(param_1 + 0x410);
    break;
  case 9:
    if (*(char *)(param_1 + 0x664) == '\0') {
      iVar3 = param_1 + 0x538;
    }
    else {
      if (*(char *)(param_1 + 0x664) != '\x03') break;
      iVar3 = param_1 + 0x410;
    }
    FUN_005f79fc(iVar3);
    break;
  case 10:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x414));
    goto LAB_005f5ab4;
  case 0xb:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x414));
LAB_005f5ab4:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3fc),*(undefined4 *)(param_1 + 0x400));
  }
  if (*(char *)(param_1 + 0x409) != '\0') {
    FUN_005f79fc(param_1 + 0x278);
  }
LAB_005f5ae4:
  *(undefined1 *)(param_1 + 0x409) = 0;
LAB_005f5aec:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x204));
  if (*(int *)(param_1 + 0x1e8) == -0x80000000) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0));
  }
switchD_005f58f4_caseD_3:
  *(undefined1 *)(param_1 + 0x40c) = 0;
  FUN_005fa4b8(param_1 + 0x1d0);
  piVar2 = *(int **)(param_1 + 0x3b4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a934a0(*(undefined4 *)(param_1 + 0x3b4));
  }
  if (*(char *)(param_1 + 0x40a) != '\0') {
    piVar2 = *(int **)(param_1 + 0x3b0);
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
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x3b0));
    }
  }
  piVar2 = *(int **)(param_1 + 0x3ac);
  *(undefined1 *)(param_1 + 0x40a) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0x3ac));
  }
  if (*(char *)(param_1 + 0x40b) != '\0') {
    FUN_005f1224(param_1 + 0xe8);
  }
  *(undefined1 *)(param_1 + 0x40b) = 0;
  return;
}

