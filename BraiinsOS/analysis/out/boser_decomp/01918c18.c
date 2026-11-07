// FUN_01918c18 @ 01918c18 size=396 calls_out=6 calls_in=3
// strings: 

void FUN_01918c18(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *param_1;
  iVar4 = 0xb;
  if (0x80000012 < uVar2) {
    iVar4 = uVar2 + 0x7fffffed;
  }
  switch(iVar4) {
  case 0:
  case 1:
    uVar2 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = 1;
    uVar7 = 2;
    goto LAB_01918ca8;
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
    goto switchD_01918c40_caseD_2;
  case 8:
    uVar2 = param_1[1];
    if ((int)uVar2 < -0x7fffffea) {
      return;
    }
    uVar5 = param_1[2];
    FUN_018e3ad4(uVar5,param_1[3]);
    uVar6 = 4;
    uVar7 = 0x3c;
LAB_01918ca8:
    FUN_0134aee0(uVar2,uVar5,uVar6,uVar7);
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
      goto switchD_01918c40_caseD_2;
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
    goto LAB_01918db8;
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
LAB_01918db8:
    FUN_018531c0(uVar2,uVar5);
    return;
  }
switchD_01918c40_caseD_2:
  return;
}

