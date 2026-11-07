// FUN_01998264 @ 01998264 size=1740 calls_out=3 calls_in=2
// strings: 

void FUN_01998264(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

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
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint *puVar32;
  undefined4 uVar33;
  uint *puVar34;
  ulonglong uVar35;
  uint local_198;
  uint *local_178;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar35 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar35 & 0xffffffff);
  uVar5 = uVar35 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar35 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar35;
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
  uVar25 = 0;
  uVar27 = 0;
  uVar18 = 1;
  do {
    uVar13 = 0;
    local_198 = 1;
    if (uVar25 < param_2) {
      local_198 = param_2 - uVar25;
      puVar32 = (uint *)(param_1 + uVar25 * 0x18);
      if (local_198 < uVar6) {
LAB_01998378:
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
          FUN_01998930(puVar32,local_198,param_3,param_4,0,0);
          local_198 = local_198 << 1 | 1;
        }
      }
      else {
        if (local_198 < 2) {
          uVar12 = local_198;
        }
        else {
          uVar9 = puVar32[6];
          uVar13 = puVar32[1];
          uVar8 = puVar32[7];
          if (uVar13 < uVar8 || uVar8 - uVar13 < (uint)(*puVar32 <= uVar9)) {
            uVar12 = 2;
            if (local_198 != 2) {
              uVar12 = 2;
              puVar14 = (uint *)(param_1 + 0x30 + uVar25 * 0x18);
              uVar24 = uVar9;
              uVar26 = uVar8;
              do {
                uVar28 = *puVar14;
                uVar30 = puVar14[1];
                if (uVar30 <= uVar26 && (uint)(uVar24 <= uVar28) <= uVar30 - uVar26)
                goto LAB_019984b0;
                uVar12 = uVar12 + 1;
                puVar14 = puVar14 + 6;
                uVar24 = uVar28;
                uVar26 = uVar30;
              } while (local_198 != uVar12);
              goto LAB_019984ac;
            }
          }
          else if (local_198 == 2) {
            uVar12 = 2;
            uVar13 = 1;
LAB_019984e4:
            iVar7 = param_1 + -0xc + uVar12 * 0x18;
            iVar17 = param_1;
            do {
              puVar11 = (undefined4 *)(iVar7 + uVar25 * 0x18);
              uVar21 = *puVar11;
              uVar13 = uVar13 - 1;
              puVar22 = (undefined4 *)(iVar17 + uVar25 * 0x18);
              uVar15 = *puVar22;
              iVar17 = iVar17 + 0x18;
              uVar16 = puVar11[1];
              uVar33 = puVar11[-1];
              uVar29 = puVar11[-2];
              *puVar22 = puVar11[-3];
              uVar20 = puVar22[1];
              puVar11[-1] = puVar22[2];
              uVar31 = puVar22[3];
              puVar11[-2] = uVar20;
              puVar22[3] = uVar21;
              uVar20 = puVar22[4];
              puVar11[-3] = uVar15;
              puVar22[4] = uVar16;
              uVar15 = puVar22[5];
              uVar16 = puVar11[2];
              puVar22[1] = uVar29;
              puVar22[2] = uVar33;
              *puVar11 = uVar31;
              puVar11[1] = uVar20;
              puVar22[5] = uVar16;
              puVar11[2] = uVar15;
              iVar7 = iVar7 + -0x18;
            } while (uVar13 != 0);
          }
          else {
            uVar12 = 2;
            puVar14 = (uint *)(param_1 + 0x30 + uVar25 * 0x18);
            uVar24 = uVar9;
            uVar26 = uVar8;
            do {
              uVar28 = *puVar14;
              uVar30 = puVar14[1];
              if (uVar26 < uVar30 || uVar30 - uVar26 < (uint)(uVar24 <= uVar28)) goto LAB_019984b0;
              uVar12 = uVar12 + 1;
              puVar14 = puVar14 + 6;
              uVar24 = uVar28;
              uVar26 = uVar30;
            } while (local_198 != uVar12);
LAB_019984ac:
            uVar12 = local_198;
LAB_019984b0:
            if (uVar12 < uVar6) goto LAB_01998378;
            if (uVar8 <= uVar13 && (uint)(*puVar32 <= uVar9) <= uVar8 - uVar13) {
              uVar13 = uVar12 >> 1;
              if (uVar13 != 0) goto LAB_019984e4;
              uVar12 = 1;
            }
          }
        }
        local_198 = uVar12 << 1 | 1;
      }
      uVar8 = uVar25 - (uVar18 >> 1);
      uVar9 = uVar8 + uVar25;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar12 = (local_198 >> 1) + uVar25 * 2;
      lVar3 = (ulonglong)uVar12 * (uVar5 & 0xffffffff);
      uVar13 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar8 = iVar4 * uVar12 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar25) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar8 != 0) {
        uVar13 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar27) {
      do {
        uVar8 = uVar27 - 1;
        if (abStack_6b[uVar27] < uVar13) goto LAB_019988c0;
        uVar12 = local_174[uVar8];
        uVar27 = uVar12 >> 1;
        uVar9 = uVar27 + (uVar18 >> 1);
        if ((param_4 < uVar9) || (((uVar12 | uVar18) & 1) != 0)) {
          local_178 = (uint *)(param_1 + (uVar25 - uVar9) * 0x18);
          if ((uVar12 & 1) == 0) {
            FUN_01998930(local_178,uVar27,param_3,param_4,LZCOUNT(uVar27 | 1) << 1 ^ 0x3e,0);
          }
          uVar24 = uVar18 >> 1;
          if ((uVar18 & 1) == 0) {
            FUN_01998930(local_178 + uVar27 * 6,uVar24,param_3,param_4,
                         LZCOUNT(uVar24 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar12 && 1 < uVar18) {
            uVar18 = uVar27;
            if (uVar24 < uVar27) {
              uVar18 = uVar24;
            }
            if (uVar18 <= param_4) {
              puVar14 = local_178 + uVar27 * 6;
              puVar32 = local_178;
              if (uVar24 < uVar27) {
                puVar32 = puVar14;
              }
              FUN_01bed4e2(param_3,puVar32,uVar18 * 0x18);
              puVar34 = param_3 + uVar18 * 6;
              puVar32 = param_3;
              if (uVar24 < uVar27) {
                puVar19 = (uint *)(param_1 + -0x18 + uVar25 * 0x18);
                do {
                  puVar23 = puVar34 + -6;
                  puVar10 = puVar14 + -6;
                  uVar27 = puVar34[-5];
                  uVar18 = puVar14[-5];
                  bVar1 = uVar27 - uVar18 < (uint)(*puVar10 <= *puVar23);
                  uVar12 = (uint)(uVar18 < uVar27 || bVar1);
                  uVar18 = (uint)(uVar18 >= uVar27 && !bVar1);
                  puVar14 = puVar23;
                  if (uVar18 != 0) {
                    puVar14 = puVar10;
                  }
                  uVar27 = puVar14[1];
                  uVar24 = puVar14[2];
                  uVar26 = puVar14[3];
                  uVar28 = puVar14[4];
                  uVar30 = puVar14[5];
                  puVar34 = puVar23 + (uVar18 | uVar18 << 1) * 2;
                  *puVar19 = *puVar14;
                  puVar19[1] = uVar27;
                  puVar19[2] = uVar24;
                  puVar19[3] = uVar26;
                  puVar19[4] = uVar28;
                  puVar19[5] = uVar30;
                  puVar14 = puVar10 + (uVar12 | uVar12 << 1) * 2;
                } while ((puVar14 != local_178) && (puVar19 = puVar19 + -6, puVar34 != param_3));
              }
              else {
                puVar19 = puVar14;
                do {
                  uVar18 = puVar32[1];
                  uVar27 = puVar19[1];
                  bVar1 = (uint)(*puVar32 <= *puVar19) <= uVar27 - uVar18;
                  uVar12 = (uint)(uVar27 <= uVar18 && bVar1);
                  uVar18 = (uint)(uVar27 > uVar18 || !bVar1);
                  puVar10 = puVar32;
                  if (uVar12 != 0) {
                    puVar10 = puVar19;
                  }
                  uVar27 = puVar10[1];
                  uVar24 = puVar10[2];
                  uVar26 = puVar10[3];
                  uVar28 = puVar10[4];
                  puVar23 = (uint *)puVar10[5];
                  puVar14 = local_178 + 6;
                  *local_178 = *puVar10;
                  local_178[1] = uVar27;
                  local_178[2] = uVar24;
                  local_178[3] = uVar26;
                  local_178[4] = uVar28;
                  local_178[5] = (uint)puVar23;
                  puVar10 = (uint *)(uVar18 | uVar18 << 1);
                  puVar32 = puVar32 + (int)puVar10 * 2;
                  if (puVar32 != puVar34) {
                    puVar10 = (uint *)(param_1 + uVar25 * 0x18);
                    puVar23 = puVar19 + (uVar12 | uVar12 << 1) * 2;
                  }
                  puVar19 = puVar23;
                  local_178 = puVar14;
                } while (puVar32 != puVar34 && puVar19 != puVar10);
              }
              FUN_01bed4e2(puVar14,puVar32,(int)puVar34 - (int)puVar32);
            }
          }
          uVar18 = uVar9 * 2 | 1;
        }
        else {
          uVar18 = uVar9 * 2;
        }
        uVar27 = uVar8;
      } while (1 < uVar8);
      uVar27 = 1;
    }
LAB_019988c0:
    abStack_6b[uVar27 + 1] = (byte)uVar13;
    local_174[uVar27] = uVar18;
    if (param_2 <= uVar25) {
      if ((uVar18 & 1) == 0) {
        FUN_01998930(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + 1;
    uVar25 = uVar25 + (local_198 >> 1);
    uVar18 = local_198;
  } while( true );
}

