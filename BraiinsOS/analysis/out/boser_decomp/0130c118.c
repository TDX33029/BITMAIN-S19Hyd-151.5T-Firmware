// FUN_0130c118 @ 0130c118 size=1244 calls_out=3 calls_in=2
// strings: 

void FUN_0130c118(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  ulonglong uVar22;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar22 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar22 & 0xffffffff);
  uVar3 = uVar22 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar22 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar22;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar6 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar6) + (param_2 >> iVar6) >> 1;
  }
  uVar14 = 0;
  uVar13 = 0;
  uVar19 = 1;
  do {
    uVar17 = 0;
    puVar7 = (uint *)(param_1 + uVar14 * 4);
    local_18c = 1;
    if (uVar14 < param_2) {
      local_18c = param_2 - uVar14;
      if (local_18c < uVar5) {
LAB_0130c20c:
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
          FUN_0131354c(puVar7,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar17 = local_18c;
        }
        else {
          uVar11 = puVar7[1];
          uVar17 = 2;
          if (uVar11 < *puVar7) {
            if (local_18c != 2) {
              uVar12 = uVar11;
              do {
                puVar15 = puVar7 + uVar17;
                if (uVar12 <= *puVar15) goto LAB_0130c2f0;
                uVar17 = uVar17 + 1;
                uVar12 = *puVar15;
              } while (local_18c != uVar17);
              uVar17 = local_18c;
LAB_0130c2f0:
              goto LAB_0130c2f4;
            }
            uVar11 = 1;
LAB_0130c310:
            puVar15 = (uint *)(param_1 + -4 + uVar17 * 4 + uVar14 * 4);
            puVar9 = puVar7;
            do {
              uVar12 = *puVar15;
              uVar11 = uVar11 - 1;
              *puVar15 = *puVar9;
              *puVar9 = uVar12;
              puVar15 = puVar15 + -1;
              puVar9 = puVar9 + 1;
            } while (uVar11 != 0);
          }
          else if (local_18c != 2) {
            uVar12 = uVar11;
            do {
              puVar15 = puVar7 + uVar17;
              if (*puVar15 < uVar12) goto LAB_0130c2f4;
              uVar17 = uVar17 + 1;
              uVar12 = *puVar15;
            } while (local_18c != uVar17);
            uVar17 = local_18c;
LAB_0130c2f4:
            if (uVar17 < uVar5) goto LAB_0130c20c;
            if (uVar11 < *puVar7) {
              uVar11 = uVar17 >> 1;
              if (uVar11 != 0) goto LAB_0130c310;
              uVar17 = 1;
            }
          }
        }
        local_18c = uVar17 << 1 | 1;
      }
      uVar17 = uVar14 - (uVar19 >> 1);
      uVar11 = uVar14 + (local_18c >> 1);
      uVar12 = uVar11 + uVar14;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar12;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar17,uVar14),uVar17 + uVar14);
      uVar11 = (uint)CARRY4(uVar11,uVar14) * (int)uVar3 +
               uVar12 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar17 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar11 != 0) {
        uVar17 = LZCOUNT(uVar11);
      }
    }
    if (1 < uVar13) {
      do {
        uVar11 = uVar13 - 1;
        if (abStack_67[uVar13] < uVar17) goto LAB_0130c594;
        uVar12 = local_170[uVar11];
        uVar13 = uVar12 >> 1;
        uVar20 = uVar13 + (uVar19 >> 1);
        if ((param_4 < uVar20) || (((uVar12 | uVar19) & 1) != 0)) {
          puVar15 = (uint *)(param_1 + (uVar14 - uVar20) * 4);
          if ((uVar12 & 1) == 0) {
            FUN_0131354c(puVar15,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar19 >> 1;
          if ((uVar19 & 1) == 0) {
            FUN_0131354c(puVar15 + uVar13,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar12 && 1 < uVar19) {
            uVar19 = uVar13;
            if (uVar1 < uVar13) {
              uVar19 = uVar1;
            }
            if (uVar19 <= param_4) {
              puVar18 = puVar15 + uVar13;
              puVar9 = puVar15;
              if (uVar1 < uVar13) {
                puVar9 = puVar18;
              }
              FUN_01bed4e2(param_3,puVar9,uVar19 << 2);
              puVar8 = param_3 + uVar19;
              puVar9 = param_3;
              if (uVar1 < uVar13) {
                puVar10 = (uint *)(param_1 + -4 + uVar14 * 4);
                puVar16 = puVar18;
                do {
                  uVar19 = puVar16[-1];
                  uVar13 = puVar8[-1];
                  bVar21 = uVar13 < uVar19;
                  if (!bVar21 && uVar13 != uVar19) {
                    uVar19 = uVar13;
                  }
                  *puVar10 = uVar19;
                  puVar8 = puVar8 + -1 + bVar21;
                  puVar16 = puVar16 + -1 + !bVar21;
                } while ((puVar16 != puVar15) && (puVar10 = puVar10 + -1, puVar8 != param_3));
              }
              else {
                do {
                  uVar19 = *puVar18;
                  bVar21 = *puVar9 <= uVar19;
                  if (bVar21) {
                    uVar19 = *puVar9;
                  }
                  puVar16 = puVar15 + 1;
                  *puVar15 = uVar19;
                  puVar9 = puVar9 + bVar21;
                  if (puVar9 == puVar8) break;
                  puVar18 = puVar18 + !bVar21;
                  puVar15 = puVar16;
                } while (puVar18 != puVar7);
              }
              FUN_01bed4e2(puVar16,puVar9,(int)puVar8 - (int)puVar9);
            }
          }
          uVar19 = uVar20 * 2 | 1;
        }
        else {
          uVar19 = uVar20 * 2;
        }
        uVar13 = uVar11;
      } while (1 < uVar11);
      uVar13 = 1;
    }
LAB_0130c594:
    abStack_67[uVar13 + 1] = (byte)uVar17;
    local_170[uVar13] = uVar19;
    if (param_2 <= uVar14) {
      if ((uVar19 & 1) == 0) {
        FUN_0131354c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar13 = uVar13 + 1;
    uVar14 = uVar14 + (local_18c >> 1);
    uVar19 = local_18c;
  } while( true );
}

