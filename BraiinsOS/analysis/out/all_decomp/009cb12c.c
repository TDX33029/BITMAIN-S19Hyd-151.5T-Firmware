// FUN_009cb12c @ 009cb12c size=1052 calls_out=6 calls_in=1
// strings: 

void FUN_009cb12c(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  bool bVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  puVar21 = (uint *)*param_2;
  local_6c = param_2[3];
  iVar12 = 0;
  local_58 = 0;
  local_60 = 0;
  puVar15 = puVar21 + 1;
  local_4c = 0;
  local_54 = 0;
  uVar18 = ~*puVar21 & 0x80808080;
  iVar3 = 4;
  local_5c = 4;
  local_50 = 4;
  local_68 = 4;
  puVar16 = puVar15;
  puVar20 = puVar21;
  local_64 = local_6c;
  do {
    iVar2 = local_58;
    iVar8 = local_5c;
    if (local_64 == 0) {
      uVar18 = ~*puVar21 & 0x80808080;
      iVar9 = local_5c + local_58 * 0x18;
LAB_009cb3a8:
      do {
        do {
          uVar27 = uVar18;
          if (local_6c == 0) {
            FUN_009cad94(param_1,&local_54,&local_60);
            return;
          }
          puVar16 = puVar15;
          if (uVar27 == 0) {
            do {
              puVar15 = puVar16 + 1;
              uVar18 = *puVar16;
              puVar21 = puVar21 + -8;
              puVar16 = puVar15;
            } while ((uVar18 & 0x80808080) == 0x80808080);
            uVar27 = uVar18 & 0x80808080 ^ 0x80808080;
          }
          local_6c = local_6c + -1;
          uVar18 = uVar27 - 1 & uVar27;
        } while (iVar2 == 0);
        iVar19 = iVar8;
LAB_009cb454:
        do {
          fVar24 = *(float *)(iVar19 + 0xc);
          fVar25 = *(float *)(iVar19 + 0x10);
          fVar4 = *(float *)((int)puVar21 +
                            (-8 - (LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                           (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) & 0x38U)))
          ;
          if (iVar12 != 0) {
            iVar10 = 0;
            do {
              pfVar6 = (float *)(iVar3 + iVar10);
              if (pfVar6[2] == fVar4) {
                fVar26 = *pfVar6;
                bVar1 = fVar26 == fVar24;
                if (bVar1) {
                  fVar26 = pfVar6[1];
                }
                in_fpscr = in_fpscr & 0xfffffff | (uint)(bVar1 && fVar26 == fVar25) << 0x1e;
                bVar22 = false;
                if (bVar1) {
                  bVar22 = SUB41(in_fpscr >> 0x1e,0);
                }
                if (bVar22) {
                  iVar19 = iVar19 + 0x18;
                  if (iVar19 != iVar9) goto LAB_009cb454;
                  goto LAB_009cb3a8;
                }
              }
              iVar10 = iVar10 + 0x10;
            } while (iVar12 * 0x10 != iVar10);
          }
          iVar10 = *(int *)(iVar19 + 8);
          fVar26 = -0.0;
          if (iVar10 != 0) {
            pfVar6 = *(float **)(iVar19 + 4);
            iVar11 = iVar10;
            do {
              fVar23 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              iVar11 = iVar11 + -1;
              fVar26 = fVar26 + fVar23;
            } while (iVar11 != 0);
          }
          if (iVar12 == local_54) {
            FUN_009b6ce0(&local_54);
            iVar3 = local_50;
          }
          pfVar6 = (float *)(iVar3 + iVar12 * 0x10);
          iVar12 = iVar12 + 1;
          fVar23 = (float)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
          pfVar6[2] = fVar4;
          *pfVar6 = fVar24;
          pfVar6[1] = fVar25;
          pfVar6[3] = fVar26 / fVar23;
          iVar19 = iVar19 + 0x18;
          local_4c = iVar12;
        } while (iVar19 != iVar9);
      } while( true );
    }
    puVar17 = puVar16;
    if (uVar18 == 0) {
      do {
        puVar16 = puVar17 + 1;
        uVar18 = *puVar17;
        puVar20 = puVar20 + -8;
        puVar17 = puVar16;
      } while ((uVar18 & 0x80808080) == 0x80808080);
      uVar18 = uVar18 & 0x80808080 ^ 0x80808080;
    }
    iVar8 = *(int *)((int)puVar20 +
                    (-4 - (LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                   (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) & 0x38U)));
    puVar13 = *(uint **)(iVar8 + 0xc);
    iVar8 = *(int *)(iVar8 + 0x10);
    uVar18 = uVar18 - 1 & uVar18;
    local_64 = local_64 + -1;
    puVar17 = puVar13;
    while( true ) {
      puVar14 = puVar17;
      iVar2 = local_58;
      if (puVar14 == puVar13 + iVar8 * 0xc) break;
      puVar17 = puVar14 + 0xc;
      if (*puVar14 < 2) {
        if ((*puVar14 & 1) != 0) {
          if ((byte)puVar14[9] < 2) {
            fVar24 = (float)puVar14[6];
            fVar25 = (float)puVar14[7];
            uVar27 = puVar14[8];
            fVar26 = (float)puVar14[1];
            fVar4 = (float)puVar14[0xb];
            if (local_58 != 0) {
              iVar12 = 0;
              do {
                piVar5 = (int *)(local_68 + iVar12);
                fVar23 = (float)piVar5[3];
                bVar1 = fVar23 == fVar24;
                if (bVar1) {
                  fVar23 = (float)piVar5[4];
                }
                in_fpscr = in_fpscr & 0xfffffff | (uint)(bVar1 && fVar23 == fVar25) << 0x1e;
                bVar22 = false;
                if (bVar1) {
                  bVar22 = SUB41(in_fpscr >> 0x1e,0);
                }
                if (bVar22) {
                  iVar12 = piVar5[2];
                  if (iVar12 == *piVar5) {
                    FUN_0132f568();
                  }
                  *(float *)(piVar5[1] + iVar12 * 4) = fVar26;
                  piVar5[2] = iVar12 + 1;
                  goto LAB_009cb338;
                }
                iVar12 = iVar12 + 0x18;
              } while (local_58 * 0x18 != iVar12);
            }
            pfVar6 = (float *)thunk_FUN_016d4a50(4);
            if (pfVar6 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,4);
            }
            *pfVar6 = fVar26;
            if (iVar2 == local_60) {
              FUN_009b6c80(&local_60);
              local_68 = local_5c;
            }
            puVar7 = (undefined4 *)(local_68 + iVar2 * 0x18);
            *puVar7 = 1;
            puVar7[1] = pfVar6;
            puVar7[3] = fVar24;
            puVar7[4] = fVar25;
            puVar7[5] = uVar27;
            puVar7[2] = 1;
            local_58 = iVar2 + 1;
LAB_009cb338:
            iVar12 = local_4c;
            if (local_4c == local_54) {
              FUN_009b6ce0(&local_54);
            }
            pfVar6 = (float *)(local_50 + iVar12 * 0x10);
            pfVar6[3] = fVar26;
            pfVar6[2] = fVar4;
            *pfVar6 = fVar24;
            pfVar6[1] = fVar25;
            iVar12 = iVar12 + 1;
            iVar3 = local_50;
            local_4c = iVar12;
          }
        }
      }
    }
  } while( true );
}

