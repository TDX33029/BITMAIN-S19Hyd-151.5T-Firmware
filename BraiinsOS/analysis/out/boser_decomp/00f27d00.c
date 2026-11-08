// FUN_00f27d00 @ 00f27d00 size=660 calls_out=11 calls_in=2
// strings: 

void FUN_00f27d00(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x7c4) == '\0') {
    FUN_00d34bc8(param_1);
    piVar2 = *(int **)(param_1 + 200);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00711acc(*(undefined4 *)(param_1 + 200));
    }
    FUN_005f3030(param_1 + 0x7b0);
    return;
  }
  if (*(char *)(param_1 + 0x7c4) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x7a8) != '\x03') {
    if (*(char *)(param_1 + 0x7a8) == '\0') {
      FUN_00d34bc8(param_1 + 0xf0);
      piVar2 = *(int **)(param_1 + 0x790);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00711acc(*(undefined4 *)(param_1 + 0x790));
      }
      FUN_005f3030(param_1 + 0x794);
    }
    goto LAB_00f27fa0;
  }
  if (*(char *)(param_1 + 0x788) != '\x03') {
    if (*(char *)(param_1 + 0x788) == '\0') {
      FUN_00d34bc8(param_1 + 0x2a0);
      piVar2 = *(int **)(param_1 + 0x770);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00711acc(*(undefined4 *)(param_1 + 0x770));
      }
      iVar3 = 0x684;
      FUN_00b76614(param_1 + 0x368);
LAB_00f27e18:
      FUN_005f3030(param_1 + 0xf0 + iVar3);
    }
    goto switchD_00f27e38_caseD_1;
  }
  switch(*(undefined1 *)(param_1 + 0x730)) {
  case 0:
    FUN_00d34bc8(param_1 + 0x3a8);
    piVar2 = *(int **)(param_1 + 0x720);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00711acc(*(undefined4 *)(param_1 + 0x720));
    }
    FUN_00b76614(param_1 + 0x470);
    iVar3 = 0x3c4;
    if (*(int *)(param_1 + 0x4b0) != 0) goto LAB_00f27e18;
  default:
    goto switchD_00f27e38_caseD_1;
  case 3:
    break;
  case 4:
    if (*(int *)(param_1 + 0x740) != 2) {
      if (*(int *)(param_1 + 0x740) == 0) {
        FUN_01139b38(*(undefined4 *)(param_1 + 0x744),*(undefined4 *)(param_1 + 0x748));
      }
      else {
        FUN_00f80320();
      }
    }
    FUN_00b76614(param_1 + 0x75c);
    *(undefined1 *)(param_1 + 0x734) = 0;
    break;
  case 5:
    FUN_005efd2c(param_1 + 0x740);
  }
  FUN_00b76614(param_1 + 0x6d0);
  if (*(int *)(param_1 + 0x6b8) != 0) {
    FUN_005f3030(param_1 + 0x6bc);
  }
  piVar2 = *(int **)(param_1 + 0x724);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fef4(*(undefined4 *)(param_1 + 0x724));
  }
  if (*(char *)(param_1 + 0x733) != '\0') {
    FUN_019d8724(param_1 + 0x6b0);
  }
  *(undefined1 *)(param_1 + 0x735) = 0;
  *(undefined1 *)(param_1 + 0x733) = 0;
  FUN_005f0424(param_1 + 0x610);
  FUN_00d34c2c(param_1 + 0x5b8);
  *(undefined4 *)(param_1 + 0x736) = 0;
  *(undefined2 *)(param_1 + 0x73a) = 0;
  FUN_00d34bc8(param_1 + 0x4c8);
switchD_00f27e38_caseD_1:
  *(undefined2 *)(param_1 + 0x7a9) = 0;
  *(undefined1 *)(param_1 + 0x7ab) = 0;
LAB_00f27fa0:
  *(undefined1 *)(param_1 + 0x7c5) = 0;
  return;
}

