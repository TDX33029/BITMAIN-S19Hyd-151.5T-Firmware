// FUN_00d32bf4 @ 00d32bf4 size=272 calls_out=8 calls_in=2
// strings: 

void FUN_00d32bf4(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    bVar4 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar4) {
      iVar2 = param_1[4];
    }
    if (bVar4 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
switchD_00d32c24_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x15)) {
  case 0:
    FUN_005faf6c(param_1 + 3);
    piVar3 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar4 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar4);
    *piVar3 = iVar2 + -1;
    goto LAB_00d32d04;
  default:
    goto switchD_00d32c24_caseD_1;
  case 3:
    FUN_019ede44(param_1 + 7);
    FUN_01431b40(param_1 + 0x10);
    break;
  case 4:
    if ((char)param_1[0x14] == '\x03') {
      cVar1 = (char)param_1[0x13];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[10];
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0xb);
      }
    }
    break;
  case 5:
    FUN_00d32e04(param_1 + 6);
    FUN_019f8c54(param_1[2],1);
  }
  FUN_005faf6c(param_1 + 3);
  piVar3 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar4 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar4);
  *piVar3 = iVar2 + -1;
LAB_00d32d04:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(param_1[4]);
    return;
  }
  return;
}

