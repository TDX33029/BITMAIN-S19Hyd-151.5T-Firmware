// FUN_00b71634 @ 00b71634 size=1772 calls_out=3 calls_in=2
// strings: 

void FUN_00b71634(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar2 = uVar27 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar27;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar16 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar16) + (param_2 >> iVar16) >> 1;
  }
  uVar12 = 0;
  uVar14 = 0;
  uVar21 = 1;
  do {
    uVar6 = 0;
    uVar24 = 1;
    if (uVar12 < param_2) {
      uVar24 = param_2 - uVar12;
      puVar5 = (uint *)(param_1 + uVar12 * 0x50);
      if (uVar24 < uVar4) {
LAB_00b7172c:
        if (param_5 == 0) {
          if (uVar4 <= uVar24) {
            uVar24 = uVar4;
          }
          uVar24 = uVar24 << 1;
        }
        else {
          if (0x1f < uVar24) {
            uVar24 = 0x20;
          }
          FUN_00b71d20(puVar5,uVar24,param_3,param_4,0,0);
          uVar24 = uVar24 << 1 | 1;
        }
      }
      else {
        if (uVar24 < 2) {
          uVar10 = uVar24;
        }
        else {
          uVar6 = puVar5[0x14];
          if (uVar6 < *puVar5) {
            if (uVar24 != 2) {
              uVar10 = 2;
              uVar11 = uVar6;
              puVar8 = (uint *)(param_1 + 0xa0 + uVar12 * 0x50);
              do {
                if (uVar11 <= *puVar8) goto LAB_00b71834;
                uVar10 = uVar10 + 1;
                uVar11 = *puVar8;
                puVar8 = puVar8 + 0x14;
              } while (uVar24 != uVar10);
              uVar10 = uVar24;
LAB_00b71834:
              if (uVar4 <= uVar10) goto LAB_00b71844;
              goto LAB_00b7172c;
            }
            uVar10 = 2;
            uVar24 = 1;
LAB_00b71854:
            iVar16 = uVar12 * 0x50;
            iVar9 = param_1 + -0x28 + uVar10 * 0x50;
            iVar13 = param_1;
            do {
              iVar20 = iVar9 + iVar16;
              puVar17 = (undefined4 *)(iVar13 + iVar16);
              uVar7 = *puVar17;
              iVar13 = iVar13 + 0x50;
              uVar24 = uVar24 - 1;
              *puVar17 = *(undefined4 *)(iVar20 + -0x28);
              *(undefined4 *)(iVar20 + -0x28) = uVar7;
              uVar7 = puVar17[1];
              puVar17[1] = *(undefined4 *)(iVar20 + -0x24);
              *(undefined4 *)(iVar20 + -0x24) = uVar7;
              uVar7 = puVar17[2];
              puVar17[2] = *(undefined4 *)(iVar20 + -0x20);
              *(undefined4 *)(iVar20 + -0x20) = uVar7;
              uVar7 = puVar17[3];
              puVar17[3] = *(undefined4 *)(iVar20 + -0x1c);
              *(undefined4 *)(iVar20 + -0x1c) = uVar7;
              uVar7 = puVar17[4];
              puVar17[4] = *(undefined4 *)(iVar20 + -0x18);
              *(undefined4 *)(iVar20 + -0x18) = uVar7;
              uVar7 = puVar17[5];
              puVar17[5] = *(undefined4 *)(iVar20 + -0x14);
              *(undefined4 *)(iVar20 + -0x14) = uVar7;
              uVar7 = puVar17[6];
              puVar17[6] = *(undefined4 *)(iVar20 + -0x10);
              *(undefined4 *)(iVar20 + -0x10) = uVar7;
              uVar7 = puVar17[7];
              puVar17[7] = *(undefined4 *)(iVar20 + -0xc);
              *(undefined4 *)(iVar20 + -0xc) = uVar7;
              uVar7 = puVar17[8];
              puVar17[8] = *(undefined4 *)(iVar20 + -8);
              *(undefined4 *)(iVar20 + -8) = uVar7;
              uVar7 = puVar17[9];
              puVar17[9] = *(undefined4 *)(iVar20 + -4);
              *(undefined4 *)(iVar20 + -4) = uVar7;
              uVar7 = *(undefined4 *)(iVar9 + iVar16);
              *(undefined4 *)(iVar9 + iVar16) = puVar17[10];
              iVar9 = iVar9 + -0x50;
              puVar17[10] = uVar7;
              uVar7 = puVar17[0xb];
              puVar17[0xb] = *(undefined4 *)(iVar20 + 4);
              *(undefined4 *)(iVar20 + 4) = uVar7;
              uVar7 = *(undefined4 *)(iVar20 + 8);
              *(undefined4 *)(iVar20 + 8) = puVar17[0xc];
              puVar17[0xc] = uVar7;
              uVar7 = puVar17[0xd];
              puVar17[0xd] = *(undefined4 *)(iVar20 + 0xc);
              *(undefined4 *)(iVar20 + 0xc) = uVar7;
              uVar7 = *(undefined4 *)(iVar20 + 0x10);
              *(undefined4 *)(iVar20 + 0x10) = puVar17[0xe];
              puVar17[0xe] = uVar7;
              uVar7 = puVar17[0xf];
              puVar17[0xf] = *(undefined4 *)(iVar20 + 0x14);
              *(undefined4 *)(iVar20 + 0x14) = uVar7;
              uVar7 = *(undefined4 *)(iVar20 + 0x18);
              *(undefined4 *)(iVar20 + 0x18) = puVar17[0x10];
              puVar17[0x10] = uVar7;
              uVar7 = puVar17[0x11];
              puVar17[0x11] = *(undefined4 *)(iVar20 + 0x1c);
              *(undefined4 *)(iVar20 + 0x1c) = uVar7;
              uVar7 = *(undefined4 *)(iVar20 + 0x20);
              *(undefined4 *)(iVar20 + 0x20) = puVar17[0x12];
              puVar17[0x12] = uVar7;
              uVar7 = puVar17[0x13];
              puVar17[0x13] = *(undefined4 *)(iVar20 + 0x24);
              *(undefined4 *)(iVar20 + 0x24) = uVar7;
            } while (uVar24 != 0);
          }
          else {
            uVar10 = 2;
            if (uVar24 != 2) {
              uVar11 = uVar6;
              puVar8 = (uint *)(param_1 + 0xa0 + uVar12 * 0x50);
              do {
                if (*puVar8 < uVar11) goto LAB_00b717ec;
                uVar10 = uVar10 + 1;
                uVar11 = *puVar8;
                puVar8 = puVar8 + 0x14;
              } while (uVar24 != uVar10);
              uVar10 = uVar24;
LAB_00b717ec:
              if (uVar10 < uVar4) goto LAB_00b7172c;
LAB_00b71844:
              if (uVar6 < *puVar5) {
                uVar24 = uVar10 >> 1;
                if (uVar24 != 0) goto LAB_00b71854;
                uVar10 = 1;
              }
            }
          }
        }
        uVar24 = uVar10 << 1 | 1;
      }
      uVar6 = uVar12 - (uVar21 >> 1);
      uVar10 = uVar12 + (uVar24 >> 1);
      uVar11 = uVar10 + uVar12;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar6,uVar12),uVar6 + uVar12);
      uVar10 = (uint)CARRY4(uVar10,uVar12) * (int)uVar2 +
               uVar11 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar6 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar10 != 0) {
        uVar6 = LZCOUNT(uVar10);
      }
    }
    if (1 < uVar14) {
      do {
        while( true ) {
          uVar10 = uVar14 - 1;
          if (abStack_67[uVar14] < uVar6) goto LAB_00b71cb0;
          uVar18 = local_170[uVar10];
          uVar11 = uVar18 >> 1;
          uVar25 = uVar11 + (uVar21 >> 1);
          uVar14 = uVar10;
          if ((uVar25 <= param_4) && (((uVar18 | uVar21) & 1) == 0)) break;
          puVar5 = (uint *)(param_1 + (uVar12 - uVar25) * 0x50);
          if ((uVar18 & 1) == 0) {
            FUN_00b71d20(puVar5,uVar11,param_3,param_4,LZCOUNT(uVar11 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar21 & 1) == 0) {
            FUN_00b71d20(puVar5 + uVar11 * 0x14,uVar21 >> 1,param_3,param_4,
                         LZCOUNT(uVar21 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar15 = uVar21 >> 1;
          if (1 < uVar18 && 1 < uVar21) {
            uVar21 = uVar11;
            if (uVar15 < uVar11) {
              uVar21 = uVar15;
            }
            if (uVar21 <= param_4) {
              puVar19 = puVar5 + uVar11 * 0x14;
              puVar8 = puVar5;
              if (uVar15 < uVar11) {
                puVar8 = puVar19;
              }
              FUN_016dd1aa(param_3,puVar8,uVar21 * 0x50);
              puVar23 = param_3 + uVar21 * 0x14;
              puVar8 = param_3;
              if (uVar15 < uVar11) {
                iVar16 = param_1 + -0x50 + uVar12 * 0x50;
                do {
                  puVar19 = puVar19 + -0x14;
                  puVar22 = puVar23 + -0x14;
                  bVar26 = *puVar19 <= *puVar22;
                  puVar23 = puVar22 + ((uint)!bVar26 | (uint)!bVar26 << 2) * 4;
                  if (!bVar26) {
                    puVar22 = puVar19;
                  }
                  FUN_016dd1aa(iVar16,puVar22,0x50);
                  puVar19 = puVar19 + ((uint)bVar26 | (uint)bVar26 << 2) * 4;
                  if (puVar19 == puVar5) {
                    puVar5 = puVar19;
                    goto LAB_00b71c88;
                  }
                  iVar16 = iVar16 + -0x50;
                } while (puVar23 != param_3);
                puVar5 = puVar19;
              }
              else {
                do {
                  bVar26 = *puVar19 < *puVar8;
                  puVar22 = puVar8;
                  if (bVar26) {
                    puVar22 = puVar19;
                  }
                  FUN_016dd1aa(puVar5,puVar22,0x50);
                  puVar5 = puVar5 + 0x14;
                  puVar8 = puVar8 + ((uint)!bVar26 | (uint)!bVar26 << 2) * 4;
                } while ((puVar8 != puVar23) &&
                        (puVar19 = puVar19 + ((uint)bVar26 | (uint)bVar26 << 2) * 4,
                        puVar19 != (uint *)(param_1 + uVar12 * 0x50)));
              }
LAB_00b71c88:
              FUN_016dd1aa(puVar5,puVar8,(int)puVar23 - (int)puVar8);
            }
          }
          uVar21 = uVar25 * 2 | 1;
          if (uVar10 < 2) goto LAB_00b71ca8;
        }
        uVar21 = uVar25 * 2;
      } while (1 < uVar10);
LAB_00b71ca8:
      uVar14 = 1;
    }
LAB_00b71cb0:
    abStack_67[uVar14 + 1] = (byte)uVar6;
    local_170[uVar14] = uVar21;
    if (param_2 <= uVar12) {
      if ((uVar21 & 1) == 0) {
        FUN_00b71d20(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar12 = uVar12 + (uVar24 >> 1);
    uVar21 = uVar24;
  } while( true );
}

