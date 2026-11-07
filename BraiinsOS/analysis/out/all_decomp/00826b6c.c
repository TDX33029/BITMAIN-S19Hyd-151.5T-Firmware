// FUN_00826b6c @ 00826b6c size=1464 calls_out=3 calls_in=2
// strings: 

void FUN_00826b6c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

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
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  ulonglong uVar25;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar25 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar25 & 0xffffffff);
  uVar2 = uVar25 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar25 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar25;
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
  uVar11 = 0;
  uVar20 = 0;
  uVar21 = 1;
  do {
    uVar8 = 0;
    local_184 = 1;
    if (uVar11 < param_2) {
      puVar6 = (uint *)(param_1 + uVar11 * 0xc);
      local_184 = param_2 - uVar11;
      if (local_184 < uVar4) {
LAB_00826c74:
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
          FUN_007dfc00(puVar6,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar13 = local_184;
        }
        else {
          uVar8 = puVar6[3];
          if (uVar8 < *puVar6) {
            if (local_184 != 2) {
              uVar13 = 2;
              uVar14 = uVar8;
              puVar17 = (uint *)(param_1 + 0x18 + uVar11 * 0xc);
              do {
                if (uVar14 <= *puVar17) goto LAB_00826d64;
                uVar13 = uVar13 + 1;
                uVar14 = *puVar17;
                puVar17 = puVar17 + 3;
              } while (local_184 != uVar13);
              goto LAB_00826d60;
            }
            uVar13 = 2;
            uVar8 = 1;
LAB_00826d88:
            puVar12 = (undefined4 *)(param_1 + 8 + uVar11 * 0xc);
            puVar16 = (undefined4 *)(param_1 + -4 + uVar13 * 0xc + uVar11 * 0xc);
            do {
              uVar18 = puVar12[-2];
              uVar8 = uVar8 - 1;
              puVar12[-2] = puVar16[-2];
              puVar16[-2] = uVar18;
              uVar18 = puVar16[-1];
              puVar16[-1] = puVar12[-1];
              puVar12[-1] = uVar18;
              uVar18 = *puVar12;
              *puVar12 = *puVar16;
              *puVar16 = uVar18;
              puVar12 = puVar12 + 3;
              puVar16 = puVar16 + -3;
            } while (uVar8 != 0);
          }
          else {
            uVar13 = 2;
            if (local_184 != 2) {
              uVar13 = 2;
              uVar14 = uVar8;
              puVar17 = (uint *)(param_1 + 0x18 + uVar11 * 0xc);
              do {
                if (*puVar17 < uVar14) goto LAB_00826d64;
                uVar13 = uVar13 + 1;
                uVar14 = *puVar17;
                puVar17 = puVar17 + 3;
              } while (local_184 != uVar13);
LAB_00826d60:
              uVar13 = local_184;
LAB_00826d64:
              if (uVar13 < uVar4) goto LAB_00826c74;
              if (uVar8 < *puVar6) {
                uVar8 = uVar13 >> 1;
                if (uVar8 != 0) goto LAB_00826d88;
                uVar13 = 1;
              }
            }
          }
        }
        local_184 = uVar13 << 1 | 1;
      }
      uVar8 = uVar11 - (uVar21 >> 1);
      uVar13 = uVar11 + (local_184 >> 1);
      uVar14 = uVar13 + uVar11;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar14;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar8,uVar11),uVar8 + uVar11);
      uVar13 = (uint)CARRY4(uVar13,uVar11) * (int)uVar2 +
               uVar14 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar8 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar13 != 0) {
        uVar8 = LZCOUNT(uVar13);
      }
    }
    if (1 < uVar20) {
      do {
        while( true ) {
          uVar13 = uVar20 - 1;
          if (abStack_67[uVar20] < uVar8) goto LAB_008270bc;
          uVar19 = local_170[uVar13];
          uVar14 = uVar19 >> 1;
          uVar23 = uVar14 + (uVar21 >> 1);
          uVar20 = uVar13;
          if ((param_4 < uVar23) || (((uVar19 | uVar21) & 1) != 0)) break;
          uVar21 = uVar23 * 2;
          if (uVar13 < 2) goto LAB_008270b8;
        }
        puVar6 = (uint *)(param_1 + (uVar11 - uVar23) * 0xc);
        if ((uVar19 & 1) == 0) {
          FUN_007dfc00(puVar6,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar21 & 1) == 0) {
          FUN_007dfc00(puVar6 + uVar14 * 3,uVar21 >> 1,param_3,param_4,
                       LZCOUNT(uVar21 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar22 = uVar21 >> 1;
        if (1 < uVar19 && 1 < uVar21) {
          uVar21 = uVar14;
          if (uVar22 < uVar14) {
            uVar21 = uVar22;
          }
          if (uVar21 <= param_4) {
            puVar17 = puVar6 + uVar14 * 3;
            puVar10 = puVar6;
            if (uVar22 < uVar14) {
              puVar10 = puVar17;
            }
            FUN_016dd1aa(param_3,puVar10,uVar21 * 0xc);
            puVar7 = param_3 + uVar21 * 3;
            puVar10 = param_3;
            if (uVar22 < uVar14) {
              puVar9 = (uint *)(param_1 + -0xc + uVar11 * 0xc);
              do {
                puVar17 = puVar17 + -3;
                puVar7 = puVar7 + -3;
                bVar24 = *puVar7 < *puVar17;
                puVar15 = puVar7;
                if (bVar24) {
                  puVar15 = puVar17;
                }
                uVar21 = *puVar15;
                uVar14 = puVar15[1];
                puVar9[2] = puVar15[2];
                *puVar9 = uVar21;
                puVar9[1] = uVar14;
                puVar7 = puVar7 + ((uint)bVar24 | (uint)bVar24 << 1);
                puVar17 = puVar17 + ((uint)!bVar24 | (uint)!bVar24 << 1);
              } while ((puVar17 != puVar6) && (puVar9 = puVar9 + -3, puVar7 != param_3));
              puVar6 = puVar17;
            }
            else {
              do {
                bVar24 = *puVar10 <= *puVar17;
                puVar9 = puVar10;
                if (!bVar24) {
                  puVar9 = puVar17;
                }
                uVar14 = puVar9[1];
                uVar21 = puVar9[2];
                *puVar6 = *puVar9;
                puVar6[1] = uVar14;
                puVar6[2] = uVar21;
                puVar6 = puVar6 + 3;
                puVar10 = puVar10 + ((uint)bVar24 | (uint)bVar24 << 1);
                if (puVar10 != puVar7) {
                  puVar17 = puVar17 + ((uint)!bVar24 | (uint)!bVar24 << 1);
                }
              } while (puVar10 != puVar7 && puVar17 != (uint *)(param_1 + uVar11 * 0xc));
            }
            FUN_016dd1aa(puVar6,puVar10,(int)puVar7 - (int)puVar10);
          }
        }
        uVar21 = uVar23 * 2 | 1;
      } while (1 < uVar13);
LAB_008270b8:
      uVar20 = 1;
    }
LAB_008270bc:
    abStack_67[uVar20 + 1] = (byte)uVar8;
    local_170[uVar20] = uVar21;
    if (param_2 <= uVar11) {
      if ((uVar21 & 1) == 0) {
        FUN_007dfc00(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar20 = uVar20 + 1;
    uVar11 = uVar11 + (local_184 >> 1);
    uVar21 = local_184;
  } while( true );
}

