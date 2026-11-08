// FUN_016fbf68 @ 016fbf68 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_016fbf68(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar11;
  
  iVar2 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      return;
    }
    if (iVar2 == 2) {
      FUN_016f92b4(param_1 + 2);
      FUN_016f940c(param_1 + 0xbe);
    }
    else {
      FUN_016f92b4(param_1 + 2);
    }
    FUN_018248cc(param_1 + 0xbc);
    return;
  }
  FUN_016f92b4(param_1 + 0xb4);
  uVar3 = param_1[0x9c];
  if (uVar3 == 0x80000029) {
    puVar11 = (undefined4 *)param_1[0x9e];
    iVar2 = param_1[0x9d];
    pcVar5 = (code *)*puVar11;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar2);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
    goto switchD_01824970_caseD_2;
  }
  iVar2 = 0xb;
  if (0x80000012 < uVar3) {
    iVar2 = uVar3 + 0x7fffffed;
  }
  switch(iVar2) {
  case 0:
  case 1:
    iVar2 = param_1[0x9d];
    uVar8 = 1;
    iVar10 = param_1[0x9e];
    uVar9 = 2;
    goto LAB_01824a0c;
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
    break;
  case 8:
    if (param_1[0x9d] < -0x7fffffea) break;
    FUN_018e3ad4(param_1[0x9e],param_1[0x9f]);
    iVar2 = param_1[0x9d];
    uVar8 = 4;
    iVar10 = param_1[0x9e];
    uVar9 = 0x3c;
LAB_01824a0c:
    FUN_0134aee0(iVar2,iVar10,uVar8,uVar9);
    break;
  case 0xb:
    uVar7 = 0xe;
    if ((int)uVar3 < 0) {
      uVar7 = uVar3 ^ 0x80000000;
    }
    if (uVar7 < 0xe) break;
    switch(uVar7) {
    case 0xe:
      if (((char)param_1[0x9f] == '\0') && (param_1[0xa0] != -0x80000000)) {
        FUN_019bb7e0(param_1[0xa0],param_1[0xa1]);
      }
      FUN_006a41c0(param_1 + 0x9c);
      break;
    case 0xf:
    case 0x11:
      break;
    case 0x10:
      if (-0x7fffffff < param_1[0xa0]) {
        FUN_0134aee0(param_1[0xa0],param_1[0xa1],4,4);
      }
      FUN_0193b460(param_1 + 0x9d);
      break;
    default:
      piVar4 = param_1 + 0x9d;
      piVar6 = (int *)*piVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar6;
        iVar10 = iVar2 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar10;
      goto LAB_01824b04;
    }
    break;
  case 0xc:
    if (param_1[0x9d] != 5) break;
    piVar4 = param_1 + 0x9e;
    piVar6 = (int *)*piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      iVar10 = iVar2 + -1;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar10;
    goto LAB_01824b04;
  case 0xd:
    FUN_019bb7e0(param_1[0x9d],param_1[0x9e]);
    break;
  default:
    piVar4 = param_1 + 0x9d;
    piVar6 = (int *)*piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      iVar10 = iVar2 + -1;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar10;
LAB_01824b04:
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*piVar4,piVar4[1],1,iVar10,unaff_r4,unaff_r5);
    }
  }
switchD_01824970_caseD_2:
  FUN_016f92fc(param_1);
  FUN_0134aee0(param_1[0x98],param_1[0x99],4,0x14);
  FUN_019bb7e0(param_1[0xa8],param_1[0xa9]);
  FUN_016f940c(param_1 + 0xac);
  return;
}

