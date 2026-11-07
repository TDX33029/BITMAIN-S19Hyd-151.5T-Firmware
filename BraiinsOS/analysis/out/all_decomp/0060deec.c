// FUN_0060deec @ 0060deec size=1712 calls_out=3 calls_in=2
// strings: 

void FUN_0060deec(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint *puVar32;
  uint *puVar33;
  undefined4 uVar34;
  uint uVar35;
  uint *puVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  ulonglong uVar39;
  uint local_194;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar39 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar39 & 0xffffffff);
  uVar5 = uVar39 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar39 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar39;
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
  uVar27 = 1;
  uVar29 = 0;
  uVar25 = 0;
  do {
    uVar16 = 0;
    bVar15 = 0;
    local_194 = 1;
    if (uVar29 < param_2) {
      local_194 = param_2 - uVar29;
      puVar9 = (uint *)(param_1 + uVar29 * 0x18);
      if (local_194 < uVar6) {
LAB_0060e020:
        if (param_5 == 0) {
          if (uVar6 <= local_194) {
            local_194 = uVar6;
          }
          local_194 = local_194 << 1;
        }
        else {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_006106d8(puVar9,local_194,param_3,param_4,0,0);
          local_194 = local_194 << 1 | 1;
        }
      }
      else {
        if (local_194 < 2) {
          uVar21 = local_194;
        }
        else {
          uVar12 = puVar9[1];
          uVar19 = puVar9[6];
          uVar16 = puVar9[7];
          if (uVar12 < uVar16 || uVar16 - uVar12 < (uint)(*puVar9 <= uVar19)) {
            uVar21 = 2;
            if (local_194 != 2) {
              puVar13 = (uint *)(param_1 + 0x30 + uVar29 * 0x18);
              uVar24 = uVar19;
              uVar20 = uVar16;
              do {
                uVar26 = *puVar13;
                uVar28 = puVar13[1];
                if (uVar28 <= uVar20 && (uint)(uVar24 <= uVar26) <= uVar28 - uVar20)
                goto LAB_0060e148;
                uVar21 = uVar21 + 1;
                puVar13 = puVar13 + 6;
                uVar24 = uVar26;
                uVar20 = uVar28;
              } while (local_194 != uVar21);
              goto LAB_0060e144;
            }
          }
          else if (local_194 == 2) {
            uVar21 = 2;
            uVar16 = 1;
LAB_0060e16c:
            iVar7 = param_1 + -0xc + uVar21 * 0x18;
            iVar14 = param_1;
            do {
              uVar16 = uVar16 - 1;
              puVar10 = (undefined4 *)(iVar7 + uVar29 * 0x18);
              uVar22 = *puVar10;
              puVar23 = (undefined4 *)(iVar14 + uVar29 * 0x18);
              uVar17 = *puVar23;
              iVar14 = iVar14 + 0x18;
              *puVar23 = puVar10[-3];
              uVar31 = puVar23[2];
              uVar37 = puVar23[3];
              uVar38 = puVar23[4];
              uVar34 = puVar10[-2];
              uVar18 = puVar10[1];
              puVar10[-2] = puVar23[1];
              puVar10[-3] = uVar17;
              uVar30 = puVar10[-1];
              puVar23[3] = uVar22;
              *puVar10 = uVar37;
              uVar22 = puVar23[5];
              uVar17 = puVar10[2];
              puVar23[1] = uVar34;
              puVar23[2] = uVar30;
              puVar10[-1] = uVar31;
              puVar23[4] = uVar18;
              puVar10[1] = uVar38;
              puVar23[5] = uVar17;
              puVar10[2] = uVar22;
              iVar7 = iVar7 + -0x18;
            } while (uVar16 != 0);
          }
          else {
            uVar21 = 2;
            puVar13 = (uint *)(param_1 + 0x30 + uVar29 * 0x18);
            uVar24 = uVar19;
            uVar20 = uVar16;
            do {
              uVar26 = *puVar13;
              uVar28 = puVar13[1];
              if (uVar20 < uVar28 || uVar28 - uVar20 < (uint)(uVar24 <= uVar26)) goto LAB_0060e148;
              uVar21 = uVar21 + 1;
              puVar13 = puVar13 + 6;
              uVar24 = uVar26;
              uVar20 = uVar28;
            } while (local_194 != uVar21);
LAB_0060e144:
            uVar21 = local_194;
LAB_0060e148:
            if (uVar21 < uVar6) goto LAB_0060e020;
            if (uVar16 <= uVar12 && (uint)(*puVar9 <= uVar19) <= uVar16 - uVar12) {
              uVar16 = uVar21 >> 1;
              if (uVar16 != 0) goto LAB_0060e16c;
              uVar21 = 1;
            }
          }
        }
        local_194 = uVar21 << 1 | 1;
      }
      uVar12 = uVar29 - (uVar27 >> 1);
      uVar19 = uVar12 + uVar29;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar19;
      uVar21 = (local_194 >> 1) + uVar29 * 2;
      lVar3 = (ulonglong)uVar21 * (uVar5 & 0xffffffff);
      uVar16 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar12 = iVar4 * uVar21 + (int)((ulonglong)lVar3 >> 0x20) ^
               (uint)CARRY4(uVar12,uVar29) * (int)uVar5 +
               uVar19 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar12 != 0) {
        uVar16 = LZCOUNT(uVar12);
      }
      bVar15 = (byte)uVar16;
      if (uVar25 < 2) goto LAB_0060dff0;
LAB_0060e29c:
      do {
        while( true ) {
          uVar12 = uVar25 - 1;
          if (abStack_67[uVar25] < uVar16) goto LAB_0060e534;
          uVar24 = local_170[uVar12];
          uVar19 = uVar24 >> 1;
          uVar21 = uVar19 + (uVar27 >> 1);
          uVar25 = uVar12;
          if ((param_4 < uVar21) || (((uVar24 | uVar27) & 1) != 0)) break;
          uVar27 = uVar21 * 2;
          if (uVar12 < 2) goto LAB_0060e530;
        }
        puVar9 = (uint *)(param_1 + (uVar29 - uVar21) * 0x18);
        if ((uVar24 & 1) == 0) {
          FUN_006106d8(puVar9,uVar19,param_3,param_4,LZCOUNT(uVar19 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar27 & 1) == 0) {
          FUN_006106d8(puVar9 + uVar19 * 6,uVar27 >> 1,param_3,param_4,
                       LZCOUNT(uVar27 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar20 = uVar27 >> 1;
        if (1 < uVar24 && 1 < uVar27) {
          uVar27 = uVar19;
          if (uVar20 < uVar19) {
            uVar27 = uVar20;
          }
          if (uVar27 <= param_4) {
            puVar13 = puVar9 + uVar19 * 6;
            puVar11 = puVar9;
            if (uVar20 < uVar19) {
              puVar11 = puVar13;
            }
            FUN_016dd1aa(param_3,puVar11,uVar27 * 0x18);
            puVar32 = param_3 + uVar27 * 6;
            puVar11 = param_3;
            if (uVar20 < uVar19) {
              puVar36 = (uint *)(param_1 + -0x18 + uVar29 * 0x18);
              do {
                puVar8 = puVar13 + -6;
                puVar33 = puVar32 + -6;
                uVar27 = puVar13[-5];
                uVar19 = puVar32[-5];
                bVar1 = uVar19 - uVar27 < (uint)(*puVar8 <= *puVar33);
                uVar24 = (uint)(uVar27 < uVar19 || bVar1);
                uVar27 = (uint)(uVar27 >= uVar19 && !bVar1);
                puVar13 = puVar33;
                if (uVar27 != 0) {
                  puVar13 = puVar8;
                }
                uVar19 = puVar13[1];
                uVar20 = puVar13[2];
                uVar26 = puVar13[3];
                uVar28 = puVar13[4];
                uVar35 = puVar13[5];
                puVar32 = puVar33 + (uVar27 | uVar27 << 1) * 2;
                *puVar36 = *puVar13;
                puVar36[1] = uVar19;
                puVar36[2] = uVar20;
                puVar36[3] = uVar26;
                puVar36[4] = uVar28;
                puVar36[5] = uVar35;
                puVar13 = puVar8 + (uVar24 | uVar24 << 1) * 2;
              } while ((puVar13 != puVar9) && (puVar36 = puVar36 + -6, puVar32 != param_3));
              puVar36 = puVar13;
            }
            else {
              do {
                uVar27 = puVar11[1];
                uVar19 = puVar13[1];
                puVar36 = puVar9 + 6;
                bVar1 = uVar19 - uVar27 < (uint)(*puVar11 <= *puVar13);
                uVar24 = (uint)(uVar27 < uVar19 || bVar1);
                uVar27 = (uint)(uVar27 >= uVar19 && !bVar1);
                puVar8 = puVar11;
                if (uVar27 != 0) {
                  puVar8 = puVar13;
                }
                uVar19 = puVar8[1];
                uVar20 = puVar8[2];
                uVar26 = puVar8[3];
                uVar28 = puVar8[4];
                uVar35 = puVar8[5];
                *puVar9 = *puVar8;
                puVar9[1] = uVar19;
                puVar9[2] = uVar20;
                puVar9[3] = uVar26;
                puVar9[4] = uVar28;
                puVar9[5] = uVar35;
                puVar8 = (uint *)(uVar24 | uVar24 << 1);
                puVar11 = puVar11 + (int)puVar8 * 2;
                if (puVar11 != puVar32) {
                  puVar13 = puVar13 + (uVar27 | uVar27 << 1) * 2;
                  puVar8 = (uint *)(param_1 + uVar29 * 0x18);
                }
                puVar9 = puVar36;
              } while (puVar11 != puVar32 && puVar13 != puVar8);
            }
            FUN_016dd1aa(puVar36,puVar11,(int)puVar32 - (int)puVar11);
          }
        }
        uVar27 = uVar21 * 2 | 1;
      } while (1 < uVar12);
LAB_0060e530:
      uVar25 = 1;
LAB_0060e534:
      abStack_67[uVar25 + 1] = (byte)uVar16;
      local_170[uVar25] = uVar27;
      uVar16 = uVar27;
      uVar27 = local_194;
    }
    else {
      if (1 < uVar25) goto LAB_0060e29c;
LAB_0060dff0:
      abStack_67[uVar25 + 1] = bVar15;
      local_170[uVar25] = uVar27;
      uVar16 = uVar27;
      uVar27 = local_194;
    }
    if (param_2 <= uVar29) {
      if ((uVar16 & 1) == 0) {
        FUN_006106d8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar25 = uVar25 + 1;
    uVar29 = uVar29 + (uVar27 >> 1);
  } while( true );
}

