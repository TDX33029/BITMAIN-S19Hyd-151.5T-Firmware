// FUN_0060d988 @ 0060d988 size=1380 calls_out=3 calls_in=2
// strings: 

void FUN_0060d988(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar4 = uVar27 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar27;
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
    iVar13 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar23 = 0;
  uVar16 = 0;
  uVar18 = 1;
  do {
    uVar10 = 0;
    uVar24 = 1;
    puVar6 = (uint *)(param_1 + uVar23 * 8);
    if (uVar23 < param_2) {
      uVar24 = param_2 - uVar23;
      if (uVar24 < uVar5) {
LAB_0060da7c:
        if (param_5 == 0) {
          if (uVar5 <= uVar24) {
            uVar24 = uVar5;
          }
          uVar24 = uVar24 << 1;
        }
        else {
          if (0x1f < uVar24) {
            uVar24 = 0x20;
          }
          FUN_0060fc80(puVar6,uVar24,param_3,param_4,0,0);
          uVar24 = uVar24 << 1 | 1;
        }
      }
      else {
        if (uVar24 < 2) {
          uVar7 = uVar24;
        }
        else {
          uVar10 = puVar6[2];
          if (uVar10 < *puVar6) {
            uVar7 = 2;
            if (uVar24 != 2) {
              uVar8 = uVar10;
              do {
                iVar13 = uVar7 * 2;
                if (uVar8 <= puVar6[iVar13]) goto LAB_0060db68;
                uVar7 = uVar7 + 1;
                uVar8 = puVar6[iVar13];
              } while (uVar24 != uVar7);
              goto LAB_0060db64;
            }
            uVar24 = 1;
LAB_0060db88:
            iVar13 = uVar23 * 8 + uVar7 * 8;
            iVar19 = 0;
            iVar17 = 0;
            do {
              puVar22 = (uint *)(param_1 + -8 + iVar13 + iVar19 * 8);
              uVar10 = *puVar22;
              puVar12 = puVar6 + iVar17 * 2;
              iVar17 = iVar17 + 1;
              *puVar22 = *puVar12;
              uVar8 = puVar22[1];
              *(uint *)(param_1 + -4 + iVar13 + iVar19 * 8) = puVar6[iVar19 * -2 + 1];
              iVar19 = iVar19 + -1;
              *puVar12 = uVar10;
              puVar12[1] = uVar8;
            } while (-iVar19 != uVar24);
          }
          else {
            uVar7 = 2;
            if (uVar24 != 2) {
              uVar8 = uVar10;
              do {
                iVar13 = uVar7 * 2;
                if (puVar6[iVar13] < uVar8) goto LAB_0060db68;
                uVar7 = uVar7 + 1;
                uVar8 = puVar6[iVar13];
              } while (uVar24 != uVar7);
LAB_0060db64:
              uVar7 = uVar24;
LAB_0060db68:
              if (uVar7 < uVar5) goto LAB_0060da7c;
              if (uVar10 < *puVar6) {
                uVar24 = uVar7 >> 1;
                if (uVar24 != 0) goto LAB_0060db88;
                uVar7 = 1;
              }
            }
          }
        }
        uVar24 = uVar7 << 1 | 1;
      }
      uVar7 = uVar23 - (uVar18 >> 1);
      uVar8 = uVar7 + uVar23;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar8;
      uVar14 = (uVar24 >> 1) + uVar23 * 2;
      lVar2 = (ulonglong)uVar14 * (uVar4 & 0xffffffff);
      uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar7 = iVar3 * uVar14 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar7,uVar23) * (int)uVar4 +
              uVar8 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar7 != 0) {
        uVar10 = LZCOUNT(uVar7);
      }
    }
    if (1 < uVar16) {
      do {
        while( true ) {
          uVar7 = uVar16 - 1;
          if (abStack_67[uVar16] < uVar10) goto LAB_0060de88;
          uVar14 = local_170[uVar7];
          uVar8 = uVar14 >> 1;
          uVar25 = uVar8 + (uVar18 >> 1);
          uVar16 = uVar7;
          if ((uVar25 <= param_4) && (((uVar14 | uVar18) & 1) == 0)) break;
          puVar22 = (uint *)(param_1 + (uVar23 - uVar25) * 8);
          if ((uVar14 & 1) == 0) {
            FUN_0060fc80(puVar22,uVar8,param_3,param_4,LZCOUNT(uVar8 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar18 & 1) == 0) {
            FUN_0060fc80(puVar22 + uVar8 * 2,uVar18 >> 1,param_3,param_4,
                         LZCOUNT(uVar18 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar21 = uVar18 >> 1;
          if (1 < uVar14 && 1 < uVar18) {
            uVar18 = uVar8;
            if (uVar21 < uVar8) {
              uVar18 = uVar21;
            }
            if (uVar18 <= param_4) {
              puVar20 = puVar22 + uVar8 * 2;
              puVar12 = puVar22;
              if (uVar21 < uVar8) {
                puVar12 = puVar20;
              }
              FUN_016dd1aa(param_3,puVar12,uVar18 << 3);
              puVar9 = param_3 + uVar18 * 2;
              puVar12 = param_3;
              if (uVar21 < uVar8) {
                puVar11 = (uint *)(param_1 + -8 + uVar23 * 8);
                do {
                  puVar20 = puVar20 + -2;
                  puVar9 = puVar9 + -2;
                  bVar26 = *puVar9 < *puVar20;
                  puVar15 = puVar9;
                  if (bVar26) {
                    puVar15 = puVar20;
                  }
                  uVar18 = puVar15[1];
                  *puVar11 = *puVar15;
                  puVar11[1] = uVar18;
                  puVar9 = puVar9 + (uint)bVar26 * 2;
                  puVar20 = puVar20 + (uint)!bVar26 * 2;
                } while ((puVar20 != puVar22) && (puVar11 = puVar11 + -2, puVar9 != param_3));
                puVar22 = puVar20;
              }
              else {
                do {
                  bVar26 = *puVar12 <= *puVar20;
                  puVar11 = puVar12;
                  if (!bVar26) {
                    puVar11 = puVar20;
                  }
                  uVar18 = puVar11[1];
                  *puVar22 = *puVar11;
                  puVar22[1] = uVar18;
                  puVar12 = puVar12 + (uint)bVar26 * 2;
                  puVar22 = puVar22 + 2;
                } while ((puVar12 != puVar9) &&
                        (puVar20 = puVar20 + (uint)!bVar26 * 2, puVar20 != puVar6));
              }
              FUN_016dd1aa(puVar22,puVar12,(int)puVar9 - (int)puVar12);
            }
          }
          uVar18 = uVar25 * 2 | 1;
          if (uVar7 < 2) goto LAB_0060de7c;
        }
        uVar18 = uVar25 * 2;
      } while (1 < uVar7);
LAB_0060de7c:
      uVar16 = 1;
    }
LAB_0060de88:
    abStack_67[uVar16 + 1] = (byte)uVar10;
    local_170[uVar16] = uVar18;
    if (param_2 <= uVar23) {
      if ((uVar18 & 1) == 0) {
        FUN_0060fc80(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar23 = uVar23 + (uVar24 >> 1);
    uVar18 = uVar24;
  } while( true );
}

