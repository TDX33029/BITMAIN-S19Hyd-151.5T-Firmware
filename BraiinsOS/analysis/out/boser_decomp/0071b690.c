// FUN_0071b690 @ 0071b690 size=1616 calls_out=3 calls_in=2
// strings: 

void FUN_0071b690(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar29 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar29 & 0xffffffff);
  uVar3 = uVar29 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar29 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar3 = uVar29;
  }
  iVar15 = (int)(uVar3 >> 0x20);
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar27 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar27) + (param_2 >> iVar27) >> 1;
  }
  uVar11 = 0;
  uVar12 = 0;
  uVar20 = 1;
  do {
    uVar18 = 0;
    uVar13 = 1;
    if (uVar11 < param_2) {
      puVar5 = (uint *)(param_1 + uVar11 * 0x18);
      uVar13 = param_2 - uVar11;
      if (uVar13 < uVar4) {
LAB_0071b790:
        if (param_5 == 0) {
          if (uVar4 <= uVar13) {
            uVar13 = uVar4;
          }
          uVar13 = uVar13 << 1;
        }
        else {
          if (0x1f < uVar13) {
            uVar13 = 0x20;
          }
          FUN_0072c6a0(puVar5,uVar13,param_3,param_4,0,0);
          uVar13 = uVar13 << 1 | 1;
        }
      }
      else {
        uVar18 = uVar13;
        if (1 < uVar13) {
          uVar6 = puVar5[10];
          if ((uVar6 < puVar5[4]) ||
             ((uVar6 <= puVar5[4] &&
              (puVar5[7] <= puVar5[1] && (uint)(*puVar5 <= puVar5[6]) <= puVar5[7] - puVar5[1])))) {
            uVar18 = 2;
            bVar28 = true;
            if (uVar13 != 2) {
              puVar19 = (uint *)(param_1 + 0x40 + uVar11 * 0x18);
              do {
                uVar7 = *puVar19;
                if ((uVar6 <= uVar7) &&
                   ((uVar6 < uVar7 ||
                    (puVar19[-9] < puVar19[-3] ||
                     puVar19[-3] - puVar19[-9] < (uint)(puVar19[-10] <= puVar19[-4])))))
                goto LAB_0071b8e4;
                uVar18 = uVar18 + 1;
                puVar19 = puVar19 + 6;
                uVar6 = uVar7;
              } while (uVar13 != uVar18);
              goto LAB_0071b8e0;
            }
          }
          else {
            uVar18 = 2;
            bVar28 = false;
            if (uVar13 != 2) {
              puVar19 = (uint *)(param_1 + 0x40 + uVar11 * 0x18);
              do {
                uVar7 = *puVar19;
                if ((uVar7 < uVar6) ||
                   ((uVar7 <= uVar6 &&
                    (puVar19[-3] <= puVar19[-9] &&
                     (uint)(puVar19[-10] <= puVar19[-4]) <= puVar19[-3] - puVar19[-9]))))
                goto LAB_0071b8e4;
                uVar18 = uVar18 + 1;
                puVar19 = puVar19 + 6;
                uVar6 = uVar7;
              } while (uVar13 != uVar18);
LAB_0071b8e0:
              uVar18 = uVar13;
            }
          }
LAB_0071b8e4:
          if (uVar18 < uVar4) goto LAB_0071b790;
          if (bVar28) {
            if (uVar18 >> 1 == 0) {
              uVar18 = 1;
            }
            else {
              uVar13 = 0;
              iVar27 = param_1 + -0x18 + uVar18 * 0x18 + uVar11 * 0x18;
              do {
                iVar25 = 0;
                do {
                  uVar6 = puVar5[-iVar25];
                  puVar5[-iVar25] = *(uint *)(iVar27 + iVar25 * -4);
                  *(uint *)(iVar27 + iVar25 * -4) = uVar6;
                  bVar28 = iVar25 != -5;
                  iVar25 = iVar25 + -1;
                } while (bVar28);
                uVar13 = uVar13 + 1;
                puVar5 = puVar5 + 6;
                iVar27 = iVar27 + -0x18;
              } while (uVar13 != uVar18 >> 1);
            }
          }
        }
        uVar13 = uVar18 << 1 | 1;
      }
      uVar18 = uVar11 - (uVar20 >> 1);
      uVar6 = uVar18 + uVar11;
      lVar1 = (uVar3 & 0xffffffff) * (ulonglong)uVar6;
      uVar7 = (uVar13 >> 1) + uVar11 * 2;
      lVar2 = (ulonglong)uVar7 * (uVar3 & 0xffffffff);
      uVar6 = iVar15 * uVar7 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar18,uVar11) * (int)uVar3 +
              uVar6 * iVar15 + (int)((ulonglong)lVar1 >> 0x20);
      uVar18 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      if (uVar6 != 0) {
        uVar18 = LZCOUNT(uVar6);
      }
    }
    if (1 < uVar12) {
      puVar5 = (uint *)(param_1 + uVar11 * 0x18);
      do {
        uVar6 = uVar12 - 1;
        if (abStack_67[uVar12] < uVar18) goto LAB_0071bc78;
        uVar16 = local_170[uVar6];
        uVar12 = uVar16 >> 1;
        uVar7 = uVar12 + (uVar20 >> 1);
        if ((param_4 < uVar7) || (((uVar16 | uVar20) & 1) != 0)) {
          puVar19 = (uint *)(param_1 + (uVar11 - uVar7) * 0x18);
          if ((uVar16 & 1) == 0) {
            FUN_0072c6a0(puVar19,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
          }
          uVar14 = uVar20 >> 1;
          if ((uVar20 & 1) == 0) {
            FUN_0072c6a0(puVar19 + uVar12 * 6,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar16 && 1 < uVar20) {
            uVar20 = uVar12;
            if (uVar14 < uVar12) {
              uVar20 = uVar14;
            }
            if (uVar20 <= param_4) {
              puVar9 = puVar19 + uVar12 * 6;
              puVar21 = puVar19;
              if (uVar14 < uVar12) {
                puVar21 = puVar9;
              }
              puVar8 = (uint *)FUN_01bed4e2(param_3,puVar21,uVar20 * 0x18);
              puVar22 = param_3 + uVar20 * 6;
              puVar10 = param_3;
              if (uVar14 < uVar12) {
                puVar8 = (uint *)(param_1 + -0x18 + uVar11 * 0x18);
                puVar21 = puVar9;
                do {
                  puVar26 = puVar21 + -6;
                  puVar24 = puVar22 + -6;
                  uVar20 = 1;
                  puVar9 = puVar26;
                  if (puVar21[-2] <= puVar22[-2]) {
                    uVar20 = 0;
                    puVar9 = puVar24;
                    if ((puVar22[-2] <= puVar21[-2]) &&
                       (uVar20 = (uint)(puVar22[-5] <= puVar21[-5] &&
                                       (uint)(*puVar26 <= *puVar24) <= puVar22[-5] - puVar21[-5]),
                       uVar20 != 0)) {
                      puVar9 = puVar26;
                    }
                  }
                  uVar12 = puVar9[1];
                  uVar16 = puVar9[2];
                  uVar14 = puVar9[3];
                  uVar17 = puVar9[4];
                  uVar23 = puVar9[5];
                  *puVar8 = *puVar9;
                  puVar8[1] = uVar12;
                  puVar8[2] = uVar16;
                  puVar8[3] = uVar14;
                  puVar8[4] = uVar17;
                  puVar8[5] = uVar23;
                  puVar22 = puVar24 + (uVar20 | uVar20 << 1) * 2;
                  puVar21 = puVar26 + (uVar20 ^ 1 | (uVar20 ^ 1) << 1) * 2;
                } while ((puVar21 != puVar19) && (puVar8 = puVar8 + -6, puVar22 != param_3));
              }
              else {
                if (uVar20 != 0) {
                  puVar8 = puVar5;
                }
                if (!(uVar20 == 0 || puVar9 == puVar8)) {
                  puVar19 = puVar21;
                  do {
                    if (puVar9[4] < puVar10[4]) {
LAB_0071bbec:
                      iVar25 = 1;
                      iVar27 = 0;
                      puVar8 = puVar9;
                    }
                    else {
                      iVar25 = 0;
                      iVar27 = 1;
                      puVar8 = puVar10;
                      if ((puVar9[4] == puVar10[4]) &&
                         (puVar9[1] <= puVar10[1] &&
                          (uint)(*puVar10 <= *puVar9) <= puVar9[1] - puVar10[1])) goto LAB_0071bbec;
                    }
                    uVar20 = puVar8[1];
                    uVar12 = puVar8[2];
                    uVar16 = puVar8[3];
                    uVar14 = puVar8[4];
                    uVar17 = puVar8[5];
                    puVar21 = puVar19 + 6;
                    *puVar19 = *puVar8;
                    puVar19[1] = uVar20;
                    puVar19[2] = uVar12;
                    puVar19[3] = uVar16;
                    puVar19[4] = uVar14;
                    puVar19[5] = uVar17;
                    puVar10 = puVar10 + iVar27 * 6;
                    bVar28 = puVar10 != puVar22;
                    if (bVar28) {
                      iVar27 = iVar25;
                    }
                    puVar8 = (uint *)(iVar27 * 3);
                    if (bVar28) {
                      puVar9 = puVar9 + iVar27 * 6;
                      puVar8 = puVar5;
                    }
                    puVar19 = puVar21;
                  } while (bVar28 && puVar9 != puVar8);
                }
              }
              FUN_01bed4e2(puVar21,puVar10,(int)puVar22 - (int)puVar10);
            }
          }
          uVar20 = uVar7 * 2 | 1;
        }
        else {
          uVar20 = uVar7 * 2;
        }
        uVar12 = uVar6;
      } while (1 < uVar6);
      uVar12 = 1;
    }
LAB_0071bc78:
    abStack_67[uVar12 + 1] = (byte)uVar18;
    local_170[uVar12] = uVar20;
    if (param_2 <= uVar11) {
      if ((uVar20 & 1) == 0) {
        FUN_0072c6a0(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar11 = uVar11 + (uVar13 >> 1);
    uVar12 = uVar12 + 1;
    uVar20 = uVar13;
  } while( true );
}

