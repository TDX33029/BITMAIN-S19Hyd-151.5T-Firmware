// FUN_00c6ffbc @ 00c6ffbc size=724 calls_out=5 calls_in=1
// strings: 

void FUN_00c6ffbc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  FUN_00ce0644(&local_30,param_2[1],param_2[2]);
  iVar9 = *(int *)(param_1 + 0x2dc);
  if (iVar9 != 0) {
    iVar11 = *(int *)(param_1 + 0x2d8);
    iVar7 = 0;
    do {
      iVar12 = iVar7 + 1;
      puVar3 = (undefined4 *)(iVar11 + iVar7 * 0x50 + 0x40);
      piVar5 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar3);
      }
      iVar7 = iVar12;
    } while (iVar12 != iVar9);
  }
  if (*(int *)(param_1 + 0x2d4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2d8));
  }
  piVar5 = (int *)(param_1 + 0x2e0);
  *(int *)(param_1 + 0x2d4) = local_30;
  *(int *)(param_1 + 0x2d8) = local_2c;
  *(undefined4 *)(param_1 + 0x2dc) = local_28;
  uVar6 = *param_2;
  iVar11 = param_2[1];
  iVar12 = iVar11 + param_2[2] * 0x50;
  iVar9 = iVar11;
  iVar7 = iVar11;
  local_34 = piVar5;
  if (param_2[2] != 0) {
    local_44 = iVar11;
    local_3c = uVar6;
    local_38 = iVar12;
    do {
      piVar13 = *(int **)(iVar7 + 0x40);
      iVar14 = iVar7 + 0x50;
      iVar10 = *(int *)(iVar7 + 0x44);
      uVar15 = *(undefined4 *)(iVar7 + 0x48);
      uVar16 = *(undefined4 *)(iVar7 + 0x4c);
      local_40 = iVar14;
      if (*(int *)(param_1 + 0x2e8) != 0) {
        iVar4 = *(int *)(param_1 + 0x2e4);
        iVar8 = *(int *)(param_1 + 0x2e8) * 0x50;
LAB_00c70104:
        if (iVar8 != 0) goto code_r0x00c7010c;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar13;
          bVar2 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar2);
        *piVar13 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(piVar13);
        }
        goto LAB_00c700cc;
      }
LAB_00c700b0:
      FUN_016dd52c(iVar9,iVar7,0x40);
      *(int **)(iVar9 + 0x40) = piVar13;
      *(int *)(iVar9 + 0x44) = iVar10;
      *(undefined4 *)(iVar9 + 0x48) = uVar15;
      *(undefined4 *)(iVar9 + 0x4c) = uVar16;
      iVar9 = iVar9 + 0x50;
LAB_00c700cc:
      iVar7 = iVar14;
    } while (iVar14 != iVar12);
    iVar7 = iVar12;
  }
  local_3c = 0;
  iVar9 = ((uint)(iVar9 - iVar11) >> 4) * -0x33333333;
  local_38 = 8;
  local_40 = 8;
  local_44 = 8;
  local_30 = iVar11;
  local_2c = iVar9;
  local_28 = uVar6;
  if (iVar12 != iVar7) {
    iVar10 = 0;
    do {
      iVar14 = iVar10 + 1;
      puVar3 = (undefined4 *)(iVar7 + iVar10 * 0x50 + 0x40);
      piVar13 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar3);
      }
      iVar10 = iVar14;
    } while (iVar14 != ((uint)(iVar12 - iVar7) >> 4) * -0x33333333);
  }
  FUN_00ccd62c(&local_44);
  iVar7 = *(int *)(param_1 + 0x2e8);
  if (iVar7 != 0) {
    iVar10 = *(int *)(param_1 + 0x2e4);
    iVar12 = 0;
    do {
      iVar14 = iVar12 + 1;
      puVar3 = (undefined4 *)(iVar10 + iVar12 * 0x50 + 0x40);
      piVar13 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar3);
      }
      iVar12 = iVar14;
    } while (iVar14 != iVar7);
  }
  if (*piVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2e4));
  }
  *(undefined4 *)(param_1 + 0x2e0) = uVar6;
  *(int *)(param_1 + 0x2e4) = iVar11;
  *(int *)(param_1 + 0x2e8) = iVar9;
  return;
code_r0x00c7010c:
  piVar1 = (int *)(iVar4 + 0x44);
  iVar8 = iVar8 + -0x50;
  iVar4 = iVar4 + 0x50;
  if (*piVar1 == iVar10) goto LAB_00c700b0;
  goto LAB_00c70104;
}

