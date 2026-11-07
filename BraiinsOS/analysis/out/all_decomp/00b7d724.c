// FUN_00b7d724 @ 00b7d724 size=1512 calls_out=3 calls_in=2
// strings: 

void FUN_00b7d724(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  bool bVar29;
  ulonglong uVar30;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar30 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar30 & 0xffffffff);
  uVar4 = uVar30 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar30 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar30;
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
    iVar6 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar6) + (param_2 >> iVar6) >> 1;
  }
  uVar18 = 1;
  uVar25 = 0;
  uVar15 = 0;
  do {
    uVar14 = 0;
    bVar13 = 0;
    puVar7 = (uint *)(param_1 + uVar25 * 0x20);
    local_188 = 1;
    if (uVar25 < param_2) {
      local_188 = param_2 - uVar25;
      if (local_188 < uVar5) {
LAB_00b7d840:
        if (param_5 == 0) {
          if (uVar5 <= local_188) {
            local_188 = uVar5;
          }
          local_188 = local_188 << 1;
        }
        else {
          if (0x1f < local_188) {
            local_188 = 0x20;
          }
          FUN_00b7dd0c(puVar7,local_188,param_3,param_4,0,0);
          local_188 = local_188 << 1 | 1;
        }
      }
      else {
        if (local_188 < 2) {
          uVar14 = local_188;
        }
        else {
          uVar14 = 2;
          uVar26 = puVar7[8];
          if (uVar26 < *puVar7) {
            if (local_188 != 2) {
              uVar17 = uVar26;
              do {
                iVar6 = uVar14 * 8;
                if (uVar17 <= puVar7[iVar6]) goto LAB_00b7d924;
                uVar14 = uVar14 + 1;
                uVar17 = puVar7[iVar6];
              } while (local_188 != uVar14);
              goto LAB_00b7d920;
            }
            uVar26 = 1;
LAB_00b7d940:
            iVar6 = uVar25 * 0x20;
            iVar10 = param_1 + -0x10 + uVar14 * 0x20;
            iVar19 = param_1;
            do {
              iVar16 = iVar10 + iVar6;
              puVar20 = (undefined4 *)(iVar19 + iVar6);
              uVar8 = *puVar20;
              iVar19 = iVar19 + 0x20;
              uVar26 = uVar26 - 1;
              *puVar20 = *(undefined4 *)(iVar16 + -0x10);
              *(undefined4 *)(iVar16 + -0x10) = uVar8;
              uVar8 = puVar20[1];
              puVar20[1] = *(undefined4 *)(iVar16 + -0xc);
              *(undefined4 *)(iVar16 + -0xc) = uVar8;
              uVar8 = puVar20[2];
              puVar20[2] = *(undefined4 *)(iVar16 + -8);
              *(undefined4 *)(iVar16 + -8) = uVar8;
              uVar8 = puVar20[3];
              puVar20[3] = *(undefined4 *)(iVar16 + -4);
              *(undefined4 *)(iVar16 + -4) = uVar8;
              uVar8 = *(undefined4 *)(iVar10 + iVar6);
              *(undefined4 *)(iVar10 + iVar6) = puVar20[4];
              iVar10 = iVar10 + -0x20;
              puVar20[4] = uVar8;
              uVar8 = puVar20[5];
              puVar20[5] = *(undefined4 *)(iVar16 + 4);
              *(undefined4 *)(iVar16 + 4) = uVar8;
              uVar8 = *(undefined4 *)(iVar16 + 8);
              *(undefined4 *)(iVar16 + 8) = puVar20[6];
              puVar20[6] = uVar8;
              uVar8 = puVar20[7];
              puVar20[7] = *(undefined4 *)(iVar16 + 0xc);
              *(undefined4 *)(iVar16 + 0xc) = uVar8;
            } while (uVar26 != 0);
          }
          else if (local_188 != 2) {
            uVar17 = uVar26;
            do {
              iVar6 = uVar14 * 8;
              if (puVar7[iVar6] < uVar17) goto LAB_00b7d924;
              uVar14 = uVar14 + 1;
              uVar17 = puVar7[iVar6];
            } while (local_188 != uVar14);
LAB_00b7d920:
            uVar14 = local_188;
LAB_00b7d924:
            if (uVar14 < uVar5) goto LAB_00b7d840;
            if (uVar26 < *puVar7) {
              uVar26 = uVar14 >> 1;
              if (uVar26 != 0) goto LAB_00b7d940;
              uVar14 = 1;
            }
          }
        }
        local_188 = uVar14 << 1 | 1;
      }
      uVar26 = uVar25 - (uVar18 >> 1);
      uVar17 = uVar26 + uVar25;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar17;
      uVar22 = (local_188 >> 1) + uVar25 * 2;
      lVar2 = (ulonglong)uVar22 * (uVar4 & 0xffffffff);
      uVar14 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar26 = iVar3 * uVar22 + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)CARRY4(uVar26,uVar25) * (int)uVar4 +
               uVar17 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar26 != 0) {
        uVar14 = LZCOUNT(uVar26);
      }
      bVar13 = (byte)uVar14;
      if (uVar15 < 2) goto LAB_00b7d818;
LAB_00b7da58:
      do {
        while( true ) {
          uVar26 = uVar15 - 1;
          if (abStack_67[uVar15] < uVar14) goto LAB_00b7dca0;
          uVar22 = local_170[uVar26];
          uVar17 = uVar22 >> 1;
          uVar27 = uVar17 + (uVar18 >> 1);
          uVar15 = uVar26;
          if ((param_4 < uVar27) || (((uVar22 | uVar18) & 1) != 0)) break;
          uVar18 = uVar27 * 2;
          if (uVar26 < 2) goto LAB_00b7dc9c;
        }
        puVar23 = (uint *)(param_1 + (uVar25 - uVar27) * 0x20);
        if ((uVar22 & 1) == 0) {
          FUN_00b7dd0c(puVar23,uVar17,param_3,param_4,LZCOUNT(uVar17 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar18 & 1) == 0) {
          FUN_00b7dd0c(puVar23 + uVar17 * 8,uVar18 >> 1,param_3,param_4,
                       LZCOUNT(uVar18 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar24 = uVar18 >> 1;
        if (1 < uVar22 && 1 < uVar18) {
          uVar18 = uVar17;
          if (uVar24 < uVar17) {
            uVar18 = uVar24;
          }
          if (uVar18 <= param_4) {
            puVar21 = puVar23 + uVar17 * 8;
            puVar9 = puVar23;
            if (uVar24 < uVar17) {
              puVar9 = puVar21;
            }
            FUN_016dd1aa(param_3,puVar9,uVar18 << 5);
            puVar28 = param_3 + uVar18 * 8;
            puVar9 = param_3;
            if (uVar24 < uVar17) {
              puVar12 = (uint *)(param_1 + -0x20 + uVar25 * 0x20);
              do {
                puVar21 = puVar21 + -8;
                puVar28 = puVar28 + -8;
                bVar29 = *puVar28 < *puVar21;
                puVar11 = puVar28;
                if (bVar29) {
                  puVar11 = puVar21;
                }
                uVar18 = puVar11[1];
                uVar17 = puVar11[2];
                uVar22 = puVar11[3];
                *puVar12 = *puVar11;
                puVar12[1] = uVar18;
                puVar12[2] = uVar17;
                puVar12[3] = uVar22;
                uVar18 = puVar11[5];
                uVar17 = puVar11[6];
                uVar22 = puVar11[7];
                puVar12[4] = puVar11[4];
                puVar12[5] = uVar18;
                puVar12[6] = uVar17;
                puVar12[7] = uVar22;
                puVar28 = puVar28 + (uint)bVar29 * 8;
                puVar21 = puVar21 + (uint)!bVar29 * 8;
              } while ((puVar21 != puVar23) && (puVar12 = puVar12 + -8, puVar28 != param_3));
              puVar11 = puVar21;
            }
            else {
              do {
                bVar29 = *puVar21 < *puVar9;
                puVar12 = puVar9;
                if (bVar29) {
                  puVar12 = puVar21;
                }
                uVar18 = puVar12[1];
                uVar17 = puVar12[2];
                uVar22 = puVar12[3];
                puVar11 = puVar23 + 8;
                *puVar23 = *puVar12;
                puVar23[1] = uVar18;
                puVar23[2] = uVar17;
                puVar23[3] = uVar22;
                uVar18 = puVar12[5];
                uVar17 = puVar12[6];
                uVar22 = puVar12[7];
                puVar23[4] = puVar12[4];
                puVar23[5] = uVar18;
                puVar23[6] = uVar17;
                puVar23[7] = uVar22;
                puVar9 = puVar9 + (uint)!bVar29 * 8;
                if (puVar9 == puVar28) break;
                puVar21 = puVar21 + (uint)bVar29 * 8;
                puVar23 = puVar11;
              } while (puVar21 != puVar7);
            }
            FUN_016dd1aa(puVar11,puVar9,(int)puVar28 - (int)puVar9);
          }
        }
        uVar18 = uVar27 * 2 | 1;
      } while (1 < uVar26);
LAB_00b7dc9c:
      uVar15 = 1;
LAB_00b7dca0:
      abStack_67[uVar15 + 1] = (byte)uVar14;
      local_170[uVar15] = uVar18;
      uVar14 = uVar18;
      uVar18 = local_188;
    }
    else {
      if (1 < uVar15) goto LAB_00b7da58;
LAB_00b7d818:
      abStack_67[uVar15 + 1] = bVar13;
      local_170[uVar15] = uVar18;
      uVar14 = uVar18;
      uVar18 = local_188;
    }
    if (param_2 <= uVar25) {
      if ((uVar14 & 1) == 0) {
        FUN_00b7dd0c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + 1;
    uVar25 = uVar25 + (uVar18 >> 1);
  } while( true );
}

