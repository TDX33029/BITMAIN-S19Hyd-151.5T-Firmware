// FUN_00b8206c @ 00b8206c size=1560 calls_out=3 calls_in=2
// strings: 

void FUN_00b8206c(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar32 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar32 & 0xffffffff);
  uVar5 = uVar32 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar32 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar32;
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
  uVar17 = 0;
  uVar15 = 0;
  uVar25 = 1;
  do {
    uVar12 = 0;
    uVar21 = 1;
    puVar8 = (undefined4 *)(param_1 + uVar17 * 0x10);
    if (uVar17 < param_2) {
      uVar21 = param_2 - uVar17;
      if (uVar21 < uVar6) {
LAB_00b82170:
        if (param_5 == 0) {
          if (uVar6 <= uVar21) {
            uVar21 = uVar6;
          }
          uVar21 = uVar21 << 1;
        }
        else {
          if (0x1f < uVar21) {
            uVar21 = 0x20;
          }
          FUN_00b82684(puVar8,uVar21,param_3,param_4,0,0);
          uVar21 = uVar21 << 1 | 1;
        }
      }
      else {
        if (uVar21 < 2) {
          uVar13 = uVar21;
        }
        else {
          uVar29 = *(undefined8 *)(puVar8 + 6);
          uVar9 = puVar8[3] & 0x7fffffff;
          uVar12 = (uint)((ulonglong)uVar29 >> 0x20) & 0x7fffffff;
          if (uVar12 < uVar9 || uVar9 - uVar12 < (uint)((uint)uVar29 <= (uint)puVar8[2])) {
            uVar13 = 2;
            if (uVar21 != 2) {
              puVar18 = (undefined8 *)(param_1 + 0x28 + uVar17 * 0x10);
              uVar13 = 2;
              uVar30 = uVar29;
              do {
                uVar31 = *puVar18;
                uVar24 = (uint)((ulonglong)uVar30 >> 0x20) & 0x7fffffff;
                uVar27 = (uint)((ulonglong)uVar31 >> 0x20) & 0x7fffffff;
                if (uVar24 <= uVar27 && (uint)((uint)uVar31 <= (uint)uVar30) <= uVar24 - uVar27)
                goto LAB_00b822a0;
                uVar13 = uVar13 + 1;
                puVar18 = puVar18 + 2;
                uVar30 = uVar31;
              } while (uVar21 != uVar13);
              goto LAB_00b8229c;
            }
          }
          else if (uVar21 == 2) {
            uVar13 = 2;
            uVar21 = 1;
LAB_00b822c8:
            puVar20 = (undefined4 *)(param_1 + 8 + uVar17 * 0x10);
            puVar14 = (undefined4 *)(param_1 + -8 + uVar13 * 0x10 + uVar17 * 0x10);
            do {
              uVar10 = puVar20[-2];
              uVar21 = uVar21 - 1;
              puVar20[-2] = puVar14[-2];
              puVar14[-2] = uVar10;
              uVar10 = puVar14[-1];
              puVar14[-1] = puVar20[-1];
              puVar20[-1] = uVar10;
              uVar10 = *puVar20;
              *puVar20 = *puVar14;
              *puVar14 = uVar10;
              uVar10 = puVar14[1];
              puVar14[1] = puVar20[1];
              puVar14 = puVar14 + -4;
              puVar20[1] = uVar10;
              puVar20 = puVar20 + 4;
            } while (uVar21 != 0);
          }
          else {
            puVar18 = (undefined8 *)(param_1 + 0x28 + uVar17 * 0x10);
            uVar13 = 2;
            uVar30 = uVar29;
            do {
              uVar31 = *puVar18;
              uVar24 = (uint)((ulonglong)uVar30 >> 0x20) & 0x7fffffff;
              uVar27 = (uint)((ulonglong)uVar31 >> 0x20) & 0x7fffffff;
              if (uVar27 < uVar24 || uVar24 - uVar27 < (uint)((uint)uVar31 <= (uint)uVar30))
              goto LAB_00b822a0;
              uVar13 = uVar13 + 1;
              puVar18 = puVar18 + 2;
              uVar30 = uVar31;
            } while (uVar21 != uVar13);
LAB_00b8229c:
            uVar13 = uVar21;
LAB_00b822a0:
            if (uVar13 < uVar6) goto LAB_00b82170;
            if (uVar9 <= uVar12 && (uint)((uint)uVar29 <= (uint)puVar8[2]) <= uVar9 - uVar12) {
              uVar21 = uVar13 >> 1;
              if (uVar21 != 0) goto LAB_00b822c8;
              uVar13 = 1;
            }
          }
        }
        uVar21 = uVar13 << 1 | 1;
      }
      uVar12 = uVar17 - (uVar25 >> 1);
      uVar9 = uVar12 + uVar17;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar13 = (uVar21 >> 1) + uVar17 * 2;
      lVar3 = (ulonglong)uVar13 * (uVar5 & 0xffffffff);
      uVar9 = iVar4 * uVar13 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar12,uVar17) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      if (uVar9 != 0) {
        uVar12 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar9 = uVar15 - 1;
          if (abStack_67[uVar15] < uVar12) goto LAB_00b82620;
          uVar24 = local_170[uVar9];
          uVar13 = uVar24 >> 1;
          uVar27 = uVar13 + (uVar25 >> 1);
          uVar15 = uVar9;
          if ((param_4 < uVar27) || (((uVar24 | uVar25) & 1) != 0)) break;
          uVar25 = uVar27 * 2;
          if (uVar9 < 2) goto LAB_00b82614;
        }
        puVar20 = (undefined4 *)(param_1 + (uVar17 - uVar27) * 0x10);
        if ((uVar24 & 1) == 0) {
          FUN_00b82684(puVar20,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar25 & 1) == 0) {
          FUN_00b82684(puVar20 + uVar13 * 4,uVar25 >> 1,param_3,param_4,
                       LZCOUNT(uVar25 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar26 = uVar25 >> 1;
        if (1 < uVar24 && 1 < uVar25) {
          uVar25 = uVar13;
          if (uVar26 < uVar13) {
            uVar25 = uVar26;
          }
          if (uVar25 <= param_4) {
            puVar22 = puVar20 + uVar13 * 4;
            puVar14 = puVar20;
            if (uVar26 < uVar13) {
              puVar14 = puVar22;
            }
            FUN_016dd1aa(param_3,puVar14,uVar25 << 4);
            puVar28 = param_3 + uVar25 * 4;
            puVar14 = param_3;
            if (uVar26 < uVar13) {
              puVar14 = (undefined4 *)(param_1 + -0x10 + uVar17 * 0x10);
              puVar19 = puVar22;
              do {
                uVar25 = puVar28[-1] & 0x7fffffff;
                uVar24 = puVar19[-1] & 0x7fffffff;
                bVar1 = (uint)((uint)puVar28[-2] <= (uint)puVar19[-2]) <= uVar24 - uVar25;
                uVar13 = (uint)(uVar24 <= uVar25 && bVar1);
                puVar22 = puVar28 + -4;
                puVar28 = puVar22 + uVar13 * 4;
                if (uVar13 != 0) {
                  puVar22 = puVar19 + -4;
                }
                puVar19 = puVar19 + -4 + (uint)(uVar24 > uVar25 || !bVar1) * 4;
                uVar16 = puVar22[1];
                uVar10 = puVar22[2];
                uVar23 = puVar22[3];
                *puVar14 = *puVar22;
                puVar14[1] = uVar16;
                puVar14[2] = uVar10;
                puVar14[3] = uVar23;
              } while ((puVar19 != puVar20) && (puVar14 = puVar14 + -4, puVar28 != param_3));
              puVar11 = param_3;
            }
            else {
              do {
                uVar25 = puVar22[3] & 0x7fffffff;
                uVar13 = puVar14[3] & 0x7fffffff;
                bVar1 = (uint)((uint)puVar22[2] <= (uint)puVar14[2]) <= uVar13 - uVar25;
                uVar24 = (uint)(uVar13 <= uVar25 && bVar1);
                puVar11 = puVar14 + (uint)(uVar13 > uVar25 || !bVar1) * 4;
                if (uVar24 != 0) {
                  puVar14 = puVar22;
                }
                uVar23 = puVar14[1];
                uVar16 = puVar14[2];
                uVar10 = puVar14[3];
                *puVar20 = *puVar14;
                puVar20[1] = uVar23;
                puVar20[2] = uVar16;
                puVar20[3] = uVar10;
                puVar19 = puVar20 + 4;
              } while ((puVar11 != puVar28) &&
                      (puVar22 = puVar22 + uVar24 * 4, puVar20 = puVar19, puVar14 = puVar11,
                      puVar22 != puVar8));
            }
            FUN_016dd1aa(puVar19,puVar11,(int)puVar28 - (int)puVar11);
          }
        }
        uVar25 = uVar27 * 2 | 1;
      } while (1 < uVar9);
LAB_00b82614:
      uVar15 = 1;
    }
LAB_00b82620:
    abStack_67[uVar15 + 1] = (byte)uVar12;
    local_170[uVar15] = uVar25;
    if (param_2 <= uVar17) {
      if ((uVar25 & 1) == 0) {
        FUN_00b82684(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + (uVar21 >> 1);
    uVar15 = uVar15 + 1;
    uVar25 = uVar21;
  } while( true );
}

