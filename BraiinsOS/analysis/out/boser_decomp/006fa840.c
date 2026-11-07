// FUN_006fa840 @ 006fa840 size=1244 calls_out=3 calls_in=2
// strings: 

void FUN_006fa840(int param_1,uint param_2,byte *param_3,uint param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar23 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar3 = (ulonglong)param_2 * (uVar23 & 0xffffffff);
  uVar4 = uVar23 + 1;
  if ((int)lVar3 == 0 &&
      (int)(uVar23 >> 0x20) * param_2 + (int)((ulonglong)lVar3 >> 0x20) == 0x40000000) {
    uVar4 = uVar23;
  }
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar14 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar14) + (param_2 >> iVar14) >> 1;
  }
  uVar22 = 0;
  uVar13 = 0;
  uVar20 = 1;
  do {
    uVar17 = 0;
    pbVar7 = (byte *)(param_1 + uVar22);
    local_18c = 1;
    if (uVar22 < param_2) {
      local_18c = param_2 - uVar22;
      if (local_18c < uVar6) {
LAB_006fa930:
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
          FUN_006fad1c(pbVar7,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar17 = local_18c;
        }
        else {
          bVar2 = pbVar7[1];
          uVar17 = 2;
          if (bVar2 < *pbVar7) {
            bVar15 = bVar2;
            if (local_18c == 2) {
              uVar11 = 1;
LAB_006faa30:
              iVar14 = 0;
              do {
                bVar2 = pbVar7[-iVar14];
                pbVar7[-iVar14] = pbVar7[iVar14 + (uVar17 - 1)];
                pbVar7[iVar14 + (uVar17 - 1)] = bVar2;
                iVar14 = iVar14 + -1;
              } while (-iVar14 != uVar11);
            }
            else {
              do {
                pbVar18 = pbVar7 + uVar17;
                if (bVar15 <= *pbVar18) goto LAB_006faa14;
                uVar17 = uVar17 + 1;
                bVar15 = *pbVar18;
              } while (local_18c != uVar17);
LAB_006faa10:
              uVar17 = local_18c;
LAB_006faa14:
              if (uVar17 < uVar6) goto LAB_006fa930;
              if (bVar2 < *pbVar7) {
                uVar11 = uVar17 >> 1;
                if (uVar11 != 0) goto LAB_006faa30;
                uVar17 = 1;
              }
            }
          }
          else {
            bVar15 = bVar2;
            if (local_18c != 2) {
              do {
                pbVar18 = pbVar7 + uVar17;
                if (*pbVar18 < bVar15) goto LAB_006faa14;
                uVar17 = uVar17 + 1;
                bVar15 = *pbVar18;
              } while (local_18c != uVar17);
              goto LAB_006faa10;
            }
          }
        }
        local_18c = uVar17 << 1 | 1;
      }
      uVar17 = uVar22 - (uVar20 >> 1);
      uVar11 = uVar22 + (local_18c >> 1);
      uVar12 = uVar11 + uVar22;
      lVar3 = (uVar4 & 0xffffffff) * (ulonglong)uVar12;
      lVar5 = uVar4 * CONCAT14(CARRY4(uVar17,uVar22),uVar17 + uVar22);
      uVar11 = (uint)CARRY4(uVar11,uVar22) * (int)uVar4 +
               uVar12 * (int)(uVar4 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20) ^
               (uint)((ulonglong)lVar5 >> 0x20);
      uVar17 = LZCOUNT((uint)lVar3 ^ (uint)lVar5) + 0x20;
      if (uVar11 != 0) {
        uVar17 = LZCOUNT(uVar11);
      }
    }
    if (1 < uVar13) {
      do {
        uVar11 = uVar13 - 1;
        if (abStack_67[uVar13] < uVar17) goto LAB_006facbc;
        uVar12 = local_170[uVar11];
        uVar13 = uVar12 >> 1;
        uVar21 = uVar13 + (uVar20 >> 1);
        if ((param_4 < uVar21) || (((uVar12 | uVar20) & 1) != 0)) {
          pbVar18 = (byte *)(param_1 + (uVar22 - uVar21));
          if ((uVar12 & 1) == 0) {
            FUN_006fad1c(pbVar18,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar20 >> 1;
          if ((uVar20 & 1) == 0) {
            FUN_006fad1c(pbVar18 + uVar13,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar12 && 1 < uVar20) {
            uVar20 = uVar13;
            if (uVar1 < uVar13) {
              uVar20 = uVar1;
            }
            if (uVar20 <= param_4) {
              pbVar16 = pbVar18 + uVar13;
              pbVar8 = pbVar18;
              if (uVar1 < uVar13) {
                pbVar8 = pbVar16;
              }
              FUN_01bed4e2(param_3,pbVar8,uVar20);
              pbVar8 = param_3 + uVar20;
              pbVar9 = param_3;
              if (uVar1 < uVar13) {
                pbVar19 = (byte *)(param_1 + -1 + uVar22);
                do {
                  bVar2 = pbVar16[-1];
                  bVar15 = pbVar8[-1];
                  bVar10 = bVar2;
                  if (bVar2 < bVar15) {
                    bVar10 = bVar15;
                  }
                  if (bVar2 <= bVar15) {
                    pbVar8 = pbVar8 + -1;
                  }
                  *pbVar19 = bVar10;
                  pbVar16 = pbVar16 + -1 + (bVar2 <= bVar15);
                } while ((pbVar16 != pbVar18) && (pbVar19 = pbVar19 + -1, pbVar8 != param_3));
                pbVar19 = pbVar16;
              }
              else {
                do {
                  bVar2 = *pbVar9;
                  bVar15 = *pbVar16;
                  bVar10 = bVar2;
                  if (bVar15 < bVar2) {
                    pbVar16 = pbVar16 + 1;
                    bVar10 = bVar15;
                  }
                  pbVar19 = pbVar18 + 1;
                  *pbVar18 = bVar10;
                  pbVar9 = pbVar9 + (bVar15 >= bVar2);
                } while ((pbVar9 != pbVar8) && (pbVar18 = pbVar19, pbVar16 != pbVar7));
              }
              FUN_01bed4e2(pbVar19,pbVar9,(int)pbVar8 - (int)pbVar9);
            }
          }
          uVar20 = uVar21 * 2 | 1;
        }
        else {
          uVar20 = uVar21 * 2;
        }
        uVar13 = uVar11;
      } while (1 < uVar11);
      uVar13 = 1;
    }
LAB_006facbc:
    abStack_67[uVar13 + 1] = (byte)uVar17;
    local_170[uVar13] = uVar20;
    if (param_2 <= uVar22) {
      if ((uVar20 & 1) == 0) {
        FUN_006fad1c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar13 = uVar13 + 1;
    uVar22 = uVar22 + (local_18c >> 1);
    uVar20 = local_18c;
  } while( true );
}

