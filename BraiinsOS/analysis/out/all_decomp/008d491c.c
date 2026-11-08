// FUN_008d491c @ 008d491c size=1576 calls_out=3 calls_in=2
// strings: 

void FUN_008d491c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint *puVar29;
  undefined4 uVar30;
  uint *puVar31;
  bool bVar32;
  ulonglong uVar33;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar33 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar33 & 0xffffffff);
  uVar2 = uVar33 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar33 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar33;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar13 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar24 = 0;
  uVar20 = 0;
  uVar14 = 1;
  do {
    uVar12 = 0;
    local_184 = 1;
    if (uVar24 < param_2) {
      local_184 = param_2 - uVar24;
      puVar5 = (uint *)(param_1 + uVar24 * 0x14);
      if (local_184 < uVar4) {
LAB_008d4a24:
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
          FUN_008b9b50(puVar5,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar9 = local_184;
        }
        else {
          uVar12 = puVar5[5];
          if (uVar12 < *puVar5) {
            if (local_184 != 2) {
              uVar18 = 2;
              uVar10 = uVar12;
              puVar7 = (uint *)(param_1 + 0x28 + uVar24 * 0x14);
              do {
                uVar9 = uVar18;
                if (uVar10 <= *puVar7) break;
                uVar18 = uVar18 + 1;
                uVar10 = *puVar7;
                puVar7 = puVar7 + 5;
                uVar9 = local_184;
              } while (local_184 != uVar18);
              goto joined_r0x008d4b48;
            }
            uVar9 = 2;
            uVar12 = 1;
LAB_008d4b64:
            iVar13 = param_1;
            iVar15 = param_1 + -8 + uVar9 * 0x14;
            do {
              uVar12 = uVar12 - 1;
              puVar8 = (undefined4 *)(iVar15 + uVar24 * 0x14);
              uVar16 = *puVar8;
              puVar17 = (undefined4 *)(iVar13 + uVar24 * 0x14);
              uVar26 = *puVar17;
              iVar13 = iVar13 + 0x14;
              uVar6 = puVar8[1];
              *puVar17 = puVar8[-3];
              uVar25 = puVar17[2];
              uVar28 = puVar17[3];
              uVar30 = puVar17[4];
              uVar23 = puVar8[-2];
              puVar8[-2] = puVar17[1];
              uVar22 = puVar8[-1];
              puVar17[3] = uVar16;
              puVar17[1] = uVar23;
              puVar17[2] = uVar22;
              puVar8[-3] = uVar26;
              puVar8[-1] = uVar25;
              *puVar8 = uVar28;
              puVar17[4] = uVar6;
              puVar8[1] = uVar30;
              iVar15 = iVar15 + -0x14;
            } while (uVar12 != 0);
          }
          else {
            uVar9 = 2;
            if (local_184 != 2) {
              uVar18 = 2;
              uVar10 = uVar12;
              puVar7 = (uint *)(param_1 + 0x28 + uVar24 * 0x14);
              do {
                uVar9 = uVar18;
                if (*puVar7 < uVar10) break;
                uVar18 = uVar18 + 1;
                uVar10 = *puVar7;
                puVar7 = puVar7 + 5;
                uVar9 = local_184;
              } while (local_184 != uVar18);
joined_r0x008d4b48:
              if (uVar9 < uVar4) goto LAB_008d4a24;
              if (uVar12 < *puVar5) {
                uVar12 = uVar9 >> 1;
                if (uVar12 != 0) goto LAB_008d4b64;
                uVar9 = 1;
              }
            }
          }
        }
        local_184 = uVar9 << 1 | 1;
      }
      uVar12 = uVar24 - (uVar14 >> 1);
      uVar9 = uVar24 + (local_184 >> 1);
      uVar10 = uVar9 + uVar24;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar10;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar12,uVar24),uVar12 + uVar24);
      uVar9 = (uint)CARRY4(uVar9,uVar24) * (int)uVar2 +
              uVar10 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
              (uint)((ulonglong)lVar3 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar9 != 0) {
        uVar12 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar20) {
      do {
        while( true ) {
          uVar9 = uVar20 - 1;
          if (abStack_67[uVar20] < uVar12) goto LAB_008d4ee0;
          uVar18 = local_170[uVar9];
          uVar10 = uVar18 >> 1;
          uVar27 = uVar10 + (uVar14 >> 1);
          uVar20 = uVar9;
          if ((uVar27 <= param_4) && (((uVar18 | uVar14) & 1) == 0)) break;
          puVar5 = (uint *)(param_1 + (uVar24 - uVar27) * 0x14);
          if ((uVar18 & 1) == 0) {
            FUN_008b9b50(puVar5,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar14 & 1) == 0) {
            FUN_008b9b50(puVar5 + uVar10 * 5,uVar14 >> 1,param_3,param_4,
                         LZCOUNT(uVar14 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar21 = uVar14 >> 1;
          if (1 < uVar18 && 1 < uVar14) {
            uVar14 = uVar10;
            if (uVar21 < uVar10) {
              uVar14 = uVar21;
            }
            if (uVar14 <= param_4) {
              puVar19 = puVar5 + uVar10 * 5;
              puVar7 = puVar5;
              if (uVar21 < uVar10) {
                puVar7 = puVar19;
              }
              FUN_016dd1aa(param_3,puVar7,uVar14 * 0x14);
              puVar31 = param_3 + uVar14 * 5;
              puVar7 = param_3;
              if (uVar21 < uVar10) {
                puVar29 = (uint *)(param_1 + -0x14 + uVar24 * 0x14);
                do {
                  puVar19 = puVar19 + -5;
                  puVar31 = puVar31 + -5;
                  bVar32 = *puVar31 < *puVar19;
                  puVar11 = puVar31;
                  if (bVar32) {
                    puVar11 = puVar19;
                  }
                  uVar14 = puVar11[1];
                  uVar10 = puVar11[2];
                  uVar18 = puVar11[3];
                  uVar21 = puVar11[4];
                  *puVar29 = *puVar11;
                  puVar29[1] = uVar14;
                  puVar29[2] = uVar10;
                  puVar29[3] = uVar18;
                  puVar29[4] = uVar21;
                  puVar31 = puVar31 + ((uint)bVar32 | (uint)bVar32 << 2);
                  puVar19 = puVar19 + ((uint)!bVar32 | (uint)!bVar32 << 2);
                } while ((puVar19 != puVar5) && (puVar29 = puVar29 + -5, puVar31 != param_3));
                puVar11 = puVar19;
              }
              else {
                do {
                  bVar32 = *puVar7 <= *puVar19;
                  puVar29 = puVar7;
                  if (!bVar32) {
                    puVar29 = puVar19;
                  }
                  puVar11 = puVar5 + 5;
                  uVar14 = puVar29[1];
                  uVar10 = puVar29[2];
                  uVar18 = puVar29[3];
                  uVar21 = puVar29[4];
                  *puVar5 = *puVar29;
                  puVar5[1] = uVar14;
                  puVar5[2] = uVar10;
                  puVar5[3] = uVar18;
                  puVar5[4] = uVar21;
                  puVar7 = puVar7 + ((uint)bVar32 | (uint)bVar32 << 2);
                  if (puVar7 == puVar31) break;
                  puVar19 = puVar19 + ((uint)!bVar32 | (uint)!bVar32 << 2);
                  puVar5 = puVar11;
                } while (puVar19 != (uint *)(param_1 + uVar24 * 0x14));
              }
              FUN_016dd1aa(puVar11,puVar7,(int)puVar31 - (int)puVar7);
            }
          }
          uVar14 = uVar27 * 2 | 1;
          if (uVar9 < 2) goto LAB_008d4ed8;
        }
        uVar14 = uVar27 * 2;
      } while (1 < uVar9);
LAB_008d4ed8:
      uVar20 = 1;
    }
LAB_008d4ee0:
    abStack_67[uVar20 + 1] = (byte)uVar12;
    local_170[uVar20] = uVar14;
    if (param_2 <= uVar24) {
      if ((uVar14 & 1) == 0) {
        FUN_008b9b50(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar20 = uVar20 + 1;
    uVar24 = uVar24 + (local_184 >> 1);
    uVar14 = local_184;
  } while( true );
}

