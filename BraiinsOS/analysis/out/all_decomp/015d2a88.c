// FUN_015d2a88 @ 015d2a88 size=1796 calls_out=3 calls_in=2
// strings: 

void FUN_015d2a88(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint uVar31;
  int iVar32;
  undefined4 uVar33;
  ulonglong uVar34;
  uint local_194;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar34 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar34 & 0xffffffff);
  uVar3 = uVar34 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar34 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar34;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar32 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar32) + (param_2 >> iVar32) >> 1;
  }
  uVar17 = 0;
  uVar22 = 0;
  uVar31 = 1;
  do {
    uVar25 = 1;
    local_194 = 0;
    if (uVar17 < param_2) {
      uVar25 = param_2 - uVar17;
      iVar32 = param_1 + uVar17 * 0x18;
      if (uVar25 < uVar5) {
LAB_015d2b98:
        if (param_5 == 0) {
          if (uVar5 <= uVar25) {
            uVar25 = uVar5;
          }
          uVar25 = uVar25 << 1;
        }
        else {
          if (0x1f < uVar25) {
            uVar25 = 0x20;
          }
          FUN_015d318c(iVar32,uVar25,param_3,param_4,0,0);
          uVar25 = uVar25 << 1 | 1;
        }
      }
      else {
        if (uVar25 < 2) {
          uVar20 = uVar25;
        }
        else {
          uVar13 = *(uint *)(iVar32 + 0x20);
          uVar7 = *(uint *)(iVar32 + 0xc);
          uVar12 = *(uint *)(iVar32 + 0x24);
          if (uVar7 < uVar12 || uVar12 - uVar7 < (uint)(*(uint *)(iVar32 + 8) <= uVar13)) {
            uVar20 = 2;
            if (uVar25 != 2) {
              puVar14 = (uint *)(param_1 + 0x38 + uVar17 * 0x18);
              uVar11 = uVar13;
              uVar18 = uVar12;
              do {
                uVar6 = *puVar14;
                uVar9 = puVar14[1];
                if (uVar9 <= uVar18 && (uint)(uVar11 <= uVar6) <= uVar9 - uVar18) goto LAB_015d2cd4;
                uVar20 = uVar20 + 1;
                puVar14 = puVar14 + 6;
                uVar11 = uVar6;
                uVar18 = uVar9;
              } while (uVar25 != uVar20);
              goto LAB_015d2cd0;
            }
          }
          else if (uVar25 == 2) {
            uVar20 = 2;
            uVar25 = 1;
LAB_015d2d04:
            iVar32 = param_1 + -0xc + uVar20 * 0x18;
            iVar16 = param_1;
            do {
              uVar25 = uVar25 - 1;
              puVar27 = (undefined4 *)(iVar32 + uVar17 * 0x18);
              uVar28 = *puVar27;
              puVar19 = (undefined4 *)(iVar16 + uVar17 * 0x18);
              uVar21 = *puVar19;
              iVar16 = iVar16 + 0x18;
              uVar23 = puVar27[1];
              uVar33 = puVar27[-1];
              uVar29 = puVar27[-2];
              *puVar19 = puVar27[-3];
              uVar26 = puVar19[1];
              puVar27[-1] = puVar19[2];
              uVar30 = puVar19[3];
              puVar27[-2] = uVar26;
              puVar19[3] = uVar28;
              uVar26 = puVar19[4];
              puVar27[-3] = uVar21;
              puVar19[4] = uVar23;
              uVar21 = puVar19[5];
              uVar23 = puVar27[2];
              puVar19[1] = uVar29;
              puVar19[2] = uVar33;
              *puVar27 = uVar30;
              puVar27[1] = uVar26;
              puVar19[5] = uVar23;
              puVar27[2] = uVar21;
              iVar32 = iVar32 + -0x18;
            } while (uVar25 != 0);
          }
          else {
            uVar20 = 2;
            puVar14 = (uint *)(param_1 + 0x38 + uVar17 * 0x18);
            uVar11 = uVar13;
            uVar18 = uVar12;
            do {
              uVar6 = *puVar14;
              uVar9 = puVar14[1];
              if (uVar18 < uVar9 || uVar9 - uVar18 < (uint)(uVar11 <= uVar6)) goto LAB_015d2cd4;
              uVar20 = uVar20 + 1;
              puVar14 = puVar14 + 6;
              uVar11 = uVar6;
              uVar18 = uVar9;
            } while (uVar25 != uVar20);
LAB_015d2cd0:
            uVar20 = uVar25;
LAB_015d2cd4:
            if (uVar20 < uVar5) goto LAB_015d2b98;
            if (uVar12 <= uVar7 && (uint)(*(uint *)(iVar32 + 8) <= uVar13) <= uVar12 - uVar7) {
              uVar25 = uVar20 >> 1;
              if (uVar25 != 0) goto LAB_015d2d04;
              uVar20 = 1;
            }
          }
        }
        uVar25 = uVar20 << 1 | 1;
      }
      uVar7 = uVar17 - (uVar31 >> 1);
      uVar12 = uVar17 + (uVar25 >> 1);
      uVar13 = uVar12 + uVar17;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar13;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar7,uVar17),uVar7 + uVar17);
      uVar7 = (uint)CARRY4(uVar12,uVar17) * (int)uVar3 +
              uVar13 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)((ulonglong)lVar4 >> 0x20);
      local_194 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar7 != 0) {
        local_194 = LZCOUNT(uVar7);
      }
    }
    if (1 < uVar22) {
      do {
        while( true ) {
          uVar7 = uVar22 - 1;
          if (abStack_6b[uVar22] < local_194) goto LAB_015d3120;
          uVar20 = local_174[uVar7];
          uVar12 = uVar20 >> 1;
          uVar13 = uVar12 + (uVar31 >> 1);
          uVar22 = uVar7;
          if ((uVar13 <= param_4) && (((uVar20 | uVar31) & 1) == 0)) break;
          puVar27 = (undefined4 *)(param_1 + (uVar17 - uVar13) * 0x18);
          if ((uVar20 & 1) == 0) {
            FUN_015d318c(puVar27,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar31 & 1) == 0) {
            FUN_015d318c(puVar27 + uVar12 * 6,uVar31 >> 1,param_3,param_4,
                         LZCOUNT(uVar31 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar11 = uVar31 >> 1;
          if (1 < uVar20 && 1 < uVar31) {
            uVar31 = uVar12;
            if (uVar11 < uVar12) {
              uVar31 = uVar11;
            }
            if (uVar31 <= param_4) {
              puVar19 = puVar27 + uVar12 * 6;
              puVar10 = puVar27;
              if (uVar11 < uVar12) {
                puVar10 = puVar19;
              }
              FUN_016dd1aa(param_3,puVar10,uVar31 * 0x18);
              puVar24 = param_3 + uVar31 * 6;
              puVar10 = param_3;
              if (uVar11 < uVar12) {
                puVar8 = (undefined4 *)(param_1 + -0x18 + uVar17 * 0x18);
                do {
                  uVar31 = puVar19[-3];
                  uVar20 = puVar24[-3];
                  bVar1 = (uint)((uint)puVar19[-4] <= (uint)puVar24[-4]) <= uVar20 - uVar31;
                  uVar12 = (uint)(uVar20 <= uVar31 && bVar1);
                  uVar31 = (uint)(uVar20 > uVar31 || !bVar1);
                  puVar15 = puVar24 + -6;
                  if (uVar12 != 0) {
                    puVar15 = puVar19 + -6;
                  }
                  uVar21 = puVar15[1];
                  uVar23 = puVar15[2];
                  uVar26 = puVar15[3];
                  uVar28 = puVar15[4];
                  uVar29 = puVar15[5];
                  *puVar8 = *puVar15;
                  puVar8[1] = uVar21;
                  puVar8[2] = uVar23;
                  puVar8[3] = uVar26;
                  puVar8[4] = uVar28;
                  puVar8[5] = uVar29;
                  puVar19 = puVar19 + -6 + (uVar31 | uVar31 << 1) * 2;
                  puVar24 = puVar24 + -6 + (uVar12 | uVar12 << 1) * 2;
                } while ((puVar19 != puVar27) && (puVar8 = puVar8 + -6, puVar24 != param_3));
                puVar15 = puVar19;
              }
              else {
                do {
                  uVar31 = puVar10[3];
                  uVar12 = puVar19[3];
                  bVar1 = uVar12 - uVar31 < (uint)((uint)puVar10[2] <= (uint)puVar19[2]);
                  uVar20 = (uint)(uVar31 < uVar12 || bVar1);
                  uVar31 = (uint)(uVar31 >= uVar12 && !bVar1);
                  puVar15 = puVar27 + 6;
                  puVar8 = puVar10;
                  if (uVar31 != 0) {
                    puVar8 = puVar19;
                  }
                  uVar21 = puVar8[1];
                  uVar23 = puVar8[2];
                  uVar26 = puVar8[3];
                  uVar28 = puVar8[4];
                  uVar29 = puVar8[5];
                  *puVar27 = *puVar8;
                  puVar27[1] = uVar21;
                  puVar27[2] = uVar23;
                  puVar27[3] = uVar26;
                  puVar27[4] = uVar28;
                  puVar27[5] = uVar29;
                  puVar8 = (undefined4 *)(uVar20 | uVar20 << 1);
                  puVar10 = puVar10 + (int)puVar8 * 2;
                  if (puVar10 != puVar24) {
                    puVar19 = puVar19 + (uVar31 | uVar31 << 1) * 2;
                    puVar8 = (undefined4 *)(param_1 + uVar17 * 0x18);
                  }
                  puVar27 = puVar15;
                } while (puVar10 != puVar24 && puVar19 != puVar8);
              }
              FUN_016dd1aa(puVar15,puVar10,(int)puVar24 - (int)puVar10);
            }
          }
          uVar31 = uVar13 * 2 | 1;
          if (uVar7 < 2) goto LAB_015d3118;
        }
        uVar31 = uVar13 * 2;
      } while (1 < uVar7);
LAB_015d3118:
      uVar22 = 1;
    }
LAB_015d3120:
    abStack_6b[uVar22 + 1] = (byte)local_194;
    local_174[uVar22] = uVar31;
    if (param_2 <= uVar17) {
      if ((uVar31 & 1) == 0) {
        FUN_015d318c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar22 = uVar22 + 1;
    uVar17 = uVar17 + (uVar25 >> 1);
    uVar31 = uVar25;
  } while( true );
}

