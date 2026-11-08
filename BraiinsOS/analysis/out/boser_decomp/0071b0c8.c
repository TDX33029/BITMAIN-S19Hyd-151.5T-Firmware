// FUN_0071b0c8 @ 0071b0c8 size=1480 calls_out=3 calls_in=2
// strings: 

void FUN_0071b0c8(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar5 = uVar31 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar31;
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
  uVar27 = 0;
  uVar23 = 1;
  do {
    uVar11 = 0;
    local_188 = 1;
    if (uVar15 < param_2) {
      local_188 = param_2 - uVar15;
      iVar7 = param_1 + uVar15 * 0x20;
      if (local_188 < uVar6) {
LAB_0071b1c0:
        if (param_5 == 0) {
          if (uVar6 <= local_188) {
            local_188 = uVar6;
          }
          local_188 = local_188 << 1;
        }
        else {
          if (0x1f < local_188) {
            local_188 = 0x20;
          }
          FUN_0072cf88(iVar7,local_188,param_3,param_4,0,0);
          local_188 = local_188 << 1 | 1;
        }
      }
      else {
        if (local_188 < 2) {
          uVar10 = local_188;
        }
        else {
          uVar11 = *(uint *)(iVar7 + 0x28);
          uVar8 = *(uint *)(iVar7 + 0xc);
          uVar9 = *(uint *)(iVar7 + 0x2c);
          if (uVar8 < uVar9 || uVar9 - uVar8 < (uint)(*(uint *)(iVar7 + 8) <= uVar11)) {
            uVar10 = 2;
            if (local_188 != 2) {
              puVar17 = (uint *)(param_1 + 0x48 + uVar15 * 0x20);
              uVar10 = 2;
              uVar16 = uVar11;
              uVar19 = uVar9;
              do {
                uVar21 = *puVar17;
                uVar25 = puVar17[1];
                if (uVar25 <= uVar19 && (uint)(uVar16 <= uVar21) <= uVar25 - uVar19)
                goto LAB_0071b2f0;
                uVar10 = uVar10 + 1;
                puVar17 = puVar17 + 8;
                uVar16 = uVar21;
                uVar19 = uVar25;
              } while (local_188 != uVar10);
              goto LAB_0071b2ec;
            }
          }
          else if (local_188 == 2) {
            uVar10 = 2;
            uVar11 = 1;
LAB_0071b318:
            uVar8 = 0;
            iVar18 = param_1 + -0x20 + uVar15 * 0x20 + uVar10 * 0x20;
            do {
              iVar22 = 0;
              do {
                uVar20 = *(undefined4 *)(iVar7 + iVar22 * 4);
                *(undefined4 *)(iVar7 + iVar22 * 4) = *(undefined4 *)(iVar18 + iVar22 * 4);
                *(undefined4 *)(iVar18 + iVar22 * 4) = uVar20;
                iVar22 = iVar22 + 1;
              } while (iVar22 != 8);
              uVar8 = uVar8 + 1;
              iVar7 = iVar7 + 0x20;
              iVar18 = iVar18 + -0x20;
            } while (uVar8 != uVar11);
          }
          else {
            puVar17 = (uint *)(param_1 + 0x48 + uVar15 * 0x20);
            uVar10 = 2;
            uVar16 = uVar9;
            uVar19 = uVar11;
            do {
              uVar25 = *puVar17;
              uVar21 = puVar17[1];
              if (uVar16 < uVar21 || uVar21 - uVar16 < (uint)(uVar19 <= uVar25)) goto LAB_0071b2f0;
              uVar10 = uVar10 + 1;
              puVar17 = puVar17 + 8;
              uVar16 = uVar21;
              uVar19 = uVar25;
            } while (local_188 != uVar10);
LAB_0071b2ec:
            uVar10 = local_188;
LAB_0071b2f0:
            if (uVar10 < uVar6) goto LAB_0071b1c0;
            if (uVar9 <= uVar8 && (uint)(*(uint *)(iVar7 + 8) <= uVar11) <= uVar9 - uVar8) {
              uVar11 = uVar10 >> 1;
              if (uVar11 != 0) goto LAB_0071b318;
              uVar10 = 1;
            }
          }
        }
        local_188 = uVar10 << 1 | 1;
      }
      uVar8 = uVar15 - (uVar23 >> 1);
      uVar9 = uVar8 + uVar15;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar10 = (local_188 >> 1) + uVar15 * 2;
      lVar3 = (ulonglong)uVar10 * (uVar5 & 0xffffffff);
      uVar11 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar8 = iVar4 * uVar10 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar15) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar8 != 0) {
        uVar11 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar27) {
      do {
        uVar8 = uVar27 - 1;
        if (abStack_67[uVar27] < uVar11) goto LAB_0071b62c;
        uVar10 = local_170[uVar8];
        uVar27 = uVar10 >> 1;
        uVar9 = uVar27 + (uVar23 >> 1);
        if ((param_4 < uVar9) || (((uVar10 | uVar23) & 1) != 0)) {
          puVar29 = (undefined4 *)(param_1 + (uVar15 - uVar9) * 0x20);
          if ((uVar10 & 1) == 0) {
            FUN_0072cf88(puVar29,uVar27,param_3,param_4,LZCOUNT(uVar27 | 1) << 1 ^ 0x3e,0);
          }
          uVar16 = uVar23 >> 1;
          if ((uVar23 & 1) == 0) {
            FUN_0072cf88(puVar29 + uVar27 * 8,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar10 && 1 < uVar23) {
            uVar23 = uVar27;
            if (uVar16 < uVar27) {
              uVar23 = uVar16;
            }
            if (uVar23 <= param_4) {
              puVar28 = puVar29 + uVar27 * 8;
              puVar12 = puVar29;
              if (uVar16 < uVar27) {
                puVar12 = puVar28;
              }
              FUN_01bed4e2(param_3,puVar12,uVar23 << 5);
              puVar12 = param_3 + uVar23 * 8;
              if (uVar16 < uVar27) {
                puVar13 = (undefined4 *)(param_1 + -0x20 + uVar15 * 0x20);
                puVar30 = puVar28;
                do {
                  uVar23 = puVar30[-5];
                  puVar28 = puVar12 + -8;
                  uVar10 = puVar12[-5];
                  bVar1 = (uint)((uint)puVar30[-6] <= (uint)puVar12[-6]) <= uVar10 - uVar23;
                  uVar27 = (uint)(uVar10 <= uVar23 && bVar1);
                  puVar12 = puVar28 + uVar27 * 8;
                  if (uVar27 != 0) {
                    puVar28 = puVar30 + -8;
                  }
                  uVar20 = puVar28[1];
                  uVar24 = puVar28[2];
                  uVar26 = puVar28[3];
                  puVar30 = puVar30 + -8 + (uint)(uVar10 > uVar23 || !bVar1) * 8;
                  *puVar13 = *puVar28;
                  puVar13[1] = uVar20;
                  puVar13[2] = uVar24;
                  puVar13[3] = uVar26;
                  uVar20 = puVar28[5];
                  uVar24 = puVar28[6];
                  uVar26 = puVar28[7];
                  puVar13[4] = puVar28[4];
                  puVar13[5] = uVar20;
                  puVar13[6] = uVar24;
                  puVar13[7] = uVar26;
                } while ((puVar30 != puVar29) && (puVar13 = puVar13 + -8, puVar12 != param_3));
                puVar14 = param_3;
              }
              else {
                puVar13 = param_3;
                do {
                  uVar23 = puVar13[3];
                  uVar10 = puVar28[3];
                  bVar1 = (uint)((uint)puVar13[2] <= (uint)puVar28[2]) <= uVar10 - uVar23;
                  uVar27 = (uint)(uVar10 <= uVar23 && bVar1);
                  puVar14 = puVar13 + (uint)(uVar10 > uVar23 || !bVar1) * 8;
                  if (uVar27 != 0) {
                    puVar13 = puVar28;
                  }
                  uVar20 = puVar13[1];
                  uVar24 = puVar13[2];
                  uVar26 = puVar13[3];
                  puVar30 = puVar29 + 8;
                  *puVar29 = *puVar13;
                  puVar29[1] = uVar20;
                  puVar29[2] = uVar24;
                  puVar29[3] = uVar26;
                  uVar20 = puVar13[5];
                  uVar24 = puVar13[6];
                  uVar26 = puVar13[7];
                  puVar29[4] = puVar13[4];
                  puVar29[5] = uVar20;
                  puVar29[6] = uVar24;
                  puVar29[7] = uVar26;
                  if (puVar14 == puVar12) break;
                  puVar28 = puVar28 + uVar27 * 8;
                  puVar13 = puVar14;
                  puVar29 = puVar30;
                } while (puVar28 != (undefined4 *)(param_1 + uVar15 * 0x20));
              }
              FUN_01bed4e2(puVar30,puVar14,(int)puVar12 - (int)puVar14);
            }
          }
          uVar23 = uVar9 * 2 | 1;
        }
        else {
          uVar23 = uVar9 * 2;
        }
        uVar27 = uVar8;
      } while (1 < uVar8);
      uVar27 = 1;
    }
LAB_0071b62c:
    abStack_67[uVar27 + 1] = (byte)uVar11;
    local_170[uVar27] = uVar23;
    if (param_2 <= uVar15) {
      if ((uVar23 & 1) == 0) {
        FUN_0072cf88(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + 1;
    uVar15 = uVar15 + (local_188 >> 1);
    uVar23 = local_188;
  } while( true );
}

