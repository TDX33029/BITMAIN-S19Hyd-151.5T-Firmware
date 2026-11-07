// FUN_01513330 @ 01513330 size=800 calls_out=7 calls_in=1
// strings: 

void FUN_01513330(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int local_60;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  puVar12 = (undefined4 *)param_2[4];
  uVar18 = param_2[3];
  puVar3 = puVar12 + param_2[5] * 6;
  puVar9 = puVar12;
  local_34 = puVar12;
  local_30 = puVar12;
  local_2c = uVar18;
  local_28 = puVar3;
  if (param_2[5] != 0) {
    puVar16 = puVar12;
    do {
      iVar13 = puVar16[3];
      puVar9 = puVar16 + 6;
      uVar20 = *puVar16;
      iVar10 = puVar16[4];
      iVar1 = puVar16[5];
      piVar19 = (int *)puVar16[1];
      iVar23 = puVar16[2];
      if (iVar13 == -0x80000000) {
        if (iVar1 < 0) {
          local_30 = puVar9;
                    /* WARNING: Subroutine does not return */
          FUN_00600c10();
        }
        if (iVar1 == 0) {
          iVar13 = 1;
        }
        else {
          iVar13 = thunk_FUN_016d4a50();
          if (iVar13 == 0) {
            local_30 = puVar9;
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar1);
          }
        }
        FUN_016dd1aa(iVar13,iVar10,iVar1);
        iVar10 = iVar13;
        iVar13 = iVar1;
      }
      if (iVar23 == 0) {
        piVar2 = piVar19;
        piVar22 = piVar19;
      }
      else {
        iVar7 = 0;
        do {
          piVar2 = (int *)((int)piVar19 + iVar7);
          iVar11 = *piVar2;
          iVar21 = piVar2[1];
          iVar4 = piVar2[2];
          iVar17 = piVar2[3];
          if ((iVar11 == -0x7fffffff) && (iVar11 = -0x7fffffff, iVar21 == -0x80000000)) {
            if (iVar17 < 0) {
              uVar18 = 0;
LAB_01513604:
              local_30 = puVar9;
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar18,local_60);
            }
            if (iVar17 == 0) {
              local_60 = 1;
              iVar21 = 0;
            }
            else {
              local_60 = thunk_FUN_016d4a50(iVar17);
              if (local_60 == 0) {
                uVar18 = 1;
                local_60 = iVar17;
                goto LAB_01513604;
              }
              iVar21 = iVar17;
            }
            FUN_016dd1aa(local_60,iVar4,iVar17);
            iVar4 = local_60;
          }
          piVar2 = (int *)((int)piVar19 + iVar7);
          *piVar2 = iVar11;
          iVar7 = iVar7 + 0x10;
          piVar2[1] = iVar21;
          piVar2[2] = iVar4;
          piVar2[3] = iVar17;
        } while (iVar23 << 4 != iVar7);
        piVar2 = piVar19 + iVar23 * 4;
        piVar22 = (int *)((int)piVar19 + iVar7);
      }
      iVar7 = 0;
      piVar14 = piVar2;
      for (uVar8 = (uint)((int)(piVar19 + iVar23 * 4) - (int)piVar2) >> 4; uVar8 != 0;
          uVar8 = uVar8 - 1) {
        iVar23 = *piVar14;
        if (iVar23 != -0x80000000) {
          piVar5 = piVar14;
          if (iVar23 == -0x7fffffff) {
            iVar23 = piVar14[1];
            if (iVar23 == -0x80000000) goto LAB_0151350c;
            piVar5 = piVar2 + iVar7 * 4 + 1;
          }
          if (iVar23 != 0) {
            thunk_FUN_016d3fb4(piVar5[1]);
          }
        }
LAB_0151350c:
        iVar7 = iVar7 + 1;
        piVar14 = piVar14 + 4;
      }
      puVar16[2] = (uint)((int)piVar22 - (int)piVar19) >> 4;
      puVar16[3] = iVar13;
      puVar16[4] = iVar10;
      *puVar16 = uVar20;
      puVar16[1] = piVar19;
      puVar16[5] = iVar1;
      puVar16 = puVar9;
    } while (puVar9 != puVar3);
    local_30 = puVar3;
  }
  FUN_015181dc(&local_34);
  FUN_0151c6f4(&local_34);
  uVar20 = *param_2;
  uVar6 = param_2[1];
  uVar15 = param_2[2];
  param_1[4] = puVar12;
  *param_1 = uVar20;
  param_1[1] = uVar6;
  param_1[2] = uVar15;
  param_1[3] = uVar18;
  param_1[5] = ((uint)((int)puVar9 - (int)puVar12) >> 3) * -0x55555555;
  return;
}

