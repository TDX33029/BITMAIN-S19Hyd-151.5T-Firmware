// FUN_0167bb28 @ 0167bb28 size=1580 calls_out=3 calls_in=2
// strings: 

void FUN_0167bb28(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  uint uVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  bool bVar33;
  ulonglong uVar34;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar34 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar34 & 0xffffffff);
  uVar4 = uVar34 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar34 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar34;
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
    iVar7 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar17 = 1;
  uVar26 = 0;
  uVar24 = 0;
  do {
    uVar10 = 0;
    bVar9 = 0;
    uVar6 = 1;
    if (uVar26 < param_2) {
      iVar7 = param_1 + uVar26 * 0x18;
      uVar6 = param_2 - uVar26;
      if (uVar6 < uVar5) {
LAB_0167bc50:
        if (param_5 == 0) {
          if (uVar5 <= uVar6) {
            uVar6 = uVar5;
          }
          uVar6 = uVar6 << 1;
        }
        else {
          if (0x1f < uVar6) {
            uVar6 = 0x20;
          }
          FUN_01675d94(iVar7,uVar6,param_3,param_4,0,0);
          uVar6 = uVar6 << 1 | 1;
        }
      }
      else {
        if (uVar6 < 2) {
          uVar29 = uVar6;
        }
        else {
          uVar10 = *(uint *)(iVar7 + 0x28);
          if (uVar10 < *(uint *)(iVar7 + 0x10)) {
            if (uVar6 != 2) {
              uVar29 = 2;
              uVar8 = uVar10;
              puVar19 = (uint *)(param_1 + 0x40 + uVar26 * 0x18);
              do {
                if (uVar8 <= *puVar19) goto LAB_0167bd44;
                uVar29 = uVar29 + 1;
                uVar8 = *puVar19;
                puVar19 = puVar19 + 6;
              } while (uVar6 != uVar29);
              goto LAB_0167bd40;
            }
            uVar29 = 2;
            uVar6 = 1;
LAB_0167bd64:
            iVar14 = param_1 + -0xc + uVar29 * 0x18;
            iVar7 = uVar26 * 0x18;
            iVar20 = param_1;
            do {
              iVar11 = iVar14 + iVar7;
              puVar28 = (undefined4 *)(iVar20 + iVar7);
              uVar12 = *puVar28;
              iVar20 = iVar20 + 0x18;
              uVar6 = uVar6 - 1;
              *puVar28 = *(undefined4 *)(iVar11 + -0xc);
              *(undefined4 *)(iVar11 + -0xc) = uVar12;
              uVar12 = puVar28[1];
              puVar28[1] = *(undefined4 *)(iVar11 + -8);
              *(undefined4 *)(iVar11 + -8) = uVar12;
              uVar12 = puVar28[2];
              puVar28[2] = *(undefined4 *)(iVar11 + -4);
              *(undefined4 *)(iVar11 + -4) = uVar12;
              uVar12 = *(undefined4 *)(iVar14 + iVar7);
              *(undefined4 *)(iVar14 + iVar7) = puVar28[3];
              iVar14 = iVar14 + -0x18;
              puVar28[3] = uVar12;
              uVar12 = puVar28[4];
              puVar28[4] = *(undefined4 *)(iVar11 + 4);
              *(undefined4 *)(iVar11 + 4) = uVar12;
              uVar12 = *(undefined4 *)(iVar11 + 8);
              *(undefined4 *)(iVar11 + 8) = puVar28[5];
              puVar28[5] = uVar12;
            } while (uVar6 != 0);
          }
          else {
            uVar29 = 2;
            if (uVar6 != 2) {
              uVar8 = uVar10;
              puVar19 = (uint *)(param_1 + 0x40 + uVar26 * 0x18);
              do {
                if (*puVar19 < uVar8) goto LAB_0167bd44;
                uVar29 = uVar29 + 1;
                uVar8 = *puVar19;
                puVar19 = puVar19 + 6;
              } while (uVar6 != uVar29);
LAB_0167bd40:
              uVar29 = uVar6;
LAB_0167bd44:
              if (uVar29 < uVar5) goto LAB_0167bc50;
              if (uVar10 < *(uint *)(iVar7 + 0x10)) {
                uVar6 = uVar29 >> 1;
                if (uVar6 != 0) goto LAB_0167bd64;
                uVar29 = 1;
              }
            }
          }
        }
        uVar6 = uVar29 << 1 | 1;
      }
      uVar29 = uVar26 - (uVar17 >> 1);
      uVar8 = uVar29 + uVar26;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar8;
      uVar16 = (uVar6 >> 1) + uVar26 * 2;
      lVar2 = (ulonglong)uVar16 * (uVar4 & 0xffffffff);
      uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar29 = iVar3 * uVar16 + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)CARRY4(uVar29,uVar26) * (int)uVar4 +
               uVar8 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar29 != 0) {
        uVar10 = LZCOUNT(uVar29);
      }
      bVar9 = (byte)uVar10;
      if (uVar24 < 2) goto LAB_0167bc1c;
LAB_0167be78:
      do {
        while( true ) {
          uVar29 = uVar24 - 1;
          if (abStack_67[uVar24] < uVar10) goto LAB_0167c0e8;
          uVar23 = local_170[uVar29];
          uVar8 = uVar23 >> 1;
          uVar16 = uVar8 + (uVar17 >> 1);
          uVar24 = uVar29;
          if ((param_4 < uVar16) || (((uVar23 | uVar17) & 1) != 0)) break;
          uVar17 = uVar16 * 2;
          if (uVar29 < 2) goto LAB_0167c0e4;
        }
        puVar28 = (undefined4 *)(param_1 + (uVar26 - uVar16) * 0x18);
        if ((uVar23 & 1) == 0) {
          FUN_01675d94(puVar28,uVar8,param_3,param_4,LZCOUNT(uVar8 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar17 & 1) == 0) {
          FUN_01675d94(puVar28 + uVar8 * 6,uVar17 >> 1,param_3,param_4,
                       LZCOUNT(uVar17 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar30 = uVar17 >> 1;
        if (1 < uVar23 && 1 < uVar17) {
          uVar17 = uVar8;
          if (uVar30 < uVar8) {
            uVar17 = uVar30;
          }
          if (uVar17 <= param_4) {
            puVar15 = puVar28 + uVar8 * 6;
            puVar13 = puVar28;
            if (uVar30 < uVar8) {
              puVar13 = puVar15;
            }
            FUN_016dd1aa(param_3,puVar13,uVar17 * 0x18);
            puVar32 = param_3 + uVar17 * 6;
            puVar13 = param_3;
            if (uVar30 < uVar8) {
              puVar31 = (undefined4 *)(param_1 + -0x18 + uVar26 * 0x18);
              puVar27 = puVar15;
              do {
                bVar33 = (uint)puVar32[-2] < (uint)puVar27[-2];
                puVar15 = puVar32 + -6;
                if (bVar33) {
                  puVar15 = puVar27 + -6;
                }
                uVar12 = puVar15[1];
                uVar18 = puVar15[2];
                uVar21 = puVar15[3];
                uVar22 = puVar15[4];
                uVar25 = puVar15[5];
                *puVar31 = *puVar15;
                puVar31[1] = uVar12;
                puVar31[2] = uVar18;
                puVar31[3] = uVar21;
                puVar31[4] = uVar22;
                puVar31[5] = uVar25;
                puVar27 = puVar27 + -6 + ((uint)!bVar33 | (uint)!bVar33 << 1) * 2;
                puVar32 = puVar32 + -6 + ((uint)bVar33 | (uint)bVar33 << 1) * 2;
              } while ((puVar27 != puVar28) && (puVar31 = puVar31 + -6, puVar32 != param_3));
            }
            else {
              do {
                bVar33 = (uint)puVar13[4] <= (uint)puVar15[4];
                puVar31 = puVar13;
                if (!bVar33) {
                  puVar31 = puVar15;
                }
                puVar27 = puVar28 + 6;
                uVar12 = puVar31[1];
                uVar18 = puVar31[2];
                uVar21 = puVar31[3];
                uVar22 = puVar31[4];
                uVar25 = puVar31[5];
                *puVar28 = *puVar31;
                puVar28[1] = uVar12;
                puVar28[2] = uVar18;
                puVar28[3] = uVar21;
                puVar28[4] = uVar22;
                puVar28[5] = uVar25;
                puVar13 = puVar13 + ((uint)bVar33 | (uint)bVar33 << 1) * 2;
                if (puVar13 != puVar32) {
                  puVar15 = puVar15 + ((uint)!bVar33 | (uint)!bVar33 << 1) * 2;
                }
                puVar28 = puVar27;
              } while (puVar13 != puVar32 && puVar15 != (undefined4 *)(param_1 + uVar26 * 0x18));
            }
            FUN_016dd1aa(puVar27,puVar13,(int)puVar32 - (int)puVar13);
          }
        }
        uVar17 = uVar16 * 2 | 1;
      } while (1 < uVar29);
LAB_0167c0e4:
      uVar24 = 1;
LAB_0167c0e8:
      abStack_67[uVar24 + 1] = (byte)uVar10;
      local_170[uVar24] = uVar17;
      uVar10 = uVar17;
    }
    else {
      if (1 < uVar24) goto LAB_0167be78;
LAB_0167bc1c:
      abStack_67[uVar24 + 1] = bVar9;
      local_170[uVar24] = uVar17;
      uVar10 = uVar17;
    }
    uVar17 = uVar6;
    if (param_2 <= uVar26) {
      if ((uVar10 & 1) == 0) {
        FUN_01675d94(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar26 = uVar26 + (uVar17 >> 1);
    uVar24 = uVar24 + 1;
  } while( true );
}

