// FUN_006e3e04 @ 006e3e04 size=1652 calls_out=5 calls_in=2
// strings: 

void FUN_006e3e04(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 *puVar26;
  bool bVar27;
  ulonglong uVar28;
  uint local_194;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar28 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar3 = uVar28 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar28;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar19 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar19) + (param_2 >> iVar19) >> 1;
  }
  uVar17 = 0;
  uVar15 = 0;
  uVar25 = 1;
  do {
    uVar23 = 0;
    local_194 = 1;
    if (uVar17 < param_2) {
      local_194 = param_2 - uVar17;
      iVar19 = param_1 + uVar17 * 0xc;
      if (local_194 < uVar5) {
LAB_006e3f0c:
        if (param_5 == 0) {
          if (uVar5 <= local_194) {
            local_194 = uVar5;
          }
          local_194 = local_194 << 1;
        }
        else {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_006d26e0(iVar19,local_194,param_3,param_4,0,0,param_6);
          local_194 = local_194 << 1 | 1;
        }
      }
      else {
        if (local_194 < 2) {
          uVar23 = local_194;
        }
        else {
          iVar6 = FUN_006d2464(*(undefined4 *)*param_6,*(undefined4 *)(iVar19 + 0x10),
                               *(undefined4 *)(iVar19 + 0x14),*(undefined4 *)(iVar19 + 4),
                               *(undefined4 *)(iVar19 + 8));
          if (iVar6 == 0) {
            uVar23 = 2;
            if (local_194 != 2) {
              puVar8 = (undefined4 *)(param_1 + 0x10 + uVar17 * 0xc);
              do {
                uVar18 = *puVar8;
                puVar9 = puVar8 + 1;
                puVar22 = puVar8 + 4;
                puVar8 = puVar8 + 3;
                iVar7 = FUN_006d2464(*(undefined4 *)*param_6,*puVar8,*puVar22,uVar18,*puVar9);
                if (iVar7 != 0) goto LAB_006e4064;
                uVar23 = uVar23 + 1;
              } while (local_194 != uVar23);
              goto LAB_006e4060;
            }
          }
          else if (local_194 == 2) {
            uVar23 = 2;
            uVar13 = 1;
LAB_006e4080:
            uVar14 = 0;
            iVar6 = param_1 + -0xc + uVar17 * 0xc + uVar23 * 0xc;
            do {
              iVar7 = 0;
              do {
                uVar18 = *(undefined4 *)(iVar19 + iVar7 * -4);
                *(undefined4 *)(iVar19 + iVar7 * -4) = *(undefined4 *)(iVar6 + iVar7 * -4);
                *(undefined4 *)(iVar6 + iVar7 * -4) = uVar18;
                bVar27 = iVar7 != -2;
                iVar7 = iVar7 + -1;
              } while (bVar27);
              uVar14 = uVar14 + 1;
              iVar19 = iVar19 + 0xc;
              iVar6 = iVar6 + -0xc;
            } while (uVar14 != uVar13);
          }
          else {
            uVar23 = 2;
            puVar8 = (undefined4 *)(param_1 + 0x10 + uVar17 * 0xc);
            do {
              uVar18 = *puVar8;
              puVar9 = puVar8 + 1;
              puVar22 = puVar8 + 4;
              puVar8 = puVar8 + 3;
              iVar7 = FUN_006d2464(*(undefined4 *)*param_6,*puVar8,*puVar22,uVar18,*puVar9);
              if (iVar7 == 0) goto LAB_006e4064;
              uVar23 = uVar23 + 1;
            } while (local_194 != uVar23);
LAB_006e4060:
            uVar23 = local_194;
LAB_006e4064:
            if (uVar23 < uVar5) goto LAB_006e3f0c;
            if (iVar6 != 0) {
              uVar13 = uVar23 >> 1;
              if (uVar13 != 0) goto LAB_006e4080;
              uVar23 = 1;
            }
          }
        }
        local_194 = uVar23 << 1 | 1;
      }
      uVar23 = uVar17 - (uVar25 >> 1);
      uVar13 = uVar17 + (local_194 >> 1);
      uVar14 = uVar13 + uVar17;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar14;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar23,uVar17),uVar23 + uVar17);
      uVar13 = (uint)CARRY4(uVar13,uVar17) * (int)uVar3 +
               uVar14 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar23 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar13 != 0) {
        uVar23 = LZCOUNT(uVar13);
      }
    }
    if (1 < uVar15) {
      puVar8 = (undefined4 *)(param_1 + uVar17 * 0xc);
      do {
        uVar13 = uVar15 - 1;
        if (abStack_67[uVar15] < uVar23) goto LAB_006e440c;
        uVar20 = local_170[uVar13];
        uVar15 = uVar20 >> 1;
        uVar14 = uVar15 + (uVar25 >> 1);
        if ((param_4 < uVar14) || (((uVar20 | uVar25) & 1) != 0)) {
          puVar9 = (undefined4 *)(param_1 + (uVar17 - uVar14) * 0xc);
          if ((uVar20 & 1) == 0) {
            FUN_006d26e0(puVar9,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0,param_6);
          }
          uVar1 = uVar25 >> 1;
          if ((uVar25 & 1) == 0) {
            FUN_006d26e0(puVar9 + uVar15 * 3,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0,
                         param_6);
          }
          if (1 < uVar20 && 1 < uVar25) {
            uVar25 = uVar15;
            if (uVar1 < uVar15) {
              uVar25 = uVar1;
            }
            if (uVar25 <= param_4) {
              puVar10 = (undefined4 *)*param_6;
              puVar22 = puVar9 + uVar15 * 3;
              puVar24 = puVar9;
              if (uVar1 < uVar15) {
                puVar24 = puVar22;
              }
              puVar11 = (undefined4 *)FUN_01bed4e2(param_3,puVar24,uVar25 * 0xc);
              puVar26 = param_3 + uVar25 * 3;
              puVar16 = param_3;
              if (uVar1 < uVar15) {
                puVar24 = (undefined4 *)(param_1 + -0xc + uVar17 * 0xc);
                do {
                  uVar25 = FUN_006c61fc(*puVar10,puVar26[-2],puVar26[-1],puVar22[-2],puVar22[-1]);
                  puVar11 = puVar26 + -3;
                  if (uVar25 != 0) {
                    puVar11 = puVar22 + -3;
                  }
                  uVar18 = puVar11[1];
                  uVar21 = puVar11[2];
                  *puVar24 = *puVar11;
                  puVar24[1] = uVar18;
                  puVar24[2] = uVar21;
                  puVar26 = puVar26 + -3 + (uVar25 | uVar25 << 1);
                  puVar22 = puVar22 + -3 + (uVar25 ^ 1 | (uVar25 ^ 1) << 1);
                } while ((puVar22 != puVar9) && (puVar24 = puVar24 + -3, puVar26 != param_3));
                puVar24 = puVar22;
              }
              else {
                if (uVar25 != 0) {
                  puVar11 = puVar8;
                }
                if (uVar25 != 0 && puVar22 != puVar11) {
                  puVar9 = puVar24;
                  do {
                    puVar11 = (undefined4 *)
                              FUN_006c61fc(*puVar10,puVar22[1],puVar22[2],puVar16[1],puVar16[2]);
                    puVar12 = puVar16;
                    if (puVar11 != (undefined4 *)0x0) {
                      puVar12 = puVar22;
                    }
                    uVar18 = puVar12[1];
                    uVar21 = puVar12[2];
                    puVar24 = puVar9 + 3;
                    *puVar9 = *puVar12;
                    puVar9[1] = uVar18;
                    puVar9[2] = uVar21;
                    puVar16 = puVar16 + ((uint)puVar11 ^ 1 | ((uint)puVar11 ^ 1) << 1);
                    if (puVar16 != puVar26) {
                      puVar22 = puVar22 + ((uint)puVar11 | (int)puVar11 << 1);
                      puVar11 = puVar8;
                    }
                    puVar9 = puVar24;
                  } while (puVar16 != puVar26 && puVar22 != puVar11);
                }
              }
              FUN_01bed4e2(puVar24,puVar16,(int)puVar26 - (int)puVar16);
            }
          }
          uVar25 = uVar14 * 2 | 1;
        }
        else {
          uVar25 = uVar14 * 2;
        }
        uVar15 = uVar13;
      } while (1 < uVar13);
      uVar15 = 1;
    }
LAB_006e440c:
    abStack_67[uVar15 + 1] = (byte)uVar23;
    local_170[uVar15] = uVar25;
    if (param_2 <= uVar17) {
      if ((uVar25 & 1) == 0) {
        FUN_006d26e0(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0,param_6);
      }
      return;
    }
    uVar15 = uVar15 + 1;
    uVar17 = uVar17 + (local_194 >> 1);
    uVar25 = local_194;
  } while( true );
}

