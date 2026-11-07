// FUN_01940040 @ 01940040 size=544 calls_out=8 calls_in=2
// strings: 

void FUN_01940040(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_r4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    bVar6 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar6 = unaff_r4 == 0;
    }
    if (!bVar6) {
      puVar5 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(unaff_r4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  switch((char)param_1[0x10]) {
  case '\0':
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[4]);
    }
    if (param_1[2] != 0) {
      FUN_0193da30(param_1 + 3);
    }
    piVar2 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[5]);
    }
    piVar2 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[6]);
    }
    FUN_0193c71c(param_1 + 7);
    FUN_0193c71c(param_1 + 8);
    goto LAB_0193fb98;
  default:
    return;
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
    FUN_01139b38(param_1[0x11],param_1[0x12]);
    FUN_019f8c54(param_1[0xd],param_1[0xe]);
  }
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[4]);
  }
  bVar6 = param_1[2] != 0;
  cVar1 = '\0';
  if (bVar6) {
    cVar1 = *(char *)((int)param_1 + 0x41);
  }
  if (bVar6 && cVar1 != '\0') {
    FUN_0193da30(param_1 + 3);
  }
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[5]);
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[6]);
  }
  FUN_0193c71c(param_1 + 7);
  FUN_0193c71c(param_1 + 8);
LAB_0193fb98:
  FUN_0193c71c(param_1 + 9);
  return;
}

