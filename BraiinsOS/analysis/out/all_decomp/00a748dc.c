// FUN_00a748dc @ 00a748dc size=1496 calls_out=3 calls_in=2
// strings: 

void FUN_00a748dc(int param_1,uint param_2,float *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  float fVar17;
  uint uVar18;
  undefined4 uVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  ulonglong uVar36;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar36 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar36 & 0xffffffff);
  uVar5 = uVar36 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar36 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar36;
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
    iVar7 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar30 = 0;
  uVar18 = 0;
  uVar28 = 1;
  do {
    uVar13 = 0;
    uVar22 = 1;
    pfVar8 = (float *)(param_1 + uVar30 * 8);
    if (uVar30 < param_2) {
      uVar22 = param_2 - uVar30;
      if (uVar22 < uVar6) {
LAB_00a749d8:
        if (param_5 == 0) {
          if (uVar6 <= uVar22) {
            uVar22 = uVar6;
          }
          uVar22 = uVar22 << 1;
        }
        else {
          if (0x1f < uVar22) {
            uVar22 = 0x20;
          }
          FUN_00a5e24c(pfVar8,uVar22,param_3,param_4,0,0);
          uVar22 = uVar22 << 1 | 1;
        }
      }
      else {
        if (uVar22 < 2) {
          uVar13 = uVar22;
        }
        else {
          fVar17 = pfVar8[2];
          if (*pfVar8 <= fVar17) {
            uVar13 = 2;
            if (uVar22 != 2) {
              pfVar21 = (float *)(param_1 + 0x10 + uVar30 * 8);
              fVar34 = fVar17;
              do {
                fVar35 = *pfVar21;
                if (fVar35 < fVar34) goto joined_r0x00a74b10;
                uVar13 = uVar13 + 1;
                pfVar21 = pfVar21 + 2;
                fVar34 = fVar35;
              } while (uVar22 != uVar13);
              uVar13 = uVar22;
              if (uVar22 < uVar6) goto LAB_00a749d8;
              goto LAB_00a74b14;
            }
          }
          else if (uVar22 == 2) {
            uVar13 = 2;
            uVar22 = 1;
LAB_00a74b28:
            iVar7 = uVar30 * 8;
            iVar14 = param_1 + -4 + uVar13 * 8;
            iVar23 = param_1;
            iVar25 = param_1 + -8 + uVar13 * 8;
            do {
              puVar26 = (undefined4 *)(iVar25 + iVar7);
              uVar31 = *puVar26;
              puVar24 = (undefined4 *)(iVar23 + iVar7);
              uVar19 = *puVar24;
              uVar32 = puVar26[1];
              uVar22 = uVar22 - 1;
              *(undefined4 *)(iVar14 + iVar7) = puVar24[1];
              iVar14 = iVar14 + -8;
              *puVar26 = uVar19;
              *puVar24 = uVar31;
              puVar24[1] = uVar32;
              iVar23 = iVar23 + 8;
              iVar25 = iVar25 + -8;
            } while (uVar22 != 0);
          }
          else {
            uVar9 = 2;
            pfVar21 = (float *)(param_1 + 0x10 + uVar30 * 8);
            fVar34 = fVar17;
            do {
              fVar35 = *pfVar21;
              uVar13 = uVar9;
              if (fVar34 <= fVar35) break;
              uVar9 = uVar9 + 1;
              pfVar21 = pfVar21 + 2;
              fVar34 = fVar35;
              uVar13 = uVar22;
            } while (uVar22 != uVar9);
joined_r0x00a74b10:
            if (uVar13 < uVar6) goto LAB_00a749d8;
LAB_00a74b14:
            if (fVar17 < *pfVar8) {
              uVar22 = uVar13 >> 1;
              if (uVar22 != 0) goto LAB_00a74b28;
              uVar13 = 1;
            }
          }
        }
        uVar22 = uVar13 << 1 | 1;
      }
      uVar13 = uVar30 - (uVar28 >> 1);
      uVar9 = uVar13 + uVar30;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar15 = (uVar22 >> 1) + uVar30 * 2;
      lVar3 = (ulonglong)uVar15 * (uVar5 & 0xffffffff);
      uVar9 = iVar4 * uVar15 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar13,uVar30) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      uVar13 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      if (uVar9 != 0) {
        uVar13 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar18) {
      do {
        while( true ) {
          uVar9 = uVar18 - 1;
          if (abStack_67[uVar18] < uVar13) goto LAB_00a74e50;
          uVar27 = local_170[uVar9];
          uVar15 = uVar27 >> 1;
          uVar33 = uVar15 + (uVar28 >> 1);
          uVar18 = uVar9;
          if ((param_4 < uVar33) || (((uVar27 | uVar28) & 1) != 0)) break;
          uVar28 = uVar33 * 2;
          if (uVar9 < 2) goto LAB_00a74e3c;
        }
        pfVar21 = (float *)(param_1 + (uVar30 - uVar33) * 8);
        if ((uVar27 & 1) == 0) {
          FUN_00a5e24c(pfVar21,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar28 & 1) == 0) {
          FUN_00a5e24c(pfVar21 + uVar15 * 2,uVar28 >> 1,param_3,param_4,
                       LZCOUNT(uVar28 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar29 = uVar28 >> 1;
        if (1 < uVar27 && 1 < uVar28) {
          uVar28 = uVar15;
          if (uVar29 < uVar15) {
            uVar28 = uVar29;
          }
          if (uVar28 <= param_4) {
            pfVar16 = pfVar21 + uVar15 * 2;
            pfVar12 = pfVar21;
            if (uVar29 < uVar15) {
              pfVar12 = pfVar16;
            }
            FUN_016dd1aa(param_3,pfVar12,uVar28 << 3);
            pfVar10 = param_3 + uVar28 * 2;
            pfVar12 = param_3;
            if (uVar29 < uVar15) {
              pfVar11 = (float *)(param_1 + -8 + uVar30 * 8);
              pfVar20 = pfVar16;
              do {
                bVar1 = pfVar10[-2] < pfVar20[-2];
                pfVar16 = pfVar10 + -2;
                if (bVar1) {
                  pfVar16 = pfVar20 + -2;
                }
                fVar17 = pfVar16[1];
                *pfVar11 = *pfVar16;
                pfVar11[1] = fVar17;
                pfVar10 = pfVar10 + -2 + (uint)bVar1 * 2;
                pfVar20 = pfVar20 + -2 + (uint)!bVar1 * 2;
              } while ((pfVar20 != pfVar21) && (pfVar11 = pfVar11 + -2, pfVar10 != param_3));
            }
            else {
              pfVar20 = pfVar21;
              do {
                bVar1 = *pfVar16 < *pfVar12;
                pfVar21 = pfVar12;
                if (bVar1) {
                  pfVar21 = pfVar16;
                }
                fVar17 = pfVar21[1];
                *pfVar20 = *pfVar21;
                pfVar20[1] = fVar17;
                pfVar12 = pfVar12 + (uint)!bVar1 * 2;
                pfVar20 = pfVar20 + 2;
                if (pfVar12 != pfVar10) {
                  pfVar16 = pfVar16 + (uint)bVar1 * 2;
                }
              } while (pfVar12 != pfVar10 && pfVar16 != pfVar8);
            }
            FUN_016dd1aa(pfVar20,pfVar12,(int)pfVar10 - (int)pfVar12);
          }
        }
        uVar28 = uVar33 * 2 | 1;
      } while (1 < uVar9);
LAB_00a74e3c:
      uVar18 = 1;
    }
LAB_00a74e50:
    abStack_67[uVar18 + 1] = (byte)uVar13;
    local_170[uVar18] = uVar28;
    if (param_2 <= uVar30) {
      if ((uVar28 & 1) == 0) {
        FUN_00a5e24c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar30 = uVar30 + (uVar22 >> 1);
    uVar18 = uVar18 + 1;
    uVar28 = uVar22;
  } while( true );
}

