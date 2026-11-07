// FUN_0071bce0 @ 0071bce0 size=1620 calls_out=3 calls_in=2
// strings: 

void FUN_0071bce0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar2 = uVar27 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar27;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar8 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar8) + (param_2 >> iVar8) >> 1;
  }
  uVar12 = 0;
  uVar18 = 0;
  uVar10 = 1;
  do {
    uVar25 = 0;
    uVar6 = 1;
    if (uVar12 < param_2) {
      uVar6 = param_2 - uVar12;
      puVar5 = (uint *)(param_1 + uVar12 * 0x18);
      if (uVar6 < uVar4) {
LAB_0071bde0:
        if (param_5 == 0) {
          if (uVar4 <= uVar6) {
            uVar6 = uVar4;
          }
          uVar6 = uVar6 << 1;
        }
        else {
          if (0x1f < uVar6) {
            uVar6 = 0x20;
          }
          FUN_0072d770(puVar5,uVar6,param_3,param_4,0,0);
          uVar6 = uVar6 << 1 | 1;
        }
      }
      else {
        if (uVar6 < 2) {
          uVar17 = uVar6;
        }
        else {
          uVar15 = puVar5[6];
          uVar25 = puVar5[1];
          uVar9 = puVar5[7];
          if (uVar25 < uVar9 || uVar9 - uVar25 < (uint)(*puVar5 <= uVar15)) {
            uVar17 = 2;
            if (uVar6 != 2) {
              puVar13 = (uint *)(param_1 + 0x30 + uVar12 * 0x18);
              uVar16 = uVar15;
              uVar19 = uVar9;
              do {
                uVar23 = *puVar13;
                uVar20 = puVar13[1];
                if (uVar20 <= uVar19 && (uint)(uVar16 <= uVar23) <= uVar20 - uVar19)
                goto LAB_0071bf1c;
                uVar17 = uVar17 + 1;
                puVar13 = puVar13 + 6;
                uVar16 = uVar23;
                uVar19 = uVar20;
              } while (uVar6 != uVar17);
              goto LAB_0071bf18;
            }
          }
          else if (uVar6 == 2) {
            uVar17 = 2;
            uVar6 = 1;
LAB_0071bf4c:
            uVar25 = 0;
            iVar8 = param_1 + -0x18 + uVar12 * 0x18 + uVar17 * 0x18;
            do {
              iVar14 = 0;
              do {
                uVar9 = puVar5[-iVar14];
                puVar5[-iVar14] = *(uint *)(iVar8 + iVar14 * -4);
                *(uint *)(iVar8 + iVar14 * -4) = uVar9;
                bVar26 = iVar14 != -5;
                iVar14 = iVar14 + -1;
              } while (bVar26);
              uVar25 = uVar25 + 1;
              puVar5 = puVar5 + 6;
              iVar8 = iVar8 + -0x18;
            } while (uVar25 != uVar6);
          }
          else {
            uVar17 = 2;
            puVar13 = (uint *)(param_1 + 0x30 + uVar12 * 0x18);
            uVar16 = uVar15;
            uVar19 = uVar9;
            do {
              uVar23 = *puVar13;
              uVar20 = puVar13[1];
              if (uVar19 < uVar20 || uVar20 - uVar19 < (uint)(uVar16 <= uVar23)) goto LAB_0071bf1c;
              uVar17 = uVar17 + 1;
              puVar13 = puVar13 + 6;
              uVar16 = uVar23;
              uVar19 = uVar20;
            } while (uVar6 != uVar17);
LAB_0071bf18:
            uVar17 = uVar6;
LAB_0071bf1c:
            if (uVar17 < uVar4) goto LAB_0071bde0;
            if (uVar9 <= uVar25 && (uint)(*puVar5 <= uVar15) <= uVar9 - uVar25) {
              uVar6 = uVar17 >> 1;
              if (uVar6 != 0) goto LAB_0071bf4c;
              uVar17 = 1;
            }
          }
        }
        uVar6 = uVar17 << 1 | 1;
      }
      uVar25 = uVar12 - (uVar10 >> 1);
      uVar9 = uVar12 + (uVar6 >> 1);
      uVar15 = uVar9 + uVar12;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar15;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar25,uVar12),uVar25 + uVar12);
      uVar9 = (uint)CARRY4(uVar9,uVar12) * (int)uVar2 +
              uVar15 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
              (uint)((ulonglong)lVar3 >> 0x20);
      uVar25 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar9 != 0) {
        uVar25 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar18) {
      do {
        uVar9 = uVar18 - 1;
        if (abStack_67[uVar18] < uVar25) goto LAB_0071c2d0;
        uVar17 = local_170[uVar9];
        uVar18 = uVar17 >> 1;
        uVar15 = uVar18 + (uVar10 >> 1);
        if ((param_4 < uVar15) || (((uVar17 | uVar10) & 1) != 0)) {
          puVar5 = (uint *)(param_1 + (uVar12 - uVar15) * 0x18);
          if ((uVar17 & 1) == 0) {
            FUN_0072d770(puVar5,uVar18,param_3,param_4,LZCOUNT(uVar18 | 1) << 1 ^ 0x3e,0);
          }
          uVar16 = uVar10 >> 1;
          if ((uVar10 & 1) == 0) {
            FUN_0072d770(puVar5 + uVar18 * 6,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,
                         0);
          }
          if (1 < uVar17 && 1 < uVar10) {
            uVar10 = uVar18;
            if (uVar16 < uVar18) {
              uVar10 = uVar16;
            }
            if (uVar10 <= param_4) {
              puVar13 = puVar5 + uVar18 * 6;
              puVar7 = puVar5;
              if (uVar16 < uVar18) {
                puVar7 = puVar13;
              }
              FUN_01bed4e2(param_3,puVar7,uVar10 * 0x18);
              puVar21 = param_3 + uVar10 * 6;
              puVar7 = param_3;
              if (uVar16 < uVar18) {
                puVar24 = (uint *)(param_1 + -0x18 + uVar12 * 0x18);
                do {
                  puVar11 = puVar13 + -6;
                  puVar22 = puVar21 + -6;
                  uVar10 = puVar13[-5];
                  uVar18 = puVar21[-5];
                  bVar26 = uVar18 - uVar10 < (uint)(*puVar11 <= *puVar22);
                  uVar17 = (uint)(uVar10 < uVar18 || bVar26);
                  uVar10 = (uint)(uVar10 >= uVar18 && !bVar26);
                  puVar13 = puVar22;
                  if (uVar10 != 0) {
                    puVar13 = puVar11;
                  }
                  uVar18 = puVar13[1];
                  uVar16 = puVar13[2];
                  uVar19 = puVar13[3];
                  uVar20 = puVar13[4];
                  uVar23 = puVar13[5];
                  puVar21 = puVar22 + (uVar10 | uVar10 << 1) * 2;
                  *puVar24 = *puVar13;
                  puVar24[1] = uVar18;
                  puVar24[2] = uVar16;
                  puVar24[3] = uVar19;
                  puVar24[4] = uVar20;
                  puVar24[5] = uVar23;
                  puVar13 = puVar11 + (uVar17 | uVar17 << 1) * 2;
                } while ((puVar13 != puVar5) && (puVar24 = puVar24 + -6, puVar21 != param_3));
                puVar24 = puVar13;
              }
              else {
                do {
                  uVar18 = puVar13[1];
                  uVar10 = puVar7[1];
                  puVar24 = puVar5 + 6;
                  bVar26 = uVar18 - uVar10 < (uint)(*puVar7 <= *puVar13);
                  uVar17 = (uint)(uVar10 < uVar18 || bVar26);
                  uVar10 = (uint)(uVar10 >= uVar18 && !bVar26);
                  puVar11 = puVar7;
                  if (uVar10 != 0) {
                    puVar11 = puVar13;
                  }
                  uVar18 = puVar11[1];
                  uVar16 = puVar11[2];
                  uVar19 = puVar11[3];
                  uVar20 = puVar11[4];
                  uVar23 = puVar11[5];
                  *puVar5 = *puVar11;
                  puVar5[1] = uVar18;
                  puVar5[2] = uVar16;
                  puVar5[3] = uVar19;
                  puVar5[4] = uVar20;
                  puVar5[5] = uVar23;
                  puVar11 = (uint *)(uVar17 | uVar17 << 1);
                  puVar7 = puVar7 + (int)puVar11 * 2;
                  if (puVar7 != puVar21) {
                    puVar13 = puVar13 + (uVar10 | uVar10 << 1) * 2;
                    puVar11 = (uint *)(param_1 + uVar12 * 0x18);
                  }
                  puVar5 = puVar24;
                } while (puVar7 != puVar21 && puVar13 != puVar11);
              }
              FUN_01bed4e2(puVar24,puVar7,(int)puVar21 - (int)puVar7);
            }
          }
          uVar10 = uVar15 * 2 | 1;
        }
        else {
          uVar10 = uVar15 * 2;
        }
        uVar18 = uVar9;
      } while (1 < uVar9);
      uVar18 = 1;
    }
LAB_0071c2d0:
    abStack_67[uVar18 + 1] = (byte)uVar25;
    local_170[uVar18] = uVar10;
    if (param_2 <= uVar12) {
      if ((uVar10 & 1) == 0) {
        FUN_0072d770(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar12 = uVar12 + (uVar6 >> 1);
    uVar18 = uVar18 + 1;
    uVar10 = uVar6;
  } while( true );
}

