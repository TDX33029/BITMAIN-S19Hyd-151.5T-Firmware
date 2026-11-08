// FUN_009d6994 @ 009d6994 size=1948 calls_out=3 calls_in=2
// strings: 

void FUN_009d6994(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_18c;
  uint local_17c [68];
  byte abStack_69 [69];
  
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
    iVar20 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar20) + (param_2 >> iVar20) >> 1;
  }
  uVar24 = 1;
  uVar15 = 0;
  uVar14 = 0;
  do {
    uVar19 = 0;
    bVar18 = 0;
    puVar5 = (uint *)(param_1 + uVar15 * 0x10);
    local_18c = 1;
    if (uVar15 < param_2) {
      local_18c = param_2 - uVar15;
      if (local_18c < uVar4) {
LAB_009d6aa0:
        if (param_5 != 0) {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_009cfb44(puVar5,local_18c,param_3,param_4,0,0);
          uVar19 = local_18c;
          goto LAB_009d7064;
        }
        if (uVar4 <= local_18c) {
          local_18c = uVar4;
        }
        local_18c = local_18c << 1;
      }
      else {
        uVar19 = local_18c;
        if (1 < local_18c) {
          uVar11 = puVar5[6];
          bVar27 = puVar5[2] <= uVar11;
          if ((uVar11 == puVar5[2]) &&
             (uVar19 = *puVar5 ^ (uint)((int)*puVar5 >> 0x1f) >> 1,
             uVar12 = puVar5[4] ^ (uint)((int)puVar5[4] >> 0x1f) >> 1,
             bVar27 = (int)uVar19 <= (int)uVar12, uVar12 == uVar19)) {
            if ((int)(puVar5[1] ^ (uint)((int)puVar5[1] >> 0x1f) >> 1) <=
                (int)(puVar5[5] ^ (uint)((int)puVar5[5] >> 0x1f) >> 1)) goto LAB_009d6e20;
LAB_009d6e6c:
            bVar27 = true;
            uVar19 = 2;
            if (local_18c != 2) {
              iVar20 = 0;
              uVar12 = 2;
              do {
                uVar21 = puVar5[iVar20 * 4 + 10];
                bVar28 = uVar11 <= uVar21;
                if ((uVar21 == uVar11) &&
                   (uVar19 = puVar5[iVar20 * 4 + 4] ^
                             (uint)((int)puVar5[iVar20 * 4 + 4] >> 0x1f) >> 1,
                   uVar11 = puVar5[iVar20 * 4 + 8] ^
                            (uint)((int)puVar5[iVar20 * 4 + 8] >> 0x1f) >> 1,
                   bVar28 = (int)uVar19 <= (int)uVar11, uVar11 == uVar19)) {
                  if ((int)(puVar5[iVar20 * 4 + 5] ^
                           (uint)((int)puVar5[iVar20 * 4 + 5] >> 0x1f) >> 1) <=
                      (int)(puVar5[iVar20 * 4 + 9] ^
                           (uint)((int)puVar5[iVar20 * 4 + 9] >> 0x1f) >> 1)) {
                    uVar19 = iVar20 + 2;
                    break;
                  }
                }
                else {
                  uVar19 = uVar12;
                  if (bVar28) break;
                }
                iVar20 = iVar20 + 1;
                uVar12 = uVar12 + 1;
                uVar19 = local_18c;
                uVar11 = uVar21;
              } while ((param_2 - 2) - uVar15 != iVar20);
            }
          }
          else {
            if (!bVar27) goto LAB_009d6e6c;
LAB_009d6e20:
            if (local_18c == 2) {
              bVar27 = false;
              uVar19 = 2;
            }
            else {
              iVar20 = 0;
              uVar19 = 2;
              do {
                uVar12 = puVar5[iVar20 * 4 + 10];
                bVar27 = uVar11 <= uVar12;
                if ((uVar12 == uVar11) &&
                   (uVar21 = puVar5[iVar20 * 4 + 4] ^
                             (uint)((int)puVar5[iVar20 * 4 + 4] >> 0x1f) >> 1,
                   uVar11 = puVar5[iVar20 * 4 + 8] ^
                            (uint)((int)puVar5[iVar20 * 4 + 8] >> 0x1f) >> 1,
                   bVar27 = (int)uVar21 <= (int)uVar11, uVar11 == uVar21)) {
                  if ((int)(puVar5[iVar20 * 4 + 9] ^
                           (uint)((int)puVar5[iVar20 * 4 + 9] >> 0x1f) >> 1) <
                      (int)(puVar5[iVar20 * 4 + 5] ^
                           (uint)((int)puVar5[iVar20 * 4 + 5] >> 0x1f) >> 1)) {
                    uVar19 = iVar20 + 2;
                    goto LAB_009d6fb0;
                  }
                }
                else if (!bVar27) {
LAB_009d6fb0:
                  bVar27 = false;
                  goto LAB_009d6fd0;
                }
                iVar20 = iVar20 + 1;
                uVar19 = uVar19 + 1;
                uVar11 = uVar12;
              } while ((param_2 - 2) - uVar15 != iVar20);
              bVar27 = false;
              uVar19 = local_18c;
            }
          }
LAB_009d6fd0:
          if (uVar19 < uVar4) goto LAB_009d6aa0;
          if ((bVar27) && (uVar11 = uVar19 >> 1, uVar11 != 0)) {
            puVar10 = (undefined4 *)(param_1 + 8 + uVar15 * 0x10);
            puVar17 = (undefined4 *)(param_1 + -8 + uVar19 * 0x10 + uVar15 * 0x10);
            do {
              uVar23 = puVar10[-2];
              uVar11 = uVar11 - 1;
              puVar10[-2] = puVar17[-2];
              puVar17[-2] = uVar23;
              uVar23 = puVar17[-1];
              puVar17[-1] = puVar10[-1];
              puVar10[-1] = uVar23;
              uVar23 = *puVar10;
              *puVar10 = *puVar17;
              *puVar17 = uVar23;
              uVar23 = puVar17[1];
              puVar17[1] = puVar10[1];
              puVar17 = puVar17 + -4;
              puVar10[1] = uVar23;
              puVar10 = puVar10 + 4;
            } while (uVar11 != 0);
          }
        }
LAB_009d7064:
        local_18c = uVar19 << 1 | 1;
      }
      uVar19 = uVar15 - (uVar24 >> 1);
      uVar11 = uVar15 + (local_18c >> 1);
      uVar12 = uVar11 + uVar15;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar12;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar19,uVar15),uVar19 + uVar15);
      uVar11 = (uint)CARRY4(uVar11,uVar15) * (int)uVar2 +
               uVar12 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar19 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar11 != 0) {
        uVar19 = LZCOUNT(uVar11);
      }
      bVar18 = (byte)uVar19;
      if (1 < uVar14) goto LAB_009d6ae0;
LAB_009d70d8:
      abStack_69[uVar14 + 3] = bVar18;
      local_17c[uVar14 + 3] = uVar24;
      uVar19 = uVar24;
      uVar24 = local_18c;
    }
    else {
      if (uVar14 < 2) goto LAB_009d70d8;
LAB_009d6ae0:
      do {
        while( true ) {
          uVar11 = uVar14 - 1;
          if (abStack_69[uVar14 + 2] < uVar19) goto LAB_009d6e38;
          uVar21 = local_17c[uVar14 + 2];
          uVar12 = uVar21 >> 1;
          uVar25 = uVar12 + (uVar24 >> 1);
          uVar14 = uVar11;
          if ((uVar25 <= param_4) && (((uVar21 | uVar24) & 1) == 0)) break;
          puVar16 = (uint *)(param_1 + (uVar15 - uVar25) * 0x10);
          if ((uVar21 & 1) == 0) {
            FUN_009cfb44(puVar16,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar24 & 1) == 0) {
            FUN_009cfb44(puVar16 + uVar12 * 4,uVar24 >> 1,param_3,param_4,
                         LZCOUNT(uVar24 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar22 = uVar24 >> 1;
          if (1 < uVar21 && 1 < uVar24) {
            uVar24 = uVar12;
            if (uVar22 < uVar12) {
              uVar24 = uVar22;
            }
            if (uVar24 <= param_4) {
              puVar13 = puVar16 + uVar12 * 4;
              puVar7 = puVar16;
              if (uVar22 < uVar12) {
                puVar7 = puVar13;
              }
              FUN_016dd1aa(param_3,puVar7,uVar24 << 4);
              puVar26 = param_3 + uVar24 * 4;
              puVar7 = param_3;
              if (uVar22 < uVar12) {
                puVar8 = (uint *)(param_1 + -0x10 + uVar15 * 0x10);
                puVar6 = puVar13;
                do {
                  puVar13 = puVar26 + -4;
                  puVar9 = puVar6 + -4;
                  uVar24 = (uint)(puVar26[-2] < puVar6[-2]);
                  if ((puVar26[-2] == puVar6[-2]) &&
                     (uVar12 = *puVar9 ^ (uint)((int)*puVar9 >> 0x1f) >> 1,
                     uVar21 = *puVar13 ^ (uint)((int)*puVar13 >> 0x1f) >> 1,
                     uVar24 = (uint)((int)uVar21 < (int)uVar12), uVar21 == uVar12)) {
                    uVar24 = (uint)((int)(puVar26[-3] ^ (uint)((int)puVar26[-3] >> 0x1f) >> 1) <
                                   (int)(puVar6[-3] ^ (uint)((int)puVar6[-3] >> 0x1f) >> 1));
                  }
                  puVar26 = puVar13 + uVar24 * 4;
                  if (uVar24 != 0) {
                    puVar13 = puVar9;
                  }
                  uVar22 = puVar13[1];
                  uVar21 = puVar13[2];
                  uVar12 = puVar13[3];
                  *puVar8 = *puVar13;
                  puVar8[1] = uVar22;
                  puVar6 = puVar9 + (uVar24 ^ 1) * 4;
                  puVar8[2] = uVar21;
                  puVar8[3] = uVar12;
                  if (puVar6 != puVar16) {
                    puVar8 = puVar8 + -4;
                  }
                } while (puVar6 != puVar16 && puVar26 != param_3);
              }
              else {
                do {
                  uVar24 = (uint)(puVar13[2] < puVar7[2]);
                  if (((puVar13[2] == puVar7[2]) &&
                      (uVar12 = *puVar7 ^ (uint)((int)*puVar7 >> 0x1f) >> 1,
                      uVar21 = *puVar13 ^ (uint)((int)*puVar13 >> 0x1f) >> 1,
                      uVar24 = (uint)((int)uVar21 < (int)uVar12), uVar21 == uVar12)) &&
                     (uVar24 = 0,
                     (int)(puVar13[1] ^ (uint)((int)puVar13[1] >> 0x1f) >> 1) <
                     (int)(puVar7[1] ^ (uint)((int)puVar7[1] >> 0x1f) >> 1))) {
                    uVar24 = 1;
                  }
                  puVar6 = puVar7;
                  if (uVar24 != 0) {
                    puVar6 = puVar13;
                  }
                  uVar12 = *puVar6;
                  uVar22 = puVar6[1];
                  uVar21 = puVar6[2];
                  puVar16[3] = puVar6[3];
                  *puVar16 = uVar12;
                  puVar16[1] = uVar22;
                  puVar7 = puVar7 + (uVar24 ^ 1) * 4;
                  puVar16[2] = uVar21;
                  puVar6 = puVar16 + 4;
                  if (puVar7 == puVar26) break;
                  puVar13 = puVar13 + uVar24 * 4;
                  puVar16 = puVar6;
                } while (puVar13 != puVar5);
              }
              FUN_016dd1aa(puVar6,puVar7,(int)puVar26 - (int)puVar7);
            }
          }
          uVar24 = uVar25 * 2 | 1;
          if (uVar11 < 2) goto LAB_009d6e34;
        }
        uVar24 = uVar25 * 2;
      } while (1 < uVar11);
LAB_009d6e34:
      uVar14 = 1;
LAB_009d6e38:
      abStack_69[uVar14 + 3] = (byte)uVar19;
      local_17c[uVar14 + 3] = uVar24;
      uVar19 = uVar24;
      uVar24 = local_18c;
    }
    if (param_2 <= uVar15) {
      if ((uVar19 & 1) == 0) {
        FUN_009cfb44(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar15 = uVar15 + (uVar24 >> 1);
  } while( true );
}

