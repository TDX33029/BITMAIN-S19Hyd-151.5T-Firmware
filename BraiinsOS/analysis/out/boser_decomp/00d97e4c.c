// FUN_00d97e4c @ 00d97e4c size=724 calls_out=16 calls_in=1
// strings: 

void FUN_00d97e4c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x244)) {
  case 0:
    FUN_00d9cde8(*(undefined4 *)(param_1 + 0x230));
    piVar2 = *(int **)(param_1 + 0x234);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x234));
    }
    piVar2 = *(int **)(param_1 + 0x238);
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
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x238));
    }
    piVar2 = *(int **)(param_1 + 0x23c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x23c));
      return;
    }
    return;
  default:
    return;
  case 3:
    goto switchD_00d97e68_caseD_3;
  case 4:
    if (*(char *)(param_1 + 0x26c) == '\x03') {
      FUN_00b71be0(param_1 + 600);
    }
    goto LAB_00d98058;
  case 6:
    FUN_005fac38(param_1 + 0x260);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600));
    piVar2 = *(int **)(param_1 + 0x250);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db41c(*(undefined4 *)(param_1 + 0x250));
    }
    if (*(int *)(param_1 + 0x218) == 3) {
      FUN_00d9cc40();
    }
  case 5:
    FUN_00b6fb24(param_1 + 0x1fc);
    if (*(int *)(param_1 + 0x1e0) == -0x7ffffffe) {
      FUN_00d9cc94();
    }
    goto LAB_00d98058;
  case 7:
    FUN_005f1a58(param_1 + 0x248);
    goto LAB_00d98050;
  case 8:
    FUN_00d9cce4(param_1 + 0x248);
    break;
  case 9:
    if (*(char *)(param_1 + 0x49c) == '\0') {
      iVar3 = param_1 + 0x370;
    }
    else {
      if (*(char *)(param_1 + 0x49c) != '\x03') break;
      iVar3 = param_1 + 0x248;
    }
    FUN_005f79fc(iVar3);
    break;
  case 10:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c));
    goto LAB_00d98024;
  case 0xb:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c));
LAB_00d98024:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x228));
  }
  if (*(char *)(param_1 + 0x240) != '\0') {
    FUN_005f79fc(param_1 + 0xa8);
  }
LAB_00d98050:
  *(undefined1 *)(param_1 + 0x240) = 0;
LAB_00d98058:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  }
switchD_00d97e68_caseD_3:
  *(undefined1 *)(param_1 + 0x243) = 0;
  FUN_005fa4b8(param_1);
  piVar2 = *(int **)(param_1 + 0x1dc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a934a0(*(undefined4 *)(param_1 + 0x1dc));
  }
  if (*(char *)(param_1 + 0x241) != '\0') {
    piVar2 = *(int **)(param_1 + 0x1d8);
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
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x1d8));
    }
  }
  piVar2 = *(int **)(param_1 + 0x1d4);
  *(undefined1 *)(param_1 + 0x241) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0x1d4));
  }
  if (*(char *)(param_1 + 0x242) != '\0') {
    FUN_00d9cde8(*(undefined4 *)(param_1 + 0x1d0));
  }
  *(undefined1 *)(param_1 + 0x242) = 0;
  return;
}

