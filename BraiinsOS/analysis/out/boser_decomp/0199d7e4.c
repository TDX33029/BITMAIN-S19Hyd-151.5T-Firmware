// FUN_0199d7e4 @ 0199d7e4 size=1328 calls_out=3 calls_in=2
// strings: 

void FUN_0199d7e4(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  ulonglong uVar25;
  uint local_18c;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar25 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar25 & 0xffffffff);
  uVar5 = uVar25 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar25 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar25;
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
    iVar13 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar22 = 1;
  do {
    uVar12 = 0;
    puVar7 = (uint *)(param_1 + uVar17 * 8);
    local_18c = 1;
    if (uVar17 < param_2) {
      local_18c = param_2 - uVar17;
      if (local_18c < uVar6) {
LAB_0199d8e0:
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
          FUN_0199dd14(puVar7,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar12 = local_18c;
        }
        else {
          uVar12 = 2;
          uVar8 = puVar7[2];
          if (uVar8 < *puVar7) {
            if (local_18c != 2) {
              uVar14 = uVar8;
              do {
                iVar13 = uVar12 * 2;
                if (uVar14 <= puVar7[iVar13]) goto LAB_0199d9bc;
                uVar12 = uVar12 + 1;
                uVar14 = puVar7[iVar13];
              } while (local_18c != uVar12);
              goto LAB_0199d9b8;
            }
            uVar8 = 1;
LAB_0199d9dc:
            iVar13 = uVar17 * 8 + uVar12 * 8;
            iVar21 = 0;
            iVar18 = 0;
            do {
              puVar19 = (uint *)(param_1 + -8 + iVar13 + iVar21 * 8);
              uVar23 = *puVar19;
              puVar11 = puVar7 + iVar18 * 2;
              iVar18 = iVar18 + 1;
              *puVar19 = *puVar11;
              uVar14 = puVar19[1];
              *(uint *)(param_1 + -4 + iVar13 + iVar21 * 8) = puVar7[iVar21 * -2 + 1];
              iVar21 = iVar21 + -1;
              *puVar11 = uVar23;
              puVar11[1] = uVar14;
            } while (-iVar21 != uVar8);
          }
          else if (local_18c != 2) {
            uVar14 = uVar8;
            do {
              iVar13 = uVar12 * 2;
              if (puVar7[iVar13] < uVar14) goto LAB_0199d9bc;
              uVar12 = uVar12 + 1;
              uVar14 = puVar7[iVar13];
            } while (local_18c != uVar12);
LAB_0199d9b8:
            uVar12 = local_18c;
LAB_0199d9bc:
            if (uVar12 < uVar6) goto LAB_0199d8e0;
            if (uVar8 < *puVar7) {
              uVar8 = uVar12 >> 1;
              if (uVar8 != 0) goto LAB_0199d9dc;
              uVar12 = 1;
            }
          }
        }
        local_18c = uVar12 << 1 | 1;
      }
      uVar12 = uVar17 - (uVar22 >> 1);
      uVar8 = uVar12 + uVar17;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar8;
      uVar14 = (local_18c >> 1) + uVar17 * 2;
      lVar3 = (ulonglong)uVar14 * (uVar5 & 0xffffffff);
      uVar8 = iVar4 * uVar14 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar12,uVar17) * (int)uVar5 +
              uVar8 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      if (uVar8 != 0) {
        uVar12 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar16) {
      do {
        uVar8 = uVar16 - 1;
        if (abStack_6b[uVar16] < uVar12) goto LAB_0199dcb0;
        uVar14 = local_174[uVar8];
        uVar16 = uVar14 >> 1;
        uVar23 = uVar16 + (uVar22 >> 1);
        if ((param_4 < uVar23) || (((uVar14 | uVar22) & 1) != 0)) {
          puVar19 = (uint *)(param_1 + (uVar17 - uVar23) * 8);
          if ((uVar14 & 1) == 0) {
            FUN_0199dd14(puVar19,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar22 >> 1;
          if ((uVar22 & 1) == 0) {
            FUN_0199dd14(puVar19 + uVar16 * 2,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar14 && 1 < uVar22) {
            uVar22 = uVar16;
            if (uVar1 < uVar16) {
              uVar22 = uVar1;
            }
            if (uVar22 <= param_4) {
              puVar15 = puVar19 + uVar16 * 2;
              puVar11 = puVar19;
              if (uVar1 < uVar16) {
                puVar11 = puVar15;
              }
              FUN_01bed4e2(param_3,puVar11,uVar22 << 3);
              puVar9 = param_3 + uVar22 * 2;
              puVar11 = param_3;
              if (uVar1 < uVar16) {
                puVar10 = (uint *)(param_1 + -8 + uVar17 * 8);
                puVar20 = puVar15;
                do {
                  puVar20 = puVar20 + -2;
                  puVar9 = puVar9 + -2;
                  bVar24 = *puVar9 < *puVar20;
                  puVar15 = puVar9;
                  if (bVar24) {
                    puVar15 = puVar20;
                  }
                  uVar22 = puVar15[1];
                  *puVar10 = *puVar15;
                  puVar10[1] = uVar22;
                  puVar9 = puVar9 + (uint)bVar24 * 2;
                  puVar20 = puVar20 + (uint)!bVar24 * 2;
                } while ((puVar20 != puVar19) && (puVar10 = puVar10 + -2, puVar9 != param_3));
              }
              else {
                puVar20 = puVar19;
                do {
                  bVar24 = *puVar11 <= *puVar15;
                  puVar19 = puVar11;
                  if (!bVar24) {
                    puVar19 = puVar15;
                  }
                  uVar22 = puVar19[1];
                  *puVar20 = *puVar19;
                  puVar20[1] = uVar22;
                  puVar11 = puVar11 + (uint)bVar24 * 2;
                  puVar20 = puVar20 + 2;
                } while ((puVar11 != puVar9) &&
                        (puVar15 = puVar15 + (uint)!bVar24 * 2, puVar15 != puVar7));
              }
              FUN_01bed4e2(puVar20,puVar11,(int)puVar9 - (int)puVar11);
            }
          }
          uVar22 = uVar23 * 2 | 1;
        }
        else {
          uVar22 = uVar23 * 2;
        }
        uVar16 = uVar8;
      } while (1 < uVar8);
      uVar16 = 1;
    }
LAB_0199dcb0:
    abStack_6b[uVar16 + 1] = (byte)uVar12;
    local_174[uVar16] = uVar22;
    if (param_2 <= uVar17) {
      if ((uVar22 & 1) == 0) {
        FUN_0199dd14(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar17 = uVar17 + (local_18c >> 1);
    uVar22 = local_18c;
  } while( true );
}

