// FUN_016f92cc @ 016f92cc size=24 calls_out=1 calls_in=2
// strings: 

void FUN_016f92cc(int param_1)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar11;
  undefined4 *puVar12;
  
  FUN_0077749c();
  uVar2 = *(uint *)(param_1 + 0x280);
  if (uVar2 == 0x80000029) {
    puVar12 = *(undefined4 **)(param_1 + 0x288);
    uVar11 = *(undefined4 *)(param_1 + 0x284);
    pcVar3 = (code *)*puVar12;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar11);
    }
    if (puVar12[1] != 0) {
      thunk_FUN_01be4678(uVar11);
    }
    goto switchD_01824970_caseD_2;
  }
  iVar4 = 0xb;
  if (0x80000012 < uVar2) {
    iVar4 = uVar2 + 0x7fffffed;
  }
  switch(iVar4) {
  case 0:
  case 1:
    uVar11 = *(undefined4 *)(param_1 + 0x284);
    uVar8 = 1;
    uVar5 = *(undefined4 *)(param_1 + 0x288);
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
    if (*(int *)(param_1 + 0x284) < -0x7fffffea) break;
    FUN_018e3ad4(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c));
    uVar11 = *(undefined4 *)(param_1 + 0x284);
    uVar8 = 4;
    uVar5 = *(undefined4 *)(param_1 + 0x288);
    uVar9 = 0x3c;
LAB_01824a0c:
    FUN_0134aee0(uVar11,uVar5,uVar8,uVar9);
    break;
  case 0xb:
    uVar7 = 0xe;
    if ((int)uVar2 < 0) {
      uVar7 = uVar2 ^ 0x80000000;
    }
    if (uVar7 < 0xe) break;
    switch(uVar7) {
    case 0xe:
      if ((*(char *)(param_1 + 0x28c) == '\0') && (*(int *)(param_1 + 0x290) != -0x80000000)) {
        FUN_019bb7e0(*(int *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x294));
      }
      FUN_006a41c0((uint *)(param_1 + 0x280));
      break;
    case 0xf:
    case 0x11:
      break;
    case 0x10:
      if (-0x7fffffff < *(int *)(param_1 + 0x290)) {
        FUN_0134aee0(*(int *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x294),4,4);
      }
      FUN_0193b460(param_1 + 0x284);
      break;
    default:
      puVar12 = (undefined4 *)(param_1 + 0x284);
      piVar6 = (int *)*puVar12;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        iVar10 = iVar4 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar10;
      goto LAB_01824b04;
    }
    break;
  case 0xc:
    if (*(int *)(param_1 + 0x284) != 5) break;
    puVar12 = (undefined4 *)(param_1 + 0x288);
    piVar6 = (int *)*puVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      iVar10 = iVar4 + -1;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar10;
    goto LAB_01824b04;
  case 0xd:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x288));
    break;
  default:
    puVar12 = (undefined4 *)(param_1 + 0x284);
    piVar6 = (int *)*puVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      iVar10 = iVar4 + -1;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar10;
LAB_01824b04:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*puVar12,puVar12[1],1,iVar10,unaff_r4,unaff_r5);
    }
  }
switchD_01824970_caseD_2:
  FUN_016f92fc(param_1 + 0x10);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274),4,0x14);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4));
  FUN_016f940c(param_1 + 0x2c0);
  return;
}

