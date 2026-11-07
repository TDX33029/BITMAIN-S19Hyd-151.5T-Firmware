// FUN_015e37b0 @ 015e37b0 size=1364 calls_out=3 calls_in=2
// strings: 

void FUN_015e37b0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_18c;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar26 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar26 & 0xffffffff);
  uVar4 = uVar26 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar26 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar26;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar12 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar12) + (param_2 >> iVar12) >> 1;
  }
  uVar16 = 0;
  uVar15 = 0;
  uVar23 = 1;
  do {
    uVar11 = 0;
    puVar6 = (uint *)(param_1 + uVar16 * 8);
    local_18c = 1;
    if (uVar16 < param_2) {
      local_18c = param_2 - uVar16;
      if (local_18c < uVar5) {
LAB_015e38ac:
        if (param_5 == 0) {
          if (uVar5 <= local_18c) {
            local_18c = uVar5;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_015e3d04(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar11 = local_18c;
        }
        else {
          uVar11 = 2;
          uVar7 = puVar6[2];
          if (uVar7 < *puVar6) {
            if (local_18c != 2) {
              uVar13 = uVar7;
              do {
                iVar12 = uVar11 * 2;
                if (uVar13 <= puVar6[iVar12]) goto LAB_015e3988;
                uVar11 = uVar11 + 1;
                uVar13 = puVar6[iVar12];
              } while (local_18c != uVar11);
              goto LAB_015e3984;
            }
            uVar7 = 1;
LAB_015e39a8:
            iVar12 = uVar16 * 8 + uVar11 * 8;
            iVar20 = 0;
            iVar17 = 0;
            do {
              puVar19 = (uint *)(param_1 + -8 + iVar12 + iVar20 * 8);
              uVar21 = *puVar19;
              puVar10 = puVar6 + iVar17 * 2;
              iVar17 = iVar17 + 1;
              *puVar19 = *puVar10;
              uVar13 = puVar19[1];
              *(uint *)(param_1 + -4 + iVar12 + iVar20 * 8) = puVar6[iVar20 * -2 + 1];
              iVar20 = iVar20 + -1;
              *puVar10 = uVar21;
              puVar10[1] = uVar13;
            } while (-iVar20 != uVar7);
          }
          else if (local_18c != 2) {
            uVar13 = uVar7;
            do {
              iVar12 = uVar11 * 2;
              if (puVar6[iVar12] < uVar13) goto LAB_015e3988;
              uVar11 = uVar11 + 1;
              uVar13 = puVar6[iVar12];
            } while (local_18c != uVar11);
LAB_015e3984:
            uVar11 = local_18c;
LAB_015e3988:
            if (uVar11 < uVar5) goto LAB_015e38ac;
            if (uVar7 < *puVar6) {
              uVar7 = uVar11 >> 1;
              if (uVar7 != 0) goto LAB_015e39a8;
              uVar11 = 1;
            }
          }
        }
        local_18c = uVar11 << 1 | 1;
      }
      uVar11 = uVar16 - (uVar23 >> 1);
      uVar7 = uVar11 + uVar16;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar7;
      uVar13 = (local_18c >> 1) + uVar16 * 2;
      lVar2 = (ulonglong)uVar13 * (uVar4 & 0xffffffff);
      uVar7 = iVar3 * uVar13 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar11,uVar16) * (int)uVar4 +
              uVar7 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      uVar11 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      if (uVar7 != 0) {
        uVar11 = LZCOUNT(uVar7);
      }
    }
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar7 = uVar15 - 1;
          if (abStack_6b[uVar15] < uVar11) goto LAB_015e3ca0;
          uVar21 = local_174[uVar7];
          uVar13 = uVar21 >> 1;
          uVar24 = uVar13 + (uVar23 >> 1);
          uVar15 = uVar7;
          if ((param_4 < uVar24) || (((uVar21 | uVar23) & 1) != 0)) break;
          uVar23 = uVar24 * 2;
          if (uVar7 < 2) goto LAB_015e3c98;
        }
        puVar19 = (uint *)(param_1 + (uVar16 - uVar24) * 8);
        if ((uVar21 & 1) == 0) {
          FUN_015e3d04(puVar19,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar23 & 1) == 0) {
          FUN_015e3d04(puVar19 + uVar13 * 2,uVar23 >> 1,param_3,param_4,
                       LZCOUNT(uVar23 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar22 = uVar23 >> 1;
        if (1 < uVar21 && 1 < uVar23) {
          uVar23 = uVar13;
          if (uVar22 < uVar13) {
            uVar23 = uVar22;
          }
          if (uVar23 <= param_4) {
            puVar14 = puVar19 + uVar13 * 2;
            puVar10 = puVar19;
            if (uVar22 < uVar13) {
              puVar10 = puVar14;
            }
            FUN_016dd1aa(param_3,puVar10,uVar23 << 3);
            puVar8 = param_3 + uVar23 * 2;
            puVar10 = param_3;
            if (uVar22 < uVar13) {
              puVar9 = (uint *)(param_1 + -8 + uVar16 * 8);
              puVar18 = puVar14;
              do {
                puVar18 = puVar18 + -2;
                puVar8 = puVar8 + -2;
                bVar25 = *puVar8 < *puVar18;
                puVar14 = puVar8;
                if (bVar25) {
                  puVar14 = puVar18;
                }
                uVar23 = puVar14[1];
                *puVar9 = *puVar14;
                puVar9[1] = uVar23;
                puVar8 = puVar8 + (uint)bVar25 * 2;
                puVar18 = puVar18 + (uint)!bVar25 * 2;
              } while ((puVar18 != puVar19) && (puVar9 = puVar9 + -2, puVar8 != param_3));
            }
            else {
              puVar18 = puVar19;
              do {
                bVar25 = *puVar10 <= *puVar14;
                puVar19 = puVar10;
                if (!bVar25) {
                  puVar19 = puVar14;
                }
                uVar23 = puVar19[1];
                *puVar18 = *puVar19;
                puVar18[1] = uVar23;
                puVar10 = puVar10 + (uint)bVar25 * 2;
                puVar18 = puVar18 + 2;
              } while ((puVar10 != puVar8) &&
                      (puVar14 = puVar14 + (uint)!bVar25 * 2, puVar14 != puVar6));
            }
            FUN_016dd1aa(puVar18,puVar10,(int)puVar8 - (int)puVar10);
          }
        }
        uVar23 = uVar24 * 2 | 1;
      } while (1 < uVar7);
LAB_015e3c98:
      uVar15 = 1;
    }
LAB_015e3ca0:
    abStack_6b[uVar15 + 1] = (byte)uVar11;
    local_174[uVar15] = uVar23;
    if (param_2 <= uVar16) {
      if ((uVar23 & 1) == 0) {
        FUN_015e3d04(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + 1;
    uVar16 = uVar16 + (local_18c >> 1);
    uVar23 = local_18c;
  } while( true );
}

