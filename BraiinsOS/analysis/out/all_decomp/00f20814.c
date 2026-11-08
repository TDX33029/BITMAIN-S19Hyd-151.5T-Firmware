// FUN_00f20814 @ 00f20814 size=976 calls_out=3 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f20814(uint *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int local_60;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_30;
  int local_2c;
  int local_28;
  
  iVar17 = param_3 * 0x30;
  if (0x2aaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar17 == 0) {
    local_4c = 8;
    local_50 = 0;
  }
  else {
    local_4c = thunk_FUN_016d4a50(iVar17);
    if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar17);
    }
    local_50 = param_3;
    if (param_3 != 0) {
      piVar4 = param_2 + param_3 * 0xc;
      iVar17 = 0;
      uVar19 = param_3;
      do {
        if (param_2 == piVar4) break;
        iVar21 = param_2[6];
        iVar14 = param_2[5];
        if (iVar21 == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(iVar21);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar21);
          }
        }
        uVar23 = 0xf208e4;
        FUN_016dd1aa(iVar5,iVar14,iVar21);
        iVar14 = *param_2;
        if (iVar14 != 2) {
          local_30 = param_2[1];
          local_2c = param_2[2];
          local_28 = param_2[3];
        }
        iVar3 = local_2c;
        uVar2 = local_30;
        local_30 = 0x80000000;
        if (param_2[8] != -0x80000000) {
          uVar23 = param_2[10];
          uVar6 = 0;
          if (0x3333333 < uVar23) {
LAB_00f20ba0:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar6,local_60);
          }
          local_60 = uVar23 * 0x28;
          if (local_60 == 0) {
            local_2c = 4;
            local_30 = 0;
          }
          else {
            iVar7 = param_2[9];
            local_2c = thunk_FUN_016d4a50(local_60);
            if (local_2c == 0) {
              uVar6 = 4;
              goto LAB_00f20ba0;
            }
            local_30 = uVar23;
            if (uVar23 != 0) {
              iVar20 = 0;
              uVar11 = 0;
              iVar22 = iVar7;
              do {
                if (local_60 == iVar20) break;
                iVar15 = *(int *)(iVar22 + 8);
                iVar18 = 1;
                uVar6 = *(undefined4 *)(iVar22 + 4);
                uVar1 = *(undefined1 *)(iVar22 + 0x24);
                iVar8 = 1;
                if ((iVar15 != 0) && (iVar8 = thunk_FUN_016d4a50(iVar15), iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,iVar15);
                }
                FUN_016dd1aa(iVar8,uVar6,iVar15);
                iVar16 = *(int *)(iVar22 + 0x14);
                uVar6 = *(undefined4 *)(iVar22 + 0x10);
                if ((iVar16 != 0) && (iVar18 = thunk_FUN_016d4a50(iVar16), iVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,iVar16);
                }
                FUN_016dd1aa(iVar18,uVar6,iVar16);
                iVar13 = -0x80000000;
                uVar10 = uVar19;
                if (*(int *)(iVar22 + 0x18) != -0x80000000) {
                  iVar9 = iVar7 + iVar20;
                  iVar13 = *(int *)(iVar9 + 0x20);
                  uVar6 = *(undefined4 *)(iVar9 + 0x1c);
                  if (iVar13 == 0) {
                    uVar10 = 1;
                  }
                  else {
                    uVar10 = thunk_FUN_016d4a50(iVar13,uVar6);
                    if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600af4(1,iVar13);
                    }
                  }
                  FUN_016dd1aa(uVar10,uVar6,iVar13);
                }
                iVar22 = iVar22 + 0x28;
                piVar12 = (int *)(local_2c + iVar20);
                *piVar12 = iVar15;
                uVar11 = uVar11 + 1;
                iVar20 = iVar20 + 0x28;
                *(undefined1 *)(piVar12 + 9) = uVar1;
                piVar12[7] = uVar10;
                piVar12[1] = iVar8;
                piVar12[2] = iVar15;
                piVar12[3] = iVar16;
                piVar12[4] = iVar18;
                piVar12[5] = iVar16;
                piVar12[6] = iVar13;
                piVar12[8] = iVar13;
              } while (uVar23 != uVar11);
            }
          }
          local_54 = local_2c;
          local_60 = local_2c;
        }
        uVar19 = uVar19 - 1;
        param_2 = param_2 + 0xc;
        piVar12 = (int *)(local_4c + iVar17 * 0x30);
        *piVar12 = iVar14;
        piVar12[2] = iVar3;
        piVar12[8] = local_30;
        piVar12[9] = local_54;
        piVar12[10] = uVar23;
        piVar12[1] = uVar2;
        piVar12[3] = local_28;
        piVar12[4] = iVar21;
        piVar12[5] = iVar5;
        piVar12[6] = iVar21;
        iVar17 = iVar17 + 1;
        local_30 = uVar2;
        local_2c = iVar3;
      } while (uVar19 != 0);
    }
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = param_3;
  return;
}

