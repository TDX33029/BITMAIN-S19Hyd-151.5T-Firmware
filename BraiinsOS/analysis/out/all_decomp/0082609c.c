// FUN_0082609c @ 0082609c size=1304 calls_out=3 calls_in=2
// strings: 

void FUN_0082609c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  ulonglong uVar24;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar24 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar24 & 0xffffffff);
  uVar2 = uVar24 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar24 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar24;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar5 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar5) + (param_2 >> iVar5) >> 1;
  }
  uVar19 = 1;
  uVar12 = 0;
  uVar11 = 0;
  do {
    uVar16 = 0;
    bVar15 = 0;
    puVar6 = (uint *)(param_1 + uVar12 * 4);
    local_18c = 1;
    if (uVar12 < param_2) {
      local_18c = param_2 - uVar12;
      if (local_18c < uVar4) {
LAB_008261ac:
        if (param_5 == 0) {
          if (uVar4 <= local_18c) {
            local_18c = uVar4;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_007e2694(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar16 = local_18c;
        }
        else {
          uVar21 = puVar6[1];
          uVar16 = 2;
          if (uVar21 < *puVar6) {
            if (local_18c != 2) {
              uVar10 = uVar21;
              do {
                puVar14 = puVar6 + uVar16;
                if (uVar10 <= *puVar14) goto LAB_00826290;
                uVar16 = uVar16 + 1;
                uVar10 = *puVar14;
              } while (local_18c != uVar16);
              uVar16 = local_18c;
LAB_00826290:
              goto LAB_00826294;
            }
            uVar21 = 1;
LAB_008262b0:
            puVar14 = (uint *)(param_1 + -4 + uVar16 * 4 + uVar12 * 4);
            puVar8 = puVar6;
            do {
              uVar10 = *puVar14;
              uVar21 = uVar21 - 1;
              *puVar14 = *puVar8;
              *puVar8 = uVar10;
              puVar14 = puVar14 + -1;
              puVar8 = puVar8 + 1;
            } while (uVar21 != 0);
          }
          else if (local_18c != 2) {
            uVar10 = uVar21;
            do {
              puVar14 = puVar6 + uVar16;
              if (*puVar14 < uVar10) goto LAB_00826294;
              uVar16 = uVar16 + 1;
              uVar10 = *puVar14;
            } while (local_18c != uVar16);
            uVar16 = local_18c;
LAB_00826294:
            if (uVar16 < uVar4) goto LAB_008261ac;
            if (uVar21 < *puVar6) {
              uVar21 = uVar16 >> 1;
              if (uVar21 != 0) goto LAB_008262b0;
              uVar16 = 1;
            }
          }
        }
        local_18c = uVar16 << 1 | 1;
      }
      uVar16 = uVar12 - (uVar19 >> 1);
      uVar21 = uVar12 + (local_18c >> 1);
      uVar10 = uVar21 + uVar12;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar10;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar16,uVar12),uVar16 + uVar12);
      uVar21 = (uint)CARRY4(uVar21,uVar12) * (int)uVar2 +
               uVar10 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar16 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar21 != 0) {
        uVar16 = LZCOUNT(uVar21);
      }
      bVar15 = (byte)uVar16;
      if (1 < uVar11) goto LAB_00826354;
LAB_00826188:
      abStack_67[uVar11 + 1] = bVar15;
      local_170[uVar11] = uVar19;
      uVar16 = uVar19;
      uVar19 = local_18c;
    }
    else {
      if (uVar11 < 2) goto LAB_00826188;
LAB_00826354:
      do {
        while( true ) {
          uVar21 = uVar11 - 1;
          if (abStack_67[uVar11] < uVar16) goto LAB_00826550;
          uVar18 = local_170[uVar21];
          uVar10 = uVar18 >> 1;
          uVar22 = uVar10 + (uVar19 >> 1);
          uVar11 = uVar21;
          if ((param_4 < uVar22) || (((uVar18 | uVar19) & 1) != 0)) break;
          uVar19 = uVar22 * 2;
          if (uVar21 < 2) goto LAB_0082654c;
        }
        puVar14 = (uint *)(param_1 + (uVar12 - uVar22) * 4);
        if ((uVar18 & 1) == 0) {
          FUN_007e2694(puVar14,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar19 & 1) == 0) {
          FUN_007e2694(puVar14 + uVar10,uVar19 >> 1,param_3,param_4,
                       LZCOUNT(uVar19 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar20 = uVar19 >> 1;
        if (1 < uVar18 && 1 < uVar19) {
          uVar19 = uVar10;
          if (uVar20 < uVar10) {
            uVar19 = uVar20;
          }
          if (uVar19 <= param_4) {
            puVar17 = puVar14 + uVar10;
            puVar8 = puVar14;
            if (uVar20 < uVar10) {
              puVar8 = puVar17;
            }
            FUN_016dd1aa(param_3,puVar8,uVar19 << 2);
            puVar7 = param_3 + uVar19;
            puVar8 = param_3;
            if (uVar20 < uVar10) {
              puVar9 = (uint *)(param_1 + -4 + uVar12 * 4);
              puVar13 = puVar17;
              do {
                uVar19 = puVar13[-1];
                uVar10 = puVar7[-1];
                bVar23 = uVar10 < uVar19;
                if (!bVar23 && uVar10 != uVar19) {
                  uVar19 = uVar10;
                }
                *puVar9 = uVar19;
                puVar7 = puVar7 + -1 + bVar23;
                puVar13 = puVar13 + -1 + !bVar23;
                puVar9 = puVar9 + -1;
              } while (puVar13 != puVar14 && puVar7 != param_3);
            }
            else {
              do {
                uVar19 = *puVar17;
                bVar23 = *puVar8 <= uVar19;
                if (bVar23) {
                  uVar19 = *puVar8;
                }
                puVar13 = puVar14 + 1;
                *puVar14 = uVar19;
                puVar8 = puVar8 + bVar23;
                if (puVar8 == puVar7) break;
                puVar17 = puVar17 + !bVar23;
                puVar14 = puVar13;
              } while (puVar17 != puVar6);
            }
            FUN_016dd1aa(puVar13,puVar8,(int)puVar7 - (int)puVar8);
          }
        }
        uVar19 = uVar22 * 2 | 1;
      } while (1 < uVar21);
LAB_0082654c:
      uVar11 = 1;
LAB_00826550:
      abStack_67[uVar11 + 1] = (byte)uVar16;
      local_170[uVar11] = uVar19;
      uVar16 = uVar19;
      uVar19 = local_18c;
    }
    if (param_2 <= uVar12) {
      if ((uVar16 & 1) == 0) {
        FUN_007e2694(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar11 = uVar11 + 1;
    uVar12 = uVar12 + (uVar19 >> 1);
  } while( true );
}

