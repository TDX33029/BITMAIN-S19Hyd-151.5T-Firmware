// FUN_014c55b8 @ 014c55b8 size=1840 calls_out=3 calls_in=2
// strings: 

void FUN_014c55b8(int param_1,uint param_2,int *param_3,uint param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  bool bVar27;
  ulonglong uVar28;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar28 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar6 = uVar28 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar6 = uVar28;
  }
  iVar5 = (int)(uVar6 >> 0x20);
  if (param_2 < 0x1001) {
    uVar7 = param_2 - (param_2 >> 1);
    if (0x3f < uVar7) {
      uVar7 = 0x40;
    }
  }
  else {
    uVar7 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar21 = (uVar7 & 1) + (uVar7 >> 1);
    uVar7 = (1 << iVar21) + (param_2 >> iVar21) >> 1;
  }
  uVar24 = 0;
  uVar18 = 0;
  uVar26 = 1;
  do {
    uVar13 = 0;
    piVar8 = (int *)(param_1 + uVar24 * 4);
    local_190 = 1;
    if (uVar24 < param_2) {
      local_190 = param_2 - uVar24;
      if (local_190 < uVar7) {
LAB_014c56b4:
        if (param_5 != 0) {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_014c6774(piVar8,local_190,param_3,param_4,0,0);
          uVar13 = local_190;
          goto LAB_014c58fc;
        }
        if (uVar7 <= local_190) {
          local_190 = uVar7;
        }
        local_190 = local_190 << 1;
      }
      else {
        uVar13 = local_190;
        if (1 < local_190) {
          bVar1 = *(byte *)(*piVar8 + 0x2b);
          bVar16 = *(byte *)(piVar8[1] + 0x2b);
          uVar17 = (uint)*(uint3 *)(*piVar8 + 0x29);
          uVar10 = (uint)*(uint3 *)(piVar8[1] + 0x29);
          uVar13 = uVar17 & 0xff;
          uVar9 = uVar10 & 0xff;
          bVar27 = uVar13 <= uVar9;
          if ((uVar9 == uVar13) &&
             (uVar13 = (uVar17 & 0xffff) >> 8, uVar17 = (uVar10 & 0xffff) >> 8,
             bVar27 = uVar13 <= uVar17, uVar17 == uVar13)) {
            if (bVar16 != 0) {
              if (bVar16 < bVar1) goto LAB_014c580c;
              goto LAB_014c5754;
            }
            if (bVar1 == 0) goto LAB_014c5754;
LAB_014c580c:
            uVar17 = 2;
            bVar27 = true;
            uVar13 = uVar17;
            if (local_190 != 2) {
              uVar10 = (uVar10 & 0xffff) >> 8;
              do {
                bVar1 = *(byte *)(piVar8[uVar17] + 0x2b);
                uVar20 = (uint)*(uint3 *)(piVar8[uVar17] + 0x29);
                uVar22 = uVar20 & 0xff;
                bVar4 = uVar22 < uVar9;
                uVar13 = uVar17;
                if (uVar9 == uVar22) {
                  uVar19 = (uVar20 & 0xffff) >> 8;
                  bVar4 = uVar19 < uVar10;
                  if (uVar10 != uVar19) goto LAB_014c587c;
                  if (bVar1 == 0) {
                    if (bVar16 == 0) break;
                  }
                  else if (bVar16 <= bVar1) break;
                }
                else {
LAB_014c587c:
                  if (!bVar4) break;
                  uVar19 = (uVar20 & 0xffff) >> 8;
                }
                uVar17 = uVar17 + 1;
                uVar13 = local_190;
                uVar9 = uVar22;
                uVar10 = uVar19;
                bVar16 = bVar1;
              } while (local_190 != uVar17);
            }
          }
          else {
            if (!bVar27) goto LAB_014c580c;
LAB_014c5754:
            uVar17 = 2;
            bVar27 = false;
            uVar13 = uVar17;
            if (local_190 != 2) {
              uVar10 = (uVar10 & 0xffff) >> 8;
              do {
                bVar1 = *(byte *)(piVar8[uVar17] + 0x2b);
                uVar20 = (uint)*(uint3 *)(piVar8[uVar17] + 0x29);
                uVar22 = uVar20 & 0xff;
                bVar4 = uVar22 < uVar9;
                uVar13 = uVar17;
                if (uVar9 == uVar22) {
                  uVar19 = (uVar20 & 0xffff) >> 8;
                  bVar4 = uVar19 < uVar10;
                  if (uVar10 != uVar19) goto LAB_014c57c4;
                  if (bVar1 == 0) {
                    if (bVar16 != 0) break;
                  }
                  else if (bVar1 < bVar16) break;
                }
                else {
LAB_014c57c4:
                  if (bVar4) break;
                  uVar19 = (uVar20 & 0xffff) >> 8;
                }
                uVar17 = uVar17 + 1;
                uVar13 = local_190;
                uVar9 = uVar22;
                uVar10 = uVar19;
                bVar16 = bVar1;
              } while (local_190 != uVar17);
            }
          }
          if (uVar13 < uVar7) goto LAB_014c56b4;
          bVar27 = !bVar27;
          uVar9 = uVar7;
          if (!bVar27) {
            uVar9 = uVar13 >> 1;
            bVar27 = uVar9 == 0;
          }
          if (!bVar27) {
            piVar25 = (int *)(param_1 + -4 + uVar13 * 4 + uVar24 * 4);
            piVar14 = piVar8;
            do {
              iVar21 = *piVar25;
              uVar9 = uVar9 - 1;
              *piVar25 = *piVar14;
              *piVar14 = iVar21;
              piVar25 = piVar25 + -1;
              piVar14 = piVar14 + 1;
            } while (uVar9 != 0);
          }
        }
LAB_014c58fc:
        local_190 = uVar13 << 1 | 1;
      }
      uVar9 = uVar24 - (uVar26 >> 1);
      uVar10 = uVar9 + uVar24;
      lVar2 = (uVar6 & 0xffffffff) * (ulonglong)uVar10;
      uVar17 = (local_190 >> 1) + uVar24 * 2;
      lVar3 = (ulonglong)uVar17 * (uVar6 & 0xffffffff);
      uVar13 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar9 = iVar5 * uVar17 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar24) * (int)uVar6 +
              uVar10 * iVar5 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar9 != 0) {
        uVar13 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar18) {
      do {
        uVar9 = uVar18 - 1;
        if (abStack_67[uVar18] < uVar13) goto LAB_014c5c84;
        uVar17 = local_170[uVar9];
        uVar18 = uVar17 >> 1;
        uVar10 = uVar18 + (uVar26 >> 1);
        if ((param_4 < uVar10) || (((uVar17 | uVar26) & 1) != 0)) {
          piVar25 = (int *)(param_1 + (uVar24 - uVar10) * 4);
          if ((uVar17 & 1) == 0) {
            FUN_014c6774(piVar25,uVar18,param_3,param_4,LZCOUNT(uVar18 | 1) << 1 ^ 0x3e,0);
          }
          uVar20 = uVar26 >> 1;
          if ((uVar26 & 1) == 0) {
            FUN_014c6774(piVar25 + uVar18,uVar20,param_3,param_4,LZCOUNT(uVar20 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar17 && 1 < uVar26) {
            uVar26 = uVar18;
            if (uVar20 < uVar18) {
              uVar26 = uVar20;
            }
            if (uVar26 <= param_4) {
              piVar14 = piVar25 + uVar18;
              piVar23 = piVar25;
              if (uVar20 < uVar18) {
                piVar23 = piVar14;
              }
              FUN_01bed4e2(param_3,piVar23,uVar26 << 2);
              piVar12 = param_3 + uVar26;
              piVar15 = param_3;
              if (uVar20 < uVar18) {
                piVar14 = (int *)(param_1 + -4 + uVar24 * 4);
                do {
                  piVar23 = piVar23 + -1;
                  piVar11 = piVar12 + -1;
                  bVar1 = *(byte *)(*piVar23 + 0x2b);
                  bVar16 = *(byte *)(*piVar11 + 0x2b);
                  uVar17 = (uint)*(uint3 *)(*piVar23 + 0x29);
                  uVar22 = (uint)*(uint3 *)(*piVar11 + 0x29);
                  uVar26 = uVar17 & 0xff;
                  uVar20 = uVar22 & 0xff;
                  uVar18 = (uint)(uVar20 < uVar26);
                  if ((uVar20 == uVar26) &&
                     (uVar26 = (uVar17 & 0xffff) >> 8, uVar17 = (uVar22 & 0xffff) >> 8,
                     uVar18 = (uint)(uVar17 < uVar26), uVar17 == uVar26)) {
                    if (bVar16 == 0) {
                      uVar18 = (uint)(bVar1 != 0);
                    }
                    else {
                      uVar18 = (uint)(bVar16 < bVar1);
                    }
                  }
                  piVar12 = piVar11 + uVar18;
                  if (uVar18 != 0) {
                    piVar11 = piVar23;
                  }
                  *piVar14 = *piVar11;
                  piVar23 = piVar23 + (uVar18 ^ 1);
                } while ((piVar23 != piVar25) && (piVar14 = piVar14 + -1, piVar12 != param_3));
              }
              else if ((uVar26 != 0) && (piVar25 = piVar23, piVar14 != piVar8)) {
                do {
                  bVar1 = *(byte *)(*piVar15 + 0x2b);
                  bVar16 = *(byte *)(*piVar14 + 0x2b);
                  uVar22 = (uint)*(uint3 *)(*piVar15 + 0x29);
                  uVar26 = (uint)*(uint3 *)(*piVar14 + 0x29);
                  uVar20 = uVar22 & 0xff;
                  uVar18 = uVar26 & 0xff;
                  uVar17 = (uint)(uVar18 < uVar20);
                  if ((uVar18 == uVar20) &&
                     (uVar18 = (uVar22 & 0xffff) >> 8, uVar26 = (uVar26 & 0xffff) >> 8,
                     uVar17 = (uint)(uVar26 < uVar18), uVar26 == uVar18)) {
                    if (bVar16 == 0) {
                      uVar17 = (uint)(bVar1 != 0);
                    }
                    else {
                      uVar17 = (uint)(bVar16 < bVar1);
                    }
                  }
                  piVar11 = piVar15;
                  if (uVar17 != 0) {
                    piVar11 = piVar14;
                  }
                  piVar23 = piVar25 + 1;
                  *piVar25 = *piVar11;
                  piVar15 = piVar15 + (uVar17 ^ 1);
                  if (piVar15 != piVar12) {
                    piVar14 = piVar14 + uVar17;
                  }
                  piVar25 = piVar23;
                } while (piVar15 != piVar12 && piVar14 != piVar8);
              }
              FUN_01bed4e2(piVar23,piVar15,(int)piVar12 - (int)piVar15);
            }
          }
          uVar26 = uVar10 * 2 | 1;
        }
        else {
          uVar26 = uVar10 * 2;
        }
        uVar18 = uVar9;
      } while (1 < uVar9);
      uVar18 = 1;
    }
LAB_014c5c84:
    abStack_67[uVar18 + 1] = (byte)uVar13;
    local_170[uVar18] = uVar26;
    if (param_2 <= uVar24) {
      if ((uVar26 & 1) == 0) {
        FUN_014c6774(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar18 = uVar18 + 1;
    uVar24 = uVar24 + (local_190 >> 1);
    uVar26 = local_190;
  } while( true );
}

