// FUN_0193dc88 @ 0193dc88 size=596 calls_out=9 calls_in=2
// strings: 

void FUN_0193dc88(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 == 1) {
    bVar6 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar6) {
      iVar2 = param_1[4];
    }
    if (bVar6 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
switchD_0193dcb8_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  switch((char)param_1[0x10]) {
  case '\0':
    piVar3 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[4]);
    }
    if (param_1[2] != 0) {
      FUN_0193da30(param_1 + 3);
    }
    piVar3 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[5]);
    }
    piVar3 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[6]);
    }
    FUN_0193c71c(param_1 + 7);
    FUN_0193c71c(param_1 + 8);
    goto LAB_0193dee4;
  default:
    goto switchD_0193dcb8_caseD_1;
  case '\x03':
    FUN_0193da30(param_1 + 0x11);
    break;
  case '\x04':
    FUN_01431b40(param_1 + 0x12);
    break;
  case '\x05':
    FUN_01431b40(param_1 + 0x12);
    break;
  case '\x06':
    cVar1 = (char)param_1[0x1c];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x1b];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x13);
    }
    break;
  case '\a':
    iVar2 = param_1[0x11];
    puVar5 = (undefined4 *)param_1[0x12];
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
    FUN_019f8c54(param_1[0xd],param_1[0xe]);
  }
  piVar3 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[4]);
  }
  cVar1 = '\0';
  if (param_1[2] != 0) {
    cVar1 = *(char *)((int)param_1 + 0x41);
  }
  if (param_1[2] != 0 && cVar1 != '\0') {
    FUN_0193da30(param_1 + 3);
  }
  piVar3 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[5]);
  }
  piVar3 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[6]);
  }
  FUN_0193c71c(param_1 + 7);
  FUN_0193c71c(param_1 + 8);
LAB_0193dee4:
  FUN_0193c71c(param_1 + 9);
  return;
}

