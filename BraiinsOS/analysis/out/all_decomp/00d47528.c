// FUN_00d47528 @ 00d47528 size=1420 calls_out=5 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00d47528(uint *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  undefined4 *puVar22;
  float *pfVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int unaff_r4;
  int iVar27;
  uint uVar28;
  int *piVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  int *piVar37;
  uint uVar38;
  uint *puVar39;
  bool bVar40;
  bool bVar41;
  double dVar42;
  uint local_b4;
  uint local_9c;
  float *local_84;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_28;
  
  uVar3 = *(uint *)(param_2 + 0xb0);
  uVar4 = *(uint *)(param_2 + 0xb4);
  uVar5 = *(uint *)(param_2 + 0xb8);
  uVar6 = *(uint *)(param_2 + 0xbc);
  uVar7 = *(uint *)(param_2 + 0xc0);
  uVar8 = *(uint *)(param_2 + 0xc4);
  uVar9 = *(uint *)(param_2 + 0xec);
  uVar38 = *(uint *)(param_2 + 0xd0);
  uVar10 = *(uint *)(param_2 + 0xf0);
  piVar29 = *(int **)(param_2 + 0xcc);
  uVar11 = *(uint *)(param_2 + 0xf4);
  if (uVar38 == 0) {
    uVar14 = 4;
    uVar32 = 0;
    uVar35 = 0;
    uVar12 = 0;
    uVar30 = 0;
  }
  else {
    piVar21 = piVar29;
    if (uVar38 != 1) {
      iVar26 = 0;
      do {
        iVar27 = piVar21[10];
        if (iVar27 == 0) {
LAB_00d47a84:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
        }
        uVar32 = 0;
        uVar30 = 0;
        piVar37 = piVar29 + iVar26 * 0xc + 0xc;
        puVar39 = (uint *)piVar21[9];
        do {
          bVar40 = CARRY4(uVar32,*puVar39);
          uVar32 = uVar32 + *puVar39;
          uVar30 = uVar30 + bVar40;
          iVar27 = iVar27 + -1;
          puVar39 = puVar39 + 1;
        } while (iVar27 != 0);
        iVar27 = piVar37[10];
        if (iVar27 == 0) goto LAB_00d47a84;
        uVar12 = 0;
        uVar35 = 0;
        puVar39 = (uint *)piVar37[9];
        do {
          bVar40 = CARRY4(uVar12,*puVar39);
          uVar12 = uVar12 + *puVar39;
          uVar35 = uVar35 + bVar40;
          iVar27 = iVar27 + -1;
          puVar39 = puVar39 + 1;
        } while (iVar27 != 0);
        iVar26 = iVar26 + 1;
        if (uVar30 < uVar35 || uVar35 - uVar30 < (uint)(uVar32 <= uVar12)) {
          piVar21 = piVar37;
        }
      } while (iVar26 != (uVar38 * 0x30 - 0x30 >> 4) * -0x55555555);
    }
    uVar12 = piVar21[10];
    uVar13 = 0;
    bVar41 = 0x3ffffffe < uVar12;
    bVar40 = uVar12 == 0x3fffffff;
    uVar30 = uVar12 * 4;
    if (uVar12 < 0x40000000) {
      bVar41 = 0x7ffffffb < uVar30;
      bVar40 = uVar30 == 0x7ffffffc;
    }
    if (bVar41 && !bVar40) {
LAB_00d47664:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar13,uVar30);
    }
    iVar26 = piVar21[9];
    uVar35 = 0;
    if (uVar30 == 0) {
      uVar14 = 4;
      uVar32 = 0;
      if (uVar12 != 0) {
LAB_00d476c4:
        uVar30 = 0;
        do {
          *(uint *)(uVar14 + uVar30 * 4) = *(uint *)(iVar26 + uVar30 * 4) / 1000000;
          uVar30 = uVar30 + 1;
        } while (uVar12 != uVar30);
        uVar35 = uVar12;
      }
    }
    else {
      uVar14 = thunk_FUN_016d4a50(uVar30);
      if (uVar14 == 0) {
        uVar13 = 4;
        goto LAB_00d47664;
      }
      uVar32 = uVar12;
      if (uVar12 != 0) goto LAB_00d476c4;
    }
    uVar13 = 0;
    uVar30 = uVar38 * 4;
    bVar41 = 0x3ffffffe < uVar38;
    bVar40 = uVar38 == 0x3fffffff;
    if (uVar38 < 0x40000000) {
      bVar41 = 0x7ffffffb < uVar30;
      bVar40 = uVar30 == 0x7ffffffc;
    }
    uVar12 = uVar38;
    if (bVar41 && !bVar40) goto LAB_00d47730;
  }
  uVar33 = 0;
  if (uVar30 == 0) {
    local_84 = (float *)&DAT_00000004;
    local_9c = 0;
  }
  else {
    local_84 = (float *)thunk_FUN_016d4a50(uVar30);
    local_9c = uVar12;
    if (local_84 == (float *)0x0) {
      uVar13 = 4;
LAB_00d47730:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar13,uVar30);
    }
  }
  if (uVar12 != 0) {
    pdVar15 = (double *)(piVar29 + 6);
    pfVar23 = local_84;
    do {
      dVar42 = *pdVar15;
      pdVar15 = pdVar15 + 6;
      uVar12 = uVar12 - 1;
      *pfVar23 = (float)dVar42;
      pfVar23 = pfVar23 + 1;
    } while (uVar12 != 0);
    uVar33 = uVar38;
  }
  uVar12 = *(uint *)(param_2 + 0xf8);
  uVar13 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  iVar26 = thunk_FUN_016dd50a(param_2 + 0x90,&local_68,0x20);
  uVar28 = *(uint *)(param_2 + 0xe0);
  uVar24 = *(uint *)(param_2 + 0xd4);
  uVar30 = uVar38 * 4;
  uVar16 = *(uint *)(param_2 + 0xd8);
  bVar41 = 0x3ffffffe < uVar38;
  bVar40 = uVar38 == 0x3fffffff;
  if (uVar38 < 0x40000000) {
    bVar41 = 0x7ffffffb < uVar30;
    bVar40 = uVar30 == 0x7ffffffc;
  }
  uVar17 = *(uint *)(param_2 + 0xe4);
  if (!(!bVar41 || bVar40)) {
LAB_00d4781c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar13,uVar30);
  }
  uVar36 = *(uint *)(param_2 + 0xdc);
  uVar25 = *(uint *)(param_2 + 0x90);
  uVar18 = *(uint *)(param_2 + 0x94);
  uVar19 = *(uint *)(param_2 + 0xe8);
  if (uVar30 == 0) {
    local_b4 = 4;
    uVar20 = 0;
  }
  else {
    local_b4 = thunk_FUN_016d4a50(uVar30);
    uVar20 = uVar38;
    if (local_b4 == 0) {
      uVar13 = 4;
      goto LAB_00d4781c;
    }
  }
  if (uVar38 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d478f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00d478f8 + *(int *)(&DAT_00d478f8 + *piVar29 * 4)))(piVar29[2],piVar29[3]);
    return;
  }
  param_1[0x1f] = *(uint *)(param_2 + 0x48);
  param_1[2] = uVar25;
  param_1[5] = uVar12;
  param_1[0x24] = uVar11;
  *param_1 = (uint)(iVar26 != 0);
  param_1[0x23] = uVar10;
  param_1[0x10] = uVar20;
  param_1[0x22] = uVar9;
  uVar9 = *(uint *)(param_2 + 0x104);
  param_1[0x18] = uVar19;
  param_1[0x11] = local_b4;
  param_1[0x19] = uVar3;
  param_1[0x13] = uVar24;
  param_1[9] = uVar9;
  param_1[0x1a] = uVar4;
  param_1[0x14] = uVar16;
  param_1[10] = uVar32;
  param_1[0x1b] = uVar5;
  param_1[0x15] = uVar36;
  param_1[0xc] = uVar35;
  uVar3 = *(uint *)(param_2 + 0x4c);
  uVar4 = *(uint *)(param_2 + 0x50);
  param_1[0x1c] = uVar6;
  param_1[0x16] = uVar28;
  param_1[0xd] = local_9c;
  uVar5 = *(uint *)(param_2 + 0xfc);
  param_1[3] = uVar18;
  iVar26 = 0;
  param_1[0x21] = uVar4;
  uVar4 = *(uint *)(param_2 + 0x100);
  param_1[0x20] = uVar3;
  param_1[0x1d] = uVar7;
  param_1[0x17] = uVar17;
  param_1[0xe] = (uint)local_84;
  uVar3 = *(uint *)(param_2 + 0x30);
  param_1[0xf] = uVar33;
  param_1[1] = 0;
  param_1[4] = 1;
  param_1[0x1e] = uVar8;
  param_1[7] = uVar5;
  param_1[0x12] = 0;
  param_1[8] = uVar4;
  param_1[0xb] = uVar14;
  param_1[6] = 1;
  if ((uVar3 & 0x7fffffff) == 0) goto LAB_00d47c30;
  piVar21 = (int *)(param_2 + 0x34);
  do {
    thunk_FUN_016d3fb4(*piVar21);
LAB_00d47c30:
    piVar37 = piVar29 + iVar26 * 0xc + 8;
    do {
      piVar21 = piVar37;
      if (iVar26 == 0) {
        if (*(int *)(param_2 + 200) == 0) {
          return;
        }
        if (piVar29 == (int *)0x0) {
          return;
        }
        iVar26 = FUN_016d3bc8();
        uVar3 = *(byte *)((int)piVar29 + -3) & 0x1f;
        if (((*(byte *)(iVar26 + 0x14) & 0x1f) != 0) ||
           (uVar4 = *(uint *)(iVar26 + 0x14) & 0xfffff000, iVar27 = uVar4 - 0x10, uVar4 == 0)) {
          iVar27 = (uint)*(ushort *)
                          (&DAT_0042567c + ((*(ushort *)(iVar26 + 0x14) & 0xfff) >> 6) * 2) << 4;
        }
        uVar4 = (uint)(*(byte *)((int)piVar29 + -3) >> 5);
        iVar34 = *(int *)(iVar26 + 8) + 0x10;
        iVar31 = iVar27 * uVar3 + iVar27 + -4;
        iVar27 = iVar34 + iVar31;
        if (4 < uVar4) {
          if (uVar4 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar4 = *(uint *)(iVar27 + -4);
          if (uVar4 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar27 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar27 - (int)piVar29) < uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar27 - uVar4) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar34 + iVar31) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar26 + 0x14);
        uVar4 = 1 << uVar3;
        *(undefined1 *)((int)piVar29 + -3) = 0xff;
        *(undefined2 *)((int)piVar29 + -2) = 0;
        goto LAB_016d4066;
      }
      iVar26 = iVar26 + 1;
      piVar37 = piVar21 + 0xc;
    } while (*piVar21 == 0);
    piVar21 = piVar21 + 1;
  } while( true );
LAB_016d4066:
  uVar6 = *(uint *)(iVar26 + 0x10);
  uVar5 = *(uint *)(iVar26 + 0xc) | uVar6;
  if ((uVar4 & uVar5) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar1)();
  }
  if ((uVar6 == 0) || (uVar5 + uVar4 == (2 << (bVar2 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar26,uVar3);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar22 = (undefined4 *)FUN_016d2bc8();
    uVar13 = *puVar22;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar22 = uVar13;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar26 + 0x10) = uVar4 + uVar6;
    return;
  }
  puVar39 = (uint *)(iVar26 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar39);
    uVar5 = *puVar39;
    if (uVar6 != uVar5) goto LAB_016d409c;
    bVar40 = (bool)hasExclusiveAccess(puVar39);
  } while (!bVar40);
  *puVar39 = uVar4 + uVar6;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar6 == uVar5) {
    return;
  }
  goto LAB_016d4066;
}

