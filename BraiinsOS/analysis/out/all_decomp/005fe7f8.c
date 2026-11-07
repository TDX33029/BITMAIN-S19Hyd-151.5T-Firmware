// FUN_005fe7f8 @ 005fe7f8 size=1344 calls_out=3 calls_in=2
// strings: 

void FUN_005fe7f8(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_170 [66];
  byte abStack_67 [67];
  
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
    iVar6 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar6) + (param_2 >> iVar6) >> 1;
  }
  uVar20 = 1;
  uVar15 = 0;
  uVar14 = 0;
  do {
    uVar10 = 0;
    bVar9 = 0;
    uVar22 = 1;
    puVar7 = (uint *)(param_1 + uVar15 * 4);
    if (uVar15 < param_2) {
      uVar22 = param_2 - uVar15;
      if (uVar22 < uVar5) {
LAB_005fe908:
        if (param_5 == 0) {
          if (uVar5 <= uVar22) {
            uVar22 = uVar5;
          }
          uVar22 = uVar22 << 1;
        }
        else {
          if (0x1f < uVar22) {
            uVar22 = 0x20;
          }
          FUN_005f9c34(puVar7,uVar22,param_3,param_4,0,0);
          uVar22 = uVar22 << 1 | 1;
        }
      }
      else {
        if (uVar22 < 2) {
          uVar10 = uVar22;
        }
        else {
          uVar23 = puVar7[1];
          uVar10 = 2;
          if (uVar23 < *puVar7) {
            if (uVar22 != 2) {
              uVar13 = uVar23;
              do {
                puVar17 = puVar7 + uVar10;
                if (uVar13 <= *puVar17) goto LAB_005fe9f4;
                uVar10 = uVar10 + 1;
                uVar13 = *puVar17;
              } while (uVar22 != uVar10);
              uVar10 = uVar22;
LAB_005fe9f4:
              if (uVar5 <= uVar10) goto LAB_005fea18;
              goto LAB_005fe908;
            }
            uVar22 = 1;
LAB_005fea28:
            puVar17 = (uint *)(param_1 + -4 + uVar10 * 4 + uVar15 * 4);
            puVar12 = puVar7;
            do {
              uVar23 = *puVar17;
              uVar22 = uVar22 - 1;
              *puVar17 = *puVar12;
              *puVar12 = uVar23;
              puVar17 = puVar17 + -1;
              puVar12 = puVar12 + 1;
            } while (uVar22 != 0);
          }
          else if (uVar22 != 2) {
            uVar13 = uVar23;
            do {
              puVar17 = puVar7 + uVar10;
              uVar19 = uVar10;
              if (*puVar17 < uVar13) break;
              uVar10 = uVar10 + 1;
              uVar13 = *puVar17;
              uVar19 = uVar22;
            } while (uVar22 != uVar10);
            uVar10 = uVar19;
            if (uVar10 < uVar5) goto LAB_005fe908;
LAB_005fea18:
            if (uVar23 < *puVar7) {
              uVar22 = uVar10 >> 1;
              if (uVar22 != 0) goto LAB_005fea28;
              uVar10 = 1;
            }
          }
        }
        uVar22 = uVar10 << 1 | 1;
      }
      uVar23 = uVar15 - (uVar20 >> 1);
      uVar13 = uVar23 + uVar15;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar13;
      uVar19 = (uVar22 >> 1) + uVar15 * 2;
      lVar2 = (ulonglong)uVar19 * (uVar4 & 0xffffffff);
      uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar23 = iVar3 * uVar19 + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)CARRY4(uVar23,uVar15) * (int)uVar4 +
               uVar13 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar23 != 0) {
        uVar10 = LZCOUNT(uVar23);
      }
      bVar9 = (byte)uVar10;
      if (uVar14 < 2) goto LAB_005fe8e0;
LAB_005feac8:
      do {
        while( true ) {
          uVar23 = uVar14 - 1;
          if (abStack_67[uVar14] < uVar10) goto LAB_005fecd0;
          uVar19 = local_170[uVar23];
          uVar13 = uVar19 >> 1;
          uVar24 = uVar13 + (uVar20 >> 1);
          uVar14 = uVar23;
          if ((param_4 < uVar24) || (((uVar19 | uVar20) & 1) != 0)) break;
          uVar20 = uVar24 * 2;
          if (uVar23 < 2) goto LAB_005feccc;
        }
        puVar17 = (uint *)(param_1 + (uVar15 - uVar24) * 4);
        if ((uVar19 & 1) == 0) {
          FUN_005f9c34(puVar17,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar20 & 1) == 0) {
          FUN_005f9c34(puVar17 + uVar13,uVar20 >> 1,param_3,param_4,
                       LZCOUNT(uVar20 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar21 = uVar20 >> 1;
        if (1 < uVar19 && 1 < uVar20) {
          uVar20 = uVar13;
          if (uVar21 < uVar13) {
            uVar20 = uVar21;
          }
          if (uVar20 <= param_4) {
            puVar18 = puVar17 + uVar13;
            puVar12 = puVar17;
            if (uVar21 < uVar13) {
              puVar12 = puVar18;
            }
            FUN_016dd1aa(param_3,puVar12,uVar20 << 2);
            puVar8 = param_3 + uVar20;
            puVar12 = param_3;
            if (uVar21 < uVar13) {
              puVar11 = (uint *)(param_1 + -4 + uVar15 * 4);
              puVar16 = puVar18;
              do {
                uVar20 = puVar16[-1];
                uVar13 = puVar8[-1];
                bVar25 = uVar13 < uVar20;
                if (!bVar25 && uVar13 != uVar20) {
                  uVar20 = uVar13;
                }
                *puVar11 = uVar20;
                puVar8 = puVar8 + -1 + bVar25;
                puVar16 = puVar16 + -1 + !bVar25;
              } while ((puVar16 != puVar17) && (puVar11 = puVar11 + -1, puVar8 != param_3));
            }
            else {
              do {
                uVar20 = *puVar18;
                bVar25 = *puVar12 <= uVar20;
                if (bVar25) {
                  uVar20 = *puVar12;
                }
                puVar16 = puVar17 + 1;
                *puVar17 = uVar20;
                puVar12 = puVar12 + bVar25;
                if (puVar12 == puVar8) break;
                puVar18 = puVar18 + !bVar25;
                puVar17 = puVar16;
              } while (puVar18 != puVar7);
            }
            FUN_016dd1aa(puVar16,puVar12,(int)puVar8 - (int)puVar12);
          }
        }
        uVar20 = uVar24 * 2 | 1;
      } while (1 < uVar23);
LAB_005feccc:
      uVar14 = 1;
LAB_005fecd0:
      abStack_67[uVar14 + 1] = (byte)uVar10;
      local_170[uVar14] = uVar20;
      uVar10 = uVar20;
      uVar20 = uVar22;
    }
    else {
      if (1 < uVar14) goto LAB_005feac8;
LAB_005fe8e0:
      abStack_67[uVar14 + 1] = bVar9;
      local_170[uVar14] = uVar20;
      uVar10 = uVar20;
      uVar20 = uVar22;
    }
    if (param_2 <= uVar15) {
      if ((uVar10 & 1) == 0) {
        FUN_005f9c34(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + (uVar20 >> 1);
    uVar14 = uVar14 + 1;
  } while( true );
}

