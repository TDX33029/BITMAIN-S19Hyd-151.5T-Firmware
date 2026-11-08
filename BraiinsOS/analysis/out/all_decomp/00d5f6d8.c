// FUN_00d5f6d8 @ 00d5f6d8 size=1404 calls_out=9 calls_in=2
// strings: 

void FUN_00d5f6d8(uint *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  uint uVar12;
  uint unaff_r4;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint unaff_r7;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  ulonglong uVar22;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  bVar1 = *(byte *)((int)param_2 + 9);
  uVar14 = (uint)bVar1;
  iVar5 = uVar14 - 1;
  if (uVar14 == 0 || iVar5 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    uVar15 = (uint)param_2[2];
    if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_01877f24);
    }
    uVar6 = (uint)*param_2;
    bVar13 = (byte)param_2[4];
    uVar4 = param_2[3];
    uVar2 = param_2[1];
    uVar19 = FUN_018462e8(uVar6,uVar15);
    if (uVar14 < 2) {
      uVar14 = ((uVar19 & 0xffff) * (uint)uVar2 + (uint)uVar4 * -2) * uVar15;
      if ((bVar1 & 1) != 0) {
        uVar14 = uVar14 - uVar15;
      }
    }
    else {
      uVar14 = uVar6 * uVar2;
    }
    bVar21 = 0x3ffffffe < uVar14;
    if (uVar14 < 0x40000000) {
      unaff_r7 = uVar14 << 2;
      bVar21 = 0x7ffffffe < unaff_r7;
    }
    if (bVar21) goto LAB_00d5f800;
    if (unaff_r7 == 0) {
      uVar20 = 2;
      uVar14 = 0;
    }
    else {
      uVar20 = thunk_FUN_016d4a50(unaff_r7);
      if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(2,unaff_r7);
      }
    }
    local_28 = 0;
    local_30 = uVar14;
    local_2c = uVar20;
    if (uVar15 <= uVar6) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        puVar10 = (undefined4 *)&DAT_01877f50;
        if ((uVar14 & 1) == 0) {
          puVar10 = &DAT_01877f34;
        }
        puVar7 = (ushort *)thunk_FUN_016d4a50(4);
        if (puVar7 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(2,4);
        }
        uVar17 = uVar14 + 1;
        uVar12 = uVar14 & 1;
        puVar7[1] = uVar2 - (((ushort)uVar12 ^ 1 ^ uVar2 - uVar4) & (ushort)bVar1 & 1);
        uVar9 = 0;
        if ((uVar14 & 0xffff) == (-uVar12 & uVar19 - 1 & 0xffff)) {
          uVar9 = uVar4;
        }
        *puVar7 = uVar9;
        pcVar11 = (code *)&LAB_00d5fcf0;
        if (uVar12 == 0) {
          pcVar11 = FUN_00d5fccc;
        }
        while( true ) {
          uVar22 = (*pcVar11)(puVar7);
          if ((uVar22 & 1) == 0) break;
          uVar12 = (int)(uVar22 >> 0x20) << 0x10;
          if ((bVar13 & 1) == 0) {
            uVar16 = uVar15;
            do {
              if (uVar6 == local_30) {
                FUN_00933400(&local_30);
                uVar20 = local_2c;
              }
              uVar8 = uVar16 + uVar14 * uVar15 + -1;
              uVar16 = uVar16 - 1;
              *(uint *)(uVar20 + uVar6 * 4) = uVar12 | uVar8 & 0xffff;
              uVar6 = uVar6 + 1;
              local_28 = uVar6;
            } while ((uVar16 & 0xffff) != 0);
          }
          else {
            uVar16 = 0;
            do {
              if (uVar6 == local_30) {
                FUN_00933400(&local_30);
              }
              uVar20 = uVar14 * uVar15 + uVar16;
              uVar16 = uVar16 + 1;
              *(uint *)(local_2c + uVar6 * 4) = uVar12 | uVar20 & 0xffff;
              uVar6 = uVar6 + 1;
              uVar20 = local_2c;
              local_28 = uVar6;
            } while (uVar15 != uVar16);
          }
          bVar13 = bVar13 ^ 1;
          local_28 = uVar6;
        }
        if ((code *)*puVar10 != (code *)0x0) {
          (*(code *)*puVar10)(puVar7);
        }
        thunk_FUN_016d3fb4(puVar7);
        bVar13 = bVar13 ^ 1;
        uVar14 = uVar17;
      } while ((uVar17 & 0xffff) < (uVar19 & 0xffff));
    }
  }
  else if (iVar5 == 1) {
    uVar14 = (uint)param_2[1];
    uVar19 = (uint)*param_2;
    uVar15 = uVar14 * uVar19;
    bVar21 = 0x3ffffffe < uVar15;
    if (uVar15 < 0x40000000) {
      unaff_r4 = uVar15 * 4;
      bVar21 = 0x7ffffffe < unaff_r4;
    }
    if (bVar21) goto LAB_00d5f800;
    uVar4 = param_2[2];
    if (unaff_r4 == 0) {
      uVar6 = 2;
      uVar15 = 0;
    }
    else {
      uVar6 = thunk_FUN_016d4a50(unaff_r4);
      if (uVar6 == 0) goto LAB_00d5f7e0;
    }
    local_28 = 0;
    local_30 = uVar15;
    local_2c = uVar6;
    if (uVar14 != 0) {
      iVar18 = 0;
      iVar5 = -1;
      uVar15 = 0;
      uVar20 = 0;
      do {
        uVar17 = uVar19;
        iVar3 = iVar18;
        if ((~uVar20 & 1) == (uint)(byte)uVar4) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            if (uVar15 == local_30) {
              FUN_00933400(&local_30);
              uVar6 = local_2c;
            }
            *(int *)(uVar6 + uVar15 * 4) = iVar3;
            uVar15 = uVar15 + 1;
            iVar3 = iVar3 + 1;
            local_28 = uVar15;
          }
        }
        else {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            if (uVar15 == local_30) {
              FUN_00933400(&local_30);
            }
            *(uint *)(local_2c + uVar15 * 4) = iVar5 + uVar17;
            uVar15 = uVar15 + 1;
            uVar6 = local_2c;
            local_28 = uVar15;
          }
        }
        uVar20 = uVar20 + 1;
        iVar5 = iVar5 + 0x10000;
        iVar18 = iVar18 + 0x10000;
      } while (uVar20 != uVar14);
    }
  }
  else {
    uVar14 = (uint)*param_2;
    uVar15 = (uint)param_2[1];
    uVar19 = uVar15 * uVar14;
    bVar21 = 0x3ffffffe < uVar19;
    if (uVar19 < 0x40000000) {
      unaff_r4 = uVar19 * 4;
      bVar21 = 0x7ffffffe < unaff_r4;
    }
    if (bVar21) {
LAB_00d5f800:
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    if (unaff_r4 == 0) {
      uVar6 = 2;
      uVar19 = 0;
    }
    else {
      uVar6 = thunk_FUN_016d4a50(unaff_r4);
      if (uVar6 == 0) {
LAB_00d5f7e0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(2,unaff_r4);
      }
    }
    local_28 = 0;
    uVar20 = 0;
    if (uVar14 != 0) {
      uVar20 = uVar15;
    }
    local_30 = uVar19;
    local_2c = uVar6;
    if (uVar14 != 0 && uVar20 != 0) {
      uVar19 = 0;
      iVar5 = uVar15 * 0x10000 + -0x10000;
      do {
        uVar20 = uVar15;
        uVar17 = uVar19;
        iVar18 = iVar5;
        if ((uVar19 & 1) == 0) {
          do {
            uVar6 = local_28;
            if (local_28 == local_30) {
              FUN_00933400(&local_30);
            }
            uVar20 = uVar20 - 1;
            *(uint *)(local_2c + uVar6 * 4) = uVar17;
            local_28 = uVar6 + 1;
            uVar17 = uVar17 + 0x10000;
            uVar6 = local_2c;
          } while (uVar20 != 0);
        }
        else {
          do {
            uVar17 = local_28;
            if (local_28 == local_30) {
              FUN_00933400(&local_30);
              uVar6 = local_2c;
            }
            *(int *)(uVar6 + uVar17 * 4) = iVar18;
            local_28 = uVar17 + 1;
            uVar20 = uVar20 - 1;
            iVar18 = iVar18 + -0x10000;
          } while (uVar20 != 0);
        }
        uVar19 = uVar19 + 1;
        iVar5 = iVar5 + 1;
      } while (uVar19 != uVar14);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

