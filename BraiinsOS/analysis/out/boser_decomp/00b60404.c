// FUN_00b60404 @ 00b60404 size=1828 calls_out=4 calls_in=2
// strings: 

void FUN_00b60404(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_190;
  uint local_174;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar4 = uVar31 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar31;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar20 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar20) + (param_2 >> iVar20) >> 1;
  }
  uVar18 = 0;
  uVar16 = 0;
  uVar26 = 1;
  do {
    uVar13 = 0;
    local_190 = 1;
    if (uVar18 < param_2) {
      iVar20 = param_1 + uVar18 * 0x38;
      local_190 = param_2 - uVar18;
      if (local_190 < uVar5) {
LAB_00b604fc:
        if (param_5 == 0) {
          if (uVar5 <= local_190) {
            local_190 = uVar5;
          }
          local_190 = local_190 << 1;
        }
        else {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_00b5fb30(iVar20,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        if (local_190 < 2) {
          local_174 = local_190;
        }
        else {
          uVar15 = *(uint *)(iVar20 + 8);
          uVar9 = *(uint *)(iVar20 + 0x3c);
          uVar8 = *(uint *)(iVar20 + 0x40);
          uVar13 = uVar15;
          if (uVar8 < uVar15) {
            uVar13 = uVar8;
          }
          iVar6 = FUN_01bed842(uVar9,*(undefined4 *)(iVar20 + 4),uVar13);
          if (iVar6 == 0) {
            iVar6 = uVar8 - uVar15;
          }
          if (iVar6 < 0) {
            if (local_190 == 2) {
              local_174 = 2;
              uVar13 = 1;
LAB_00b60708:
              uVar8 = 0;
              iVar6 = param_1 + -0x38 + uVar18 * 0x38 + local_174 * 0x38;
              do {
                iVar7 = 0;
                do {
                  uVar19 = *(undefined4 *)(iVar20 + iVar7 * -4);
                  *(undefined4 *)(iVar20 + iVar7 * -4) = *(undefined4 *)(iVar6 + iVar7 * -4);
                  *(undefined4 *)(iVar6 + iVar7 * -4) = uVar19;
                  bVar30 = iVar7 != -0xd;
                  iVar7 = iVar7 + -1;
                } while (bVar30);
                uVar8 = uVar8 + 1;
                iVar20 = iVar20 + 0x38;
                iVar6 = iVar6 + -0x38;
              } while (uVar8 != uVar13);
            }
            else {
              puVar24 = (uint *)(param_1 + 0x78 + uVar18 * 0x38);
              local_174 = 2;
              do {
                uVar15 = puVar24[-1];
                uVar29 = *puVar24;
                uVar13 = uVar8;
                if (uVar29 < uVar8) {
                  uVar13 = uVar29;
                }
                uVar13 = FUN_01bed842(uVar15,uVar9,uVar13);
                if (uVar13 == 0) {
                  uVar13 = uVar29 - uVar8;
                }
                if (uVar13 < 0x80000000) goto LAB_00b606d4;
                puVar24 = puVar24 + 0xe;
                local_174 = local_174 + 1;
                uVar8 = uVar29;
                uVar9 = uVar15;
              } while (local_190 != local_174);
LAB_00b606c0:
              local_174 = local_190;
LAB_00b606d4:
              if (local_174 < uVar5) goto LAB_00b604fc;
              if (iVar6 < 0) {
                uVar13 = local_174 >> 1;
                if (uVar13 != 0) goto LAB_00b60708;
                local_174 = 1;
              }
            }
          }
          else {
            local_174 = 2;
            if (local_190 != 2) {
              puVar24 = (uint *)(param_1 + 0x78 + uVar18 * 0x38);
              local_174 = 2;
              do {
                uVar15 = puVar24[-1];
                uVar29 = *puVar24;
                uVar13 = uVar8;
                if (uVar29 < uVar8) {
                  uVar13 = uVar29;
                }
                iVar7 = FUN_01bed842(uVar15,uVar9,uVar13);
                if (iVar7 == 0) {
                  iVar7 = uVar29 - uVar8;
                }
                if (iVar7 < 0) goto LAB_00b606d4;
                puVar24 = puVar24 + 0xe;
                local_174 = local_174 + 1;
                uVar8 = uVar29;
                uVar9 = uVar15;
              } while (local_190 != local_174);
              goto LAB_00b606c0;
            }
          }
        }
        local_190 = local_174 << 1 | 1;
      }
      uVar8 = uVar18 - (uVar26 >> 1);
      uVar9 = uVar8 + uVar18;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar9;
      uVar15 = (local_190 >> 1) + uVar18 * 2;
      lVar2 = (ulonglong)uVar15 * (uVar4 & 0xffffffff);
      uVar13 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar8 = iVar3 * uVar15 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar18) * (int)uVar4 +
              uVar9 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar8 != 0) {
        uVar13 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar16) {
      puVar10 = (undefined4 *)(param_1 + uVar18 * 0x38);
      do {
        uVar8 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar13) goto LAB_00b60ac0;
        uVar15 = local_170[uVar8];
        uVar16 = uVar15 >> 1;
        uVar9 = uVar16 + (uVar26 >> 1);
        if ((param_4 < uVar9) || (((uVar15 | uVar26) & 1) != 0)) {
          puVar11 = (undefined4 *)(param_1 + (uVar18 - uVar9) * 0x38);
          if ((uVar15 & 1) == 0) {
            FUN_00b5fb30(puVar11,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
          }
          uVar29 = uVar26 >> 1;
          if ((uVar26 & 1) == 0) {
            FUN_00b5fb30(puVar11 + uVar16 * 0xe,uVar29,param_3,param_4,
                         LZCOUNT(uVar29 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar15 && 1 < uVar26) {
            uVar26 = uVar16;
            if (uVar29 < uVar16) {
              uVar26 = uVar29;
            }
            if (uVar26 <= param_4) {
              puVar27 = puVar11 + uVar16 * 0xe;
              puVar28 = puVar11;
              if (uVar29 < uVar16) {
                puVar28 = puVar27;
              }
              puVar12 = (undefined4 *)FUN_01bed4e2(param_3,puVar28,uVar26 * 0x38);
              puVar17 = param_3 + uVar26 * 0xe;
              puVar25 = param_3;
              if (uVar29 < uVar16) {
                puVar27 = (undefined4 *)(param_1 + -0x38 + uVar18 * 0x38);
                do {
                  uVar15 = puVar28[-0xc];
                  uVar16 = puVar17[-0xc];
                  uVar26 = uVar15;
                  if (uVar16 < uVar15) {
                    uVar26 = uVar16;
                  }
                  uVar26 = FUN_01bed842(puVar17[-0xd],puVar28[-0xd],uVar26);
                  if (uVar26 == 0) {
                    uVar26 = uVar16 - uVar15;
                  }
                  puVar12 = puVar28 + -0xe;
                  if (uVar26 < 0x80000000) {
                    puVar12 = puVar17 + -0xe;
                  }
                  uVar19 = puVar12[1];
                  uVar21 = puVar12[2];
                  uVar22 = puVar12[3];
                  *puVar27 = *puVar12;
                  puVar27[1] = uVar19;
                  puVar27[2] = uVar21;
                  puVar27[3] = uVar22;
                  uVar19 = puVar12[5];
                  uVar21 = puVar12[6];
                  uVar22 = puVar12[7];
                  uVar23 = puVar12[8];
                  puVar27[4] = puVar12[4];
                  puVar27[5] = uVar19;
                  puVar27[6] = uVar21;
                  puVar27[7] = uVar22;
                  puVar27[8] = uVar23;
                  uVar19 = puVar12[10];
                  uVar21 = puVar12[0xb];
                  uVar22 = puVar12[0xc];
                  uVar23 = puVar12[0xd];
                  puVar27[9] = puVar12[9];
                  puVar27[10] = uVar19;
                  puVar27[0xb] = uVar21;
                  puVar27[0xc] = uVar22;
                  puVar27[0xd] = uVar23;
                  puVar17 = puVar17 + -0xe + ((int)uVar26 >> 0x1f) * -0xe;
                  puVar28 = puVar28 + -0xe + (uVar26 >> 0x1f ^ 1) * 0xe;
                } while ((puVar28 != puVar11) && (puVar27 = puVar27 + -0xe, puVar17 != param_3));
LAB_00b60a90:
              }
              else {
                if (uVar26 != 0) {
                  puVar12 = puVar10;
                }
                if (uVar26 != 0 && puVar27 != puVar12) {
                  puVar11 = puVar28;
                  do {
                    uVar16 = puVar25[2];
                    uVar15 = puVar27[2];
                    uVar26 = uVar16;
                    if (uVar15 < uVar16) {
                      uVar26 = uVar15;
                    }
                    puVar12 = (undefined4 *)FUN_01bed842(puVar27[1],puVar25[1],uVar26);
                    if (puVar12 == (undefined4 *)0x0) {
                      puVar12 = (undefined4 *)(uVar15 - uVar16);
                    }
                    puVar28 = puVar11 + 0xe;
                    puVar14 = puVar27;
                    if (puVar12 < &DAT_80000000) {
                      puVar14 = puVar25;
                    }
                    uVar19 = puVar14[1];
                    uVar21 = puVar14[2];
                    uVar22 = puVar14[3];
                    *puVar11 = *puVar14;
                    puVar11[1] = uVar19;
                    puVar11[2] = uVar21;
                    puVar11[3] = uVar22;
                    uVar19 = puVar14[5];
                    uVar21 = puVar14[6];
                    uVar22 = puVar14[7];
                    uVar23 = puVar14[8];
                    puVar11[4] = puVar14[4];
                    puVar11[5] = uVar19;
                    puVar11[6] = uVar21;
                    puVar11[7] = uVar22;
                    puVar11[8] = uVar23;
                    uVar19 = puVar14[10];
                    uVar21 = puVar14[0xb];
                    uVar22 = puVar14[0xc];
                    uVar23 = puVar14[0xd];
                    puVar11[9] = puVar14[9];
                    puVar11[10] = uVar19;
                    puVar11[0xb] = uVar21;
                    puVar11[0xc] = uVar22;
                    puVar11[0xd] = uVar23;
                    puVar25 = puVar25 + ((uint)puVar12 >> 0x1f ^ 1) * 0xe;
                    if (puVar25 != puVar17) {
                      puVar27 = puVar27 + ((int)puVar12 >> 0x1f) * -0xe;
                      puVar12 = puVar10;
                    }
                    puVar11 = puVar28;
                  } while (puVar25 != puVar17 && puVar27 != puVar12);
                  goto LAB_00b60a90;
                }
              }
              FUN_01bed4e2(puVar28,puVar25,(int)puVar17 - (int)puVar25);
            }
          }
          uVar26 = uVar9 * 2 | 1;
        }
        else {
          uVar26 = uVar9 * 2;
        }
        uVar16 = uVar8;
      } while (1 < uVar8);
      uVar16 = 1;
    }
LAB_00b60ac0:
    abStack_67[uVar16 + 1] = (byte)uVar13;
    local_170[uVar16] = uVar26;
    if (param_2 <= uVar18) {
      if ((uVar26 & 1) == 0) {
        FUN_00b5fb30(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar18 = uVar18 + (local_190 >> 1);
    uVar26 = local_190;
  } while( true );
}

