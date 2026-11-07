// FUN_0194fad8 @ 0194fad8 size=544 calls_out=8 calls_in=1
// strings: 

void FUN_0194fad8(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  switch((char)param_1[0xe]) {
  case '\0':
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[2]);
    }
    if (*param_1 != 0) {
      FUN_0193da30(param_1 + 1);
    }
    piVar2 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[3]);
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
      FUN_01a38404(param_1[4]);
    }
    FUN_0193c71c(param_1 + 5);
    FUN_0193c71c(param_1 + 6);
    goto LAB_0194fd00;
  default:
    return;
  case '\x03':
    FUN_0193da30(param_1 + 0xf);
    break;
  case '\x04':
    FUN_01431b40(param_1 + 0x10);
    break;
  case '\x05':
    FUN_01431b40(param_1 + 0x10);
    break;
  case '\x06':
    cVar1 = (char)param_1[0x1a];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x19];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x11);
    }
    break;
  case '\a':
    iVar4 = param_1[0xf];
    puVar5 = (undefined4 *)param_1[0x10];
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar4);
    }
    FUN_019f8c54(param_1[0xb],param_1[0xc]);
  }
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[2]);
  }
  cVar1 = '\0';
  if (*param_1 != 0) {
    cVar1 = *(char *)((int)param_1 + 0x39);
  }
  if (*param_1 != 0 && cVar1 != '\0') {
    FUN_0193da30(param_1 + 1);
  }
  piVar2 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[3]);
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
    FUN_01a38404(param_1[4]);
  }
  FUN_0193c71c(param_1 + 5);
  FUN_0193c71c(param_1 + 6);
LAB_0194fd00:
  FUN_0193c71c(param_1 + 7);
  return;
}

