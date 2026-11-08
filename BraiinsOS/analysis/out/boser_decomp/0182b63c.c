// FUN_0182b63c @ 0182b63c size=508 calls_out=9 calls_in=5
// strings: 

void FUN_0182b63c(int param_1)

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
  undefined4 uVar10;
  undefined4 *puVar11;
  
  uVar2 = *(uint *)(param_1 + 0x270);
  if (uVar2 == 0x80000029) {
    puVar11 = *(undefined4 **)(param_1 + 0x278);
    uVar10 = *(undefined4 *)(param_1 + 0x274);
    pcVar3 = (code *)*puVar11;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar10);
    }
    if (puVar11[1] != 0) {
      thunk_FUN_01be4678(uVar10);
    }
    goto switchD_0182b6a4_caseD_2;
  }
  iVar4 = 0xb;
  if (0x80000012 < uVar2) {
    iVar4 = uVar2 + 0x7fffffed;
  }
  switch(iVar4) {
  case 0:
  case 1:
    uVar10 = *(undefined4 *)(param_1 + 0x274);
    uVar8 = 1;
    uVar5 = *(undefined4 *)(param_1 + 0x278);
    uVar9 = 2;
    goto LAB_0182b740;
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
    if (*(int *)(param_1 + 0x274) < -0x7fffffea) break;
    FUN_018e3ad4(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c));
    uVar10 = *(undefined4 *)(param_1 + 0x274);
    uVar8 = 4;
    uVar5 = *(undefined4 *)(param_1 + 0x278);
    uVar9 = 0x3c;
LAB_0182b740:
    FUN_0134aee0(uVar10,uVar5,uVar8,uVar9);
    break;
  case 0xb:
    uVar7 = 0xe;
    if ((int)uVar2 < 0) {
      uVar7 = uVar2 ^ 0x80000000;
    }
    if (uVar7 < 0xe) break;
    switch(uVar7) {
    case 0xe:
      if ((*(char *)(param_1 + 0x27c) == '\0') && (*(int *)(param_1 + 0x280) != -0x80000000)) {
        FUN_019bb7e0(*(int *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x284));
      }
      FUN_006a41c0((uint *)(param_1 + 0x270));
      break;
    case 0xf:
    case 0x11:
      break;
    case 0x10:
      if (-0x7fffffff < *(int *)(param_1 + 0x280)) {
        FUN_0134aee0(*(int *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x284),4,4);
      }
      FUN_0193b460(param_1 + 0x274);
      break;
    default:
      puVar11 = (undefined4 *)(param_1 + 0x274);
      piVar6 = (int *)*puVar11;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar4 + -1;
      goto LAB_0182b838;
    }
    break;
  case 0xc:
    if (*(int *)(param_1 + 0x274) != 5) break;
    puVar11 = (undefined4 *)(param_1 + 0x278);
    piVar6 = (int *)*puVar11;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
    goto LAB_0182b838;
  case 0xd:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x274),*(undefined4 *)(param_1 + 0x278));
    break;
  default:
    puVar11 = (undefined4 *)(param_1 + 0x274);
    piVar6 = (int *)*puVar11;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
LAB_0182b838:
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*puVar11,puVar11[1]);
    }
  }
switchD_0182b6a4_caseD_2:
  FUN_016f92fc(param_1);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x264),4,0x14);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a4));
  FUN_016f940c(param_1 + 0x2b0);
  return;
}

