// FUN_016f5618 @ 016f5618 size=988 calls_out=7 calls_in=1
// strings: assertion failed: !self.ranges[a].is_intersection_empty(&other.ranges[b])

void FUN_016f5618(uint *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *unaff_r5;
  uint uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint local_4c;
  uint local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  uVar10 = param_1[2];
  if (uVar10 != 0) {
    unaff_r5 = *(undefined1 **)(param_2 + 8);
  }
  if (uVar10 != 0 && unaff_r5 != (undefined1 *)0x0) {
    iVar9 = *(int *)(param_2 + 4);
    uVar19 = 0;
    puVar18 = (undefined1 *)0x0;
    uVar20 = uVar10;
    do {
      if (uVar20 <= uVar19) {
        puVar8 = &DAT_01d187d8;
        goto LAB_016f59e8;
      }
      local_4c = param_1[1];
      puVar3 = (undefined4 *)(iVar9 + (int)puVar18 * 8);
      puVar1 = (undefined1 *)puVar3[1];
      puVar6 = (undefined4 *)(local_4c + uVar19 * 8);
      puVar13 = (undefined1 *)*puVar6;
      if (puVar1 < puVar13) {
        puVar18 = puVar18 + 1;
      }
      else {
        puVar4 = (undefined1 *)*puVar3;
        puVar17 = (undefined1 *)puVar6[1];
        if (puVar17 < puVar4) {
          if (uVar20 == *param_1) {
            FUN_015f5ab8(param_1);
            local_4c = param_1[1];
          }
          puVar3 = (undefined4 *)(local_4c + uVar20 * 8);
          *puVar3 = puVar13;
          uVar20 = uVar20 + 1;
          uVar19 = uVar19 + 1;
          puVar3[1] = puVar17;
          param_1[2] = uVar20;
        }
        else {
          if (puVar17 <= puVar1) {
            puVar1 = puVar17;
          }
          if (puVar4 <= puVar13) {
            puVar4 = puVar13;
          }
          if (puVar1 < puVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: !self.ranges[a].is_intersection_empty(&other.ranges[b])"
                         ,0x49,&DAT_01d187f8);
          }
          if (uVar20 <= uVar19) {
            puVar8 = &DAT_01d187e8;
            goto LAB_016f59e8;
          }
          puVar1 = puVar17;
          if (puVar18 < unaff_r5) {
            do {
              puVar3 = (undefined4 *)(iVar9 + (int)puVar18 * 8);
              puVar2 = (undefined1 *)*puVar3;
              puVar15 = (undefined1 *)puVar3[1];
              puVar4 = puVar13;
              if (puVar13 < puVar2) {
                puVar4 = puVar2;
              }
              puVar7 = puVar1;
              if (puVar15 < puVar1) {
                puVar7 = puVar15;
              }
              puVar17 = puVar1;
              if (puVar7 < puVar4) goto LAB_016f5848;
              bVar22 = puVar13 <= puVar2;
              bVar21 = puVar2 == puVar13;
              if (!bVar22 || bVar21) {
                bVar22 = puVar15 <= puVar1;
                bVar21 = puVar1 == puVar15;
              }
              if (!bVar22 || bVar21) goto LAB_016f5884;
              if (puVar13 < puVar2) {
                puVar4 = (undefined1 *)FUN_016f6948();
                puVar2 = puVar4;
                if (puVar13 < puVar4) {
                  puVar2 = puVar13;
                }
                if (puVar13 >= puVar4 && puVar13 != puVar4) {
                  puVar4 = puVar13;
                }
                if (puVar15 < puVar1) goto LAB_016f5784;
LAB_016f57d0:
                puVar13 = puVar2;
                puVar17 = puVar4;
              }
              else {
                puVar2 = &DAT_00110000;
                puVar4 = unaff_r5;
                if (puVar1 <= puVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec(&DAT_004cff15,0x28,&DAT_01d0a218);
                }
LAB_016f5784:
                puVar13 = (undefined1 *)0xe000;
                if ((puVar15 != (undefined1 *)0xd7ff) &&
                   (puVar13 = puVar15 + 1, ((uint)puVar13 ^ 0xd800) - 0x110000 < 0xffef0800)) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0cc(&DAT_01d188d8);
                }
                if (puVar1 < puVar13) {
                  puVar17 = puVar13;
                }
                if (puVar1 <= puVar13) {
                  puVar13 = puVar1;
                }
                if (puVar2 != &DAT_00110000) {
                  if (puVar13 == &DAT_00110000) goto LAB_016f57d0;
                  if (uVar20 == *param_1) {
                    FUN_015f5ab8(param_1);
                    local_4c = param_1[1];
                  }
                  puVar6 = (undefined4 *)(local_4c + uVar20 * 8);
                  *puVar6 = puVar2;
                  uVar20 = uVar20 + 1;
                  puVar6[1] = puVar4;
                  param_1[2] = uVar20;
                }
              }
              if (puVar1 < (undefined1 *)puVar3[1]) goto LAB_016f5848;
              puVar18 = puVar18 + 1;
              puVar1 = puVar17;
            } while (unaff_r5 != puVar18);
            puVar18 = unaff_r5;
          }
LAB_016f5848:
          if (uVar20 == *param_1) {
            FUN_015f5ab8(param_1);
          }
          puVar3 = (undefined4 *)(param_1[1] + uVar20 * 8);
          *puVar3 = puVar13;
          uVar20 = uVar20 + 1;
          puVar3[1] = puVar17;
          param_1[2] = uVar20;
LAB_016f5884:
          uVar19 = uVar19 + 1;
        }
      }
    } while ((uVar19 < uVar10) && (puVar18 < unaff_r5));
    if (uVar19 < uVar10) {
      uVar11 = uVar19 << 3 | 4;
      uVar12 = uVar20 << 3 | 4;
      do {
        if (uVar20 <= uVar19) {
          puVar8 = &DAT_01d187c8;
LAB_016f59e8:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar19,uVar20,puVar8);
        }
        uVar5 = param_1[1];
        uVar16 = *(undefined4 *)(uVar5 + uVar11);
        uVar14 = ((undefined4 *)(uVar5 + uVar11))[-1];
        if (uVar20 == *param_1) {
          FUN_015f5ab8(param_1);
          uVar5 = param_1[1];
        }
        puVar3 = (undefined4 *)(uVar5 + uVar12);
        *puVar3 = uVar16;
        uVar20 = uVar20 + 1;
        uVar11 = uVar11 + 8;
        uVar12 = uVar12 + 8;
        uVar19 = uVar19 + 1;
        puVar3[-1] = uVar14;
        param_1[2] = uVar20;
      } while (uVar10 != uVar19);
    }
    if (uVar20 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar10,uVar20,&DAT_01d2fe30);
    }
    local_28 = uVar20 - uVar10;
    param_1[2] = 0;
    local_38 = param_1[1];
    local_34 = local_38 + uVar10 * 8;
    local_30 = param_1;
    local_2c = uVar10;
    FUN_016f1920(&local_38);
    *(byte *)(param_1 + 3) = (byte)param_1[3] & *(byte *)(param_2 + 0xc);
  }
  return;
}

