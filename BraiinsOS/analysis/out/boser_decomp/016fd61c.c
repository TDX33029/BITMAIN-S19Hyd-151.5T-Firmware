// FUN_016fd61c @ 016fd61c size=48 calls_out=1 calls_in=1
// strings: 

void FUN_016fd61c(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar10;
  undefined4 *puVar11;
  
  if (*param_1 == 2) {
    FUN_008df9e8(param_1 + 1);
    return;
  }
  FUN_008df9e8();
  uVar2 = param_1[0xa0];
  if (uVar2 == 0x80000029) {
    puVar11 = (undefined4 *)param_1[0xa2];
    iVar10 = param_1[0xa1];
    pcVar4 = (code *)*puVar11;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar10);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_01be4678(iVar10);
    }
    goto switchD_01824970_caseD_2;
  }
  iVar10 = 0xb;
  if (0x80000012 < uVar2) {
    iVar10 = uVar2 + 0x7fffffed;
  }
  switch(iVar10) {
  case 0:
  case 1:
    iVar10 = param_1[0xa1];
    uVar7 = 1;
    iVar9 = param_1[0xa2];
    uVar8 = 2;
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
    if (param_1[0xa1] < -0x7fffffea) break;
    FUN_018e3ad4(param_1[0xa2],param_1[0xa3]);
    iVar10 = param_1[0xa1];
    uVar7 = 4;
    iVar9 = param_1[0xa2];
    uVar8 = 0x3c;
LAB_01824a0c:
    FUN_0134aee0(iVar10,iVar9,uVar7,uVar8);
    break;
  case 0xb:
    uVar6 = 0xe;
    if ((int)uVar2 < 0) {
      uVar6 = uVar2 ^ 0x80000000;
    }
    if (uVar6 < 0xe) break;
    switch(uVar6) {
    case 0xe:
      if (((char)param_1[0xa3] == '\0') && (param_1[0xa4] != -0x80000000)) {
        FUN_019bb7e0(param_1[0xa4],param_1[0xa5]);
      }
      FUN_006a41c0(param_1 + 0xa0);
      break;
    case 0xf:
    case 0x11:
      break;
    case 0x10:
      if (-0x7fffffff < param_1[0xa4]) {
        FUN_0134aee0(param_1[0xa4],param_1[0xa5],4,4);
      }
      FUN_0193b460(param_1 + 0xa1);
      break;
    default:
      piVar3 = param_1 + 0xa1;
      piVar5 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        iVar9 = iVar10 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar9;
      goto LAB_01824b04;
    }
    break;
  case 0xc:
    if (param_1[0xa1] != 5) break;
    piVar3 = param_1 + 0xa2;
    piVar5 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar5;
      iVar9 = iVar10 + -1;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar9;
    goto LAB_01824b04;
  case 0xd:
    FUN_019bb7e0(param_1[0xa1],param_1[0xa2]);
    break;
  default:
    piVar3 = param_1 + 0xa1;
    piVar5 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar5;
      iVar9 = iVar10 + -1;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar9;
LAB_01824b04:
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*piVar3,piVar3[1],1,iVar9,unaff_r4,unaff_r5);
    }
  }
switchD_01824970_caseD_2:
  FUN_016f92fc(param_1 + 4);
  FUN_0134aee0(param_1[0x9c],param_1[0x9d],4,0x14);
  FUN_019bb7e0(param_1[0xac],param_1[0xad]);
  FUN_016f940c(param_1 + 0xb0);
  return;
}

