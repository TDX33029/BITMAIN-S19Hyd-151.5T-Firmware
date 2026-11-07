// FUN_008d4368 @ 008d4368 size=1460 calls_out=3 calls_in=2
// strings: 

void FUN_008d4368(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar29 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar29 & 0xffffffff);
  uVar2 = uVar29 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar29 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar29;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar5 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar5) + (param_2 >> iVar5) >> 1;
  }
  uVar16 = 0;
  uVar22 = 0;
  uVar23 = 1;
  do {
    uVar8 = 0;
    local_184 = 1;
    if (uVar16 < param_2) {
      puVar6 = (uint *)(param_1 + uVar16 * 0xc);
      local_184 = param_2 - uVar16;
      if (local_184 < uVar4) {
LAB_008d4468:
        if (param_5 == 0) {
          if (uVar4 <= local_184) {
            local_184 = uVar4;
          }
          local_184 = local_184 << 1;
        }
        else {
          if (0x1f < local_184) {
            local_184 = 0x20;
          }
          FUN_008bb248(puVar6,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar12 = local_184;
        }
        else {
          uVar8 = puVar6[3];
          if (uVar8 < *puVar6) {
            if (local_184 != 2) {
              uVar12 = 2;
              uVar13 = uVar8;
              puVar18 = (uint *)(param_1 + 0x18 + uVar16 * 0xc);
              do {
                if (uVar13 <= *puVar18) goto LAB_008d4554;
                uVar12 = uVar12 + 1;
                uVar13 = *puVar18;
                puVar18 = puVar18 + 3;
              } while (local_184 != uVar12);
              goto LAB_008d4550;
            }
            uVar12 = 2;
            uVar8 = 1;
LAB_008d4574:
            puVar11 = (undefined4 *)(param_1 + 8 + uVar16 * 0xc);
            puVar15 = (undefined4 *)(param_1 + -4 + uVar12 * 0xc + uVar16 * 0xc);
            do {
              uVar27 = puVar11[-1];
              uVar20 = puVar11[-2];
              uVar8 = uVar8 - 1;
              uVar19 = *puVar15;
              uVar17 = puVar15[-1];
              uVar26 = *puVar11;
              puVar11[-2] = puVar15[-2];
              puVar11[-1] = uVar17;
              puVar15[-2] = uVar20;
              puVar15[-1] = uVar27;
              *puVar11 = uVar19;
              *puVar15 = uVar26;
              puVar11 = puVar11 + 3;
              puVar15 = puVar15 + -3;
            } while (uVar8 != 0);
          }
          else {
            uVar12 = 2;
            if (local_184 != 2) {
              uVar13 = uVar8;
              puVar18 = (uint *)(param_1 + 0x18 + uVar16 * 0xc);
              do {
                if (*puVar18 < uVar13) goto LAB_008d4554;
                uVar12 = uVar12 + 1;
                uVar13 = *puVar18;
                puVar18 = puVar18 + 3;
              } while (local_184 != uVar12);
LAB_008d4550:
              uVar12 = local_184;
LAB_008d4554:
              if (uVar12 < uVar4) goto LAB_008d4468;
              if (uVar8 < *puVar6) {
                uVar8 = uVar12 >> 1;
                if (uVar8 != 0) goto LAB_008d4574;
                uVar12 = 1;
              }
            }
          }
        }
        local_184 = uVar12 << 1 | 1;
      }
      uVar8 = uVar16 - (uVar23 >> 1);
      uVar12 = uVar16 + (local_184 >> 1);
      uVar13 = uVar12 + uVar16;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar13;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar8,uVar16),uVar8 + uVar16);
      uVar12 = (uint)CARRY4(uVar12,uVar16) * (int)uVar2 +
               uVar13 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar8 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar12 != 0) {
        uVar8 = LZCOUNT(uVar12);
      }
    }
    if (1 < uVar22) {
      do {
        while( true ) {
          uVar12 = uVar22 - 1;
          if (abStack_67[uVar22] < uVar8) goto LAB_008d48b8;
          uVar21 = local_170[uVar12];
          uVar13 = uVar21 >> 1;
          uVar25 = uVar13 + (uVar23 >> 1);
          uVar22 = uVar12;
          if ((param_4 < uVar25) || (((uVar21 | uVar23) & 1) != 0)) break;
          uVar23 = uVar25 * 2;
          if (uVar12 < 2) goto LAB_008d48ac;
        }
        puVar6 = (uint *)(param_1 + (uVar16 - uVar25) * 0xc);
        if ((uVar21 & 1) == 0) {
          FUN_008bb248(puVar6,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar23 & 1) == 0) {
          FUN_008bb248(puVar6 + uVar13 * 3,uVar23 >> 1,param_3,param_4,
                       LZCOUNT(uVar23 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar24 = uVar23 >> 1;
        if (1 < uVar21 && 1 < uVar23) {
          uVar23 = uVar13;
          if (uVar24 < uVar13) {
            uVar23 = uVar24;
          }
          if (uVar23 <= param_4) {
            puVar18 = puVar6 + uVar13 * 3;
            puVar10 = puVar6;
            if (uVar24 < uVar13) {
              puVar10 = puVar18;
            }
            FUN_016dd1aa(param_3,puVar10,uVar23 * 0xc);
            puVar7 = param_3 + uVar23 * 3;
            puVar10 = param_3;
            if (uVar24 < uVar13) {
              puVar9 = (uint *)(param_1 + -0xc + uVar16 * 0xc);
              do {
                puVar18 = puVar18 + -3;
                puVar7 = puVar7 + -3;
                bVar28 = *puVar7 < *puVar18;
                puVar14 = puVar7;
                if (bVar28) {
                  puVar14 = puVar18;
                }
                uVar23 = *puVar14;
                uVar13 = puVar14[1];
                puVar9[2] = puVar14[2];
                *puVar9 = uVar23;
                puVar9[1] = uVar13;
                puVar7 = puVar7 + ((uint)bVar28 | (uint)bVar28 << 1);
                puVar18 = puVar18 + ((uint)!bVar28 | (uint)!bVar28 << 1);
              } while ((puVar18 != puVar6) && (puVar9 = puVar9 + -3, puVar7 != param_3));
              puVar6 = puVar18;
            }
            else {
              do {
                bVar28 = *puVar10 <= *puVar18;
                puVar9 = puVar10;
                if (!bVar28) {
                  puVar9 = puVar18;
                }
                uVar13 = puVar9[1];
                uVar23 = puVar9[2];
                *puVar6 = *puVar9;
                puVar6[1] = uVar13;
                puVar6[2] = uVar23;
                puVar6 = puVar6 + 3;
                puVar10 = puVar10 + ((uint)bVar28 | (uint)bVar28 << 1);
                if (puVar10 != puVar7) {
                  puVar18 = puVar18 + ((uint)!bVar28 | (uint)!bVar28 << 1);
                }
              } while (puVar10 != puVar7 && puVar18 != (uint *)(param_1 + uVar16 * 0xc));
            }
            FUN_016dd1aa(puVar6,puVar10,(int)puVar7 - (int)puVar10);
          }
        }
        uVar23 = uVar25 * 2 | 1;
      } while (1 < uVar12);
LAB_008d48ac:
      uVar22 = 1;
    }
LAB_008d48b8:
    abStack_67[uVar22 + 1] = (byte)uVar8;
    local_170[uVar22] = uVar23;
    if (param_2 <= uVar16) {
      if ((uVar23 & 1) == 0) {
        FUN_008bb248(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar22 = uVar22 + 1;
    uVar16 = uVar16 + (local_184 >> 1);
    uVar23 = local_184;
  } while( true );
}

