// FUN_015f9264 @ 015f9264 size=804 calls_out=18 calls_in=3
// strings: 

void FUN_015f9264(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  
  uVar9 = param_2[2];
  uVar3 = uVar9;
  if (uVar9 < 9) {
    uVar3 = 8;
  }
  iVar10 = param_1 + (uVar3 - 1 & 0xfffffff8);
  uVar3 = *(uint *)(iVar10 + 8);
  bVar1 = uVar3 != 0;
  bVar2 = *(int *)(iVar10 + 0xc) != 0;
  uVar4 = 0;
  if (bVar1 || bVar2) {
    uVar4 = *(uint *)(iVar10 + 0x18);
    param_4 = *(int *)(iVar10 + 0x1c);
    uVar3 = uVar4 ^ 0x13;
  }
  if (!bVar1 && !bVar2 || uVar3 == 0 && param_4 == 0) goto LAB_015f92b0;
  uVar3 = 1;
  if ((uint)(uVar4 < 2) <= (uint)-param_4) {
    uVar3 = uVar4 - 2;
  }
  if (0xf < uVar3) {
switchD_015f9300_caseD_a:
    FUN_015aa278(iVar10 + 0x20);
    goto LAB_015f92b0;
  }
  switch(uVar3) {
  case 0:
    FUN_0134bd64(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24));
    FUN_015aa554(iVar10 + 0x2c);
    break;
  case 1:
    FUN_0134bd64(*(undefined4 *)(iVar10 + 0x28),*(undefined4 *)(iVar10 + 0x2c));
    FUN_015f996c(iVar10 + 0x34);
    break;
  case 2:
    puVar11 = *(undefined4 **)(iVar10 + 0x20);
    FUN_0134bd64(puVar11[0x15],puVar11[0x16]);
    if (puVar11[0x12] != -0x80000000) {
      FUN_0134bd64(puVar11[0x12],puVar11[0x13]);
    }
    FUN_0134bd64(puVar11[0x18],puVar11[0x19]);
    FUN_0134bd64(puVar11[0x1b],puVar11[0x1c]);
    FUN_01278d88(*puVar11,puVar11[1]);
    FUN_015a8f24(puVar11 + 0x1e);
    FUN_006b3e50(puVar11[8],puVar11[9]);
    FUN_015d1b84(puVar11 + 0x21);
    thunk_FUN_01be4678(puVar11);
    break;
  case 3:
    FUN_0134bd64(*(undefined4 *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24));
    FUN_015e91c8(*(undefined4 *)(iVar10 + 0x2c));
    break;
  default:
    uVar5 = *(undefined4 *)(iVar10 + 0x20);
    uVar7 = *(undefined4 *)(iVar10 + 0x24);
    goto LAB_015f9348;
  case 9:
    iVar12 = *(int *)(iVar10 + 0x20);
    piVar13 = (int *)(iVar12 + 0x44);
    do {
      iVar8 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar8 + -1;
    if (iVar8 == 1) {
      FUN_015ea258(iVar12 + 8);
    }
    piVar13 = *(int **)(iVar10 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f96ec(*(undefined4 *)(iVar10 + 0x20));
    }
    break;
  case 10:
    goto switchD_015f9300_caseD_a;
  case 0xb:
    iVar12 = *(int *)(iVar10 + 0x20);
    piVar13 = (int *)(iVar12 + 0x44);
    do {
      iVar8 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar8 + -1;
    if (iVar8 == 1) {
      FUN_015ea694(iVar12 + 8);
    }
    piVar13 = *(int **)(iVar10 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f97c0(*(undefined4 *)(iVar10 + 0x20));
    }
    break;
  case 0xc:
    uVar3 = 2;
    puVar6 = (uint *)(iVar10 + 0x20);
    if ((int)*puVar6 < 0) {
      uVar3 = *puVar6 ^ 0x80000000;
    }
    if (uVar3 == 4 || uVar3 == 3) {
      puVar6 = (uint *)(iVar10 + 0x24);
    }
    else if (uVar3 != 2) break;
    FUN_015d1b84(puVar6);
    break;
  case 0xd:
    iVar12 = *(int *)(iVar10 + 0x20);
    piVar13 = (int *)(iVar12 + 0x44);
    do {
      iVar8 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar8 + -1;
    if (iVar8 == 1) {
      FUN_015ea8f8(iVar12 + 8);
    }
    piVar13 = *(int **)(iVar10 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015f9894(*(undefined4 *)(iVar10 + 0x20));
    }
    break;
  case 0xe:
    uVar5 = *(undefined4 *)(iVar10 + 0x30);
    uVar7 = *(undefined4 *)(iVar10 + 0x34);
LAB_015f9348:
    FUN_0134bd64(uVar5,uVar7);
    break;
  case 0xf:
    FUN_014532e4(iVar10 + 0x20,(&switchD_015f9300::switchdataD_015f9304)[uVar3],
                 -(param_4 + (uint)(uVar4 >= 2)));
  }
LAB_015f92b0:
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(iVar10 + 8 + (uVar9 - 1 & 0xffffffc8) + 0x38);
  }
  if (param_1 != -1) {
    piVar13 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar13;
      bVar1 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar1);
    *piVar13 = iVar10 + -1;
    if (iVar10 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar3 = param_2[2];
    if (uVar3 < 9) {
      uVar3 = 8;
    }
    if ((uVar3 + (param_2[1] + uVar3 + 0x37 & -uVar3) + 7 & -uVar3) != 0) {
      thunk_FUN_01be4678();
      return;
    }
  }
  return;
}

