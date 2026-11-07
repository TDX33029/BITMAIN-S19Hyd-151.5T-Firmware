// FUN_0060cc28 @ 0060cc28 size=1652 calls_out=3 calls_in=2
// strings: 

void FUN_0060cc28(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  ulonglong uVar36;
  uint local_170 [66];
  byte abStack_67 [67];
  
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
  uVar15 = 0;
  uVar17 = 0;
  uVar31 = 1;
  do {
    uVar22 = 0;
    uVar33 = 1;
    puVar8 = (undefined4 *)(param_1 + uVar15 * 0x20);
    if (uVar15 < param_2) {
      uVar33 = param_2 - uVar15;
      if (uVar33 < uVar6) {
LAB_0060cd28:
        if (param_5 == 0) {
          if (uVar6 <= uVar33) {
            uVar33 = uVar6;
          }
          uVar33 = uVar33 << 1;
        }
        else {
          if (0x1f < uVar33) {
            uVar33 = 0x20;
          }
          FUN_00611210(puVar8,uVar33,param_3,param_4,0,0);
          uVar33 = uVar33 << 1 | 1;
        }
      }
      else {
        if (uVar33 < 2) {
          uVar14 = uVar33;
        }
        else {
          uVar10 = puVar8[3];
          uVar9 = puVar8[10];
          uVar22 = puVar8[0xb];
          if (uVar10 < uVar22 || uVar22 - uVar10 < (uint)((uint)puVar8[2] <= uVar9)) {
            uVar14 = 2;
            if (uVar33 != 2) {
              puVar19 = (uint *)(param_1 + 0x48 + uVar15 * 0x20);
              uVar27 = uVar22;
              uVar20 = uVar9;
              do {
                uVar32 = *puVar19;
                uVar11 = puVar19[1];
                if (uVar11 <= uVar27 && (uint)(uVar20 <= uVar32) <= uVar11 - uVar27)
                goto LAB_0060ce58;
                uVar14 = uVar14 + 1;
                puVar19 = puVar19 + 8;
                uVar27 = uVar11;
                uVar20 = uVar32;
              } while (uVar33 != uVar14);
              goto LAB_0060ce54;
            }
          }
          else if (uVar33 == 2) {
            uVar14 = 2;
            uVar33 = 1;
LAB_0060ce7c:
            iVar7 = param_1;
            iVar23 = param_1 + -0x10 + uVar14 * 0x20;
            do {
              uVar33 = uVar33 - 1;
              puVar30 = (undefined4 *)(iVar23 + uVar15 * 0x20);
              uVar26 = *puVar30;
              puVar25 = (undefined4 *)(iVar7 + uVar15 * 0x20);
              uVar18 = *puVar25;
              uVar21 = puVar30[-3];
              *puVar25 = puVar30[-4];
              uVar16 = puVar25[1];
              uVar35 = puVar25[2];
              puVar25[1] = uVar21;
              puVar30[-4] = uVar18;
              uVar28 = puVar25[4];
              puVar30[-3] = uVar16;
              puVar25[4] = uVar26;
              uVar18 = puVar25[5];
              puVar25[5] = puVar30[1];
              puVar30[1] = uVar18;
              uVar18 = puVar25[6];
              uVar16 = puVar30[-2];
              puVar25[6] = puVar30[2];
              puVar30[2] = uVar18;
              uVar26 = puVar30[-1];
              uVar34 = puVar25[3];
              uVar18 = puVar25[7];
              uVar21 = puVar30[3];
              puVar25[2] = uVar16;
              puVar30[-2] = uVar35;
              puVar25[3] = uVar26;
              puVar30[-1] = uVar34;
              *puVar30 = uVar28;
              puVar25[7] = uVar21;
              puVar30[3] = uVar18;
              iVar7 = iVar7 + 0x20;
              iVar23 = iVar23 + -0x20;
            } while (uVar33 != 0);
          }
          else {
            uVar14 = 2;
            puVar19 = (uint *)(param_1 + 0x48 + uVar15 * 0x20);
            uVar27 = uVar22;
            uVar20 = uVar9;
            do {
              uVar32 = *puVar19;
              uVar11 = puVar19[1];
              if (uVar27 < uVar11 || uVar11 - uVar27 < (uint)(uVar20 <= uVar32)) goto LAB_0060ce58;
              uVar14 = uVar14 + 1;
              puVar19 = puVar19 + 8;
              uVar27 = uVar11;
              uVar20 = uVar32;
            } while (uVar33 != uVar14);
LAB_0060ce54:
            uVar14 = uVar33;
LAB_0060ce58:
            if (uVar14 < uVar6) goto LAB_0060cd28;
            if (uVar22 <= uVar10 && (uint)((uint)puVar8[2] <= uVar9) <= uVar22 - uVar10) {
              uVar33 = uVar14 >> 1;
              if (uVar33 != 0) goto LAB_0060ce7c;
              uVar14 = 1;
            }
          }
        }
        uVar33 = uVar14 << 1 | 1;
      }
      uVar22 = uVar15 - (uVar31 >> 1);
      uVar9 = uVar22 + uVar15;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar10 = (uVar33 >> 1) + uVar15 * 2;
      lVar3 = (ulonglong)uVar10 * (uVar5 & 0xffffffff);
      uVar9 = iVar4 * uVar10 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar22,uVar15) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      uVar22 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      if (uVar9 != 0) {
        uVar22 = LZCOUNT(uVar9);
      }
    }
    if (uVar17 < 2) {
      abStack_67[uVar17 + 1] = (byte)uVar22;
      local_170[uVar17] = uVar31;
    }
    else {
      do {
        while( true ) {
          uVar9 = uVar17 - 1;
          if (abStack_67[uVar17] < uVar22) goto LAB_0060d234;
          uVar27 = local_170[uVar9];
          uVar10 = uVar27 >> 1;
          uVar14 = uVar10 + (uVar31 >> 1);
          uVar17 = uVar9;
          if ((param_4 < uVar14) || (((uVar27 | uVar31) & 1) != 0)) break;
          uVar31 = uVar14 * 2;
          if (uVar9 < 2) goto LAB_0060d230;
        }
        puVar30 = (undefined4 *)(param_1 + (uVar15 - uVar14) * 0x20);
        if ((uVar27 & 1) == 0) {
          FUN_00611210(puVar30,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar31 & 1) == 0) {
          FUN_00611210(puVar30 + uVar10 * 8,uVar31 >> 1,param_3,param_4,
                       LZCOUNT(uVar31 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar20 = uVar31 >> 1;
        if (1 < uVar27 && 1 < uVar31) {
          uVar31 = uVar10;
          if (uVar20 < uVar10) {
            uVar31 = uVar20;
          }
          if (uVar31 <= param_4) {
            puVar24 = puVar30 + uVar10 * 8;
            puVar25 = puVar30;
            if (uVar20 < uVar10) {
              puVar25 = puVar24;
            }
            FUN_016dd1aa(param_3,puVar25,uVar31 << 5);
            puVar25 = param_3 + uVar31 * 8;
            if (uVar20 < uVar10) {
              puVar12 = (undefined4 *)(param_1 + -0x20 + uVar15 * 0x20);
              puVar29 = puVar24;
              do {
                uVar31 = puVar29[-5];
                puVar24 = puVar25 + -8;
                uVar27 = puVar25[-5];
                bVar1 = (uint)((uint)puVar29[-6] <= (uint)puVar25[-6]) <= uVar27 - uVar31;
                uVar10 = (uint)(uVar27 <= uVar31 && bVar1);
                puVar25 = puVar24 + uVar10 * 8;
                if (uVar10 != 0) {
                  puVar24 = puVar29 + -8;
                }
                uVar18 = puVar24[1];
                uVar21 = puVar24[2];
                uVar26 = puVar24[3];
                puVar29 = puVar29 + -8 + (uint)(uVar27 > uVar31 || !bVar1) * 8;
                *puVar12 = *puVar24;
                puVar12[1] = uVar18;
                puVar12[2] = uVar21;
                puVar12[3] = uVar26;
                uVar18 = puVar24[5];
                uVar21 = puVar24[6];
                uVar26 = puVar24[7];
                puVar12[4] = puVar24[4];
                puVar12[5] = uVar18;
                puVar12[6] = uVar21;
                puVar12[7] = uVar26;
                puVar13 = param_3;
              } while ((puVar29 != puVar30) && (puVar12 = puVar12 + -8, puVar25 != param_3));
            }
            else {
              puVar12 = param_3;
              do {
                uVar31 = puVar12[3];
                uVar27 = puVar24[3];
                bVar1 = (uint)((uint)puVar12[2] <= (uint)puVar24[2]) <= uVar27 - uVar31;
                uVar10 = (uint)(uVar27 <= uVar31 && bVar1);
                puVar13 = puVar12 + (uint)(uVar27 > uVar31 || !bVar1) * 8;
                if (uVar10 != 0) {
                  puVar12 = puVar24;
                }
                uVar18 = puVar12[1];
                uVar21 = puVar12[2];
                uVar26 = puVar12[3];
                puVar29 = puVar30 + 8;
                *puVar30 = *puVar12;
                puVar30[1] = uVar18;
                puVar30[2] = uVar21;
                puVar30[3] = uVar26;
                uVar18 = puVar12[5];
                uVar21 = puVar12[6];
                uVar26 = puVar12[7];
                puVar30[4] = puVar12[4];
                puVar30[5] = uVar18;
                puVar30[6] = uVar21;
                puVar30[7] = uVar26;
                if (puVar13 == puVar25) break;
                puVar24 = puVar24 + uVar10 * 8;
                puVar12 = puVar13;
                puVar30 = puVar29;
              } while (puVar24 != puVar8);
            }
            FUN_016dd1aa(puVar29,puVar13,(int)puVar25 - (int)puVar13);
          }
        }
        uVar31 = uVar14 * 2 | 1;
      } while (1 < uVar9);
LAB_0060d230:
      uVar17 = 1;
LAB_0060d234:
      abStack_67[uVar17 + 1] = (byte)uVar22;
      local_170[uVar17] = uVar31;
    }
    if (param_2 <= uVar15) {
      if ((uVar31 & 1) == 0) {
        FUN_00611210(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + 1;
    uVar15 = uVar15 + (uVar33 >> 1);
    uVar31 = uVar33;
  } while( true );
}

