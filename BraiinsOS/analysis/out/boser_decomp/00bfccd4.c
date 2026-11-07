// FUN_00bfccd4 @ 00bfccd4 size=316 calls_out=6 calls_in=2
// strings: 

void FUN_00bfccd4(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x2a) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 0x2a) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xf)) {
  case 0:
    goto switchD_00bfcb00_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x1d) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1c);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x1b);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x13);
      }
    }
    goto LAB_00bfcbb8;
  case 4:
    FUN_00bf959c(param_1 + 0x10);
    break;
  case 5:
    if (*(char *)(param_1 + 0x1f) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1e);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x1d);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x15);
      }
    }
    piVar2 = (int *)param_1[0x11];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b5ef20(param_1[0x11]);
    }
    *(undefined1 *)((int)param_1 + 0x3f) = 0;
  }
  FUN_019f8c54(param_1[10],1);
LAB_00bfcbb8:
  piVar2 = (int *)param_1[9];
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a969ac(param_1[9]);
  }
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
switchD_00bfcb00_caseD_0:
  FUN_019bb7e0(param_1[5],param_1[6]);
  return;
}

