// FUN_013f8c24 @ 013f8c24 size=1092 calls_out=5 calls_in=0
// strings: assertion failed: !self.ranges[a].is_intersection_empty(&other.ranges[b])

/* WARNING: Removing unreachable block (ram,0x013f8dd4) */
/* WARNING: Removing unreachable block (ram,0x013f8de4) */

void FUN_013f8c24(uint *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  byte local_34;
  byte local_27;
  char local_26;
  byte local_25;
  
  uVar21 = param_1[2];
  if ((uVar21 != 0) && (uVar3 = *(uint *)(param_2 + 8), uVar3 != 0)) {
    iVar4 = *(int *)(param_2 + 4);
    uVar14 = 0;
    uVar20 = 0;
    uVar19 = uVar21;
    uVar12 = uVar21;
    do {
      if (uVar12 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar14,uVar12,&DAT_0189df00);
      }
      pbVar9 = (byte *)(iVar4 + uVar20 * 2);
      uVar5 = param_1[1];
      bVar16 = pbVar9[1];
      pbVar11 = (byte *)(uVar5 + uVar14 * 2);
      bVar15 = *pbVar11;
      if (bVar16 < bVar15) {
        uVar20 = uVar20 + 1;
      }
      else {
        bVar7 = *pbVar9;
        bVar17 = pbVar11[1];
        if (bVar17 < bVar7) {
          if (uVar12 == *param_1) {
            FUN_014017b4(param_1);
            uVar5 = param_1[1];
          }
          uVar18 = uVar12 + 1;
          param_1[2] = uVar18;
          pbVar9 = (byte *)(uVar5 + uVar12 * 2);
          *pbVar9 = bVar15;
        }
        else {
          bVar10 = bVar17;
          if (bVar16 < bVar17) {
            bVar10 = bVar16;
          }
          if (bVar7 <= bVar15) {
            bVar7 = bVar15;
          }
          if (bVar10 < bVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: !self.ranges[a].is_intersection_empty(&other.ranges[b])"
                         ,0x49,&DAT_0189df20);
          }
          if (uVar19 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar14,uVar19,&DAT_0189df10);
          }
          bVar16 = bVar17;
          if (uVar20 < uVar3) {
            do {
              pbVar9 = (byte *)(iVar4 + uVar20 * 2);
              bVar10 = *pbVar9;
              bVar7 = pbVar9[1];
              bVar8 = bVar15;
              if (bVar15 < bVar10) {
                bVar8 = bVar10;
              }
              bVar13 = bVar16;
              if (bVar7 < bVar16) {
                bVar13 = bVar7;
              }
              bVar17 = bVar16;
              if (bVar13 < bVar8) goto LAB_013f8e8c;
              bVar23 = bVar7 <= bVar16;
              bVar22 = bVar16 == bVar7;
              if (!bVar23 || bVar22) {
                bVar23 = bVar15 <= bVar10;
                bVar22 = bVar10 == bVar15;
              }
              if (!bVar23 || bVar22) {
                local_26 = '\0';
                uVar14 = uVar14 + 1;
                uVar12 = uVar19;
                goto joined_r0x013f8ed8;
              }
              bVar8 = bVar16;
              if (bVar15 < bVar10) {
                local_25 = bVar10 - 1;
                bVar17 = local_25;
                if (bVar7 < bVar16) {
                  local_26 = '\x01';
                  local_34 = bVar7 + 1;
                  if (bVar16 < local_34) {
                    bVar8 = local_34;
                  }
                  if (bVar16 <= local_34) {
                    local_34 = bVar16;
                  }
                  pbVar11 = &local_27;
                  goto LAB_013f8e14;
                }
              }
              else {
                if (bVar16 <= bVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa464(&DAT_003cefdd,0x28,&DAT_01894fc8);
                }
                pbVar11 = &local_25;
                local_26 = '\0';
                bVar15 = bVar7 + 1;
                if (bVar16 < bVar15) {
                  bVar8 = bVar15;
                }
                if (bVar16 <= bVar15) {
                  bVar15 = bVar16;
                }
LAB_013f8e14:
                *pbVar11 = bVar8;
                bVar17 = local_25;
                bVar10 = local_27;
                if (local_26 != '\0') {
                  if (uVar19 == *param_1) {
                    FUN_014017b4(param_1);
                    uVar5 = param_1[1];
                  }
                  pbVar11 = (byte *)(uVar5 + uVar19 * 2);
                  *pbVar11 = bVar15;
                  uVar19 = uVar19 + 1;
                  pbVar11[1] = bVar17;
                  bVar7 = pbVar9[1];
                  param_1[2] = uVar19;
                  bVar17 = bVar10;
                  bVar15 = local_34;
                }
              }
              if (bVar16 < bVar7) goto LAB_013f8e8c;
              uVar20 = uVar20 + 1;
              bVar16 = bVar17;
            } while (uVar3 != uVar20);
            uVar20 = uVar3;
          }
LAB_013f8e8c:
          if (uVar19 == *param_1) {
            FUN_014017b4(param_1);
          }
          uVar18 = uVar19 + 1;
          param_1[2] = uVar18;
          pbVar9 = (byte *)(param_1[1] + uVar19 * 2);
          *pbVar9 = bVar15;
        }
        pbVar9[1] = bVar17;
        uVar14 = uVar14 + 1;
        uVar19 = uVar18;
        uVar12 = uVar18;
      }
joined_r0x013f8ed8:
    } while ((uVar14 < uVar21) && (uVar20 < uVar3));
    if (uVar14 < uVar21) {
      uVar3 = uVar14 << 1 | 1;
      iVar4 = 0;
      do {
        uVar12 = uVar19 + iVar4;
        if (uVar12 <= uVar14 + iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar14 + iVar4,uVar12,&DAT_0189def0);
        }
        uVar20 = param_1[1];
        uVar1 = *(undefined1 *)(uVar20 + uVar3);
        uVar2 = ((undefined1 *)(uVar20 + uVar3))[-1];
        if (uVar12 == *param_1) {
          FUN_014017b4(param_1);
          uVar20 = param_1[1];
        }
        param_1[2] = uVar12 + 1;
        uVar3 = uVar3 + 2;
        puVar6 = (undefined1 *)(uVar20 + uVar19 * 2 + iVar4 * 2);
        *puVar6 = uVar2;
        iVar4 = iVar4 + 1;
        puVar6[1] = uVar1;
      } while ((uVar14 - uVar21) + iVar4 != 0);
      uVar19 = uVar19 + iVar4;
    }
    if (uVar19 < uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar21,uVar19,&DAT_018af198);
    }
    param_1[2] = 0;
    if (uVar19 != uVar21) {
      FUN_016dd52c(param_1[1],param_1[1] + uVar21 * 2,(uVar19 - uVar21) * 2);
      param_1[2] = uVar19 - uVar21;
    }
    *(byte *)(param_1 + 3) = (byte)param_1[3] & *(byte *)(param_2 + 0xc);
  }
  return;
}

