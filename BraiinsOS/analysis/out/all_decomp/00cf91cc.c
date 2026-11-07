// FUN_00cf91cc @ 00cf91cc size=2640 calls_out=14 calls_in=2
// strings: 

void FUN_00cf91cc(float param_1,int *param_2,uint param_3,int *param_4,int *param_5)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  undefined4 extraout_r3;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  undefined4 *puVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined4 *puVar33;
  float *pfVar34;
  bool bVar35;
  bool bVar36;
  uint *puVar37;
  uint in_fpscr;
  float fVar38;
  float fVar39;
  float fVar40;
  uint local_b4;
  uint local_a0;
  int local_9c;
  int local_90;
  int local_80;
  int *local_7c;
  int local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  uint local_54;
  
  iVar27 = *(int *)(param_3 + 0x10);
  if (*param_5 != 0) {
    param_1 = (float)param_5[1];
  }
  if (iVar27 == 0) {
    local_90 = 4;
    uVar15 = 0;
  }
  else {
    local_68 = *(undefined4 *)(param_3 + 0x14);
    local_64 = *(undefined4 *)(param_3 + 0x18);
    local_70 = *(undefined4 *)(param_3 + 0xc);
    DataMemoryBarrier(0xb);
    local_74 = param_3;
    local_6c = iVar27;
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_00bad054(param_3 + 0x1c,&local_74);
    }
    local_90 = *(int *)(param_3 + 0x24);
    uVar15 = *(uint *)(param_3 + 0x28);
  }
  iVar27 = *param_4;
  uVar24 = param_4[2];
  if (iVar27 == 0) {
    uVar24 = 0;
  }
  uVar13 = (uint)(iVar27 != 0);
  uVar28 = uVar24 * 4;
  bVar36 = 0x3ffffffe < uVar24;
  bVar35 = uVar24 == 0x3fffffff;
  if (uVar24 < 0x40000000) {
    bVar36 = 0x7ffffffb < uVar28;
    bVar35 = uVar28 == 0x7ffffffc;
  }
  if (bVar36 && !bVar35) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar28);
  }
  iVar32 = param_4[1];
  pfVar34 = (float *)&DAT_00000004;
  iVar29 = 0;
  uVar3 = 0;
  if ((uVar28 != 0) &&
     (pfVar34 = (float *)thunk_FUN_016d4a50(uVar28), uVar3 = uVar24, pfVar34 == (float *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar28);
  }
  iVar4 = param_5[7];
  iVar16 = param_5[8];
  uVar28 = 0;
  local_60 = 0;
  local_70 = 0;
  local_74 = uVar13;
  local_6c = iVar27;
  local_68 = iVar32;
  local_64 = uVar13;
  local_5c = iVar27;
  local_58 = iVar32;
  local_54 = uVar24;
  while (piVar5 = (int *)FUN_00c3914c(&local_74), piVar5 != (int *)0x0) {
    fVar40 = 1.0;
    if (uVar15 != 0) {
      uVar6 = piVar5[1];
      if (uVar15 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar15,&DAT_01870ae4);
      }
      fVar40 = *(float *)(local_90 + uVar6 * 8 + 4);
    }
    iVar7 = iVar16 << 4;
    iVar18 = iVar4;
    do {
      iVar30 = iVar18;
      iVar25 = 0;
      if (iVar7 == 0) {
        piVar5 = (int *)&DAT_00000004;
        bVar35 = true;
        iVar7 = 0;
        goto LAB_00cf9438;
      }
      iVar7 = iVar7 + -0x10;
      iVar18 = iVar30 + 0x10;
    } while (*(int *)(iVar30 + 8) != *piVar5);
    piVar8 = (int *)thunk_FUN_016d4a50(0x10);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x10);
    }
    *piVar8 = iVar30;
    iVar7 = 1;
    local_80 = 4;
    local_7c = piVar8;
    while (iVar30 = iVar18, local_78 = iVar7, iVar30 != iVar4 + iVar16 * 0x10) {
      iVar18 = iVar30 + 0x10;
      if (*(int *)(iVar30 + 8) == *piVar5) {
        if (iVar7 == local_80) {
          FUN_009b6da4(&local_80,iVar7,1,4,4);
          piVar8 = local_7c;
        }
        piVar8[iVar7] = iVar30;
        iVar7 = iVar7 + 1;
      }
    }
    bVar35 = local_80 == 0;
    piVar5 = local_7c;
LAB_00cf9438:
    do {
      if (iVar7 * 4 == iVar25) {
        fVar39 = param_1;
        if (iVar7 != 0) {
          iVar18 = 0;
          fVar38 = -0.0;
          do {
            piVar8 = piVar5 + iVar18;
            iVar18 = iVar18 + 1;
            fVar38 = fVar38 + 1.0 / ABS(*(float *)(*piVar8 + 4) - fVar40);
          } while (iVar7 != iVar18);
          uVar6 = in_fpscr & 0xfffffff | (uint)(fVar38 < 0.0) << 0x1f |
                  (uint)(fVar38 == 0.0) << 0x1e;
          in_fpscr = uVar6 | (uint)NAN(fVar38) << 0x1c;
          bVar2 = (byte)(uVar6 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar39 = -0.0;
            do {
              iVar7 = iVar7 + -1;
              fVar39 = fVar39 + *(float *)(*piVar5 + 0xc) / ABS(*(float *)(*piVar5 + 4) - fVar40);
              piVar5 = piVar5 + 1;
            } while (iVar7 != 0);
            fVar39 = fVar39 / fVar38;
          }
        }
        goto LAB_00cf94e0;
      }
      piVar8 = (int *)((int)piVar5 + iVar25);
      iVar25 = iVar25 + 4;
      in_fpscr = in_fpscr & 0xfffffff;
    } while (*(float *)(*piVar8 + 4) - fVar40 != 0.0);
    fVar39 = *(float *)(*piVar8 + 0xc);
LAB_00cf94e0:
    if (!bVar35) {
      thunk_FUN_016d3fb4();
    }
    pfVar9 = pfVar34 + uVar28;
    iVar29 = iVar29 + 4;
    uVar28 = uVar28 + 1;
    *pfVar9 = fVar39;
  }
  if (uVar28 != 0) {
    fVar40 = -0.0;
    pfVar9 = pfVar34;
    uVar15 = uVar28;
    do {
      fVar39 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      uVar15 = uVar15 - 1;
      fVar40 = fVar40 + fVar39;
    } while (uVar15 != 0);
    fVar39 = (float)VectorUnsignedToFloat(uVar28,(byte)(in_fpscr >> 0x16) & 3);
    pfVar9 = pfVar34;
    do {
      iVar29 = iVar29 + -4;
      *pfVar9 = (param_1 - fVar40 / fVar39) + *pfVar9;
      pfVar9 = pfVar9 + 1;
    } while (iVar29 != 0);
  }
  iVar29 = uVar24 * 0xc;
  uVar10 = 0;
  if (0xaaaaaaa < uVar24) {
LAB_00cf9560:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar10,iVar29);
  }
  uVar15 = 0;
  if (iVar29 == 0) {
    local_b4 = 0;
    puVar11 = (undefined4 *)&DAT_00000004;
  }
  else {
    puVar11 = (undefined4 *)thunk_FUN_016d4a50(iVar29);
    local_b4 = uVar24;
    if (puVar11 == (undefined4 *)0x0) {
      uVar10 = 4;
      goto LAB_00cf9560;
    }
  }
  local_60 = 0;
  local_70 = 0;
  pfVar9 = pfVar34;
  puVar33 = puVar11 + 1;
  local_74 = uVar13;
  local_6c = iVar27;
  local_68 = iVar32;
  local_64 = uVar13;
  local_5c = iVar27;
  local_58 = iVar32;
  local_54 = uVar24;
  while (puVar12 = (undefined4 *)FUN_00c3914c(&local_74), puVar12 != (undefined4 *)0x0) {
    if (uVar28 == uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar15,uVar28,&DAT_01870af4);
    }
    uVar10 = puVar12[1];
    fVar40 = *pfVar9;
    puVar33[-1] = *puVar12;
    *puVar33 = uVar10;
    puVar33[1] = fVar40;
    uVar15 = uVar15 + 1;
    pfVar9 = pfVar9 + 1;
    puVar33 = puVar33 + 3;
  }
  if (uVar15 != 0) {
    if (uVar15 != 1) {
      if (uVar15 < 0x15) {
        FUN_00b5dd94(puVar11,uVar15);
      }
      else {
        FUN_00cd8cec(puVar11,uVar15);
      }
    }
    iVar27 = thunk_FUN_016d4a50(0x8c);
    if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x8c);
    }
    *(undefined2 *)(iVar27 + 0x8a) = 0;
    uVar24 = 2;
    *(undefined4 *)(iVar27 + 0x58) = 0;
    puVar19 = puVar11 + uVar15 * 3;
    iVar29 = 0;
    local_a0 = 0;
    uVar10 = extraout_r3;
    uVar15 = uVar3;
    puVar33 = puVar11;
    puVar12 = puVar11;
    local_9c = iVar27;
    do {
      if (uVar24 == 2) {
        if (puVar12 == puVar19) {
LAB_00cf98c0:
          if (local_b4 != 0) {
            thunk_FUN_016d3fb4(puVar11);
          }
          if (local_a0 == 0) goto LAB_00cf9ab4;
          uVar15 = local_a0;
          iVar27 = local_9c;
          goto LAB_00cf99a4;
        }
        puVar26 = (undefined4 *)*puVar12;
        puVar37 = puVar12 + 1;
        puVar20 = puVar12 + 2;
        puVar12 = puVar12 + 3;
        uVar28 = *puVar37;
        uVar17 = *puVar20;
      }
      else {
        uVar28 = uVar15;
        puVar26 = puVar33;
        uVar17 = uVar10;
        if ((uVar24 & 1) == 0) goto LAB_00cf98c0;
      }
      uVar24 = 0;
      if (puVar12 != puVar19) {
        do {
          puVar33 = (undefined4 *)*puVar12;
          uVar15 = puVar12[1];
          uVar10 = puVar12[2];
          puVar12 = puVar12 + 3;
          if (puVar26 != puVar33 || uVar28 != uVar15) {
            uVar24 = 1;
            goto LAB_00cf9740;
          }
          uVar17 = uVar10;
        } while (puVar12 != puVar19);
        uVar15 = uVar28;
        puVar33 = puVar26;
      }
LAB_00cf9740:
      uVar13 = (uint)*(ushort *)(iVar27 + 0x8a);
      if (uVar13 < 0xb) {
        *(ushort *)(iVar27 + 0x8a) = *(ushort *)(iVar27 + 0x8a) + 1;
        iVar29 = iVar29 + 1;
        puVar20 = (undefined4 *)(iVar27 + uVar13 * 8);
        *puVar20 = puVar26;
        puVar20[1] = uVar28;
        *(undefined4 *)(iVar27 + uVar13 * 4 + 0x5c) = uVar17;
      }
      else {
        uVar13 = 0;
        do {
          iVar27 = *(int *)(iVar27 + 0x58);
          if (iVar27 == 0) {
            iVar27 = thunk_FUN_016d4a50(0xbc);
            if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xbc);
            }
            *(int *)(iVar27 + 0x8c) = local_9c;
            uVar13 = local_a0 + 1;
            *(undefined2 *)(iVar27 + 0x8a) = 0;
            *(undefined4 *)(iVar27 + 0x58) = 0;
            if (0xfffffffe < local_a0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018af438);
            }
            *(undefined2 *)(local_9c + 0x88) = 0;
            *(int *)(local_9c + 0x58) = iVar27;
            local_a0 = uVar13;
            local_9c = iVar27;
            goto LAB_00cf97cc;
          }
          uVar13 = uVar13 + 1;
        } while (10 < *(ushort *)(iVar27 + 0x8a));
LAB_00cf97cc:
        iVar32 = thunk_FUN_016d4a50(0x8c);
        if (iVar32 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x8c);
        }
        *(undefined2 *)(iVar32 + 0x8a) = 0;
        *(undefined4 *)(iVar32 + 0x58) = 0;
        uVar6 = uVar13;
        while (uVar6 = uVar6 - 1, uVar6 != 0) {
          iVar4 = thunk_FUN_016d4a50(0xbc);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xbc);
          }
          *(int *)(iVar4 + 0x8c) = iVar32;
          *(undefined2 *)(iVar4 + 0x8a) = 0;
          *(undefined4 *)(iVar4 + 0x58) = 0;
          *(undefined2 *)(iVar32 + 0x88) = 0;
          *(int *)(iVar32 + 0x58) = iVar4;
          iVar32 = iVar4;
        }
        uVar6 = (uint)*(ushort *)(iVar27 + 0x8a);
        if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
        }
        uVar1 = (undefined2)(uVar6 + 1);
        *(undefined2 *)(iVar27 + 0x8a) = uVar1;
        puVar20 = (undefined4 *)(iVar27 + uVar6 * 8);
        *puVar20 = puVar26;
        puVar20[1] = uVar28;
        *(undefined4 *)(iVar27 + uVar6 * 4 + 0x5c) = uVar17;
        *(int *)(iVar27 + (uVar6 + 1) * 4 + 0x8c) = iVar32;
        *(undefined2 *)(iVar32 + 0x88) = uVar1;
        *(int *)(iVar32 + 0x58) = iVar27;
        if (uVar13 == 0) {
          iVar29 = iVar29 + 1;
        }
        else {
          do {
            uVar13 = uVar13 - 1;
            iVar27 = *(int *)(iVar27 + (uint)*(ushort *)(iVar27 + 0x8a) * 4 + 0x8c);
          } while (uVar13 != 0);
          iVar29 = iVar29 + 1;
        }
      }
    } while( true );
  }
  param_2[2] = 0;
  *param_2 = 0;
  if (local_b4 != 0) {
    thunk_FUN_016d3fb4(puVar11);
  }
  goto LAB_00cf9acc;
  while (uVar15 = uVar15 - 1, iVar27 = iVar16, uVar15 != 0) {
LAB_00cf99a4:
    if (*(ushort *)(iVar27 + 0x8a) == 0) {
      uVar10 = 0x19;
      puVar14 = &DAT_004194a6;
      puVar21 = &DAT_018af418;
      goto LAB_00cf9bbc;
    }
    iVar4 = *(ushort *)(iVar27 + 0x8a) - 1;
    iVar32 = iVar27 + iVar4 * 4;
    iVar16 = *(int *)(iVar32 + 0x90);
    uVar24 = (uint)*(ushort *)(iVar16 + 0x8a);
    if (uVar24 < 5) {
      iVar7 = *(int *)(iVar32 + 0x8c);
      uVar13 = -uVar24 + 5;
      uVar28 = (uint)*(ushort *)(iVar7 + 0x8a);
      if (uVar28 < uVar13) {
        uVar10 = 0x27;
        puVar14 = &DAT_004194e7;
        puVar21 = &DAT_018af458;
LAB_00cf9bbc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar14,uVar10,puVar21);
      }
      iVar30 = uVar28 - uVar13;
      *(short *)(iVar7 + 0x8a) = (short)iVar30;
      *(undefined2 *)(iVar16 + 0x8a) = 5;
      FUN_016dd52c(iVar16 + uVar13 * 8,iVar16,uVar24 << 3);
      iVar18 = iVar16 + 0x5c;
      FUN_016dd52c(iVar18 + uVar13 * 4,iVar18);
      iVar25 = iVar30 + 1;
      iVar31 = uVar28 - iVar25;
      if (iVar31 != -uVar24 + 4) {
        uVar10 = 0x28;
        puVar14 = &DAT_004194bf;
        puVar21 = &DAT_018af448;
        goto LAB_00cf9bbc;
      }
      FUN_016dd1aa(iVar16,iVar7 + iVar25 * 8,iVar31 * 8);
      FUN_016dd1aa(iVar18,iVar7 + 0x5c + iVar25 * 4,iVar31 * 4);
      puVar11 = (undefined4 *)(iVar7 + iVar30 * 8);
      uVar22 = puVar11[1];
      puVar33 = (undefined4 *)(iVar27 + iVar4 * 8);
      uVar10 = *puVar33;
      uVar17 = *(undefined4 *)(iVar7 + 0x5c + iVar30 * 4);
      uVar23 = puVar33[1];
      *puVar33 = *puVar11;
      puVar33[1] = uVar22;
      uVar22 = *(undefined4 *)(iVar32 + 0x5c);
      *(undefined4 *)(iVar32 + 0x5c) = uVar17;
      puVar11 = (undefined4 *)(iVar16 + iVar31 * 8);
      *puVar11 = uVar10;
      puVar11[1] = uVar23;
      *(undefined4 *)(iVar18 + iVar31 * 4) = uVar22;
      if (uVar15 == 1) break;
      iVar27 = iVar16 + 0x8c;
      FUN_016dd52c(iVar27 + uVar13 * 4,iVar27,uVar24 * 4 + 4);
      FUN_016dd1aa(iVar27,iVar7 + iVar25 * 4 + 0x8c,uVar13 * 4);
      iVar27 = *(int *)(iVar16 + 0x8c);
      *(undefined2 *)(iVar27 + 0x88) = 0;
      *(int *)(iVar27 + 0x58) = iVar16;
      iVar27 = *(int *)(iVar16 + 0x90);
      *(undefined2 *)(iVar27 + 0x88) = 1;
      *(int *)(iVar27 + 0x58) = iVar16;
      iVar27 = *(int *)(iVar16 + 0x94);
      *(undefined2 *)(iVar27 + 0x88) = 2;
      *(int *)(iVar27 + 0x58) = iVar16;
      iVar27 = *(int *)(iVar16 + 0x98);
      *(undefined2 *)(iVar27 + 0x88) = 3;
      *(int *)(iVar27 + 0x58) = iVar16;
      iVar27 = *(int *)(iVar16 + 0x9c);
      *(undefined2 *)(iVar27 + 0x88) = 4;
      *(int *)(iVar27 + 0x58) = iVar16;
      iVar27 = *(int *)(iVar16 + 0xa0);
      *(int *)(iVar27 + 0x58) = iVar16;
      *(undefined2 *)(iVar27 + 0x88) = 5;
    }
  }
LAB_00cf9ab4:
  *param_2 = local_9c;
  param_2[1] = local_a0;
  param_2[2] = iVar29;
LAB_00cf9acc:
  if (uVar3 != 0) {
    thunk_FUN_016d3fb4(pfVar34);
  }
  return;
}

