// FUN_00b7b2b4 @ 00b7b2b4 size=1344 calls_out=3 calls_in=2
// strings: 

void FUN_00b7b2b4(int param_1,uint param_2,double *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  uint uVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  double *pdVar16;
  double *pdVar17;
  undefined4 uVar18;
  double *pdVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong uVar28;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar28 = FUN_01846088(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar5 = uVar28 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar28;
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
  uVar23 = 0;
  uVar15 = 0;
  uVar21 = 1;
  do {
    pdVar8 = (double *)(param_1 + uVar23 * 8);
    uVar12 = 0;
    local_184 = 1;
    if (uVar23 < param_2) {
      local_184 = param_2 - uVar23;
      if (local_184 < uVar6) {
LAB_00b7b3a4:
        if (param_5 == 0) {
          if (uVar6 <= local_184) {
            local_184 = uVar6;
          }
          local_184 = local_184 << 1;
        }
        else {
          if (0x1f < local_184) {
            local_184 = 0x20;
          }
          FUN_00b7b7f4(pdVar8,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar12 = local_184;
        }
        else {
          dVar25 = pdVar8[1];
          if (*pdVar8 <= dVar25) {
            uVar12 = 2;
            if (local_184 != 2) {
              pdVar17 = (double *)(param_1 + 0x10 + uVar23 * 8);
              uVar12 = 2;
              dVar26 = dVar25;
              do {
                dVar27 = *pdVar17;
                if (dVar27 < dVar26) goto LAB_00b7b4ac;
                uVar12 = uVar12 + 1;
                pdVar17 = pdVar17 + 1;
                dVar26 = dVar27;
              } while (local_184 != uVar12);
              goto LAB_00b7b4a8;
            }
          }
          else if (local_184 == 2) {
            uVar12 = 2;
            uVar9 = 1;
LAB_00b7b4cc:
            pdVar13 = (double *)(param_1 + -8 + uVar12 * 8 + uVar23 * 8);
            pdVar17 = pdVar8;
            do {
              dVar25 = *pdVar17;
              uVar9 = uVar9 - 1;
              uVar18 = *(undefined4 *)((int)pdVar13 + 4);
              *(undefined4 *)pdVar17 = *(undefined4 *)pdVar13;
              *(undefined4 *)((int)pdVar17 + 4) = uVar18;
              pdVar17 = pdVar17 + 1;
              *pdVar13 = dVar25;
              pdVar13 = pdVar13 + -1;
            } while (uVar9 != 0);
          }
          else {
            pdVar17 = (double *)(param_1 + 0x10 + uVar23 * 8);
            uVar12 = 2;
            dVar26 = dVar25;
            do {
              dVar27 = *pdVar17;
              if (dVar26 <= dVar27) goto LAB_00b7b4ac;
              uVar12 = uVar12 + 1;
              pdVar17 = pdVar17 + 1;
              dVar26 = dVar27;
            } while (local_184 != uVar12);
LAB_00b7b4a8:
            uVar12 = local_184;
LAB_00b7b4ac:
            if (uVar12 < uVar6) goto LAB_00b7b3a4;
            if (dVar25 < *pdVar8) {
              uVar9 = uVar12 >> 1;
              if (uVar9 != 0) goto LAB_00b7b4cc;
              uVar12 = 1;
            }
          }
        }
        local_184 = uVar12 << 1 | 1;
      }
      uVar12 = uVar23 - (uVar21 >> 1);
      uVar9 = uVar12 + uVar23;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar14 = (local_184 >> 1) + uVar23 * 2;
      lVar3 = (ulonglong)uVar14 * (uVar5 & 0xffffffff);
      uVar9 = iVar4 * uVar14 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar12,uVar23) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      if (uVar9 != 0) {
        uVar12 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar9 = uVar15 - 1;
          if (abStack_67[uVar15] < uVar12) goto LAB_00b7b790;
          uVar20 = local_170[uVar9];
          uVar14 = uVar20 >> 1;
          uVar24 = uVar14 + (uVar21 >> 1);
          uVar15 = uVar9;
          if ((param_4 < uVar24) || (((uVar20 | uVar21) & 1) != 0)) break;
          uVar21 = uVar24 * 2;
          if (uVar9 < 2) goto LAB_00b7b784;
        }
        pdVar17 = (double *)(param_1 + (uVar23 - uVar24) * 8);
        if ((uVar20 & 1) == 0) {
          FUN_00b7b7f4(pdVar17,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar21 & 1) == 0) {
          FUN_00b7b7f4(pdVar17 + uVar14,uVar21 >> 1,param_3,param_4,
                       LZCOUNT(uVar21 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar22 = uVar21 >> 1;
        if (1 < uVar20 && 1 < uVar21) {
          uVar21 = uVar14;
          if (uVar22 < uVar14) {
            uVar21 = uVar22;
          }
          if (uVar21 <= param_4) {
            pdVar19 = pdVar17 + uVar14;
            pdVar13 = pdVar17;
            if (uVar22 < uVar14) {
              pdVar13 = pdVar19;
            }
            FUN_016dd1aa(param_3,pdVar13,uVar21 << 3);
            pdVar10 = param_3 + uVar21;
            pdVar13 = param_3;
            if (uVar22 < uVar14) {
              pdVar11 = (double *)(param_1 + -8 + uVar23 * 8);
              pdVar16 = pdVar19;
              do {
                bVar1 = pdVar10[-1] < pdVar16[-1];
                dVar25 = pdVar10[-1];
                if (bVar1) {
                  dVar25 = pdVar16[-1];
                }
                pdVar10 = pdVar10 + (bVar1 - 1);
                pdVar16 = pdVar16 + (!bVar1 - 1);
                *pdVar11 = dVar25;
              } while ((pdVar16 != pdVar17) && (pdVar11 = pdVar11 + -1, pdVar10 != param_3));
            }
            else {
              pdVar16 = pdVar17;
              do {
                dVar25 = *pdVar19;
                bVar1 = *pdVar13 <= dVar25;
                if (bVar1) {
                  dVar25 = *pdVar13;
                }
                pdVar13 = pdVar13 + bVar1;
                *pdVar16 = dVar25;
                pdVar16 = pdVar16 + 1;
              } while ((pdVar13 != pdVar10) && (pdVar19 = pdVar19 + !bVar1, pdVar19 != pdVar8));
            }
            FUN_016dd1aa(pdVar16,pdVar13,(int)pdVar10 - (int)pdVar13);
          }
        }
        uVar21 = uVar24 * 2 | 1;
      } while (1 < uVar9);
LAB_00b7b784:
      uVar15 = 1;
    }
LAB_00b7b790:
    abStack_67[uVar15 + 1] = (byte)uVar12;
    local_170[uVar15] = uVar21;
    if (param_2 <= uVar23) {
      if ((uVar21 & 1) == 0) {
        FUN_00b7b7f4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + 1;
    uVar23 = uVar23 + (local_184 >> 1);
    uVar21 = local_184;
  } while( true );
}

