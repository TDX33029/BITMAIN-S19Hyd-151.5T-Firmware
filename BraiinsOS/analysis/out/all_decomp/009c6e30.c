// FUN_009c6e30 @ 009c6e30 size=7312 calls_out=46 calls_in=1
// strings: polled MutexLockFuture after completion | polled MutexLockFuture after completion | assertion failed: c.get()EnterErrorpanicking twice to abort the program

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff40 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009c6e30(undefined4 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined1 uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  uint **ppuVar21;
  int *piVar22;
  undefined4 uVar23;
  int iVar24;
  undefined *puVar25;
  int iVar26;
  undefined *puVar27;
  int extraout_r1;
  int iVar28;
  code *pcVar29;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  bool bVar30;
  int extraout_r2;
  int extraout_r3;
  char cVar31;
  uint *puVar32;
  char *pcVar33;
  uint uVar34;
  uint uVar35;
  int *piVar36;
  uint uVar37;
  char *pcVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  uint *local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  int *local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  uint *local_148;
  uint *local_144;
  uint local_140;
  uint *local_13c;
  uint *puStack_138;
  int *local_134;
  int *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint *local_118;
  uint *local_114;
  int *local_110;
  uint *local_10c;
  uint *local_108;
  uint *local_104;
  int *local_100;
  uint *local_fc;
  uint *local_f8;
  int local_f4;
  uint *local_f0;
  int local_ec;
  uint *local_e8;
  undefined4 local_e4;
  int local_e0;
  uint local_dc;
  int *local_d8;
  int local_d4;
  uint *local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  uint *local_c0;
  uint *local_bc;
  undefined4 local_b8;
  int local_b0;
  int *local_ac;
  int *local_a8;
  int *local_a4;
  uint *local_a0;
  uint *puStack_9c;
  uint local_98;
  uint *local_90;
  uint *puStack_8c;
  uint local_88;
  uint *local_80;
  undefined *local_7c;
  uint *local_78;
  undefined2 local_74;
  undefined *local_70;
  undefined *local_6c;
  uint *local_68;
  uint *local_64;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  int *local_54;
  int *local_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_108 = (uint *)((uint)local_108 & 0xffffff00);
  local_118 = (uint *)(param_2 + 0x90);
  uVar39 = thunk_FUN_016de0ee(local_118,0x138);
  pcVar33 = (char *)((int)uVar39 + (int)((ulonglong)uVar39 >> 0x20));
  if (pcVar33[1] == '\x01') {
    uVar23 = 0;
    if (*pcVar33 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0034aaef,0x40,&local_68,&DAT_0186a37c,&DAT_0186a320);
    }
  }
  else {
    uVar23 = 0x100;
    pcVar33[0] = '\0';
    pcVar33[1] = '\x01';
  }
  uVar39 = thunk_FUN_016de0ee(uVar23,0x1bc);
  iVar24 = (int)uVar39 + (int)((ulonglong)uVar39 >> 0x20);
  *pcVar33 = '\x01';
  if ((*(char *)(iVar24 + 4) != '\x01') && (iVar24 = FUN_009c4128(iVar24), iVar24 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  local_70 = &DAT_0186a310;
  uVar39 = thunk_FUN_016de0ee();
  iVar24 = (int)uVar39 + extraout_r3;
  puVar12 = (uint *)(extraout_r2 + 0x38);
  iVar13 = *(int *)((ulonglong)uVar39 >> 0x20);
  pcVar38 = (char *)(iVar13 + 0xc);
  puVar25 = (undefined *)(iVar13 + 8);
  local_6c = puVar25;
  while( true ) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_108 & 0xff) {
    case 0:
      local_114 = local_118;
      local_100 = (int *)0xffffffff;
      puVar32 = (uint *)(local_118[3] + 8);
      local_104 = puVar32;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186a3ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186a3ac);
    case 3:
      puVar32 = local_104;
      if (local_104 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
      }
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(local_b8 >> 8 & 0xff) {
      case 0:
        goto LAB_009c7308;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186a39c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186a39c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)local_c0 & 0xff) {
        case 0:
          goto LAB_009c7418;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018acd5c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018acd5c);
        case 3:
          goto switchD_009c7114_caseD_3;
        }
      }
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((undefined1)local_74) {
      case 0:
        goto LAB_009c7e48;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0186a454);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0186a454);
      case 3:
        puVar32 = local_80;
        if (local_80 != (uint *)0x0) goto LAB_009c7e64;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
    }
    do {
      uVar14 = *puVar32;
      bVar30 = (bool)hasExclusiveAccess(puVar32);
    } while (!bVar30);
    *puVar32 = uVar14 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar14 & 1) == 0) break;
    puVar16 = puVar32 + 1;
    do {
      if (*puVar16 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(puVar16);
        goto LAB_009c7050;
      }
      bVar30 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar30);
    *puVar16 = 1;
    DataMemoryBarrier(0xb);
LAB_009c7050:
    uVar14 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar10 = (char)puVar32[2];
    }
    else {
      uVar14 = FUN_015bf3f8();
      uVar14 = uVar14 ^ 1;
      cVar10 = (char)puVar32[2];
    }
    if (cVar10 != '\0') {
      local_64._1_3_ = (undefined3)((uint)local_64 >> 8);
      local_64 = (uint *)CONCAT31(local_64._1_3_,(char)uVar14);
      local_68 = puVar16;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_0186a38c,&DAT_0187a770);
    }
    if (local_100 == (int *)0xffffffff) {
      uVar40 = FUN_009ca1ec(puVar25);
      puVar27 = (undefined *)puVar32[7];
      FUN_009c9a24(puVar32 + 3,puVar27,(int)uVar40,(int)((ulonglong)uVar40 >> 0x20));
      local_100 = (int *)puVar27;
      if (puVar32[6] == 1) {
        do {
          bVar30 = (bool)hasExclusiveAccess(puVar32);
        } while (!bVar30);
        *puVar32 = *puVar32 | 2;
      }
    }
    else {
      if (((undefined *)puVar32[5] <= local_100) ||
         (piVar15 = (int *)(puVar32[4] + (int)local_100 * 0xc), *piVar15 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
      }
      puVar27 = (undefined *)piVar15[1];
      if (puVar27 == (undefined *)0x0) {
        uVar40 = FUN_009ca1ec(puVar25);
        *(undefined8 *)(piVar15 + 1) = uVar40;
      }
      else {
        puVar20 = &DAT_0186a310;
        puVar3 = (undefined *)puVar32[5];
        if (puVar27 == &DAT_0186a310) {
          puVar20 = (undefined *)piVar15[2];
          puVar3 = puVar25;
        }
        if (puVar27 != &DAT_0186a310 || puVar3 != puVar20) {
          uVar40 = FUN_009ca1ec(puVar25);
          (**(code **)(puVar27 + 0xc))(piVar15[2]);
          *(undefined8 *)(piVar15 + 1) = uVar40;
        }
      }
    }
    if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
      *(undefined1 *)(puVar32 + 2) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar14 = *puVar16;
      bVar30 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar30);
    *puVar16 = 0;
    if (uVar14 == 2) {
      FUN_016d6968(0xf0,puVar16,0x81,1);
    }
    do {
      uVar14 = *puVar32;
      bVar30 = (bool)hasExclusiveAccess(puVar32);
    } while (!bVar30);
    *puVar32 = uVar14 | 1;
    DataMemoryBarrier(0xb);
    uVar11 = 3;
    if ((uVar14 & 1) == 0) {
      FUN_009c95cc(puVar32,local_100,0);
      goto LAB_009c71fc;
    }
LAB_009c81c8:
    local_108 = (uint *)CONCAT31(local_108._1_3_,uVar11);
LAB_009c81cc:
    do {
      cVar10 = *pcVar38;
      bVar30 = (bool)hasExclusiveAccess(pcVar38);
    } while (!bVar30);
    *pcVar38 = '\0';
    DataMemoryBarrier(0xb);
    while (cVar10 == '\0') {
      uVar14 = *(uint *)((int)uVar39 + 0x248);
      if (uVar14 < 3) {
        piVar15 = (int *)FUN_015f7ed0();
      }
      else {
        piVar15 = (int *)(uVar14 - 8);
        do {
          iVar13 = *piVar15;
          bVar30 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar30);
        *piVar15 = iVar13 + 1;
        if (iVar13 < 0) {
LAB_009c94b8:
                    /* WARNING: Does not return */
          pcVar29 = (code *)software_udf(0xfdee,0x9c94b8);
          (*pcVar29)();
        }
      }
      piVar36 = piVar15 + 6;
      do {
        iVar13 = *piVar36;
        bVar30 = (bool)hasExclusiveAccess(piVar36);
      } while (!bVar30);
      *piVar36 = iVar13 + -1;
      DataMemoryBarrier(0xb);
      if (iVar13 != 1) {
LAB_009c8294:
        local_68 = (uint *)0x0;
        while (*piVar36 == -1) {
          ppuVar21 = (uint **)0x0;
          if (local_68 != (uint *)0x0) {
            ppuVar21 = &local_64;
          }
          uVar14 = FUN_016d6968(0xf0,piVar36,0x89,0xffffffff,ppuVar21,0,0xffffffff);
          if ((uVar14 < 0x80000000) || (piVar22 = (int *)FUN_016d2bc8(), *piVar22 != 4)) break;
        }
        do {
          if (*piVar36 != 1) goto LAB_009c828c;
          bVar30 = (bool)hasExclusiveAccess(piVar36);
          if (bVar30) {
            *piVar36 = 0;
            DataMemoryBarrier(0xb);
            break;
          }
        } while( true );
      }
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar15;
        bVar30 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar30);
      *piVar15 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(piVar15);
      }
      do {
        cVar10 = *pcVar38;
        bVar30 = (bool)hasExclusiveAccess(pcVar38);
      } while (!bVar30);
      *pcVar38 = '\0';
      DataMemoryBarrier(0xb);
    }
  }
  FUN_009c95cc(puVar32,local_100,0);
LAB_009c71fc:
  piVar15 = (int *)puVar32[8];
  local_104 = (uint *)0x0;
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034ab46,0x34,&DAT_0186a3bc);
  }
  if (piVar15 == (int *)0xffffffff) {
LAB_009c89b0:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034ab7a,0x32,&DAT_0186a3cc);
  }
  iVar13 = *piVar15;
  do {
    if (iVar13 == 0) goto LAB_009c89b0;
    if (iVar13 < 0) {
      local_64 = &DAT_0157d360;
      local_68 = (uint *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_68,&DAT_018ae288);
    }
    iVar26 = *piVar15;
    if (iVar26 == iVar13) {
      bVar2 = (bool)hasExclusiveAccess(piVar15);
      if (bVar2) {
        *piVar15 = iVar13 + 1;
      }
      bVar30 = false;
      if (bVar2) {
        DataMemoryBarrier(0xb);
        bVar30 = true;
      }
    }
    else {
      bVar30 = false;
      ClearExclusiveLocal();
    }
    iVar13 = iVar26;
  } while (!bVar30);
  local_10c = (uint *)puVar32[9];
  local_110 = piVar15;
  FUN_009c9840(puVar32);
LAB_009c72f0:
  local_b8 = local_b8 & 0xffff0000;
  local_bc = local_114 + 4;
LAB_009c7308:
  local_fc = local_bc;
LAB_009c7310:
  local_b8 = local_b8 & 0xffffff00;
  uVar34 = *local_fc;
  puVar32 = (uint *)(uVar34 + 0x98);
  uVar14 = *(uint *)(uVar34 + 0x98);
  if ((uVar14 < 0xfffffff0) && ((uVar14 & 8) == 0)) {
    if (*puVar32 != uVar14) {
      ClearExclusiveLocal();
      goto LAB_009c7354;
    }
    bVar30 = (bool)hasExclusiveAccess(puVar32);
    if (!bVar30) goto LAB_009c7354;
    *puVar32 = uVar14 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009c7354:
    FUN_0127d66c(puVar32);
  }
  FUN_0128236c(puVar32);
  FUN_0128236c((uint)puVar32 | 1);
  DataMemoryBarrier(0xb);
  puVar16 = *(uint **)(uVar34 + 0x9c);
  puVar27 = *(undefined **)(uVar34 + 0xa0);
  do {
    uVar14 = *puVar16;
    bVar30 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar30);
  *puVar16 = uVar14 + 1;
  if ((int)uVar14 < 0) goto LAB_009c94b8;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  local_104 = puVar16;
  local_100 = (int *)puVar27;
  FUN_01282570(puVar32);
  FUN_01282570((uint)puVar32 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar14 = *puVar32;
    bVar30 = (bool)hasExclusiveAccess(puVar32);
  } while (!bVar30);
  *puVar32 = uVar14 - 0x10;
  if ((uVar14 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar32);
  }
  iVar13 = (**(code **)((int)local_100 + 0x14))
                     ((int)local_104 + (*(int *)((int)local_100 + 8) - 1U & 0xfffffff8) + 8);
  if (iVar13 != 0) {
    local_c0 = (uint *)((uint)local_c0 & 0xffffff00);
    local_f8 = local_fc;
LAB_009c7418:
    local_e8 = local_f8 + 1;
    local_ec = *local_f8 + 8;
    local_e4._0_2_ = (ushort)(byte)local_e4;
switchD_009c7114_caseD_3:
    cVar10 = *(char *)(iVar24 + 0x38);
    if (cVar10 == '\x01') {
LAB_009c746c:
      cVar31 = *(char *)(iVar24 + 0x31);
      cVar1 = *(char *)(iVar24 + 0x30);
      cVar10 = cVar31;
      if (cVar1 == '\x01') {
        if (cVar31 == '\0') {
          FUN_016455a4(&DAT_0186a310,puVar25);
LAB_009c7ad0:
          local_b8._0_2_ = CONCAT11(3,(char)local_b8);
          local_c0 = (uint *)CONCAT31(local_c0._1_3_,3);
          uVar11 = 4;
          goto LAB_009c81c8;
        }
        cVar10 = cVar31 + -1;
      }
      *(char *)(iVar24 + 0x31) = cVar10;
      cVar10 = '\x01';
    }
    else {
      cVar31 = '\0';
      cVar1 = '\0';
      if (cVar10 != '\x02') {
        FUN_015e8e6c(iVar24,FUN_009c42ec);
        *(undefined1 *)(iVar24 + 0x38) = 1;
        goto LAB_009c746c;
      }
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_e4 >> 8 & 0xff) {
    case 0:
      local_e4 = local_e4 & 0xffffff00;
      local_f4 = local_ec;
      local_f0 = local_e8;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018ad404);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018ad404);
    case 4:
      goto switchD_009c74ac_caseD_4;
    }
    iVar13 = local_f4;
    if (cVar10 == '\x01') goto LAB_009c7984;
LAB_009c74e8:
    iVar13 = local_f4;
    if (cVar10 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar24,FUN_01655ec4);
    *(undefined1 *)(iVar24 + 0x38) = 1;
LAB_009c7984:
    while( true ) {
      if ((*(uint *)(iVar24 + 0x24) & 1) == 0) {
        uVar40 = FUN_0164e918();
        if ((uint)uVar40 < 2) {
          uVar40 = CONCAT44((int)((ulonglong)uVar40 >> 0x20),1);
        }
      }
      else {
        uVar40 = CONCAT44(*(undefined4 *)(iVar24 + 0x28),*(undefined4 *)(iVar24 + 0x2c));
      }
      uVar14 = (uint)((ulonglong)uVar40 >> 0x20);
      uVar34 = (uint)uVar40;
      uVar14 = uVar14 ^ uVar14 << 0x11;
      *(undefined4 *)(iVar24 + 0x24) = 1;
      *(uint *)(iVar24 + 0x28) = uVar34;
      uVar14 = uVar34 >> 0x10 ^ uVar14 >> 7 ^ uVar34 ^ uVar14;
      *(uint *)(iVar24 + 0x2c) = uVar14;
      uVar14 = uVar14 + uVar34 >> 0x19 & 0x70;
      DataMemoryBarrier(0xb);
      local_68 = (uint *)(iVar13 + uVar14);
      local_64 = (uint *)(*(uint *)(iVar13 + uVar14) >> 2);
      local_4c = local_4c & 0xffffff00;
      local_50 = (int *)0x0;
      local_58 = (uint *)0x0;
      local_5c = (uint *)0x0;
      local_60 = 0;
      local_e4 = CONCAT31(local_e4._1_3_,1);
      DataMemoryBarrier(0xb);
      uVar14 = *local_f0;
      uVar34 = *(uint *)(local_f4 + 0x9c) & 0xfffffffe;
      if (uVar14 != uVar34) break;
      if ((*(uint *)(local_f4 + 0x9c) & 1) != 0) goto LAB_009c7ae8;
      local_e4 = (uint)local_e4._1_3_ << 8;
      *puVar12 = (uint)local_68;
      *(uint **)(extraout_r2 + 0x3c) = local_64;
      *(undefined4 *)(extraout_r2 + 0x40) = 0;
      *(undefined4 *)(extraout_r2 + 0x44) = 0;
      *(undefined4 *)(extraout_r2 + 0x48) = 0;
      *(int **)(extraout_r2 + 0x4c) = local_54;
      *(undefined4 *)(extraout_r2 + 0x50) = 0;
      *(uint *)(extraout_r2 + 0x54) = local_4c;
switchD_009c74ac_caseD_4:
      iVar13 = FUN_0163c044(puVar12,&local_70);
      if (iVar13 != 0) {
        local_e4._0_2_ = CONCAT11(4,(byte)local_e4);
        if (cVar1 == '\0') goto LAB_009c7ad0;
        if (*(char *)(iVar24 + 0x38) != '\x01') {
          if (*(char *)(iVar24 + 0x38) == '\x02') goto LAB_009c7ad0;
          FUN_015e8e6c(iVar24,FUN_01655ec4);
          *(undefined1 *)(iVar24 + 0x38) = 1;
        }
        *(char *)(iVar24 + 0x31) = cVar31;
        *(undefined1 *)(iVar24 + 0x30) = 1;
        goto LAB_009c7ad0;
      }
      FUN_0163bdc0(puVar12);
      if (local_d0 != (uint *)0x0) {
        (*(code *)local_d0[3])(local_cc);
      }
      local_e4 = local_e4 & 0xffffff00;
      cVar10 = *(char *)(iVar24 + 0x38);
      iVar13 = local_f4;
      if (cVar10 != '\x01') goto LAB_009c74e8;
    }
    *local_f0 = uVar34;
LAB_009c7ae8:
    FUN_0163bdc0(&local_68);
    if (local_58 != (uint *)0x0) {
      (**(code **)((int)local_58 + 0xc))(local_54);
    }
    local_e4 = CONCAT22(local_e4._2_2_,0x100);
    local_c0 = (uint *)CONCAT31(local_c0._1_3_,1);
    if (uVar14 == uVar34) {
      if ((char)local_b8 != '\0') {
        DataMemoryBarrier(0xb);
        do {
          uVar14 = *local_104;
          bVar30 = (bool)hasExclusiveAccess(local_104);
        } while (!bVar30);
        *local_104 = uVar14 - 1;
        if (uVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007846b4(local_104,local_100);
        }
      }
      puVar32 = (uint *)&DAT_80000000;
      local_b8 = CONCAT22(local_b8._2_2_,0x100);
      goto LAB_009c7c00;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar14 = *local_104;
      bVar30 = (bool)hasExclusiveAccess(local_104);
    } while (!bVar30);
    *local_104 = uVar14 - 1;
    if (uVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(local_104,local_100);
    }
    goto LAB_009c7310;
  }
  local_b8 = CONCAT22(local_b8._2_2_,0x100);
  (**(code **)((int)local_100 + 0x18))
            (&local_68,(int)local_104 + (*(int *)((int)local_100 + 8) - 1U & 0xfffffff8) + 8);
  if (local_68 != (uint *)0x2) {
    if (local_68 != (uint *)0x1) goto LAB_009c77fc;
    do {
      uVar14 = *local_104;
      bVar30 = (bool)hasExclusiveAccess(local_104);
    } while (!bVar30);
    *local_104 = uVar14 + 1;
    if (-1 < (int)uVar14) {
      (**(code **)(local_114[7] + 0x10))
                (local_114[6] + (*(int *)(local_114[7] + 8) - 1U & 0xfffffff8) + 8,local_104,
                 local_100);
      goto LAB_009c75a0;
    }
    goto LAB_009c94b8;
  }
LAB_009c75a0:
  *(uint *)(extraout_r2 + 0x28) = (uint)local_64;
  *(uint *)(extraout_r2 + 0x2c) = local_60;
  *(uint **)(extraout_r2 + 0x30) = local_5c;
  *(uint **)(extraout_r2 + 0x34) = local_58;
  *(int **)(extraout_r2 + 0x38) = local_54;
  *(int **)(extraout_r2 + 0x3c) = local_50;
  *(uint *)(extraout_r2 + 0x40) = local_4c;
  *(undefined4 *)(extraout_r2 + 0x44) = uStack_48;
  *(undefined4 *)(extraout_r2 + 0x48) = uStack_44;
  *(undefined4 *)(extraout_r2 + 0x4c) = uStack_40;
  *(undefined4 *)(extraout_r2 + 0x50) = uStack_3c;
  *(undefined4 **)(extraout_r2 + 0x54) = local_38;
  local_f8 = local_d0;
  local_f4 = 0;
  uVar40 = (**(code **)(local_d4 + 0x2c))
                     ((int)local_d8 + (*(int *)(local_d4 + 8) - 1U & 0xfffffff8) + 8);
  iVar13 = (int)((ulonglong)uVar40 >> 0x20);
  piVar15 = (int *)uVar40;
  if (piVar15 == (int *)0xffffffff) goto LAB_009c769c;
  iVar26 = *piVar15;
  do {
    if (iVar26 == 0) goto LAB_009c7648;
    if (iVar26 < 0) {
      local_64 = &DAT_0157d360;
      local_68 = (uint *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_68,&DAT_018ae288);
    }
    iVar17 = *piVar15;
    if (iVar17 == iVar26) {
      bVar2 = (bool)hasExclusiveAccess(piVar15);
      if (bVar2) {
        *piVar15 = iVar26 + 1;
      }
      bVar30 = false;
      if (bVar2) {
        DataMemoryBarrier(0xb);
        bVar30 = true;
      }
    }
    else {
      bVar30 = false;
      ClearExclusiveLocal();
    }
    iVar26 = iVar17;
  } while (!bVar30);
  uVar14 = *(uint *)(iVar13 + 8);
  (**(code **)(iVar13 + 0x2c))((int)piVar15 + (uVar14 - 1 & 0xfffffff8) + 8);
  puVar32 = (uint *)(**(code **)(extraout_r1 + 0x30))();
  do {
    uVar34 = *puVar32;
    bVar30 = (bool)hasExclusiveAccess(puVar32);
  } while (!bVar30);
  *puVar32 = uVar34 + (int)local_f8;
  puVar32[1] = puVar32[1] + local_f4 + (uint)CARRY4(uVar34,(uint)local_f8);
  DataMemoryBarrier(0xb);
  do {
    iVar26 = *piVar15;
    bVar30 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar30);
  *piVar15 = iVar26 + -1;
  if (iVar26 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(piVar15,iVar13);
  }
  piVar36 = piVar15 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar26 = *piVar36;
    bVar30 = (bool)hasExclusiveAccess(piVar36);
  } while (!bVar30);
  *piVar36 = iVar26 + -1;
  if (iVar26 == 1) {
    DataMemoryBarrier(0xb);
    if (uVar14 < 5) {
      uVar14 = 4;
    }
    if ((*(int *)(iVar13 + 4) + uVar14 + 7 & -uVar14) != 0) {
      thunk_FUN_016d3fb4(piVar15);
    }
  }
  FUN_015f3b0c(&local_68,0);
  local_c0 = local_68;
  local_bc = local_64;
  local_b8 = local_60;
  local_a8 = (int *)local_114[1];
  local_a4 = local_a8 + local_114[2] * 2;
  local_b0 = 1;
  local_ac = (int *)(extraout_r2 + 8);
  piVar15 = local_a8;
  if (local_a8 != (int *)0x0) goto LAB_009c7c64;
LAB_009c7c7c:
  local_a8 = piVar15;
  piVar15 = local_ac;
  puVar32 = local_f0;
  if (local_b0 != 0) {
    local_ac = (int *)0x0;
    if (piVar15 != (int *)0x0) {
      do {
        uVar40 = (**(code **)(piVar15[1] + 0x28))
                           (*piVar15 + (*(int *)(piVar15[1] + 8) - 1U & 0xfffffff8) + 8);
        iVar13 = (int)((ulonglong)uVar40 >> 0x20);
        piVar36 = (int *)*piVar15;
        iVar26 = piVar15[1];
        do {
          iVar17 = *piVar36;
          bVar30 = (bool)hasExclusiveAccess(piVar36);
        } while (!bVar30);
        *piVar36 = iVar17 + 1;
        if (iVar17 < 0) goto LAB_009c94b8;
        puVar18 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        puVar32 = local_e8;
        if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        puVar18[3] = iVar26;
        *puVar18 = 1;
        puVar18[1] = 1;
        puVar18[2] = piVar36;
        if (local_e8 == local_f0) {
          FUN_009b6a00((uint *)(extraout_r2 + 0x28));
        }
        uVar14 = local_dc;
        puVar19 = (undefined4 *)(local_ec + (int)puVar32 * 8);
        *puVar19 = puVar18;
        puVar19[1] = &DAT_0186a40c;
        local_e8 = (uint *)((int)puVar32 + 1);
        iVar26 = *piVar15;
        piVar36 = (int *)(iVar26 + 4);
LAB_009c7d54:
        iVar17 = *piVar36;
        do {
          if (iVar17 == -1) goto LAB_009c7d50;
          if (iVar17 < 0) {
            local_64 = &DAT_0157d360;
            local_68 = (uint *)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_68,&DAT_018ae278);
          }
          iVar28 = *piVar36;
          if (iVar28 == iVar17) {
            bVar2 = (bool)hasExclusiveAccess(piVar36);
            if (bVar2) {
              *piVar36 = iVar17 + 1;
            }
            bVar30 = false;
            if (bVar2) {
              DataMemoryBarrier(0xb);
              bVar30 = true;
            }
          }
          else {
            bVar30 = false;
            ClearExclusiveLocal();
          }
          iVar17 = iVar28;
        } while (!bVar30);
        iVar17 = piVar15[1];
        if (local_dc == local_e4) {
          FUN_009b6a00(extraout_r2 + 0x34);
        }
        pcVar29 = *(code **)(iVar13 + 0x2c);
        piVar15 = (int *)(local_e0 + uVar14 * 8);
        *piVar15 = iVar26;
        piVar15[1] = iVar17;
        local_dc = uVar14 + 1;
        puVar32 = (uint *)(*pcVar29)((int)uVar40);
        do {
          uVar14 = *puVar32;
          bVar30 = (bool)hasExclusiveAccess(puVar32);
        } while (!bVar30);
        *puVar32 = uVar14 + (int)local_f8;
        puVar32[1] = puVar32[1] + local_f4 + (uint)CARRY4(uVar14,(uint)local_f8);
        local_78 = (uint *)(**(code **)(iVar13 + 0x28))((int)uVar40);
        local_74 = 0;
        local_98 = local_b8;
        local_a0 = local_c0;
        puStack_9c = local_bc;
LAB_009c7e48:
        local_74 = CONCAT11(1,(undefined1)local_74);
        local_7c = (undefined *)0xffffffff;
        puVar32 = local_78;
        local_88 = local_98;
        local_80 = local_78;
        local_90 = local_a0;
        puStack_8c = puStack_9c;
LAB_009c7e64:
        do {
          uVar14 = *puVar32;
          bVar30 = (bool)hasExclusiveAccess(puVar32);
        } while (!bVar30);
        *puVar32 = uVar14 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar14 & 1) != 0) {
          puVar16 = puVar32 + 1;
          do {
            if (*puVar16 != 0) {
              ClearExclusiveLocal();
              FUN_015bf680(puVar16);
              goto LAB_009c7ec4;
            }
            bVar30 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar30);
          *puVar16 = 1;
          DataMemoryBarrier(0xb);
LAB_009c7ec4:
          uVar14 = 0;
          if ((DAT_018dd988 & 0x7fffffff) == 0) {
            cVar10 = (char)puVar32[2];
          }
          else {
            uVar14 = FUN_015bf3f8();
            uVar14 = uVar14 ^ 1;
            cVar10 = (char)puVar32[2];
          }
          if (cVar10 != '\0') {
            local_64._1_3_ = (undefined3)((uint)local_64 >> 8);
            local_64 = (uint *)CONCAT31(local_64._1_3_,(char)uVar14);
            local_68 = puVar16;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_0186a38c,&DAT_0187a770);
          }
          if (local_7c == (undefined *)0xffffffff) {
            uVar40 = FUN_009ca1ec(puVar25);
            puVar27 = (undefined *)puVar32[7];
            FUN_009c9a24(puVar32 + 3,puVar27,(int)uVar40,(int)((ulonglong)uVar40 >> 0x20));
            local_7c = puVar27;
            if (puVar32[6] == 1) {
              do {
                bVar30 = (bool)hasExclusiveAccess(puVar32);
              } while (!bVar30);
              *puVar32 = *puVar32 | 2;
            }
          }
          else {
            if (((undefined *)puVar32[5] <= local_7c) ||
               (piVar15 = (int *)(puVar32[4] + (int)local_7c * 0xc), *piVar15 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
            }
            puVar27 = (undefined *)piVar15[1];
            if (puVar27 == (undefined *)0x0) {
              uVar40 = FUN_009ca1ec(puVar25);
              *(undefined8 *)(piVar15 + 1) = uVar40;
            }
            else {
              puVar20 = &DAT_0186a310;
              puVar3 = (undefined *)puVar32[5];
              if (puVar27 == &DAT_0186a310) {
                puVar20 = (undefined *)piVar15[2];
                puVar3 = puVar25;
              }
              if (puVar27 != &DAT_0186a310 || puVar3 != puVar20) {
                uVar40 = FUN_009ca1ec(puVar25);
                (**(code **)(puVar27 + 0xc))(piVar15[2]);
                *(undefined8 *)(piVar15 + 1) = uVar40;
              }
            }
          }
          if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
            *(undefined1 *)(puVar32 + 2) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar14 = *puVar16;
            bVar30 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar30);
          *puVar16 = 0;
          if (uVar14 == 2) {
            FUN_016d6968(0xf0,puVar16,0x81,1);
          }
          do {
            uVar14 = *puVar32;
            bVar30 = (bool)hasExclusiveAccess(puVar32);
          } while (!bVar30);
          *puVar32 = uVar14 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar14 & 1) == 0) {
            FUN_009c9c18(puVar32,local_7c,0);
            goto LAB_009c8094;
          }
          local_74 = CONCAT11(local_74._1_1_,3);
          uVar11 = 5;
          goto LAB_009c81c8;
        }
        FUN_009c9c18(puVar32,local_7c,0);
LAB_009c8094:
        local_74 = local_74 & 0xff;
        local_80 = (uint *)0x0;
        puVar32[8] = (uint)local_90;
        puVar32[9] = (uint)puStack_8c;
        puVar32[10] = local_88;
        DataMemoryBarrier(0xb);
        do {
          uVar14 = *puVar32;
          bVar30 = (bool)hasExclusiveAccess(puVar32);
        } while (!bVar30);
        *puVar32 = uVar14 & 0xfffffffe;
        DataMemoryBarrier(0xb);
        if ((uVar14 & 2) != 0) {
          puVar16 = puVar32 + 1;
          do {
            if (*puVar16 != 0) {
              ClearExclusiveLocal();
              FUN_015bf680(puVar16);
              goto LAB_009c80f8;
            }
            bVar30 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar30);
          *puVar16 = 1;
          DataMemoryBarrier(0xb);
LAB_009c80f8:
          uVar14 = 0;
          if ((DAT_018dd988 & 0x7fffffff) == 0) {
            cVar10 = (char)puVar32[2];
          }
          else {
            uVar14 = FUN_015bf3f8();
            uVar14 = uVar14 ^ 1;
            cVar10 = (char)puVar32[2];
          }
          if (cVar10 != '\0') {
            local_64._1_3_ = (undefined3)((uint)local_64 >> 8);
            local_64 = (uint *)CONCAT31(local_64._1_3_,(char)uVar14);
            local_68 = puVar16;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_0186a38c,&DAT_01883dd0);
          }
          iVar13 = puVar32[5] * 0xc;
          piVar15 = (int *)(puVar32[4] - 0xc);
          do {
            piVar36 = piVar15;
            if (iVar13 == 0) goto LAB_009c8168;
            iVar13 = iVar13 + -0xc;
            piVar15 = piVar36 + 3;
          } while (piVar36[3] == 0);
          iVar13 = piVar36[4];
          piVar36[4] = 0;
          if (iVar13 != 0) {
            (**(code **)(iVar13 + 4))(piVar36[5]);
          }
LAB_009c8168:
          if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
            *(undefined1 *)(puVar32 + 2) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar14 = *puVar16;
            bVar30 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar30);
          *puVar16 = 0;
          if (uVar14 == 2) {
            FUN_016d6968(0xf0,puVar16,0x81,1);
          }
        }
        local_74 = 1;
        piVar15 = local_a8;
        if (local_a8 == (int *)0x0) goto LAB_009c7c7c;
LAB_009c7c64:
        piVar15 = (int *)0x0;
        if (local_a8 == local_a4) goto LAB_009c7c7c;
        piVar15 = local_a8;
        local_a8 = local_a8 + 2;
      } while( true );
    }
  }
  local_148 = *(uint **)(extraout_r2 + 0x2c);
  local_144 = *(uint **)(extraout_r2 + 0x30);
  local_140 = *(undefined4 *)(extraout_r2 + 0x34);
  local_13c = *(uint **)(extraout_r2 + 0x38);
  puStack_138 = *(uint **)(extraout_r2 + 0x3c);
  local_134 = *(int **)(extraout_r2 + 0x40);
  local_130 = *(int **)(extraout_r2 + 0x44);
  local_12c = *(undefined4 *)(extraout_r2 + 0x48);
  local_128 = *(undefined4 *)(extraout_r2 + 0x4c);
  uStack_124 = *(undefined4 *)(extraout_r2 + 0x50);
  uStack_120 = *(undefined4 *)(extraout_r2 + 0x54);
  DataMemoryBarrier(0xb);
  do {
    uVar14 = *local_104;
    bVar30 = (bool)hasExclusiveAccess(local_104);
  } while (!bVar30);
  *local_104 = uVar14 - 1;
  if (uVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(local_104,local_100);
  }
LAB_009c7c00:
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *local_110;
    bVar30 = (bool)hasExclusiveAccess(local_110);
  } while (!bVar30);
  *local_110 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(local_110,local_10c);
  }
  uVar9 = uStack_120;
  uVar8 = uStack_124;
  uVar7 = local_128;
  uVar23 = local_12c;
  piVar36 = local_130;
  piVar15 = local_134;
  puVar6 = puStack_138;
  puVar5 = local_13c;
  uVar14 = local_140;
  puVar4 = local_144;
  puVar16 = local_148;
  local_178 = local_148;
  local_174 = local_144;
  local_170 = local_140;
  uStack_16c = local_13c;
  local_168 = puStack_138;
  local_164 = local_134;
  local_160 = local_130;
  local_15c = local_12c;
  local_158 = local_128;
  uStack_154 = uStack_124;
  uStack_150 = uStack_120;
  local_108 = (uint *)CONCAT31(local_108._1_3_,1);
  if (puVar32 == (uint *)0x80000001) goto LAB_009c81cc;
  if (pcVar33[1] != '\x01') {
    pcVar33[0] = '\0';
    pcVar33[1] = '\x01';
LAB_009c89d8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: c.get()EnterErrorpanicking twice to abort the program",0x19,
                 &DAT_01882294);
  }
  if (*pcVar33 == '\0') goto LAB_009c89d8;
  *pcVar33 = '\0';
  FUN_009ca070(&local_118);
  if (puVar32 == (uint *)&DAT_80000000) {
    *param_1 = 0x80000000;
    return;
  }
  puVar18 = (undefined4 *)((uint)&local_178 | 4);
  *puVar18 = puVar16;
  puVar18[1] = puVar4;
  puVar18[2] = uVar14;
  puVar18[3] = puVar5;
  puVar18[4] = puVar6;
  puVar18[5] = piVar15;
  puVar18[6] = piVar36;
  puVar18[7] = uVar23;
  puVar18[8] = uVar7;
  puVar18[9] = uVar8;
  puVar18[10] = uVar9;
  iVar24 = *(int *)(param_2 + 0xb0);
  puVar12 = (uint *)(iVar24 + 8);
  do {
    local_178 = puVar32;
    if (*puVar12 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar12);
      goto LAB_009c84c8;
    }
    bVar30 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar30);
  *puVar12 = 1;
  DataMemoryBarrier(0xb);
LAB_009c84c8:
  uVar14 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar10 = *(char *)(iVar24 + 0xc);
  }
  else {
    uVar14 = FUN_015bf3f8();
    uVar14 = uVar14 ^ 1;
    cVar10 = *(char *)(iVar24 + 0xc);
  }
  if (cVar10 != '\0') {
    uVar34 = (uint)local_114 >> 8;
    local_114 = (uint *)CONCAT31((int3)uVar34,(char)uVar14);
    local_118 = puVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034aad3,0x1c,&local_118,&DAT_0186a36c,&DAT_0186a300);
  }
  FUN_009951a4(&local_68,local_174,local_170);
  uStack_11c = local_14c;
  uVar23 = local_15c;
  piVar15 = local_160;
  do {
    iVar13 = *local_160;
    bVar30 = (bool)hasExclusiveAccess(local_160);
  } while (!bVar30);
  *local_160 = iVar13 + 1;
  if (-1 < iVar13) {
    FUN_009a18b0(&local_118,local_168,local_164);
    local_130 = piVar15;
    local_140 = local_60;
    uVar34 = *(uint *)(iVar24 + 0x1c);
    local_148 = local_68;
    local_128 = local_158;
    uStack_124 = uStack_154;
    uStack_120 = uStack_150;
    local_144 = local_64;
    local_12c = uVar23;
    local_13c = local_118;
    puStack_138 = local_114;
    local_134 = local_110;
    if (uVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7c58(&DAT_0186a1b8);
    }
    uVar35 = *(uint *)(iVar24 + 0x20);
    FUN_0184606c(uVar35 + 1,uVar34);
    *(undefined4 *)(iVar24 + 0x20) = extraout_r1_00;
    local_118 = (uint *)0x80000000;
    uVar37 = *(uint *)(iVar24 + 0x18);
    FUN_0184606c(uVar35 + (uVar34 >> 1),uVar34);
    if (uVar37 <= extraout_r1_01) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(extraout_r1_01,uVar37,&DAT_0186a1c8);
    }
    iVar13 = *(int *)(iVar24 + 0x14);
    piVar15 = (int *)(iVar13 + extraout_r1_01 * 0x58);
    if (*piVar15 != -0x80000000) {
      iVar26 = FUN_008e7734(piVar15);
      iVar28 = piVar15[0xd];
      iVar17 = 0;
      if (iVar28 != 0) {
        iVar26 = iVar28 * 7;
        iVar17 = iVar28 * 0x39;
      }
      if (iVar28 != 0 && iVar17 != -0x3d) {
        thunk_FUN_016d3fb4(piVar15[0xc] + iVar26 * -8 + -0x38);
      }
    }
    uVar23 = FUN_016dd1aa(piVar15,&local_118,0x58);
    uVar39 = thunk_FUN_016de0ee(uVar23,0x2c0);
    puVar32 = (uint *)((int)uVar39 + (int)((ulonglong)uVar39 >> 0x20));
    if ((char)puVar32[4] == '\0') {
      FUN_015f62e4(&local_68);
      *puVar32 = (uint)local_68;
      puVar32[1] = (uint)local_64;
      puVar32[2] = local_60;
      puVar32[3] = (uint)local_5c;
      *(undefined1 *)(puVar32 + 4) = 1;
    }
    uVar34 = *puVar32;
    *puVar32 = uVar34 + 1;
    puVar32[1] = puVar32[1] + (uint)(0xfffffffe < uVar34);
    local_68 = local_148;
    local_64 = local_144;
    local_60 = local_140;
    local_5c = local_13c;
    local_58 = puStack_138;
    local_54 = local_134;
    local_50 = local_130;
    local_4c = local_12c;
    uStack_48 = local_128;
    uStack_44 = uStack_124;
    uStack_40 = uStack_120;
    uStack_3c = uStack_11c;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_e8 = &DAT_005674cc;
    local_118 = local_148;
    local_114 = local_144;
    local_110 = (int *)local_140;
    local_10c = local_13c;
    local_108 = puStack_138;
    local_104 = (uint *)local_134;
    local_100 = local_130;
    local_fc = (uint *)local_12c;
    local_f8 = (uint *)local_128;
    local_f4 = uStack_124;
    local_f0 = (uint *)uStack_120;
    local_ec = uStack_11c;
    local_c8 = 0;
    local_38 = local_e8;
    local_34 = local_e4;
    uStack_30 = local_e0;
    uStack_2c = local_dc;
    if (uVar37 <= uVar35) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar35,uVar37,&DAT_0186a1d8);
    }
    piVar15 = (int *)(iVar13 + uVar35 * 0x58);
    if (*piVar15 != -0x80000000) {
      iVar13 = FUN_008e7734(piVar15);
      iVar17 = piVar15[0xd];
      iVar26 = 0;
      if (iVar17 != 0) {
        iVar13 = iVar17 * 7;
        iVar26 = iVar17 * 0x39;
      }
      if (iVar17 != 0 && iVar26 != -0x3d) {
        thunk_FUN_016d3fb4(piVar15[0xc] + iVar13 * -8 + -0x38);
      }
    }
    FUN_016dd1aa(piVar15,&local_118,0x58);
    *param_1 = local_178;
    param_1[1] = local_174;
    param_1[2] = local_170;
    param_1[3] = uStack_16c;
    param_1[4] = local_168;
    param_1[5] = local_164;
    param_1[6] = local_160;
    param_1[7] = local_15c;
    param_1[8] = local_158;
    param_1[9] = uStack_154;
    param_1[10] = uStack_150;
    param_1[0xb] = local_14c;
    param_1[0xc] = uVar35;
    if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
      *(undefined1 *)(iVar24 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar14 = *puVar12;
      bVar30 = (bool)hasExclusiveAccess(puVar12);
    } while (!bVar30);
    *puVar12 = 0;
    if (uVar14 == 2) {
      FUN_016d6968(0xf0,puVar12,0x81,1);
      return;
    }
    return;
  }
  goto LAB_009c94b8;
LAB_009c7648:
  piVar36 = piVar15 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar26 = *piVar36;
    bVar30 = (bool)hasExclusiveAccess(piVar36);
  } while (!bVar30);
  *piVar36 = iVar26 + -1;
  if (iVar26 == 1) {
    DataMemoryBarrier(0xb);
    uVar14 = *(uint *)(iVar13 + 8);
    if (uVar14 < 5) {
      uVar14 = 4;
    }
    if ((*(int *)(iVar13 + 4) + uVar14 + 7 & -uVar14) != 0) {
      thunk_FUN_016d3fb4(piVar15);
    }
  }
LAB_009c769c:
  (**(code **)((int)local_100 + 0x10))
            ((int)local_104 + (*(int *)((int)local_100 + 8) - 1U & 0xfffffff8) + 8);
  puVar32 = local_e8;
  iVar13 = local_ec;
  if (local_e8 != (uint *)0x0) {
    puVar16 = (uint *)0x0;
    do {
      puVar18 = (undefined4 *)(iVar13 + (int)puVar16 * 8);
      piVar15 = (int *)*puVar18;
      puVar16 = (uint *)((int)puVar16 + 1);
      DataMemoryBarrier(0xb);
      do {
        iVar26 = *piVar15;
        bVar30 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar30);
      *piVar15 = iVar26 + -1;
      if (iVar26 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar18,puVar18[1]);
      }
    } while (puVar16 != puVar32);
  }
  if (local_f0 != (uint *)0x0) {
    thunk_FUN_016d3fb4(local_ec);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *local_d8;
    bVar30 = (bool)hasExclusiveAccess(local_d8);
  } while (!bVar30);
  *local_d8 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(local_d8,local_d4);
  }
  uVar14 = local_dc;
  iVar13 = local_e0;
  uVar34 = 0;
  while (uVar34 != uVar14) {
    piVar15 = (int *)(iVar13 + uVar34 * 8);
    iVar26 = *piVar15;
    uVar34 = uVar34 + 1;
    if (iVar26 != -1) {
      piVar36 = (int *)(iVar26 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar26 = *piVar36;
        bVar30 = (bool)hasExclusiveAccess(piVar36);
      } while (!bVar30);
      *piVar36 = iVar26 + -1;
      if (iVar26 == 1) {
        DataMemoryBarrier(0xb);
        iVar26 = piVar15[1];
        uVar35 = *(uint *)(iVar26 + 8);
        if (uVar35 < 5) {
          uVar35 = 4;
        }
        if ((*(int *)(iVar26 + 4) + uVar35 + 7 & -uVar35) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
  }
  if (local_e4 != 0) {
    thunk_FUN_016d3fb4(local_e0);
  }
LAB_009c77fc:
  DataMemoryBarrier(0xb);
  do {
    uVar14 = *local_104;
    bVar30 = (bool)hasExclusiveAccess(local_104);
  } while (!bVar30);
  *local_104 = uVar14 - 1;
  if (uVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(local_104,local_100);
  }
  goto LAB_009c72f0;
LAB_009c7d50:
  HintYield();
  goto LAB_009c7d54;
LAB_009c828c:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  goto LAB_009c8294;
}

