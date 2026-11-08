// FUN_0137f86c @ 0137f86c size=1936 calls_out=4 calls_in=2
// strings: 

void FUN_0137f86c(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  byte bVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar6 = uVar31 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar6 = uVar31;
  }
  iVar5 = (int)(uVar6 >> 0x20);
  if (param_2 < 0x1001) {
    uVar8 = param_2 - (param_2 >> 1);
    if (0x3f < uVar8) {
      uVar8 = 0x40;
    }
  }
  else {
    uVar8 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar13 = (uVar8 & 1) + (uVar8 >> 1);
    uVar8 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar22 = 0;
  uVar21 = 0;
  uVar29 = 1;
LAB_0137f944:
  uVar17 = 1;
  puVar9 = (undefined4 *)(param_1 + uVar22 * 0x10);
  local_188 = 0;
  if (uVar22 < param_2) {
    uVar17 = param_2 - uVar22;
    if (uVar8 <= uVar17) {
      if (1 < uVar17) {
        uVar20 = puVar9[2];
        uVar15 = puVar9[5];
        uVar12 = puVar9[6];
        uVar11 = uVar20;
        if (uVar12 < uVar20) {
          uVar11 = uVar12;
        }
        iVar13 = FUN_016dd50a(uVar15,puVar9[1],uVar11);
        bVar18 = *(byte *)(puVar9 + 7);
        if (iVar13 == 0) {
          iVar13 = uVar12 - uVar20;
        }
        bVar3 = -1 < iVar13;
        if (iVar13 == 0) {
          bVar3 = *(byte *)(puVar9 + 3) <= bVar18;
        }
        if (bVar3) {
          uVar11 = 2;
          if (uVar17 != 2) {
            iVar13 = 0;
            do {
              uVar23 = puVar9[iVar13 * 4 + 9];
              uVar20 = puVar9[iVar13 * 4 + 10];
              uVar11 = uVar12;
              if (uVar20 < uVar12) {
                uVar11 = uVar20;
              }
              iVar10 = FUN_016dd50a(uVar23,uVar15,uVar11);
              iVar7 = iVar13 * 4;
              if (iVar10 == 0) {
                iVar10 = uVar20 - uVar12;
              }
              bVar4 = -1 < iVar10;
              if (iVar10 == 0) {
                bVar4 = bVar18 <= *(byte *)(puVar9 + iVar7 + 0xb);
              }
              if (!bVar4) goto LAB_0137fba8;
              iVar13 = iVar13 + 1;
              uVar12 = uVar20;
              uVar15 = uVar23;
              bVar18 = *(byte *)(puVar9 + iVar7 + 0xb);
            } while ((param_2 - 2) - uVar22 != iVar13);
            goto LAB_0137fb90;
          }
          goto LAB_0137fc48;
        }
        if (uVar17 != 2) {
          iVar13 = 0;
          do {
            uVar23 = puVar9[iVar13 * 4 + 9];
            uVar20 = puVar9[iVar13 * 4 + 10];
            uVar11 = uVar12;
            if (uVar20 < uVar12) {
              uVar11 = uVar20;
            }
            iVar10 = FUN_016dd50a(uVar23,uVar15,uVar11);
            iVar7 = iVar13 * 4;
            if (iVar10 == 0) {
              iVar10 = uVar20 - uVar12;
            }
            bVar4 = -1 < iVar10;
            if (iVar10 == 0) {
              bVar4 = bVar18 <= *(byte *)(puVar9 + iVar7 + 0xb);
            }
            if (bVar4) goto LAB_0137fba8;
            iVar13 = iVar13 + 1;
            uVar12 = uVar20;
            uVar15 = uVar23;
            bVar18 = *(byte *)(puVar9 + iVar7 + 0xb);
          } while ((param_2 - 2) - uVar22 != iVar13);
LAB_0137fb90:
          uVar11 = uVar17;
          goto LAB_0137fbac;
        }
        uVar11 = 2;
        uVar17 = 1;
        goto LAB_0137fbe0;
      }
      uVar11 = uVar17;
      goto LAB_0137fc48;
    }
    goto LAB_0137f974;
  }
  goto LAB_0137fcac;
LAB_0137fba8:
  uVar11 = iVar13 + 2;
LAB_0137fbac:
  if (uVar11 < uVar8) {
LAB_0137f974:
    if (param_5 == 0) {
      if (uVar8 <= uVar17) {
        uVar17 = uVar8;
      }
      uVar17 = uVar17 << 1;
    }
    else {
      if (0x1f < uVar17) {
        uVar17 = 0x20;
      }
      FUN_0137fffc(puVar9,uVar17,param_3,param_4,0,0);
      uVar17 = uVar17 << 1 | 1;
    }
  }
  else {
    if (!bVar3) {
      uVar17 = uVar11 >> 1;
      if (uVar17 == 0) {
        uVar11 = 1;
      }
      else {
LAB_0137fbe0:
        puVar30 = (undefined4 *)(param_1 + 8 + uVar22 * 0x10);
        puVar19 = (undefined4 *)(param_1 + -8 + uVar11 * 0x10 + uVar22 * 0x10);
        do {
          uVar15 = puVar30[-2];
          uVar17 = uVar17 - 1;
          puVar30[-2] = puVar19[-2];
          puVar19[-2] = uVar15;
          uVar15 = puVar19[-1];
          puVar19[-1] = puVar30[-1];
          puVar30[-1] = uVar15;
          uVar15 = *puVar30;
          *puVar30 = *puVar19;
          *puVar19 = uVar15;
          uVar15 = puVar19[1];
          puVar19[1] = puVar30[1];
          puVar19 = puVar19 + -4;
          puVar30[1] = uVar15;
          puVar30 = puVar30 + 4;
        } while (uVar17 != 0);
      }
    }
LAB_0137fc48:
    uVar17 = uVar11 << 1 | 1;
  }
  uVar11 = uVar22 - (uVar29 >> 1);
  uVar12 = uVar11 + uVar22;
  lVar1 = (uVar6 & 0xffffffff) * (ulonglong)uVar12;
  uVar20 = (uVar17 >> 1) + uVar22 * 2;
  lVar2 = (ulonglong)uVar20 * (uVar6 & 0xffffffff);
  local_188 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
  uVar11 = iVar5 * uVar20 + (int)((ulonglong)lVar2 >> 0x20) ^
           (uint)CARRY4(uVar11,uVar22) * (int)uVar6 +
           uVar12 * iVar5 + (int)((ulonglong)lVar1 >> 0x20);
  if (uVar11 != 0) {
    local_188 = LZCOUNT(uVar11);
  }
LAB_0137fcac:
  if (1 < uVar21) {
    do {
      while( true ) {
        uVar11 = uVar21 - 1;
        if (abStack_67[uVar21] < local_188) goto LAB_0137ff94;
        uVar27 = local_170[uVar11];
        uVar12 = uVar27 >> 1;
        uVar20 = uVar12 + (uVar29 >> 1);
        uVar21 = uVar11;
        if ((param_4 < uVar20) || (((uVar27 | uVar29) & 1) != 0)) break;
        uVar29 = uVar20 * 2;
        if (uVar11 < 2) goto LAB_0137ff84;
      }
      puVar30 = (undefined4 *)(param_1 + (uVar22 - uVar20) * 0x10);
      if ((uVar27 & 1) == 0) {
        FUN_0137fffc(puVar30,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
      }
      if ((uVar29 & 1) == 0) {
        FUN_0137fffc(puVar30 + uVar12 * 4,uVar29 >> 1,param_3,param_4,
                     LZCOUNT(uVar29 >> 1 | 1) << 1 ^ 0x3e,0);
      }
      uVar28 = uVar29 >> 1;
      if (1 < uVar27 && 1 < uVar29) {
        uVar29 = uVar12;
        if (uVar28 < uVar12) {
          uVar29 = uVar28;
        }
        if (uVar29 <= param_4) {
          puVar26 = puVar30 + uVar12 * 4;
          puVar19 = puVar30;
          if (uVar28 < uVar12) {
            puVar19 = puVar26;
          }
          FUN_016dd1aa(param_3,puVar19,uVar29 << 4);
          puVar24 = param_3 + uVar29 * 4;
          puVar19 = param_3;
          if (uVar28 < uVar12) {
            puVar16 = (undefined4 *)(param_1 + -0x10 + uVar22 * 0x10);
            do {
              uVar27 = puVar26[-2];
              uVar12 = puVar24[-2];
              uVar29 = uVar27;
              if (uVar12 < uVar27) {
                uVar29 = uVar12;
              }
              iVar13 = FUN_016dd50a(puVar24[-3],puVar26[-3],uVar29);
              if (iVar13 == 0) {
                iVar13 = uVar12 - uVar27;
              }
              bVar3 = -1 < iVar13;
              if (iVar13 == 0) {
                bVar3 = *(byte *)(puVar26 + -1) <= *(byte *)(puVar24 + -1);
              }
              uVar29 = (uint)!bVar3;
              puVar14 = puVar24 + -4;
              puVar24 = puVar14 + uVar29 * 4;
              if (uVar29 != 0) {
                puVar14 = puVar26 + -4;
              }
              uVar25 = puVar14[1];
              uVar23 = puVar14[2];
              uVar15 = puVar14[3];
              *puVar16 = *puVar14;
              puVar16[1] = uVar25;
              puVar26 = puVar26 + -4 + (uVar29 ^ 1) * 4;
              puVar16[2] = uVar23;
              puVar16[3] = uVar15;
              if (puVar26 == puVar30) {
                puVar30 = puVar26;
                goto LAB_0137fe84;
              }
              puVar16 = puVar16 + -4;
            } while (puVar24 != param_3);
            puVar30 = puVar26;
          }
          else {
            do {
              uVar27 = puVar19[2];
              uVar12 = puVar26[2];
              uVar29 = uVar27;
              if (uVar12 < uVar27) {
                uVar29 = uVar12;
              }
              iVar13 = FUN_016dd50a(puVar26[1],puVar19[1],uVar29);
              if (iVar13 == 0) {
                iVar13 = uVar12 - uVar27;
              }
              bVar3 = -1 < iVar13;
              if (iVar13 == 0) {
                bVar3 = *(byte *)(puVar19 + 3) <= *(byte *)(puVar26 + 3);
              }
              uVar29 = (uint)!bVar3;
              puVar16 = puVar19;
              if (uVar29 != 0) {
                puVar16 = puVar26;
              }
              uVar15 = *puVar16;
              uVar23 = puVar16[1];
              uVar25 = puVar16[2];
              puVar30[3] = puVar16[3];
              *puVar30 = uVar15;
              puVar30[1] = uVar23;
              puVar30[2] = uVar25;
              puVar30 = puVar30 + 4;
              puVar19 = puVar19 + (uVar29 ^ 1) * 4;
            } while ((puVar19 != puVar24) && (puVar26 = puVar26 + uVar29 * 4, puVar26 != puVar9));
          }
LAB_0137fe84:
          FUN_016dd1aa(puVar30,puVar19,(int)puVar24 - (int)puVar19);
        }
      }
      uVar29 = uVar20 * 2 | 1;
    } while (1 < uVar11);
LAB_0137ff84:
    uVar21 = 1;
  }
LAB_0137ff94:
  abStack_67[uVar21 + 1] = (byte)local_188;
  local_170[uVar21] = uVar29;
  if (param_2 <= uVar22) {
    if ((uVar29 & 1) == 0) {
      FUN_0137fffc(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar22 = uVar22 + (uVar17 >> 1);
  uVar21 = uVar21 + 1;
  uVar29 = uVar17;
  goto LAB_0137f944;
}

