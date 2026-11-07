// FUN_00f2711c @ 00f2711c size=340 calls_out=6 calls_in=2
// strings: 

void FUN_00f2711c(int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    iVar4 = param_1[2];
    bVar5 = iVar4 == 0 && param_1[3] == 0;
    if (iVar4 != 0 || param_1[3] != 0) {
      iVar4 = param_1[4];
      bVar5 = iVar4 == 0;
    }
    if (bVar5) {
      return;
    }
    FUN_00f80320(iVar4,param_1[5]);
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x32)) {
  case 0:
    param_1 = param_1 + 0xb;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    goto LAB_00f26f1c;
  default:
    return;
  case 3:
    if ((char)param_1[0x1c1] == '\x03') {
      FUN_00f27024(param_1 + 0xe);
    }
    break;
  case 4:
    if ((char)param_1[0x1c] == '\x03') {
      cVar1 = (char)param_1[0x1b];
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = (char)param_1[0x12];
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x13);
      }
    }
  case 5:
    uVar2 = (uint)*(byte *)((int)param_1 + 0x31);
    bVar5 = uVar2 == 1;
    if (bVar5) {
      uVar2 = param_1[8];
    }
    if (bVar5 && uVar2 == 0) {
      piVar3 = (int *)param_1[9];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a956ec(param_1[9]);
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  FUN_00668c84(param_1[6]);
  param_1 = param_1 + 10;
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
LAB_00f26f1c:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182544(*param_1);
    return;
  }
  return;
}

