// FUN_015dd928 @ 015dd928 size=1776 calls_out=3 calls_in=2
// strings: 

void FUN_015dd928(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined4 uVar32;
  uint *puVar33;
  undefined4 uVar34;
  uint *puVar35;
  ulonglong uVar36;
  uint local_198;
  uint *local_178;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar36 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar36 & 0xffffffff);
  uVar5 = uVar36 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar36 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar36;
  }
  iVar4 = (int)(uVar5 >> 0x20);
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar7 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar26 = 0;
  uVar28 = 0;
  uVar18 = 1;
  do {
    uVar13 = 0;
    local_198 = 1;
    if (uVar26 < param_2) {
      local_198 = param_2 - uVar26;
      puVar33 = (uint *)(param_1 + uVar26 * 0x18);
      if (local_198 < uVar6) {
LAB_015dda3c:
        if (param_5 == 0) {
          if (uVar6 <= local_198) {
            local_198 = uVar6;
          }
          local_198 = local_198 << 1;
        }
        else {
          if (0x1f < local_198) {
            local_198 = 0x20;
          }
          FUN_015de018(puVar33,local_198,param_3,param_4,0,0);
          local_198 = local_198 << 1 | 1;
        }
      }
      else {
        if (local_198 < 2) {
          uVar12 = local_198;
        }
        else {
          uVar9 = puVar33[6];
          uVar13 = puVar33[1];
          uVar8 = puVar33[7];
          if (uVar13 < uVar8 || uVar8 - uVar13 < (uint)(*puVar33 <= uVar9)) {
            uVar12 = 2;
            if (local_198 != 2) {
              uVar12 = 2;
              puVar14 = (uint *)(param_1 + 0x30 + uVar26 * 0x18);
              uVar24 = uVar9;
              uVar25 = uVar8;
              do {
                uVar27 = *puVar14;
                uVar29 = puVar14[1];
                if (uVar29 <= uVar25 && (uint)(uVar24 <= uVar27) <= uVar29 - uVar25)
                goto LAB_015ddb74;
                uVar12 = uVar12 + 1;
                puVar14 = puVar14 + 6;
                uVar24 = uVar27;
                uVar25 = uVar29;
              } while (local_198 != uVar12);
              goto LAB_015ddb70;
            }
          }
          else if (local_198 == 2) {
            uVar12 = 2;
            uVar13 = 1;
LAB_015ddba8:
            iVar7 = param_1 + -0xc + uVar12 * 0x18;
            iVar17 = param_1;
            do {
              puVar11 = (undefined4 *)(iVar7 + uVar26 * 0x18);
              uVar21 = *puVar11;
              uVar13 = uVar13 - 1;
              puVar22 = (undefined4 *)(iVar17 + uVar26 * 0x18);
              uVar15 = *puVar22;
              iVar17 = iVar17 + 0x18;
              uVar16 = puVar11[1];
              uVar34 = puVar11[-1];
              uVar30 = puVar11[-2];
              *puVar22 = puVar11[-3];
              uVar20 = puVar22[1];
              puVar11[-1] = puVar22[2];
              uVar32 = puVar22[3];
              puVar11[-2] = uVar20;
              puVar22[3] = uVar21;
              uVar20 = puVar22[4];
              puVar11[-3] = uVar15;
              puVar22[4] = uVar16;
              uVar15 = puVar22[5];
              uVar16 = puVar11[2];
              puVar22[1] = uVar30;
              puVar22[2] = uVar34;
              *puVar11 = uVar32;
              puVar11[1] = uVar20;
              puVar22[5] = uVar16;
              puVar11[2] = uVar15;
              iVar7 = iVar7 + -0x18;
            } while (uVar13 != 0);
          }
          else {
            uVar12 = 2;
            puVar14 = (uint *)(param_1 + 0x30 + uVar26 * 0x18);
            uVar24 = uVar9;
            uVar25 = uVar8;
            do {
              uVar27 = *puVar14;
              uVar29 = puVar14[1];
              if (uVar25 < uVar29 || uVar29 - uVar25 < (uint)(uVar24 <= uVar27)) goto LAB_015ddb74;
              uVar12 = uVar12 + 1;
              puVar14 = puVar14 + 6;
              uVar24 = uVar27;
              uVar25 = uVar29;
            } while (local_198 != uVar12);
LAB_015ddb70:
            uVar12 = local_198;
LAB_015ddb74:
            if (uVar12 < uVar6) goto LAB_015dda3c;
            if (uVar8 <= uVar13 && (uint)(*puVar33 <= uVar9) <= uVar8 - uVar13) {
              uVar13 = uVar12 >> 1;
              if (uVar13 != 0) goto LAB_015ddba8;
              uVar12 = 1;
            }
          }
        }
        local_198 = uVar12 << 1 | 1;
      }
      uVar8 = uVar26 - (uVar18 >> 1);
      uVar9 = uVar8 + uVar26;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar12 = (local_198 >> 1) + uVar26 * 2;
      lVar3 = (ulonglong)uVar12 * (uVar5 & 0xffffffff);
      uVar13 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar8 = iVar4 * uVar12 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar26) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar8 != 0) {
        uVar13 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar28) {
      do {
        while( true ) {
          uVar8 = uVar28 - 1;
          if (abStack_6b[uVar28] < uVar13) goto LAB_015ddfa8;
          uVar24 = local_174[uVar8];
          uVar9 = uVar24 >> 1;
          uVar12 = uVar9 + (uVar18 >> 1);
          uVar28 = uVar8;
          if ((param_4 < uVar12) || (((uVar24 | uVar18) & 1) != 0)) break;
          uVar18 = uVar12 * 2;
          if (uVar8 < 2) goto LAB_015ddfa4;
        }
        local_178 = (uint *)(param_1 + (uVar26 - uVar12) * 0x18);
        if ((uVar24 & 1) == 0) {
          FUN_015de018(local_178,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar18 & 1) == 0) {
          FUN_015de018(local_178 + uVar9 * 6,uVar18 >> 1,param_3,param_4,
                       LZCOUNT(uVar18 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar25 = uVar18 >> 1;
        if (1 < uVar24 && 1 < uVar18) {
          uVar18 = uVar9;
          if (uVar25 < uVar9) {
            uVar18 = uVar25;
          }
          if (uVar18 <= param_4) {
            puVar14 = local_178 + uVar9 * 6;
            puVar33 = local_178;
            if (uVar25 < uVar9) {
              puVar33 = puVar14;
            }
            FUN_016dd1aa(param_3,puVar33,uVar18 * 0x18);
            puVar35 = param_3 + uVar18 * 6;
            puVar33 = param_3;
            if (uVar25 < uVar9) {
              puVar19 = (uint *)(param_1 + -0x18 + uVar26 * 0x18);
              do {
                puVar23 = puVar35 + -6;
                puVar10 = puVar14 + -6;
                uVar9 = puVar35[-5];
                uVar18 = puVar14[-5];
                bVar1 = uVar9 - uVar18 < (uint)(*puVar10 <= *puVar23);
                uVar24 = (uint)(uVar18 < uVar9 || bVar1);
                uVar18 = (uint)(uVar18 >= uVar9 && !bVar1);
                puVar14 = puVar23;
                if (uVar18 != 0) {
                  puVar14 = puVar10;
                }
                uVar9 = puVar14[1];
                uVar25 = puVar14[2];
                uVar27 = puVar14[3];
                uVar29 = puVar14[4];
                uVar31 = puVar14[5];
                puVar35 = puVar23 + (uVar18 | uVar18 << 1) * 2;
                *puVar19 = *puVar14;
                puVar19[1] = uVar9;
                puVar19[2] = uVar25;
                puVar19[3] = uVar27;
                puVar19[4] = uVar29;
                puVar19[5] = uVar31;
                puVar14 = puVar10 + (uVar24 | uVar24 << 1) * 2;
              } while ((puVar14 != local_178) && (puVar19 = puVar19 + -6, puVar35 != param_3));
            }
            else {
              puVar19 = puVar14;
              do {
                uVar18 = puVar33[1];
                uVar9 = puVar19[1];
                bVar1 = (uint)(*puVar33 <= *puVar19) <= uVar9 - uVar18;
                uVar24 = (uint)(uVar9 <= uVar18 && bVar1);
                uVar18 = (uint)(uVar9 > uVar18 || !bVar1);
                puVar10 = puVar33;
                if (uVar24 != 0) {
                  puVar10 = puVar19;
                }
                uVar9 = puVar10[1];
                uVar25 = puVar10[2];
                uVar27 = puVar10[3];
                uVar29 = puVar10[4];
                puVar23 = (uint *)puVar10[5];
                puVar14 = local_178 + 6;
                *local_178 = *puVar10;
                local_178[1] = uVar9;
                local_178[2] = uVar25;
                local_178[3] = uVar27;
                local_178[4] = uVar29;
                local_178[5] = (uint)puVar23;
                puVar10 = (uint *)(uVar18 | uVar18 << 1);
                puVar33 = puVar33 + (int)puVar10 * 2;
                if (puVar33 != puVar35) {
                  puVar10 = (uint *)(param_1 + uVar26 * 0x18);
                  puVar23 = puVar19 + (uVar24 | uVar24 << 1) * 2;
                }
                puVar19 = puVar23;
                local_178 = puVar14;
              } while (puVar33 != puVar35 && puVar19 != puVar10);
            }
            FUN_016dd1aa(puVar14,puVar33,(int)puVar35 - (int)puVar33);
          }
        }
        uVar18 = uVar12 * 2 | 1;
      } while (1 < uVar8);
LAB_015ddfa4:
      uVar28 = 1;
    }
LAB_015ddfa8:
    abStack_6b[uVar28 + 1] = (byte)uVar13;
    local_174[uVar28] = uVar18;
    if (param_2 <= uVar26) {
      if ((uVar18 & 1) == 0) {
        FUN_015de018(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar28 = uVar28 + 1;
    uVar26 = uVar26 + (local_198 >> 1);
    uVar18 = local_198;
  } while( true );
}

