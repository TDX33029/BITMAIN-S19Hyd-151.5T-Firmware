// FUN_013fad9c @ 013fad9c size=1628 calls_out=3 calls_in=2
// strings: 

void FUN_013fad9c(int param_1,uint param_2,byte *param_3,uint param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  byte *pbVar24;
  int iVar25;
  uint uVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  ulonglong uVar33;
  uint local_18c;
  uint local_17c [68];
  byte abStack_69 [69];
  
  uVar33 = FUN_01846088(0,0x40000000,param_2,0);
  lVar4 = (ulonglong)param_2 * (uVar33 & 0xffffffff);
  uVar5 = uVar33 + 1;
  if ((int)lVar4 == 0 &&
      (int)(uVar33 >> 0x20) * param_2 + (int)((ulonglong)lVar4 >> 0x20) == 0x40000000) {
    uVar5 = uVar33;
  }
  if (param_2 < 0x1001) {
    uVar8 = param_2 - (param_2 >> 1);
    if (0x3f < uVar8) {
      uVar8 = 0x40;
    }
  }
  else {
    uVar8 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar12 = (uVar8 & 1) + (uVar8 >> 1);
    uVar8 = (1 << iVar12) + (param_2 >> iVar12) >> 1;
  }
  uVar26 = 1;
  uVar21 = 0;
  uVar17 = 0;
  do {
    uVar18 = 0;
    bVar22 = 0;
    pbVar9 = (byte *)(param_1 + uVar21 * 2);
    local_18c = 1;
    if (uVar21 < param_2) {
      local_18c = param_2 - uVar21;
      if (local_18c < uVar8) {
LAB_013faea0:
        if (param_5 == 0) {
          if (uVar8 <= local_18c) {
            local_18c = uVar8;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_013fcb64(pbVar9,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        uVar18 = local_18c;
        if (1 < local_18c) {
          bVar22 = pbVar9[3];
          bVar7 = pbVar9[2];
          bVar31 = *pbVar9 <= bVar7;
          if (bVar7 == *pbVar9) {
            bVar31 = pbVar9[1] <= bVar22;
          }
          if (bVar31) {
            uVar18 = 2;
            if (local_18c != 2) {
              iVar12 = 0;
              do {
                bVar2 = pbVar9[iVar12 * 2 + 4];
                iVar14 = iVar12 * 2;
                bVar32 = bVar7 <= bVar2;
                if (bVar2 == bVar7) {
                  bVar32 = bVar22 <= pbVar9[iVar14 + 5];
                }
                if (!bVar32) {
                  uVar18 = iVar12 + 2;
                  goto joined_r0x013fb290;
                }
                iVar12 = iVar12 + 1;
                bVar22 = pbVar9[iVar14 + 5];
                bVar7 = bVar2;
              } while ((param_2 - 2) - uVar21 != iVar12);
              uVar18 = local_18c;
              if (local_18c < uVar8) goto LAB_013faea0;
              goto LAB_013fb2b0;
            }
          }
          else if (local_18c == 2) {
            uVar18 = 2;
            uVar15 = 1;
LAB_013fb2c0:
            iVar14 = uVar21 * 2 + uVar18 * 2;
            iVar25 = 0;
            iVar12 = param_1 + -2 + iVar14;
            iVar20 = 0;
            do {
              bVar22 = pbVar9[iVar25 * -2 + 1];
              uVar3 = *(undefined2 *)(iVar12 + iVar25 * 2);
              *(byte *)(iVar12 + iVar25 * 2) = pbVar9[iVar20 * 2];
              *(byte *)(param_1 + -1 + iVar14 + iVar25 * 2) = bVar22;
              iVar1 = iVar20 * 2;
              iVar25 = iVar25 + -1;
              iVar20 = iVar20 + 1;
              *(undefined2 *)(pbVar9 + iVar1) = uVar3;
            } while (-iVar25 != uVar15);
          }
          else {
            iVar12 = 0;
            do {
              iVar14 = iVar12 * 2;
              bVar2 = pbVar9[iVar12 * 2 + 4];
              bVar32 = bVar7 <= bVar2;
              if (bVar2 == bVar7) {
                bVar32 = bVar22 <= pbVar9[iVar14 + 5];
              }
              if (bVar32) {
                uVar18 = iVar12 + 2;
                break;
              }
              iVar12 = iVar12 + 1;
              bVar22 = pbVar9[iVar14 + 5];
              bVar7 = bVar2;
            } while ((param_2 - 2) - uVar21 != iVar12);
joined_r0x013fb290:
            if (uVar18 < uVar8) goto LAB_013faea0;
LAB_013fb2b0:
            if (!bVar31) {
              uVar15 = uVar18 >> 1;
              if (uVar15 != 0) goto LAB_013fb2c0;
              uVar18 = 1;
            }
          }
        }
        local_18c = uVar18 << 1 | 1;
      }
      uVar18 = uVar21 - (uVar26 >> 1);
      uVar15 = uVar21 + (local_18c >> 1);
      uVar16 = uVar15 + uVar21;
      lVar4 = (uVar5 & 0xffffffff) * (ulonglong)uVar16;
      lVar6 = uVar5 * CONCAT14(CARRY4(uVar18,uVar21),uVar18 + uVar21);
      uVar15 = (uint)CARRY4(uVar15,uVar21) * (int)uVar5 +
               uVar16 * (int)(uVar5 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20) ^
               (uint)((ulonglong)lVar6 >> 0x20);
      uVar18 = LZCOUNT((uint)lVar4 ^ (uint)lVar6) + 0x20;
      if (uVar15 != 0) {
        uVar18 = LZCOUNT(uVar15);
      }
      bVar22 = (byte)uVar18;
      if (uVar17 < 2) goto LAB_013fb398;
LAB_013faee4:
      do {
        while( true ) {
          uVar15 = uVar17 - 1;
          if (abStack_69[uVar17 + 2] < uVar18) goto LAB_013fb134;
          uVar23 = local_17c[uVar17 + 2];
          uVar16 = uVar23 >> 1;
          uVar30 = uVar16 + (uVar26 >> 1);
          uVar17 = uVar15;
          if ((uVar30 <= param_4) && (((uVar23 | uVar26) & 1) == 0)) break;
          pbVar28 = (byte *)(param_1 + (uVar21 - uVar30) * 2);
          if ((uVar23 & 1) == 0) {
            FUN_013fcb64(pbVar28,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar26 & 1) == 0) {
            FUN_013fcb64(pbVar28 + uVar16 * 2,uVar26 >> 1,param_3,param_4,
                         LZCOUNT(uVar26 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar19 = uVar26 >> 1;
          if (1 < uVar23 && 1 < uVar26) {
            uVar26 = uVar16;
            if (uVar19 < uVar16) {
              uVar26 = uVar19;
            }
            if (uVar26 <= param_4) {
              pbVar24 = pbVar28 + uVar16 * 2;
              pbVar27 = pbVar28;
              if (uVar19 < uVar16) {
                pbVar27 = pbVar24;
              }
              FUN_016dd1aa(param_3,pbVar27,uVar26 << 1);
              pbVar10 = param_3 + uVar26 * 2;
              pbVar27 = param_3;
              if (uVar19 < uVar16) {
                puVar13 = (undefined2 *)(param_1 + -2 + uVar21 * 2);
                do {
                  bVar22 = pbVar24[-2];
                  bVar7 = pbVar10[-2];
                  bVar31 = bVar22 <= bVar7;
                  if (bVar7 == bVar22) {
                    bVar31 = pbVar24[-1] <= pbVar10[-1];
                  }
                  uVar26 = (uint)!bVar31;
                  pbVar11 = pbVar10;
                  if (uVar26 != 0) {
                    pbVar11 = pbVar24;
                  }
                  pbVar10 = pbVar10 + -2 + uVar26 * 2;
                  *puVar13 = *(undefined2 *)(pbVar11 + -2);
                  pbVar24 = pbVar24 + -2 + (uVar26 ^ 1) * 2;
                  puVar13 = puVar13 + -1;
                } while (pbVar24 != pbVar28 && pbVar10 != param_3);
                pbVar29 = pbVar24;
              }
              else {
                do {
                  bVar31 = *pbVar27 <= *pbVar24;
                  if (*pbVar24 == *pbVar27) {
                    bVar31 = pbVar27[1] <= pbVar24[1];
                  }
                  uVar26 = (uint)!bVar31;
                  pbVar11 = pbVar27;
                  if (uVar26 != 0) {
                    pbVar11 = pbVar24;
                  }
                  pbVar29 = pbVar28 + 2;
                  *(undefined2 *)pbVar28 = *(undefined2 *)pbVar11;
                  pbVar27 = pbVar27 + (uVar26 ^ 1) * 2;
                  if (pbVar27 == pbVar10) break;
                  pbVar24 = pbVar24 + uVar26 * 2;
                  pbVar28 = pbVar29;
                } while (pbVar24 != pbVar9);
              }
              FUN_016dd1aa(pbVar29,pbVar27,(int)pbVar10 - (int)pbVar27);
            }
          }
          uVar26 = uVar30 * 2 | 1;
          if (uVar15 < 2) goto LAB_013fb130;
        }
        uVar26 = uVar30 * 2;
      } while (1 < uVar15);
LAB_013fb130:
      uVar17 = 1;
LAB_013fb134:
      abStack_69[uVar17 + 3] = (byte)uVar18;
      local_17c[uVar17 + 3] = uVar26;
      uVar18 = uVar26;
      uVar26 = local_18c;
    }
    else {
      if (1 < uVar17) goto LAB_013faee4;
LAB_013fb398:
      abStack_69[uVar17 + 3] = bVar22;
      local_17c[uVar17 + 3] = uVar26;
      uVar18 = uVar26;
      uVar26 = local_18c;
    }
    if (param_2 <= uVar21) {
      if ((uVar18 & 1) == 0) {
        FUN_013fcb64(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + 1;
    uVar21 = uVar21 + (uVar26 >> 1);
  } while( true );
}

