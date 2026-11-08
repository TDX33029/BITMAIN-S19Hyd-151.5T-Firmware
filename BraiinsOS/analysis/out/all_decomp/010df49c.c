// FUN_010df49c @ 010df49c size=1432 calls_out=3 calls_in=2
// strings: 

void FUN_010df49c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar26 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar26 & 0xffffffff);
  uVar2 = uVar26 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar26 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar26;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar9 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar9) + (param_2 >> iVar9) >> 1;
  }
  uVar16 = 1;
  uVar22 = 0;
  uVar12 = 0;
  do {
    uVar14 = 0;
    bVar13 = 0;
    puVar5 = (uint *)(param_1 + uVar22 * 8);
    local_18c = 1;
    if (uVar22 < param_2) {
      local_18c = param_2 - uVar22;
      if (local_18c < uVar4) {
LAB_010df5b0:
        if (param_5 == 0) {
          if (uVar4 <= local_18c) {
            local_18c = uVar4;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_010ddab4(puVar5,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar23 = local_18c;
        }
        else {
          uVar14 = puVar5[2];
          if (uVar14 < *puVar5) {
            if (local_18c != 2) {
              uVar23 = 2;
              uVar10 = uVar14;
              do {
                iVar9 = uVar23 * 2;
                if (uVar10 <= puVar5[iVar9]) goto LAB_010df6a4;
                uVar23 = uVar23 + 1;
                uVar10 = puVar5[iVar9];
              } while (local_18c != uVar23);
              goto LAB_010df6a0;
            }
            uVar23 = 2;
            uVar14 = 1;
LAB_010df6c4:
            iVar9 = uVar22 * 8 + uVar23 * 8;
            iVar17 = 0;
            iVar15 = 0;
            do {
              puVar21 = (uint *)(param_1 + -8 + iVar9 + iVar17 * 8);
              uVar10 = *puVar21;
              puVar7 = puVar5 + iVar15 * 2;
              iVar15 = iVar15 + 1;
              *puVar21 = *puVar7;
              uVar19 = puVar21[1];
              *(uint *)(param_1 + -4 + iVar9 + iVar17 * 8) = puVar5[iVar17 * -2 + 1];
              iVar17 = iVar17 + -1;
              *puVar7 = uVar10;
              puVar7[1] = uVar19;
            } while (-iVar17 != uVar14);
          }
          else {
            uVar23 = 2;
            if (local_18c != 2) {
              uVar10 = uVar14;
              do {
                iVar9 = uVar23 * 2;
                if (puVar5[iVar9] < uVar10) goto LAB_010df6a4;
                uVar23 = uVar23 + 1;
                uVar10 = puVar5[iVar9];
              } while (local_18c != uVar23);
LAB_010df6a0:
              uVar23 = local_18c;
LAB_010df6a4:
              if (uVar23 < uVar4) goto LAB_010df5b0;
              if (uVar14 < *puVar5) {
                uVar14 = uVar23 >> 1;
                if (uVar14 != 0) goto LAB_010df6c4;
                uVar23 = 1;
              }
            }
          }
        }
        local_18c = uVar23 << 1 | 1;
      }
      uVar14 = uVar22 - (uVar16 >> 1);
      uVar23 = uVar22 + (local_18c >> 1);
      uVar10 = uVar23 + uVar22;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar10;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar14,uVar22),uVar14 + uVar22);
      uVar23 = (uint)CARRY4(uVar23,uVar22) * (int)uVar2 +
               uVar10 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar14 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar23 != 0) {
        uVar14 = LZCOUNT(uVar23);
      }
      bVar13 = (byte)uVar14;
      if (uVar12 < 2) goto LAB_010df58c;
LAB_010df7b4:
      do {
        while( true ) {
          uVar23 = uVar12 - 1;
          if (abStack_67[uVar12] < uVar14) goto LAB_010df9cc;
          uVar19 = local_170[uVar23];
          uVar10 = uVar19 >> 1;
          uVar24 = uVar10 + (uVar16 >> 1);
          uVar12 = uVar23;
          if ((param_4 < uVar24) || (((uVar19 | uVar16) & 1) != 0)) break;
          uVar16 = uVar24 * 2;
          if (uVar23 < 2) goto LAB_010df9c8;
        }
        puVar21 = (uint *)(param_1 + (uVar22 - uVar24) * 8);
        if ((uVar19 & 1) == 0) {
          FUN_010ddab4(puVar21,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar16 & 1) == 0) {
          FUN_010ddab4(puVar21 + uVar10 * 2,uVar16 >> 1,param_3,param_4,
                       LZCOUNT(uVar16 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar20 = uVar16 >> 1;
        if (1 < uVar19 && 1 < uVar16) {
          uVar16 = uVar10;
          if (uVar20 < uVar10) {
            uVar16 = uVar20;
          }
          if (uVar16 <= param_4) {
            puVar18 = puVar21 + uVar10 * 2;
            puVar7 = puVar21;
            if (uVar20 < uVar10) {
              puVar7 = puVar18;
            }
            FUN_016dd1aa(param_3,puVar7,uVar16 << 3);
            puVar6 = param_3 + uVar16 * 2;
            puVar7 = param_3;
            if (uVar20 < uVar10) {
              puVar8 = (uint *)(param_1 + -8 + uVar22 * 8);
              do {
                puVar18 = puVar18 + -2;
                puVar6 = puVar6 + -2;
                bVar25 = *puVar6 < *puVar18;
                puVar11 = puVar6;
                if (bVar25) {
                  puVar11 = puVar18;
                }
                uVar16 = puVar11[1];
                *puVar8 = *puVar11;
                puVar8[1] = uVar16;
                puVar6 = puVar6 + (uint)bVar25 * 2;
                puVar18 = puVar18 + (uint)!bVar25 * 2;
                if (puVar18 != puVar21) {
                  puVar8 = puVar8 + -2;
                }
              } while (puVar18 != puVar21 && puVar6 != param_3);
              puVar21 = puVar18;
            }
            else {
              do {
                bVar25 = *puVar7 <= *puVar18;
                puVar8 = puVar7;
                if (!bVar25) {
                  puVar8 = puVar18;
                }
                uVar16 = puVar8[1];
                *puVar21 = *puVar8;
                puVar21[1] = uVar16;
                puVar7 = puVar7 + (uint)bVar25 * 2;
                puVar21 = puVar21 + 2;
                if (puVar7 == puVar6) break;
                puVar18 = puVar18 + (uint)!bVar25 * 2;
              } while (puVar18 != puVar5);
            }
            FUN_016dd1aa(puVar21,puVar7,(int)puVar6 - (int)puVar7);
          }
        }
        uVar16 = uVar24 * 2 | 1;
      } while (1 < uVar23);
LAB_010df9c8:
      uVar12 = 1;
LAB_010df9cc:
      abStack_67[uVar12 + 1] = (byte)uVar14;
      local_170[uVar12] = uVar16;
      uVar14 = uVar16;
      uVar16 = local_18c;
    }
    else {
      if (1 < uVar12) goto LAB_010df7b4;
LAB_010df58c:
      abStack_67[uVar12 + 1] = bVar13;
      local_170[uVar12] = uVar16;
      uVar14 = uVar16;
      uVar16 = local_18c;
    }
    if (param_2 <= uVar22) {
      if ((uVar14 & 1) == 0) {
        FUN_010ddab4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar12 = uVar12 + 1;
    uVar22 = uVar22 + (uVar16 >> 1);
  } while( true );
}

