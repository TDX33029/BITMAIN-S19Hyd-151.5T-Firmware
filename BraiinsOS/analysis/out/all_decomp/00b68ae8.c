// FUN_00b68ae8 @ 00b68ae8 size=1516 calls_out=3 calls_in=2
// strings: 

void FUN_00b68ae8(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar34 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar34 & 0xffffffff);
  uVar5 = uVar34 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar34 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar34;
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
    iVar23 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar23) + (param_2 >> iVar23) >> 1;
  }
  uVar18 = 0;
  uVar16 = 0;
  uVar27 = 1;
  do {
    uVar29 = 0;
    uVar22 = 1;
    puVar7 = (undefined4 *)(param_1 + uVar18 * 0x10);
    if (uVar18 < param_2) {
      uVar22 = param_2 - uVar18;
      if (uVar22 < uVar6) {
LAB_00b68bdc:
        if (param_5 == 0) {
          if (uVar6 <= uVar22) {
            uVar22 = uVar6;
          }
          uVar22 = uVar22 << 1;
        }
        else {
          if (0x1f < uVar22) {
            uVar22 = 0x20;
          }
          FUN_00b690d4(puVar7,uVar22,param_3,param_4,0,0);
          uVar22 = uVar22 << 1 | 1;
        }
      }
      else {
        if (uVar22 < 2) {
          uVar9 = uVar22;
        }
        else {
          uVar31 = *(undefined8 *)(puVar7 + 6);
          uVar8 = puVar7[3] & 0x7fffffff;
          uVar29 = (uint)((ulonglong)uVar31 >> 0x20) & 0x7fffffff;
          if (uVar29 < uVar8 || uVar8 - uVar29 < (uint)((uint)uVar31 <= (uint)puVar7[2])) {
            uVar9 = 2;
            if (uVar22 != 2) {
              puVar19 = (undefined8 *)(param_1 + 0x28 + uVar18 * 0x10);
              uVar32 = uVar31;
              do {
                uVar33 = *puVar19;
                uVar14 = (uint)((ulonglong)uVar32 >> 0x20) & 0x7fffffff;
                uVar28 = (uint)((ulonglong)uVar33 >> 0x20) & 0x7fffffff;
                if (uVar14 <= uVar28 && (uint)((uint)uVar33 <= (uint)uVar32) <= uVar14 - uVar28)
                goto LAB_00b68d08;
                uVar9 = uVar9 + 1;
                puVar19 = puVar19 + 2;
                uVar32 = uVar33;
              } while (uVar22 != uVar9);
              goto LAB_00b68d04;
            }
          }
          else if (uVar22 == 2) {
            uVar9 = 2;
            uVar22 = 1;
LAB_00b68d30:
            iVar13 = param_1 + uVar9 * 0x10;
            iVar23 = param_1;
            do {
              iVar15 = iVar13 + uVar18 * 0x10;
              puVar21 = (undefined4 *)(iVar23 + uVar18 * 0x10);
              uVar30 = *puVar21;
              iVar13 = iVar13 + -0x10;
              uVar25 = *(undefined4 *)(iVar15 + -4);
              uVar17 = *(undefined4 *)(iVar15 + -8);
              uVar10 = *(undefined4 *)(iVar15 + -0xc);
              iVar23 = iVar23 + 0x10;
              uVar22 = uVar22 - 1;
              uVar31 = *(undefined8 *)(puVar21 + 2);
              *puVar21 = *(undefined4 *)(iVar15 + -0x10);
              puVar21[1] = uVar10;
              puVar21[2] = uVar17;
              puVar21[3] = uVar25;
              *(undefined4 *)(iVar15 + -0x10) = uVar30;
              *(undefined8 *)(iVar15 + -8) = uVar31;
            } while (uVar22 != 0);
          }
          else {
            uVar9 = 2;
            puVar19 = (undefined8 *)(param_1 + 0x28 + uVar18 * 0x10);
            uVar32 = uVar31;
            do {
              uVar33 = *puVar19;
              uVar14 = (uint)((ulonglong)uVar32 >> 0x20) & 0x7fffffff;
              uVar28 = (uint)((ulonglong)uVar33 >> 0x20) & 0x7fffffff;
              if (uVar28 < uVar14 || uVar14 - uVar28 < (uint)((uint)uVar33 <= (uint)uVar32))
              goto LAB_00b68d08;
              uVar9 = uVar9 + 1;
              puVar19 = puVar19 + 2;
              uVar32 = uVar33;
            } while (uVar22 != uVar9);
LAB_00b68d04:
            uVar9 = uVar22;
LAB_00b68d08:
            if (uVar9 < uVar6) goto LAB_00b68bdc;
            if (uVar8 <= uVar29 && (uint)((uint)uVar31 <= (uint)puVar7[2]) <= uVar8 - uVar29) {
              uVar22 = uVar9 >> 1;
              if (uVar22 != 0) goto LAB_00b68d30;
              uVar9 = 1;
            }
          }
        }
        uVar22 = uVar9 << 1 | 1;
      }
      uVar8 = uVar18 - (uVar27 >> 1);
      uVar9 = uVar8 + uVar18;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar14 = (uVar22 >> 1) + uVar18 * 2;
      lVar3 = (ulonglong)uVar14 * (uVar5 & 0xffffffff);
      uVar29 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar8 = iVar4 * uVar14 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar18) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar8 != 0) {
        uVar29 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar16) {
      do {
        while( true ) {
          uVar8 = uVar16 - 1;
          if (abStack_67[uVar16] < uVar29) goto LAB_00b69074;
          uVar14 = local_170[uVar8];
          uVar9 = uVar14 >> 1;
          uVar28 = uVar9 + (uVar27 >> 1);
          uVar16 = uVar8;
          if ((param_4 < uVar28) || (((uVar14 | uVar27) & 1) != 0)) break;
          uVar27 = uVar28 * 2;
          if (uVar8 < 2) goto LAB_00b69068;
        }
        puVar21 = (undefined4 *)(param_1 + (uVar18 - uVar28) * 0x10);
        if ((uVar14 & 1) == 0) {
          FUN_00b690d4(puVar21,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar27 & 1) == 0) {
          FUN_00b690d4(puVar21 + uVar9 * 4,uVar27 >> 1,param_3,param_4,
                       LZCOUNT(uVar27 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar26 = uVar27 >> 1;
        if (1 < uVar14 && 1 < uVar27) {
          uVar27 = uVar9;
          if (uVar26 < uVar9) {
            uVar27 = uVar26;
          }
          if (uVar27 <= param_4) {
            puVar24 = puVar21 + uVar9 * 4;
            puVar11 = puVar21;
            if (uVar26 < uVar9) {
              puVar11 = puVar24;
            }
            FUN_016dd1aa(param_3,puVar11,uVar27 << 4);
            puVar11 = param_3 + uVar27 * 4;
            if (uVar26 < uVar9) {
              puVar12 = (undefined4 *)(param_1 + -0x10 + uVar18 * 0x10);
              puVar20 = puVar24;
              do {
                uVar27 = puVar11[-1] & 0x7fffffff;
                uVar14 = puVar20[-1] & 0x7fffffff;
                bVar1 = (uint)((uint)puVar11[-2] <= (uint)puVar20[-2]) <= uVar14 - uVar27;
                uVar9 = (uint)(uVar14 <= uVar27 && bVar1);
                puVar24 = puVar11 + -4;
                puVar11 = puVar24 + uVar9 * 4;
                if (uVar9 != 0) {
                  puVar24 = puVar20 + -4;
                }
                puVar20 = puVar20 + -4 + (uint)(uVar14 > uVar27 || !bVar1) * 4;
                uVar17 = puVar24[1];
                uVar10 = puVar24[2];
                uVar25 = puVar24[3];
                *puVar12 = *puVar24;
                puVar12[1] = uVar17;
                puVar12[2] = uVar10;
                puVar12[3] = uVar25;
              } while ((puVar20 != puVar21) && (puVar12 = puVar12 + -4, puVar11 != param_3));
              puVar21 = param_3;
            }
            else {
              puVar12 = param_3;
              puVar20 = puVar21;
              do {
                uVar27 = puVar24[3] & 0x7fffffff;
                uVar9 = puVar12[3] & 0x7fffffff;
                bVar1 = (uint)((uint)puVar24[2] <= (uint)puVar12[2]) <= uVar9 - uVar27;
                uVar14 = (uint)(uVar9 <= uVar27 && bVar1);
                puVar21 = puVar12 + (uint)(uVar9 > uVar27 || !bVar1) * 4;
                if (uVar14 != 0) {
                  puVar12 = puVar24;
                }
                uVar25 = puVar12[1];
                uVar17 = puVar12[2];
                uVar10 = puVar12[3];
                *puVar20 = *puVar12;
                puVar20[1] = uVar25;
                puVar20[2] = uVar17;
                puVar20[3] = uVar10;
                puVar20 = puVar20 + 4;
                if (puVar21 == puVar11) break;
                puVar24 = puVar24 + uVar14 * 4;
                puVar12 = puVar21;
              } while (puVar24 != puVar7);
            }
            FUN_016dd1aa(puVar20,puVar21,(int)puVar11 - (int)puVar21);
          }
        }
        uVar27 = uVar28 * 2 | 1;
      } while (1 < uVar8);
LAB_00b69068:
      uVar16 = 1;
    }
LAB_00b69074:
    abStack_67[uVar16 + 1] = (byte)uVar29;
    local_170[uVar16] = uVar27;
    if (param_2 <= uVar18) {
      if ((uVar27 & 1) == 0) {
        FUN_00b690d4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar18 = uVar18 + (uVar22 >> 1);
    uVar16 = uVar16 + 1;
    uVar27 = uVar22;
  } while( true );
}

