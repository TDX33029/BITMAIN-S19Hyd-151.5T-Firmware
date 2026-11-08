// FUN_015e24d0 @ 015e24d0 size=1648 calls_out=3 calls_in=2
// strings: 

void FUN_015e24d0(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 *puVar33;
  undefined4 uVar34;
  ulonglong uVar35;
  uint local_18c;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar35 = FUN_01846088(0,0x40000000,param_2,0);
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
  uVar27 = 0;
  uVar16 = 0;
  uVar19 = 1;
  do {
    uVar15 = 0;
    puVar33 = (undefined4 *)(param_1 + uVar27 * 0x20);
    local_18c = 1;
    if (uVar27 < param_2) {
      local_18c = param_2 - uVar27;
      if (local_18c < uVar6) {
LAB_015e25d8:
        if (param_5 == 0) {
          if (uVar6 <= local_18c) {
            local_18c = uVar6;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_015e2b40(puVar33,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar14 = local_18c;
        }
        else {
          uVar10 = puVar33[10];
          uVar15 = puVar33[3];
          uVar9 = puVar33[0xb];
          if (uVar15 < uVar9 || uVar9 - uVar15 < (uint)((uint)puVar33[2] <= uVar10)) {
            uVar14 = 2;
            if (local_18c != 2) {
              uVar14 = 2;
              puVar18 = (uint *)(param_1 + 0x48 + uVar27 * 0x20);
              uVar26 = uVar9;
              uVar21 = uVar10;
              do {
                uVar8 = *puVar18;
                uVar11 = puVar18[1];
                if (uVar11 <= uVar26 && (uint)(uVar21 <= uVar8) <= uVar11 - uVar26)
                goto LAB_015e2704;
                uVar14 = uVar14 + 1;
                puVar18 = puVar18 + 8;
                uVar26 = uVar11;
                uVar21 = uVar8;
              } while (local_18c != uVar14);
              goto LAB_015e2700;
            }
          }
          else if (local_18c == 2) {
            uVar14 = 2;
            uVar15 = 1;
LAB_015e273c:
            iVar7 = param_1;
            iVar22 = param_1 + -0x10 + uVar14 * 0x20;
            do {
              uVar15 = uVar15 - 1;
              puVar30 = (undefined4 *)(iVar22 + uVar27 * 0x20);
              uVar23 = *puVar30;
              puVar24 = (undefined4 *)(iVar7 + uVar27 * 0x20);
              uVar17 = *puVar24;
              uVar25 = puVar30[-3];
              uVar31 = puVar30[-2];
              *puVar24 = puVar30[-4];
              uVar34 = puVar24[2];
              puVar30[-3] = puVar24[1];
              puVar30[-4] = uVar17;
              uVar28 = puVar24[4];
              puVar24[1] = uVar25;
              puVar24[4] = uVar23;
              uVar17 = puVar24[5];
              puVar24[5] = puVar30[1];
              puVar30[1] = uVar17;
              uVar17 = puVar24[6];
              puVar24[6] = puVar30[2];
              puVar30[2] = uVar17;
              uVar25 = puVar30[-1];
              uVar32 = puVar24[3];
              uVar17 = puVar24[7];
              uVar23 = puVar30[3];
              puVar24[2] = uVar31;
              puVar30[-2] = uVar34;
              puVar24[3] = uVar25;
              puVar30[-1] = uVar32;
              *puVar30 = uVar28;
              puVar24[7] = uVar23;
              puVar30[3] = uVar17;
              iVar7 = iVar7 + 0x20;
              iVar22 = iVar22 + -0x20;
            } while (uVar15 != 0);
          }
          else {
            uVar14 = 2;
            puVar18 = (uint *)(param_1 + 0x48 + uVar27 * 0x20);
            uVar26 = uVar9;
            uVar21 = uVar10;
            do {
              uVar8 = *puVar18;
              uVar11 = puVar18[1];
              if (uVar26 < uVar11 || uVar11 - uVar26 < (uint)(uVar21 <= uVar8)) goto LAB_015e2704;
              uVar14 = uVar14 + 1;
              puVar18 = puVar18 + 8;
              uVar26 = uVar11;
              uVar21 = uVar8;
            } while (local_18c != uVar14);
LAB_015e2700:
            uVar14 = local_18c;
LAB_015e2704:
            if (uVar14 < uVar6) goto LAB_015e25d8;
            if (uVar9 <= uVar15 && (uint)((uint)puVar33[2] <= uVar10) <= uVar9 - uVar15) {
              uVar15 = uVar14 >> 1;
              if (uVar15 != 0) goto LAB_015e273c;
              uVar14 = 1;
            }
          }
        }
        local_18c = uVar14 << 1 | 1;
      }
      uVar9 = uVar27 - (uVar19 >> 1);
      uVar10 = uVar9 + uVar27;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar10;
      uVar14 = (local_18c >> 1) + uVar27 * 2;
      lVar3 = (ulonglong)uVar14 * (uVar5 & 0xffffffff);
      uVar15 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar9 = iVar4 * uVar14 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar27) * (int)uVar5 +
              uVar10 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar9 != 0) {
        uVar15 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar16) {
      do {
        while( true ) {
          uVar9 = uVar16 - 1;
          if (abStack_6b[uVar16] < uVar15) goto LAB_015e2adc;
          uVar26 = local_174[uVar9];
          uVar10 = uVar26 >> 1;
          uVar14 = uVar10 + (uVar19 >> 1);
          uVar16 = uVar9;
          if ((param_4 < uVar14) || (((uVar26 | uVar19) & 1) != 0)) break;
          uVar19 = uVar14 * 2;
          if (uVar9 < 2) goto LAB_015e2ad4;
        }
        puVar30 = (undefined4 *)(param_1 + (uVar27 - uVar14) * 0x20);
        if ((uVar26 & 1) == 0) {
          FUN_015e2b40(puVar30,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar19 & 1) == 0) {
          FUN_015e2b40(puVar30 + uVar10 * 8,uVar19 >> 1,param_3,param_4,
                       LZCOUNT(uVar19 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar21 = uVar19 >> 1;
        if (1 < uVar26 && 1 < uVar19) {
          uVar19 = uVar10;
          if (uVar21 < uVar10) {
            uVar19 = uVar21;
          }
          if (uVar19 <= param_4) {
            puVar20 = puVar30 + uVar10 * 8;
            puVar24 = puVar30;
            if (uVar21 < uVar10) {
              puVar24 = puVar20;
            }
            FUN_016dd1aa(param_3,puVar24,uVar19 << 5);
            puVar24 = param_3 + uVar19 * 8;
            if (uVar21 < uVar10) {
              puVar12 = (undefined4 *)(param_1 + -0x20 + uVar27 * 0x20);
              puVar29 = puVar20;
              do {
                uVar19 = puVar29[-5];
                uVar26 = puVar24[-5];
                bVar1 = (uint)((uint)puVar29[-6] <= (uint)puVar24[-6]) <= uVar26 - uVar19;
                uVar10 = (uint)(uVar26 <= uVar19 && bVar1);
                puVar20 = puVar24 + -8;
                puVar24 = puVar20 + uVar10 * 8;
                if (uVar10 != 0) {
                  puVar20 = puVar29 + -8;
                }
                uVar17 = puVar20[1];
                uVar23 = puVar20[2];
                uVar25 = puVar20[3];
                puVar29 = puVar29 + -8 + (uint)(uVar26 > uVar19 || !bVar1) * 8;
                *puVar12 = *puVar20;
                puVar12[1] = uVar17;
                puVar12[2] = uVar23;
                puVar12[3] = uVar25;
                uVar17 = puVar20[5];
                uVar23 = puVar20[6];
                uVar25 = puVar20[7];
                puVar12[4] = puVar20[4];
                puVar12[5] = uVar17;
                puVar12[6] = uVar23;
                puVar12[7] = uVar25;
                puVar13 = param_3;
              } while ((puVar29 != puVar30) && (puVar12 = puVar12 + -8, puVar24 != param_3));
            }
            else {
              puVar12 = param_3;
              do {
                uVar19 = puVar12[3];
                uVar26 = puVar20[3];
                bVar1 = (uint)((uint)puVar12[2] <= (uint)puVar20[2]) <= uVar26 - uVar19;
                uVar10 = (uint)(uVar26 <= uVar19 && bVar1);
                puVar13 = puVar12 + (uint)(uVar26 > uVar19 || !bVar1) * 8;
                if (uVar10 != 0) {
                  puVar12 = puVar20;
                }
                uVar17 = puVar12[1];
                uVar23 = puVar12[2];
                uVar25 = puVar12[3];
                puVar29 = puVar30 + 8;
                *puVar30 = *puVar12;
                puVar30[1] = uVar17;
                puVar30[2] = uVar23;
                puVar30[3] = uVar25;
                uVar17 = puVar12[5];
                uVar23 = puVar12[6];
                uVar25 = puVar12[7];
                puVar30[4] = puVar12[4];
                puVar30[5] = uVar17;
                puVar30[6] = uVar23;
                puVar30[7] = uVar25;
                if (puVar13 == puVar24) break;
                puVar20 = puVar20 + uVar10 * 8;
                puVar12 = puVar13;
                puVar30 = puVar29;
              } while (puVar20 != puVar33);
            }
            FUN_016dd1aa(puVar29,puVar13,(int)puVar24 - (int)puVar13);
          }
        }
        uVar19 = uVar14 * 2 | 1;
      } while (1 < uVar9);
LAB_015e2ad4:
      uVar16 = 1;
    }
LAB_015e2adc:
    abStack_6b[uVar16 + 1] = (byte)uVar15;
    local_174[uVar16] = uVar19;
    if (param_2 <= uVar27) {
      if ((uVar19 & 1) == 0) {
        FUN_015e2b40(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar27 = uVar27 + (local_18c >> 1);
    uVar19 = local_18c;
  } while( true );
}

