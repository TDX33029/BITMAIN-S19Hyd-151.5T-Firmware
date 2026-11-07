// FUN_012633f8 @ 012633f8 size=2236 calls_out=10 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012633f8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  int local_f8;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_80;
  int *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int *local_48;
  int *local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  piVar23 = *(int **)(param_2 + 0x54);
  do {
    iVar7 = *piVar23;
    bVar3 = (bool)hasExclusiveAccess(piVar23);
  } while (!bVar3);
  *piVar23 = iVar7 + 1;
  if (-1 < iVar7) {
    local_48 = (int *)piVar23[3];
    local_44 = (int *)piVar23[4];
    local_40 = piVar23[5];
    iStack_3c = piVar23[6];
    iStack_38 = piVar23[7];
    local_34 = piVar23[8];
    iStack_30 = piVar23[9];
    iStack_2c = piVar23[10];
    iStack_28 = piVar23[0xb];
    FUN_0134831c(&local_80,*(undefined4 *)(param_2 + 0x50),&local_48,param_3,param_4);
    piVar10 = local_7c;
    if (local_80 != -0x7ffffff6) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar23;
        bVar3 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar3);
      *piVar23 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013532e4(piVar23);
      }
LAB_0126377c:
      uVar18 = FUN_0125a1a4(&local_80);
      *param_1 = 1;
      param_1[1] = uVar18;
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar23;
      bVar3 = (bool)hasExclusiveAccess(piVar23);
    } while (!bVar3);
    *piVar23 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(piVar23);
    }
    iVar7 = *(int *)(param_2 + 0x5c);
    if (*(uint *)(iVar7 + 8) < 0x7fffffff) {
      *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) + 1;
      if (*(int *)(iVar7 + 0x1c) == 0) {
        bVar3 = false;
      }
      else {
        iVar13 = piVar10[3];
        local_78 = *(undefined4 *)(iVar7 + 0x38);
        uStack_68 = *(uint *)(iVar7 + 0x20);
        uStack_64 = *(uint *)(iVar7 + 0x24);
        uStack_74 = *(undefined4 *)(iVar7 + 0x3c);
        iVar16 = piVar10[4];
        local_70 = *(uint *)(iVar7 + 0x28);
        uStack_6c = *(uint *)(iVar7 + 0x2c);
        local_80 = *(int *)(iVar7 + 0x30);
        local_7c = *(int **)(iVar7 + 0x34);
        FUN_011df94c(&local_80);
        uVar8 = local_70 ^ 0xff;
        uVar14 = uStack_6c << 0x18 | (uStack_6c >> 8 & 0xff) << 0x10 |
                 (uStack_6c >> 0x10 & 0xff) << 8 | uStack_6c >> 0x18;
        lVar5 = (ulonglong)uVar14 * 0xb36a80d2;
        uVar19 = (uint)lVar5;
        uVar14 = (uVar8 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
                 local_70 >> 0x18) * -0x4c957f2e +
                 uVar14 * -0x5851f42e + (int)((ulonglong)lVar5 >> 0x20);
        uVar15 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18) ^
                 uStack_6c * 0x2df45158 +
                 uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
        uVar17 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 |
                 (uStack_64 >> 0x10 & 0xff) << 8 | uStack_64 >> 0x18;
        uVar19 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
        lVar5 = (ulonglong)uVar17 * (ulonglong)uVar19;
        uVar8 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                uVar15 >> 0x18;
        lVar6 = (ulonglong)~uStack_68 * (ulonglong)uVar8;
        uVar14 = (uint)lVar6;
        uVar21 = *(uint *)(iVar7 + 0x14);
        uVar8 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                uVar19 >> 0x18) * ~uStack_68 + uVar8 * ~uStack_64 + (int)((ulonglong)lVar6 >> 0x20);
        iVar20 = *(int *)(iVar7 + 0x10);
        uVar15 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                 uVar14 >> 0x18) ^
                 uVar15 * uVar17 +
                 uVar19 * (uStack_68 << 0x18 | (uStack_68 >> 8 & 0xff) << 0x10 |
                           (uStack_68 >> 0x10 & 0xff) << 8 | uStack_68 >> 0x18) +
                 (int)((ulonglong)lVar5 >> 0x20);
        uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                uVar8 >> 0x18) ^ (uint)lVar5;
        uVar14 = uVar15;
        if ((uVar19 & 0x20) != 0) {
          uVar14 = uVar8;
          uVar8 = uVar15;
        }
        uVar14 = uVar8 << (uVar19 & 0x1f) | (uVar14 >> 1) >> (~uVar19 & 0x1f);
        uVar8 = uVar14 >> 0x19;
        local_f8 = 0;
        while( true ) {
          uVar14 = uVar21 & uVar14;
          uVar15 = *(uint *)(iVar20 + uVar14);
          uVar19 = uVar15 ^ uVar8 * 0x1010101;
          uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff;
          while (uVar19 != 0) {
            uVar17 = uVar19 >> 8;
            uVar22 = uVar19 >> 0x10;
            uVar24 = uVar19 >> 0x18;
            uVar2 = uVar19 << 0x18;
            uVar19 = uVar19 - 1 & uVar19;
            iVar9 = *(int *)(iVar20 + -4 +
                            (uVar14 + ((uint)LZCOUNT(uVar2 | (uVar17 & 0xff) << 0x10 |
                                                     (uVar22 & 0xff) << 8 | uVar24) >> 3) & uVar21)
                            * -4);
            if (iVar16 == *(int *)(iVar9 + 0x10)) {
              iVar9 = thunk_FUN_016dd50a(iVar13,*(undefined4 *)(iVar9 + 0xc),iVar16);
              bVar3 = true;
              if (iVar9 == 0) goto LAB_012637a0;
            }
          }
          bVar3 = false;
          if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
          local_f8 = local_f8 + 4;
          uVar14 = uVar14 + local_f8;
        }
      }
LAB_012637a0:
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar10;
        bVar4 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar4);
      *piVar10 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_013532e4(piVar10);
      }
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
      if (!bVar3) {
LAB_01263c60:
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      do {
        iVar7 = *piVar23;
        bVar3 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar3);
      *piVar23 = iVar7 + 1;
      if (-1 < iVar7) {
        local_48 = (int *)piVar23[3];
        local_44 = (int *)piVar23[4];
        local_40 = piVar23[5];
        iStack_3c = piVar23[6];
        iStack_38 = piVar23[7];
        local_34 = piVar23[8];
        iStack_30 = piVar23[9];
        iStack_2c = piVar23[10];
        iStack_28 = piVar23[0xb];
        FUN_0134831c(&local_80,*(undefined4 *)(param_2 + 0x50),&local_48,param_3,param_4);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar23;
          bVar3 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar3);
        *piVar23 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(piVar23);
        }
        piVar23 = local_7c;
        if (local_80 != -0x7ffffff6) goto LAB_0126377c;
        do {
          iVar7 = *local_7c;
          bVar3 = (bool)hasExclusiveAccess(local_7c);
        } while (!bVar3);
        *local_7c = iVar7 + 1;
        if (-1 < iVar7) {
          piVar10 = *(int **)(param_2 + 0x58);
          if (piVar10 != (int *)0x0) {
            do {
              iVar7 = *piVar10;
              bVar3 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar3);
            *piVar10 = iVar7 + 1;
            if (iVar7 < 0) goto LAB_01263cb4;
          }
          local_48 = local_7c;
          local_44 = piVar10;
          FUN_01260d78(&local_98,*(undefined4 *)(param_2 + 100),&local_48);
          if (local_98 != 0) {
            piVar10 = (int *)thunk_FUN_016d4a50(0x14);
            if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x14);
            }
            *piVar10 = local_98;
            piVar10[1] = iStack_94;
            piVar10[2] = iStack_90;
            piVar10[3] = iStack_8c;
            piVar10[4] = iStack_88;
            param_1[1] = piVar10;
            param_1[2] = &DAT_0188adf8;
            *param_1 = 0;
            FUN_01224b0c(&local_48);
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar23;
              bVar3 = (bool)hasExclusiveAccess(piVar23);
            } while (!bVar3);
            *piVar23 = iVar7 + -1;
LAB_01263c0c:
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_013532e4(piVar23);
            }
            return;
          }
          iVar7 = *(int *)(param_2 + 0x6c);
          uVar8 = *(uint *)(iVar7 + 8);
          if (uVar8 < 0x7fffffff) {
            *(uint *)(iVar7 + 8) = uVar8 + 1;
            if (*(int *)(iVar7 + 0x1c) != 0) {
              local_7c = *(int **)(iVar7 + 0x34);
              uStack_68 = *(uint *)(iVar7 + 0x20);
              uStack_64 = *(uint *)(iVar7 + 0x24);
              iVar16 = piVar23[3];
              iVar20 = piVar23[4];
              local_70 = *(uint *)(iVar7 + 0x28);
              uStack_6c = *(uint *)(iVar7 + 0x2c);
              local_80 = *(int *)(iVar7 + 0x30);
              FUN_011df94c(&local_80);
              uVar14 = local_70 ^ 0xff;
              uVar19 = uStack_6c << 0x18 | (uStack_6c >> 8 & 0xff) << 0x10 |
                       (uStack_6c >> 0x10 & 0xff) << 8 | uStack_6c >> 0x18;
              lVar5 = (ulonglong)uVar19 * 0xb36a80d2;
              uVar15 = (uint)lVar5;
              uVar21 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8
                       | uVar15 >> 0x18) ^
                       uStack_6c * 0x2df45158 +
                       uVar14 * 0x2d7f954c + (int)((ulonglong)uVar14 * 0x2df45158 >> 0x20);
              uVar17 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8
                       | uVar21 >> 0x18;
              lVar6 = (ulonglong)~uStack_68 * (ulonglong)uVar17;
              uVar22 = (uint)lVar6;
              uVar19 = (uVar14 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 |
                        (local_70 >> 0x10 & 0xff) << 8 | local_70 >> 0x18) * -0x4c957f2e +
                       uVar19 * -0x5851f42e + (int)((ulonglong)lVar5 >> 0x20);
              uVar15 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 |
                        (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) ^
                       (uint)((ulonglong)uVar14 * 0x2df45158);
              uVar24 = *(uint *)(iVar7 + 0x14);
              uVar14 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8
                       | uVar15 >> 0x18) * ~uStack_68 +
                       uVar17 * ~uStack_64 + (int)((ulonglong)lVar6 >> 0x20);
              uVar19 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 |
                       (uStack_64 >> 0x10 & 0xff) << 8 | uStack_64 >> 0x18;
              lVar5 = (ulonglong)uVar19 * (ulonglong)uVar15;
              iVar9 = 0;
              iVar13 = *(int *)(iVar7 + 0x10);
              uVar14 = (uVar14 * 0x1000000 | (uVar14 >> 8 & 0xff) << 0x10 |
                        (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) ^ (uint)lVar5;
              uVar17 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8
                       | uVar22 >> 0x18) ^
                       uVar21 * uVar19 +
                       uVar15 * (uStack_68 << 0x18 | (uStack_68 >> 8 & 0xff) << 0x10 |
                                 (uStack_68 >> 0x10 & 0xff) << 8 | uStack_68 >> 0x18) +
                       (int)((ulonglong)lVar5 >> 0x20);
              uVar19 = uVar17;
              if ((uVar15 & 0x20) != 0) {
                uVar19 = uVar14;
                uVar14 = uVar17;
              }
              uVar19 = uVar14 << (uVar15 & 0x1f) | (uVar19 >> 1) >> (~uVar15 & 0x1f);
              uVar14 = uVar19 >> 0x19;
              while( true ) {
                uVar19 = uVar24 & uVar19;
                uVar17 = *(uint *)(iVar13 + uVar19);
                uVar15 = uVar17 ^ uVar14 * 0x1010101;
                for (uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff; uVar15 != 0;
                    uVar15 = uVar15 - 1 & uVar15) {
                  uVar21 = uVar19 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                                   (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >>
                                    3) & uVar24;
                  piVar10 = *(int **)(iVar13 + -8 + uVar21 * -8);
                  if ((piVar23 == piVar10) ||
                     ((iVar20 == piVar10[4] &&
                      (iVar11 = thunk_FUN_016dd50a(iVar16,piVar10[3]), iVar11 == 0)))) {
                    iVar13 = iVar13 + uVar21 * -8;
                    piVar10 = *(int **)(iVar13 + -4);
                    do {
                      iVar16 = *piVar10;
                      bVar3 = (bool)hasExclusiveAccess(piVar10);
                    } while (!bVar3);
                    *piVar10 = iVar16 + 1;
                    if (-1 < iVar16) {
                      uVar18 = *(undefined4 *)(iVar13 + -4);
                      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
                      puVar12 = (undefined4 *)thunk_FUN_016d4a50(4);
                      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00600874(4,4);
                      }
                      *puVar12 = uVar18;
                      param_1[1] = puVar12;
                      param_1[2] = &DAT_0188ae18;
                      *param_1 = 0;
                      FUN_01224b0c(&local_48);
                      DataMemoryBarrier(0xb);
                      do {
                        iVar7 = *piVar23;
                        bVar3 = (bool)hasExclusiveAccess(piVar23);
                      } while (!bVar3);
                      *piVar23 = iVar7 + -1;
                      goto LAB_01263c0c;
                    }
                    goto LAB_01263cb4;
                  }
                }
                if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
                iVar9 = iVar9 + 4;
                uVar19 = uVar19 + iVar9;
              }
            }
            *(uint *)(iVar7 + 8) = uVar8;
            FUN_01224b0c(&local_48);
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar23;
              bVar3 = (bool)hasExclusiveAccess(piVar23);
            } while (!bVar3);
            *piVar23 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_013532e4(piVar23);
            }
            goto LAB_01263c60;
          }
          FUN_00fb71b0(&DAT_0188ae38);
        }
      }
    }
    else {
      FUN_00fb71b0(&DAT_0188add8);
    }
  }
LAB_01263cb4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1263cb4);
  (*pcVar1)();
}

