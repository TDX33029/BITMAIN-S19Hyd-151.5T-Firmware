// FUN_0198d694 @ 0198d694 size=1768 calls_out=3 calls_in=2
// strings: 

void FUN_0198d694(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
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
  
  uVar34 = FUN_01bf0ff0(0,0x40000000,param_2,0);
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
  uVar21 = 0;
  uVar31 = 1;
  do {
    uVar24 = 1;
    local_194 = 0;
    if (uVar17 < param_2) {
      uVar24 = param_2 - uVar17;
      iVar32 = param_1 + uVar17 * 0x18;
      if (uVar24 < uVar5) {
LAB_0198d7a4:
        if (param_5 == 0) {
          if (uVar5 <= uVar24) {
            uVar24 = uVar5;
          }
          uVar24 = uVar24 << 1;
        }
        else {
          if (0x1f < uVar24) {
            uVar24 = 0x20;
          }
          FUN_0198dd7c(iVar32,uVar24,param_3,param_4,0,0);
          uVar24 = uVar24 << 1 | 1;
        }
      }
      else {
        if (uVar24 < 2) {
          uVar26 = uVar24;
        }
        else {
          uVar13 = *(uint *)(iVar32 + 0x20);
          uVar7 = *(uint *)(iVar32 + 0xc);
          uVar12 = *(uint *)(iVar32 + 0x24);
          if (uVar7 < uVar12 || uVar12 - uVar7 < (uint)(*(uint *)(iVar32 + 8) <= uVar13)) {
            uVar26 = 2;
            if (uVar24 != 2) {
              puVar14 = (uint *)(param_1 + 0x38 + uVar17 * 0x18);
              uVar11 = uVar13;
              uVar18 = uVar12;
              do {
                uVar6 = *puVar14;
                uVar9 = puVar14[1];
                if (uVar9 <= uVar18 && (uint)(uVar11 <= uVar6) <= uVar9 - uVar18) goto LAB_0198d8e0;
                uVar26 = uVar26 + 1;
                puVar14 = puVar14 + 6;
                uVar11 = uVar6;
                uVar18 = uVar9;
              } while (uVar24 != uVar26);
              goto LAB_0198d8dc;
            }
          }
          else if (uVar24 == 2) {
            uVar26 = 2;
            uVar24 = 1;
LAB_0198d910:
            iVar32 = param_1 + -0xc + uVar26 * 0x18;
            iVar16 = param_1;
            do {
              uVar24 = uVar24 - 1;
              puVar27 = (undefined4 *)(iVar32 + uVar17 * 0x18);
              uVar28 = *puVar27;
              puVar19 = (undefined4 *)(iVar16 + uVar17 * 0x18);
              uVar20 = *puVar19;
              iVar16 = iVar16 + 0x18;
              uVar22 = puVar27[1];
              uVar33 = puVar27[-1];
              uVar29 = puVar27[-2];
              *puVar19 = puVar27[-3];
              uVar25 = puVar19[1];
              puVar27[-1] = puVar19[2];
              uVar30 = puVar19[3];
              puVar27[-2] = uVar25;
              puVar19[3] = uVar28;
              uVar25 = puVar19[4];
              puVar27[-3] = uVar20;
              puVar19[4] = uVar22;
              uVar20 = puVar19[5];
              uVar22 = puVar27[2];
              puVar19[1] = uVar29;
              puVar19[2] = uVar33;
              *puVar27 = uVar30;
              puVar27[1] = uVar25;
              puVar19[5] = uVar22;
              puVar27[2] = uVar20;
              iVar32 = iVar32 + -0x18;
            } while (uVar24 != 0);
          }
          else {
            uVar26 = 2;
            puVar14 = (uint *)(param_1 + 0x38 + uVar17 * 0x18);
            uVar11 = uVar13;
            uVar18 = uVar12;
            do {
              uVar6 = *puVar14;
              uVar9 = puVar14[1];
              if (uVar18 < uVar9 || uVar9 - uVar18 < (uint)(uVar11 <= uVar6)) goto LAB_0198d8e0;
              uVar26 = uVar26 + 1;
              puVar14 = puVar14 + 6;
              uVar11 = uVar6;
              uVar18 = uVar9;
            } while (uVar24 != uVar26);
LAB_0198d8dc:
            uVar26 = uVar24;
LAB_0198d8e0:
            if (uVar26 < uVar5) goto LAB_0198d7a4;
            if (uVar12 <= uVar7 && (uint)(*(uint *)(iVar32 + 8) <= uVar13) <= uVar12 - uVar7) {
              uVar24 = uVar26 >> 1;
              if (uVar24 != 0) goto LAB_0198d910;
              uVar26 = 1;
            }
          }
        }
        uVar24 = uVar26 << 1 | 1;
      }
      uVar7 = uVar17 - (uVar31 >> 1);
      uVar12 = uVar17 + (uVar24 >> 1);
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
    if (1 < uVar21) {
      do {
        uVar7 = uVar21 - 1;
        if (abStack_6b[uVar21] < local_194) goto LAB_0198dd10;
        uVar13 = local_174[uVar7];
        uVar21 = uVar13 >> 1;
        uVar12 = uVar21 + (uVar31 >> 1);
        if ((param_4 < uVar12) || (((uVar13 | uVar31) & 1) != 0)) {
          puVar27 = (undefined4 *)(param_1 + (uVar17 - uVar12) * 0x18);
          if ((uVar13 & 1) == 0) {
            FUN_0198dd7c(puVar27,uVar21,param_3,param_4,LZCOUNT(uVar21 | 1) << 1 ^ 0x3e,0);
          }
          uVar26 = uVar31 >> 1;
          if ((uVar31 & 1) == 0) {
            FUN_0198dd7c(puVar27 + uVar21 * 6,uVar26,param_3,param_4,LZCOUNT(uVar26 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar13 && 1 < uVar31) {
            uVar31 = uVar21;
            if (uVar26 < uVar21) {
              uVar31 = uVar26;
            }
            if (uVar31 <= param_4) {
              puVar19 = puVar27 + uVar21 * 6;
              puVar10 = puVar27;
              if (uVar26 < uVar21) {
                puVar10 = puVar19;
              }
              FUN_01bed4e2(param_3,puVar10,uVar31 * 0x18);
              puVar23 = param_3 + uVar31 * 6;
              puVar10 = param_3;
              if (uVar26 < uVar21) {
                puVar8 = (undefined4 *)(param_1 + -0x18 + uVar17 * 0x18);
                do {
                  uVar31 = puVar19[-3];
                  uVar13 = puVar23[-3];
                  bVar1 = (uint)((uint)puVar19[-4] <= (uint)puVar23[-4]) <= uVar13 - uVar31;
                  uVar21 = (uint)(uVar13 <= uVar31 && bVar1);
                  uVar31 = (uint)(uVar13 > uVar31 || !bVar1);
                  puVar15 = puVar23 + -6;
                  if (uVar21 != 0) {
                    puVar15 = puVar19 + -6;
                  }
                  uVar20 = puVar15[1];
                  uVar22 = puVar15[2];
                  uVar25 = puVar15[3];
                  uVar28 = puVar15[4];
                  uVar29 = puVar15[5];
                  *puVar8 = *puVar15;
                  puVar8[1] = uVar20;
                  puVar8[2] = uVar22;
                  puVar8[3] = uVar25;
                  puVar8[4] = uVar28;
                  puVar8[5] = uVar29;
                  puVar19 = puVar19 + -6 + (uVar31 | uVar31 << 1) * 2;
                  puVar23 = puVar23 + -6 + (uVar21 | uVar21 << 1) * 2;
                } while ((puVar19 != puVar27) && (puVar8 = puVar8 + -6, puVar23 != param_3));
                puVar15 = puVar19;
              }
              else {
                do {
                  uVar31 = puVar10[3];
                  uVar21 = puVar19[3];
                  bVar1 = uVar21 - uVar31 < (uint)((uint)puVar10[2] <= (uint)puVar19[2]);
                  uVar13 = (uint)(uVar31 < uVar21 || bVar1);
                  uVar31 = (uint)(uVar31 >= uVar21 && !bVar1);
                  puVar15 = puVar27 + 6;
                  puVar8 = puVar10;
                  if (uVar31 != 0) {
                    puVar8 = puVar19;
                  }
                  uVar20 = puVar8[1];
                  uVar22 = puVar8[2];
                  uVar25 = puVar8[3];
                  uVar28 = puVar8[4];
                  uVar29 = puVar8[5];
                  *puVar27 = *puVar8;
                  puVar27[1] = uVar20;
                  puVar27[2] = uVar22;
                  puVar27[3] = uVar25;
                  puVar27[4] = uVar28;
                  puVar27[5] = uVar29;
                  puVar8 = (undefined4 *)(uVar13 | uVar13 << 1);
                  puVar10 = puVar10 + (int)puVar8 * 2;
                  if (puVar10 != puVar23) {
                    puVar19 = puVar19 + (uVar31 | uVar31 << 1) * 2;
                    puVar8 = (undefined4 *)(param_1 + uVar17 * 0x18);
                  }
                  puVar27 = puVar15;
                } while (puVar10 != puVar23 && puVar19 != puVar8);
              }
              FUN_01bed4e2(puVar15,puVar10,(int)puVar23 - (int)puVar10);
            }
          }
          uVar31 = uVar12 * 2 | 1;
        }
        else {
          uVar31 = uVar12 * 2;
        }
        uVar21 = uVar7;
      } while (1 < uVar7);
      uVar21 = 1;
    }
LAB_0198dd10:
    abStack_6b[uVar21 + 1] = (byte)local_194;
    local_174[uVar21] = uVar31;
    if (param_2 <= uVar17) {
      if ((uVar31 & 1) == 0) {
        FUN_0198dd7c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar21 = uVar21 + 1;
    uVar17 = uVar17 + (uVar24 >> 1);
    uVar31 = uVar24;
  } while( true );
}

