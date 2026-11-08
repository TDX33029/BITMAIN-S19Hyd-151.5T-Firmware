// FUN_016f5a18 @ 016f5a18 size=1016 calls_out=5 calls_in=1
// strings: assertion failed: !self.ranges[a].is_intersection_empty(&other.ranges[b])

/* WARNING: Removing unreachable block (ram,0x016f5b8c) */

void FUN_016f5a18(uint *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  byte bVar9;
  byte *pbVar10;
  byte bVar11;
  uint unaff_r5;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  byte local_44;
  uint local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  uVar17 = param_1[2];
  if (uVar17 != 0) {
    unaff_r5 = *(uint *)(param_2 + 8);
  }
  if (uVar17 != 0 && unaff_r5 != 0) {
    iVar3 = *(int *)(param_2 + 4);
    uVar14 = 0;
    uVar12 = 0;
    uVar18 = uVar17;
    do {
      if (uVar18 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,uVar18,&DAT_01d187d8);
      }
      pbVar8 = (byte *)(iVar3 + uVar12 * 2);
      uVar4 = param_1[1];
      bVar13 = pbVar8[1];
      pbVar10 = (byte *)(uVar4 + uVar14 * 2);
      bVar15 = *pbVar10;
      if (bVar13 < bVar15) {
        uVar12 = uVar12 + 1;
      }
      else {
        bVar7 = *pbVar8;
        bVar16 = pbVar10[1];
        if (bVar16 < bVar7) {
          if (uVar18 == *param_1) {
            FUN_016f5378(param_1);
            uVar4 = param_1[1];
          }
          pbVar8 = (byte *)(uVar4 + uVar18 * 2);
          *pbVar8 = bVar15;
        }
        else {
          bVar9 = bVar16;
          if (bVar13 < bVar16) {
            bVar9 = bVar13;
          }
          if (bVar7 <= bVar15) {
            bVar7 = bVar15;
          }
          if (bVar9 < bVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: !self.ranges[a].is_intersection_empty(&other.ranges[b])"
                         ,0x49,&DAT_01d187f8);
          }
          if (uVar18 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar14,uVar18,&DAT_01d187e8);
          }
          if (uVar12 < unaff_r5) {
            do {
              pbVar8 = (byte *)(iVar3 + uVar12 * 2);
              bVar13 = *pbVar8;
              bVar7 = pbVar8[1];
              bVar9 = bVar15;
              if (bVar15 < bVar13) {
                bVar9 = bVar13;
              }
              bVar11 = bVar16;
              if (bVar7 < bVar16) {
                bVar11 = bVar7;
              }
              if (bVar11 < bVar9) goto LAB_016f5c38;
              bVar20 = bVar7 <= bVar16;
              bVar19 = bVar16 == bVar7;
              if (!bVar20 || bVar19) {
                bVar20 = bVar15 <= bVar13;
                bVar19 = bVar13 == bVar15;
              }
              if (!bVar20 || bVar19) {
                local_38 = (uint)local_38._1_3_ << 8;
                uVar14 = uVar14 + 1;
                goto LAB_016f5c78;
              }
              bVar9 = bVar15;
              if (bVar15 < bVar13) {
                bVar13 = bVar13 - 1;
                bVar19 = false;
                if (bVar7 < bVar16) {
                  local_44 = bVar7 + 1;
                  bVar9 = bVar16;
                  if (bVar16 < local_44) {
                    bVar9 = local_44;
                  }
                  if (bVar16 <= local_44) {
                    local_44 = bVar16;
                  }
                  bVar19 = true;
                }
              }
              else {
                if (bVar16 <= bVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec(&DAT_004cff15,0x28,&DAT_01d0a218);
                }
                bVar15 = bVar7 + 1;
                bVar13 = bVar16;
                if (bVar16 < bVar15) {
                  bVar13 = bVar15;
                }
                if (bVar16 <= bVar15) {
                  bVar15 = bVar16;
                }
                bVar19 = false;
              }
              local_38 = CONCAT31(local_38._1_3_,bVar19);
              if (bVar19) {
                if (uVar18 == *param_1) {
                  FUN_016f5378(param_1);
                  uVar4 = param_1[1];
                }
                pbVar10 = (byte *)(uVar4 + uVar18 * 2);
                *pbVar10 = bVar15;
                uVar18 = uVar18 + 1;
                pbVar10[1] = bVar13;
                param_1[2] = uVar18;
                bVar7 = pbVar8[1];
                bVar15 = local_44;
                bVar13 = bVar9;
              }
              else {
              }
              bVar19 = bVar16 < bVar7;
              bVar16 = bVar13;
              if (bVar19) goto LAB_016f5c38;
              uVar12 = uVar12 + 1;
            } while (unaff_r5 != uVar12);
            uVar12 = unaff_r5;
          }
LAB_016f5c38:
          if (uVar18 == *param_1) {
            FUN_016f5378(param_1);
          }
          pbVar8 = (byte *)(param_1[1] + uVar18 * 2);
          *pbVar8 = bVar15;
        }
        uVar18 = uVar18 + 1;
        uVar14 = uVar14 + 1;
        pbVar8[1] = bVar16;
        param_1[2] = uVar18;
      }
LAB_016f5c78:
    } while ((uVar14 < uVar17) && (uVar12 < unaff_r5));
    if (uVar14 < uVar17) {
      uVar12 = uVar14 << 1 | 1;
      iVar3 = 0;
      do {
        uVar4 = uVar18 + iVar3;
        if (uVar4 <= uVar14 + iVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar14 + iVar3,uVar4,&DAT_01d187c8);
        }
        uVar6 = param_1[1];
        uVar1 = *(undefined1 *)(uVar6 + uVar12);
        uVar2 = ((undefined1 *)(uVar6 + uVar12))[-1];
        if (uVar4 == *param_1) {
          FUN_016f5378(param_1);
          uVar6 = param_1[1];
        }
        uVar12 = uVar12 + 2;
        puVar5 = (undefined1 *)(uVar6 + uVar18 * 2 + iVar3 * 2);
        *puVar5 = uVar2;
        iVar3 = iVar3 + 1;
        puVar5[1] = uVar1;
        param_1[2] = uVar4 + 1;
      } while ((uVar14 - uVar17) + iVar3 != 0);
      uVar18 = uVar18 + iVar3;
    }
    if (uVar18 < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar17,uVar18,&DAT_01d2fe30);
    }
    local_28 = uVar18 - uVar17;
    param_1[2] = 0;
    local_38 = param_1[1];
    local_34 = local_38 + uVar17 * 2;
    local_30 = param_1;
    local_2c = uVar17;
    FUN_00700ec0(&local_38);
    *(byte *)(param_1 + 3) = (byte)param_1[3] & *(byte *)(param_2 + 0xc);
  }
  return;
}

