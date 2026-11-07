// FUN_018f24fc @ 018f24fc size=372 calls_out=6 calls_in=1
// strings: 

void FUN_018f24fc(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  iVar4 = 0xb;
  if (0x80000012 < uVar2) {
    iVar4 = uVar2 + 0x7fffffed;
  }
  switch(iVar4) {
  case 0:
  case 1:
    FUN_0134aee0(param_1[1],param_1[2],1,2);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    goto switchD_018f2524_caseD_2;
  case 8:
    if ((int)param_1[1] < -0x7fffffea) {
      return;
    }
    FUN_018e3a84(param_1 + 1);
    return;
  case 0xb:
    uVar5 = 0xe;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2 ^ 0x80000000;
    }
    if (uVar5 < 0xe) {
      return;
    }
    switch(uVar5) {
    case 0xe:
      if (((char)param_1[3] == '\0') && (param_1[4] != 0x80000000)) {
        FUN_0134bd64(param_1[4],param_1[5]);
      }
      FUN_006a41c0(param_1);
      return;
    case 0xf:
    case 0x11:
      goto switchD_018f2524_caseD_2;
    case 0x10:
      if (-0x7fffffff < (int)param_1[4]) {
        FUN_0134aee0(param_1[4],param_1[5],4,4);
      }
      FUN_0193b460(param_1 + 1);
      return;
    default:
      piVar3 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
    }
    break;
  case 0xc:
    if (param_1[1] != 5) {
      return;
    }
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    goto LAB_018f2684;
  case 0xd:
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  default:
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    uVar2 = param_1[1];
    uVar5 = param_1[2];
LAB_018f2684:
    FUN_018531c0(uVar2,uVar5);
    return;
  }
switchD_018f2524_caseD_2:
  return;
}

