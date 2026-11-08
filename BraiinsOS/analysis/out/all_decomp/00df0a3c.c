// FUN_00df0a3c @ 00df0a3c size=7808 calls_out=45 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | TimeAnchorUnsupportedTypeUnsupportedNoneKeyNotStringDateInvalid | timestamp_ms | failed to write frame to transport | Configutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity | session

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00df1390) */
/* WARNING: Removing unreachable block (ram,0x00df1938) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00df0a3c(int param_1,undefined4 *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *******pppppppuVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 ******ppppppuVar8;
  undefined4 ******ppppppuVar9;
  undefined4 *****pppppuVar10;
  uint uVar11;
  undefined4 *extraout_r2;
  undefined *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *******pppppppuVar20;
  int *piVar21;
  uint *puVar22;
  char *pcVar23;
  undefined4 *puVar24;
  undefined4 ******ppppppuVar25;
  undefined4 *unaff_r7;
  uint uVar26;
  int *piVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  int *extraout_r12;
  int *extraout_r12_00;
  int *piVar31;
  int *extraout_r12_01;
  int *extraout_r12_02;
  bool bVar32;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined8 uVar33;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 *local_2a4;
  int local_29c;
  undefined4 *local_298;
  undefined4 ******local_290;
  int local_28c;
  int local_288;
  undefined4 local_284;
  undefined4 *******local_280;
  int local_27c;
  undefined4 local_278;
  char local_274;
  undefined1 local_273;
  undefined1 local_272;
  undefined1 local_271;
  undefined1 local_270;
  undefined1 local_26f;
  undefined1 local_26e;
  byte local_26c;
  undefined1 local_26b;
  int local_268;
  int local_264;
  short local_248 [5];
  undefined1 local_23e;
  undefined1 local_23d;
  undefined4 ******local_b8;
  undefined1 local_b4;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  int local_b0;
  undefined4 local_ac;
  undefined4 *******local_a8;
  undefined4 *******local_60;
  undefined4 *local_5c;
  uint *local_58;
  undefined4 uStack_54;
  undefined4 *******local_50;
  undefined4 *local_4c;
  uint *local_48;
  undefined4 *******local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  undefined4 local_38;
  undefined4 *******local_34;
  undefined4 ******local_30;
  undefined4 *******local_2c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar33 = thunk_FUN_016de0ee(0,0x40,param_1 + 8);
  iVar28 = (int)uVar33 + (int)((ulonglong)uVar33 >> 0x20);
  uVar16 = *extraout_r2;
  uVar18 = extraout_r2[1];
  piVar31 = extraout_r12;
  if (*(char *)(iVar28 + 0x38) == '\x01') {
LAB_00df0ac4:
    local_2a8 = *(undefined4 *)(iVar28 + 0x18);
    local_2ac = *(undefined4 *)(iVar28 + 0x1c);
    cVar4 = '\x01';
    *(undefined4 *)(iVar28 + 0x18) = uVar16;
    *(undefined4 *)(iVar28 + 0x1c) = uVar18;
  }
  else {
    if (*(char *)(iVar28 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar28,FUN_01655ec4);
      *(undefined1 *)(iVar28 + 0x38) = 1;
      piVar31 = extraout_r12_00;
      goto LAB_00df0ac4;
    }
    local_2a8 = 0;
    local_2ac = 0;
    cVar4 = '\x02';
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x1e4)) {
  case 0:
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
    uVar29 = extraout_r2[8];
    uVar19 = *(undefined4 *)(param_1 + 0x24);
    uVar18 = *(undefined4 *)(param_1 + 0x30);
    uVar13 = *(undefined4 *)(param_1 + 0x1e0);
    uVar16 = extraout_r2[9];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
    extraout_r2[0x10] = uVar29;
    *(undefined1 *)(param_1 + 0x124) = 0;
    extraout_r2[0x11] = uVar16;
    *(undefined4 *)(param_1 + 0x44) = uVar19;
    *(undefined4 *)(param_1 + 0xc0) = uVar13;
    *(undefined4 *)(param_1 + 0x50) = uVar18;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878fc8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878fc8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x124)) {
    case 0:
      uVar18 = *(undefined4 *)(param_1 + 0x50);
      uVar13 = *(undefined4 *)(param_1 + 0xc0);
      uVar29 = extraout_r2[0x10];
      uVar16 = extraout_r2[0x11];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01878ec8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01878ec8);
    case 3:
      pbVar17 = *(byte **)(param_1 + 0x16c);
      piVar30 = *(int **)(param_1 + 0x170);
      goto LAB_00df1a34;
    case 4:
      goto switchD_00df0b74_caseD_4;
    }
  }
  extraout_r2[0x14] = uVar29;
  *(undefined4 *)(param_1 + 0x60) = uVar18;
  extraout_r2[0x15] = uVar16;
  local_60 = *(undefined4 ********)(param_1 + 0x38);
  local_5c = *(undefined4 **)(param_1 + 0x3c);
  local_58 = *(uint **)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xc4) = uVar13;
  uStack_54 = *(undefined4 *)(param_1 + 0x44);
  local_290 = (undefined4 ******)thunk_FUN_016d4a50(0x2000);
  if (local_290 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  local_284 = 0x11;
  local_288 = 0x2000;
  local_28c = 0;
  local_280 = (undefined4 *******)((uint)local_280 & 0xff000000);
  iVar6 = thunk_FUN_016d4a50(0x2000);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  local_b8 = local_290;
  local_b4 = (undefined1)local_28c;
  uStack_b3 = (undefined2)((uint)local_28c >> 8);
  uStack_b1 = (undefined1)((uint)local_28c >> 0x18);
  local_b0 = local_288;
  local_ac = local_284;
  local_a8 = local_280;
  *(int *)(param_1 + 0xfc) = iVar6;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  *(undefined4 *)(param_1 + 0x104) = 0x2000;
  *(undefined4 *)(param_1 + 0x10c) = 0x2000;
  *(undefined4 *)(param_1 + 0xe4) = 4;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0x11;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x800000;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *******)(param_1 + 0x110) = local_290;
  *(int *)(param_1 + 0x114) = local_28c;
  *(int *)(param_1 + 0x118) = local_288;
  *(undefined4 *)(param_1 + 0x11c) = local_284;
  *(undefined4 ********)(param_1 + 0x120) = local_280;
LAB_00df19d8:
  do {
    iVar6 = *(int *)(param_1 + 0xc4);
    pbVar17 = (byte *)(param_1 + 0x125);
    *pbVar17 = 0;
    uVar26 = *(uint *)(iVar6 + 8);
    DataMemoryBarrier(0xb);
    cVar4 = *(char *)(iVar28 + 0x38);
    piVar30 = (int *)(param_1 + 0x128);
    *piVar30 = param_1 + 0x58;
    piVar31 = (int *)(param_1 + 0x148);
    *(byte **)(param_1 + 0x16c) = pbVar17;
    *(undefined1 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *piVar31 = param_1 + 0xc4;
    *(int *)(param_1 + 0x14c) = iVar6 + 8;
    *(uint *)(param_1 + 0x150) = uVar26 >> 2;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined1 *)(param_1 + 0x144) = 0;
    *(int **)(param_1 + 0x170) = piVar30;
LAB_00df1a34:
    puVar24 = (undefined4 *)*param_2;
    if (cVar4 != '\x01') {
      if (cVar4 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(iVar28,FUN_005bc49c);
      *(undefined1 *)(iVar28 + 0x38) = 1;
      piVar31 = extraout_r12_01;
    }
    cVar4 = *(char *)(iVar28 + 0x30);
    bVar32 = cVar4 == '\x01';
    if (bVar32) {
      cVar4 = *(char *)(iVar28 + 0x31);
    }
    if (bVar32 && cVar4 == '\0') {
      FUN_016455a4(*puVar24,puVar24[1]);
LAB_00df2240:
      uVar5 = 3;
LAB_00df2248:
      local_2a4 = (undefined1 *)(param_1 + 0x124);
      uVar15 = 3;
      iVar6 = 1;
      *local_2a4 = uVar5;
      goto LAB_00df2308;
    }
    if ((*(uint *)(iVar28 + 0x24) & 1) == 0) {
      uVar33 = FUN_0164e918();
      piVar31 = extraout_r12_02;
      if ((uint)uVar33 < 2) {
        uVar33 = CONCAT44((int)((ulonglong)uVar33 >> 0x20),1);
      }
    }
    else {
      uVar33 = CONCAT44(*(undefined4 *)(iVar28 + 0x28),*(undefined4 *)(iVar28 + 0x2c));
    }
    uVar26 = (uint)((ulonglong)uVar33 >> 0x20);
    uVar14 = (uint)uVar33;
    uVar26 = uVar26 ^ uVar26 << 0x11;
    *(uint *)(iVar28 + 0x28) = uVar14;
    *(undefined4 *)(iVar28 + 0x24) = 1;
    piVar21 = piVar30 + 1;
    uVar26 = uVar14 >> 0x10 ^ uVar26 >> 7 ^ uVar14 ^ uVar26;
    *(uint *)(iVar28 + 0x2c) = uVar26;
    piVar27 = piVar30 + 8;
    bVar1 = *pbVar17;
    uVar7 = (uint)bVar1;
    if ((int)(uVar26 + uVar14) < 0) {
      uVar11 = (uVar7 & 2) >> 1;
      if ((bVar1 & 2) == 0) {
        iVar6 = FUN_016638c8(piVar27,puVar24);
        if (iVar6 != 0) {
          uVar7 = (uint)*pbVar17;
          goto LAB_00df1e80;
        }
LAB_00df1f78:
        ppppppuVar25 = (undefined4 ******)0x5;
        *pbVar17 = *pbVar17 | 2;
      }
      else {
LAB_00df1e80:
        if ((uVar7 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar30[7]) {
          case '\0':
            *(undefined1 *)(piVar30 + 6) = 0;
            piVar30[4] = 0;
            piVar30[5] = 0;
            piVar30[1] = *piVar30;
            piVar30[2] = 0;
            break;
          case '\x01':
switchD_00df1e94_caseD_1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0187c364);
          case '\x02':
switchD_00df1e94_caseD_2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0187c364);
          case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          FUN_00e7cbc4(&local_290,piVar21,puVar24);
          if (local_290 != (undefined4 ******)0x5) goto LAB_00df1fb0;
          *(undefined1 *)(piVar30 + 7) = 3;
          goto LAB_00df2240;
        }
LAB_00df1f90:
        ppppppuVar25 = (undefined4 ******)0x6;
        if (uVar11 != 1) goto LAB_00df2240;
      }
    }
    else {
      uVar11 = uVar7 & 1;
      if ((bVar1 & 1) != 0) {
LAB_00df1f5c:
        if ((uVar7 & 2) != 0) goto LAB_00df1f90;
        iVar6 = FUN_016638c8(piVar27,puVar24);
        if (iVar6 == 0) goto LAB_00df1f78;
        goto LAB_00df2240;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar30[7]) {
      case '\0':
        *(undefined1 *)(piVar30 + 6) = 0;
        piVar30[4] = 0;
        piVar30[5] = 0;
        piVar30[1] = *piVar30;
        piVar30[2] = 0;
        break;
      case '\x01':
        goto switchD_00df1e94_caseD_1;
      case '\x02':
        goto switchD_00df1e94_caseD_2;
      case '\x04':
        if (SCARRY4(uVar26,uVar14)) {
          coprocessor_storelong(0xe,in_cr6,0xdf1d8c);
          *(char *)piVar21 = (char)puVar24;
          coprocessor_storelong(6,in_cr7,0x35b854);
          *(char *)(piVar30 + -0x55) = (char)puVar24;
        }
        else {
          *(char *)piVar31 = (char)piVar27;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_00e7cbc4(&local_290,piVar21,puVar24);
      if (local_290 == (undefined4 ******)0x5) {
        *(undefined1 *)(piVar30 + 7) = 3;
        uVar7 = (uint)*pbVar17;
        goto LAB_00df1f5c;
      }
LAB_00df1fb0:
      FUN_00e7c67c(piVar21);
      if (piVar30[2] != 0) {
        (**(code **)(piVar30[2] + 0xc))(piVar30[3]);
      }
      ppppppuVar25 = local_290;
      *(undefined1 *)(piVar30 + 7) = 1;
      FUN_016dd1aa(&local_b8,(uint)&local_290 | 4,0x54);
      *pbVar17 = *pbVar17 | 1;
      if (ppppppuVar25 == (undefined4 ******)0x7) goto LAB_00df2240;
    }
    puVar22 = (uint *)(param_1 + 0x68);
    *puVar22 = (uint)ppppppuVar25;
    FUN_016dd1aa(param_1 + 0x6c,&local_b8,0x54);
    piVar31 = (int *)(param_1 + 0x128);
    FUN_00972a48(piVar31);
    iVar6 = *puVar22 - 4;
    if (*puVar22 < 4) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      if (iVar6 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01878ef8);
      }
      goto LAB_00df2274;
    }
    FUN_016dd1aa(piVar31,puVar22,0x58);
    if (*piVar31 == 4) {
      if ((extraout_r2[0x4a] & 1) == 0) goto LAB_00df2274;
      uVar16 = extraout_r2[0x4c];
      uVar18 = extraout_r2[0x4d];
      local_3c = (undefined1)uVar18;
      uStack_3b = (undefined2)((uint)uVar18 >> 8);
      uStack_39 = (undefined1)((uint)uVar18 >> 0x18);
      local_40._0_1_ = (byte)uVar16;
      local_40._1_1_ = (char)((uint)uVar16 >> 8);
      local_40._2_2_ = (undefined2)((uint)uVar16 >> 0x10);
      if (3 < DAT_018d9130) goto LAB_00df19d8;
      uVar26 = (uint)DAT_018daa90;
      if (1 < uVar26 - 1) {
        if (uVar26 == 0) goto LAB_00df19d8;
        uVar26 = FUN_0169ac90(&DAT_018daa88);
        uVar26 = uVar26 & 0xff;
        if (uVar26 == 0) goto LAB_00df19d8;
      }
      if (uVar26 != 2) {
        puVar12 = &DAT_018ae394;
        DataMemoryBarrier(0xb);
        pcVar23 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar23 = DAT_018daa74;
          puVar12 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar6 = (**(code **)(puVar12 + 0x14))(pcVar23);
        if (iVar6 == 0) goto LAB_00df19d8;
      }
      iVar6 = *(int *)(DAT_018daa88 + 0x20);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878ee8);
      }
      local_b0 = *(int *)(DAT_018daa88 + 0x24);
      local_5c = &local_38;
      local_ac = *(undefined4 *)(DAT_018daa88 + 0x28);
      local_50 = &local_60;
      local_34 = &local_30;
      local_a8 = (undefined4 *******)0x0;
      puVar12 = &DAT_018ae394;
      local_b4 = (undefined1)iVar6;
      uStack_b3 = (undefined2)((uint)iVar6 >> 8);
      uStack_b1 = (undefined1)((uint)iVar6 >> 0x18);
      local_4c = (undefined4 *)&DAT_00000001;
      local_58 = (uint *)&DAT_018abb78;
      local_2c = (undefined4 *******)FUN_00fac4cc;
      local_38 = &DAT_00592dd4;
      local_30 = (undefined4 ******)&local_40;
      local_28c = 0;
      local_290 = (undefined4 ******)0x1;
      local_280 = &local_50;
      DataMemoryBarrier(0xb);
      pcVar23 = s_SetGloba_00414c05;
      if (DAT_018dd984 == 2) {
        pcVar23 = DAT_018daa74;
        puVar12 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_27c = DAT_018daa88;
      local_b8 = *(undefined4 *******)(DAT_018daa88 + 0x1c);
      local_60 = &local_b8;
      local_48 = (uint *)(DAT_018daa88 + 0x1c);
      iVar6 = (**(code **)(puVar12 + 0x28))(pcVar23,&local_290);
      if (iVar6 != 0) {
        (**(code **)(puVar12 + 0x2c))(pcVar23,&local_290);
      }
      goto LAB_00df19d8;
    }
    FUN_016dd1aa(param_1 + 0x180,puVar22,0x58);
    *(int *)(param_1 + 0x1d8) = param_1 + 200;
    unaff_r7 = local_298;
switchD_00df0b74_caseD_4:
    local_298 = unaff_r7;
    if (*(int *)(param_1 + 0x180) == 4) {
LAB_00df18b0:
      iVar6 = *(int *)(param_1 + 0x1d8);
      do {
        if (*(int *)(iVar6 + 0x38) == 0) {
          uVar26 = 6;
          goto LAB_00df1984;
        }
        FUN_0098b2b8(&local_290,iVar6,param_2,iVar6 + 0x34);
        uVar26 = (uint)local_290 & 0xff;
        if (uVar26 == 5) {
          uVar26 = 7;
          goto LAB_00df195c;
        }
        if (uVar26 != 4) {
          local_b4 = (undefined1)local_28c;
          uStack_b3 = (undefined2)((uint)local_28c >> 8);
          uStack_b1 = (undefined1)((uint)local_28c >> 0x18);
          local_b8 = local_290;
          goto joined_r0x00df1958;
        }
      } while (local_28c != 0);
      FUN_015e79d4(&local_b8,0x17,"failed to write frame to transport",0x22);
      uVar26 = (uint)local_b8 & 0xff;
joined_r0x00df1958:
      if (uVar26 != 6) {
LAB_00df195c:
        if (uVar26 == 7) goto LAB_00df1c38;
        local_2bc = (uint)CONCAT12(uStack_b1,uStack_b3);
        local_2b8 = CONCAT13(local_b4,local_b8._1_3_);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1d8);
      if (*(uint *)(iVar6 + 0x38) < *(uint *)(iVar6 + 0x44)) {
LAB_00df0dd0:
        ppppppuVar25 = *(undefined4 *******)(param_1 + 0x180);
        *(undefined4 *)(param_1 + 0x180) = 4;
        if (ppppppuVar25 == (undefined4 ******)0x4) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_004090e8,0x1c,&DAT_018a5da0);
        }
        FUN_016dd1aa((uint)&local_290 | 4,param_1 + 0x184,0x54);
        local_290 = ppppppuVar25;
        puVar24 = (undefined4 *)thunk_FUN_016d4a50(0x80);
        if (puVar24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x80);
        }
        local_44 = &local_60;
        local_60 = (undefined4 *******)&DAT_00000080;
        local_5c = puVar24;
        if (ppppppuVar25 == (undefined4 ******)0x3) {
          *(undefined1 *)puVar24 = 0x7b;
          local_58 = (uint *)&DAT_00000001;
          FUN_00e5d350(&local_b8,&local_60,
                       "TimeAnchorUnsupportedTypeUnsupportedNoneKeyNotStringDateInvalid",10);
          pppppppuVar20 = local_44;
          if ((char)local_b8 != '\x04') {
            local_298 = (undefined4 *)
                        FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,CONCAT21(uStack_b3,local_b4)));
LAB_00df0f04:
            ppppppuVar8 = (undefined4 ******)0x3;
            goto joined_r0x00df1820;
          }
          ppppppuVar8 = local_44[2];
          if (*local_44 == ppppppuVar8) {
            FUN_00edff4c(local_44,ppppppuVar8,1,1,1);
            ppppppuVar8 = pppppppuVar20[2];
          }
          pppppppuVar3 = local_44;
          *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar8) = 0x3a;
          pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar8 + 1);
          ppppppuVar8 = pppppppuVar3[2];
          if (*pppppppuVar3 == ppppppuVar8) {
            FUN_00edff4c(pppppppuVar3,ppppppuVar8,1,1,1);
            ppppppuVar8 = pppppppuVar3[2];
          }
          *(undefined1 *)((int)pppppppuVar3[1] + (int)ppppppuVar8) = 0x7b;
          pppppppuVar3[2] = (undefined4 ******)((int)ppppppuVar8 + 1);
          local_2c = &local_44;
          local_30 = (undefined4 ******)CONCAT22(local_30._2_2_,0x100);
          local_298 = (undefined4 *)
                      FUN_00e61534(&local_30,"timestamp_ms",0xc,local_284,local_288,local_284);
          pppppppuVar20 = local_2c;
          if (local_298 != (undefined4 *)0x0) goto LAB_00df0f04;
          if (((uint)local_30 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf48);
          }
          if (((uint)local_30 & 0xff00) != 0) {
            ppppppuVar8 = *local_2c;
            pppppuVar10 = ppppppuVar8[2];
            if (*ppppppuVar8 == pppppuVar10) {
              FUN_00edff4c(ppppppuVar8,pppppuVar10,1,1,1);
              pppppuVar10 = ppppppuVar8[2];
            }
            *(undefined1 *)((int)ppppppuVar8[1] + (int)pppppuVar10) = 0x7d;
            ppppppuVar8[2] = (undefined4 *****)((int)pppppuVar10 + 1);
          }
          ppppppuVar8 = *pppppppuVar20;
          pppppuVar10 = ppppppuVar8[2];
          if (*ppppppuVar8 == pppppuVar10) {
            FUN_00edff4c(ppppppuVar8,pppppuVar10,1,1,1);
            pppppuVar10 = ppppppuVar8[2];
          }
          *(undefined1 *)((int)ppppppuVar8[1] + (int)pppppuVar10) = 0x7d;
          ppppppuVar8[2] = (undefined4 *****)((int)pppppuVar10 + 1);
LAB_00df1368:
          if (local_60 == (undefined4 *******)&DAT_80000000) {
            local_298 = local_5c;
            goto LAB_00df182c;
          }
          local_48 = local_58;
          local_4c = local_5c;
          local_50 = local_60;
          FUN_00f5ef18(&local_b8,&local_50);
          FUN_01665a20(&local_60,iVar6 + 0x10,&local_b8,iVar6 + 0x34);
          uVar26 = (uint)local_60 & 0xff;
          if ((char)local_60 == '\x04') {
            uVar26 = 6;
            local_298 = unaff_r7;
          }
          else {
            local_2c0 = (uint)local_60 >> 8;
            local_298 = local_5c;
          }
          if (ppppppuVar25 != (undefined4 ******)0x3) goto LAB_00df1838;
LAB_00df1868:
          if (uVar26 == 6) goto LAB_00df18b0;
        }
        else {
          *(undefined1 *)puVar24 = 0x7b;
          local_58 = (uint *)&DAT_00000001;
          FUN_00e5d350(&local_b8,&local_60,
                       "Configutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity"
                       ,6);
          pppppppuVar20 = local_44;
          ppppppuVar8 = ppppppuVar25;
          if ((char)local_b8 == '\x04') {
            ppppppuVar9 = local_44[2];
            if (*local_44 == ppppppuVar9) {
              FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
              ppppppuVar9 = pppppppuVar20[2];
            }
            pppppppuVar3 = local_44;
            sVar2 = local_248[0];
            *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x3a;
            pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
            ppppppuVar9 = pppppppuVar3[2];
            if (*pppppppuVar3 == ppppppuVar9) {
              FUN_00edff4c(pppppppuVar3,ppppppuVar9,1,1,1);
              ppppppuVar9 = pppppppuVar3[2];
            }
            pppppppuVar20 = local_44;
            *(undefined1 *)((int)pppppppuVar3[1] + (int)ppppppuVar9) = 0x7b;
            pppppppuVar3[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
            local_3c = SUB41(&local_44,0);
            uStack_3b = (undefined2)((uint)&local_44 >> 8);
            uStack_39 = (undefined1)((uint)&local_44 >> 0x18);
            local_40._0_1_ = 0;
            local_40._1_1_ = '\x02';
            FUN_00e5d350(&local_b8,pppppppuVar20,"session",7);
            pppppppuVar20 = local_44;
            if ((char)local_b8 == '\x04') {
              ppppppuVar9 = local_44[2];
              if (*local_44 == ppppppuVar9) {
                FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                ppppppuVar9 = pppppppuVar20[2];
              }
              *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x3a;
              pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
              pppppppuVar20 = local_44;
              if (ppppppuVar25 == (undefined4 ******)0x2) {
                ppppppuVar8 = local_44[2];
                if ((uint)((int)*local_44 - (int)ppppppuVar8) < 4) {
                  FUN_00edff4c(local_44,ppppppuVar8,4,1,1);
                  ppppppuVar8 = pppppppuVar20[2];
                }
                *(undefined4 *)((int)pppppppuVar20[1] + (int)ppppppuVar8) = 0x6c6c756e;
                pppppppuVar20[2] = ppppppuVar8 + 1;
LAB_00df10bc:
                local_298 = (undefined4 *)
                            FUN_00e6269c(&local_40,"use_generated_work_scheduling",0x1d,local_23e);
                ppppppuVar8 = ppppppuVar25;
                if (local_298 == (undefined4 *)0x0) {
                  if ((byte)local_40 == 0) {
                    local_298 = (undefined4 *)
                                FUN_00e6269c(&local_40,"disable_job_invalidation",0x18,local_23d);
                    if (local_298 == (undefined4 *)0x0) {
                      if (sVar2 != 0) {
                        local_298 = (undefined4 *)FUN_00ed12f8(&local_40,local_248);
                        if (local_298 != (undefined4 *)0x0) goto joined_r0x00df1820;
                      }
                      local_298 = (undefined4 *)FUN_00ed15d0(&local_40,&local_268);
                      if (local_298 == (undefined4 *)0x0) {
                        if ((local_40._1_1_ != '\0') && (((byte)local_40 & 1) == 0)) {
                          FUN_00f1f6ac(*(undefined4 *)
                                        CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c)),"}",1);
                        }
                        FUN_00f1f6ac(local_44,"}",1);
                        goto LAB_00df1368;
                      }
                    }
                  }
                  else {
                    local_b8 = (undefined4 ******)0xa;
                    local_298 = (undefined4 *)FUN_0157c50c(&local_b8,0,0);
                  }
                }
              }
              else {
                ppppppuVar9 = local_44[2];
                if (*local_44 == ppppppuVar9) {
                  FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                  ppppppuVar9 = pppppppuVar20[2];
                }
                pppppppuVar3 = local_44;
                uVar5 = local_26b;
                bVar1 = local_26c;
                *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x7b;
                pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                FUN_00e5d350(&local_b8,pppppppuVar3,"tuner",5);
                pppppppuVar20 = local_44;
                if ((char)local_b8 == '\x04') {
                  ppppppuVar9 = local_44[2];
                  if (*local_44 == ppppppuVar9) {
                    FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                    ppppppuVar9 = pppppppuVar20[2];
                  }
                  *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x3a;
                  pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                  pppppppuVar20 = local_44;
                  if (bVar1 == 2) {
                    ppppppuVar9 = local_44[2];
                    if ((uint)((int)*local_44 - (int)ppppppuVar9) < 4) {
                      FUN_00edff4c(local_44,ppppppuVar9,4,1,1);
                      ppppppuVar9 = pppppppuVar20[2];
                    }
                    *(undefined4 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x6c6c756e;
                    ppppppuVar9 = ppppppuVar9 + 1;
LAB_00df11b4:
                    pppppppuVar20[2] = ppppppuVar9;
LAB_00df11b8:
                    pppppppuVar20 = local_44;
                    ppppppuVar9 = local_44[2];
                    if (*local_44 == ppppppuVar9) {
                      FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                      ppppppuVar9 = pppppppuVar20[2];
                    }
                    pppppppuVar3 = local_44;
                    *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x2c;
                    pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                    FUN_00e5d350(&local_b8,pppppppuVar3,&DAT_0035c49a,9);
                    pppppppuVar20 = local_44;
                    if ((char)local_b8 == '\x04') {
                      ppppppuVar9 = local_44[2];
                      if (*local_44 == ppppppuVar9) {
                        FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                        ppppppuVar9 = pppppppuVar20[2];
                      }
                      cVar4 = local_274;
                      *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x3a;
                      pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                      pppppppuVar20 = local_44;
                      if (local_274 == '\x02') {
                        ppppppuVar9 = local_44[2];
                        if ((uint)((int)*local_44 - (int)ppppppuVar9) < 4) {
                          FUN_00edff4c(local_44,ppppppuVar9,4,1,1);
                          ppppppuVar9 = pppppppuVar20[2];
                        }
                        *(undefined4 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x6c6c756e;
                        pppppppuVar20[2] = ppppppuVar9 + 1;
LAB_00df1268:
                        pppppppuVar20 = local_44;
                        ppppppuVar9 = local_44[2];
                        if (*local_44 == ppppppuVar9) {
                          FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                          ppppppuVar9 = pppppppuVar20[2];
                        }
                        pppppppuVar3 = local_44;
                        *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x2c;
                        pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                        FUN_00e5d350(&local_b8,pppppppuVar3,"devfee_health",0xd);
                        pppppppuVar20 = local_44;
                        if ((char)local_b8 == '\x04') {
                          ppppppuVar8 = local_44[2];
                          if (*local_44 == ppppppuVar8) {
                            FUN_00edff4c(local_44,ppppppuVar8,1,1,1);
                            ppppppuVar8 = pppppppuVar20[2];
                          }
                          *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar8) = 0x3a;
                          pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar8 + 1);
                          pppppppuVar20 = local_44;
                          if (((uint)ppppppuVar25 & 1) == 0) {
                            ppppppuVar8 = local_44[2];
                            if ((uint)((int)*local_44 - (int)ppppppuVar8) < 4) {
                              FUN_00edff4c(local_44,ppppppuVar8,4,1,1);
                              ppppppuVar8 = pppppppuVar20[2];
                            }
                            *(undefined4 *)((int)pppppppuVar20[1] + (int)ppppppuVar8) = 0x6c6c756e;
                            pppppppuVar20[2] = ppppppuVar8 + 1;
                          }
                          else {
                            local_298 = (undefined4 *)FUN_00ed1c1c(local_28c,&local_44);
                            ppppppuVar8 = (undefined4 ******)0x1;
                            if (local_298 != (undefined4 *)0x0) goto joined_r0x00df1820;
                          }
                          pppppppuVar20 = local_44;
                          ppppppuVar8 = local_44[2];
                          if (*local_44 == ppppppuVar8) {
                            FUN_00edff4c(local_44,ppppppuVar8,1,1,1);
                            ppppppuVar8 = pppppppuVar20[2];
                          }
                          pppppppuVar3 = local_44;
                          *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar8) = 0x2c;
                          pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar8 + 1);
                          FUN_00e5d350(&local_b8,pppppppuVar3,&DAT_0035c4b6,0x12);
                          pppppppuVar20 = local_44;
                          if ((char)local_b8 == '\x04') {
                            ppppppuVar8 = local_44[2];
                            if (*local_44 == ppppppuVar8) {
                              FUN_00edff4c(local_44,ppppppuVar8,1,1,1);
                              ppppppuVar8 = pppppppuVar20[2];
                            }
                            *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar8) = 0x3a;
                            pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar8 + 1);
                            pppppppuVar20 = local_44;
                            if (local_288 == 0) {
                              ppppppuVar8 = local_44[2];
                              if ((uint)((int)*local_44 - (int)ppppppuVar8) < 4) {
                                FUN_00edff4c(local_44,ppppppuVar8,4,1,1);
                                ppppppuVar8 = pppppppuVar20[2];
                              }
                              *(undefined4 *)((int)pppppppuVar20[1] + (int)ppppppuVar8) = 0x6c6c756e
                              ;
                              pppppppuVar20[2] = ppppppuVar8 + 1;
                            }
                            else {
                              local_298 = (undefined4 *)FUN_00ed1c1c(local_284,&local_44);
                              ppppppuVar8 = ppppppuVar25;
                              if (local_298 != (undefined4 *)0x0) goto joined_r0x00df1820;
                            }
                            FUN_00f1f6ac(local_44,"}",1);
                            goto LAB_00df10bc;
                          }
                          local_298 = (undefined4 *)
                                      FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,
                                                                     CONCAT21(uStack_b3,local_b4)));
                          ppppppuVar8 = ppppppuVar25;
                        }
                        else {
                          local_298 = (undefined4 *)
                                      FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,
                                                                     CONCAT21(uStack_b3,local_b4)));
                        }
                      }
                      else {
                        ppppppuVar9 = local_44[2];
                        if (*local_44 == ppppppuVar9) {
                          FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                          ppppppuVar9 = pppppppuVar20[2];
                        }
                        *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x7b;
                        pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                        local_34 = &local_44;
                        local_38 = (undefined *)CONCAT22(local_38._2_2_,0x100);
                        local_298 = (undefined4 *)
                                    FUN_00e65278(&local_38,"window_duration_min",0x13,local_280);
                        if (local_298 == (undefined4 *)0x0) {
                          if ((char)local_38 == '\0') {
                            local_298 = (undefined4 *)
                                        FUN_00e65278(&local_38,"max_user_agents",0xf,local_27c);
                            if (local_298 == (undefined4 *)0x0) {
                              if ((char)local_38 != '\0') goto LAB_00df1598;
                              local_298 = (undefined4 *)
                                          FUN_00e65278(&local_38,"max_endpoints",0xd,local_278);
                              pppppppuVar20 = local_34;
                              if (local_298 == (undefined4 *)0x0) {
                                if ((char)local_38 != '\0') goto LAB_00df1598;
                                if (local_38._1_1_ != '\x01') {
                                  ppppppuVar9 = *local_34;
                                  pppppuVar10 = ppppppuVar9[2];
                                  if (*ppppppuVar9 == pppppuVar10) {
                                    FUN_00edff4c(ppppppuVar9,pppppuVar10,1,1,1);
                                    pppppuVar10 = ppppppuVar9[2];
                                  }
                                  *(undefined1 *)((int)ppppppuVar9[1] + (int)pppppuVar10) = 0x2c;
                                  ppppppuVar9[2] = (undefined4 *****)((int)pppppuVar10 + 1);
                                }
                                local_38._0_2_ = CONCAT11(2,(char)local_38);
                                FUN_00e5d350(&local_b8,*pppppppuVar20,"api_types",9);
                                if ((char)local_b8 == '\x04') {
                                  ppppppuVar9 = *pppppppuVar20;
                                  pppppuVar10 = ppppppuVar9[2];
                                  if (*ppppppuVar9 == pppppuVar10) {
                                    FUN_00edff4c(ppppppuVar9,pppppuVar10,1,1,1);
                                    pppppuVar10 = ppppppuVar9[2];
                                  }
                                  *(undefined1 *)((int)ppppppuVar9[1] + (int)pppppuVar10) = 0x3a;
                                  ppppppuVar9[2] = (undefined4 *****)((int)pppppuVar10 + 1);
                                  ppppppuVar9 = *pppppppuVar20;
                                  pppppuVar10 = ppppppuVar9[2];
                                  if (*ppppppuVar9 == pppppuVar10) {
                                    FUN_00edff4c(ppppppuVar9,pppppuVar10,1,1,1);
                                    pppppuVar10 = ppppppuVar9[2];
                                  }
                                  *(undefined1 *)((int)ppppppuVar9[1] + (int)pppppuVar10) = 0x7b;
                                  ppppppuVar9[2] = (undefined4 *****)((int)pppppuVar10 + 1);
                                  local_2c = pppppppuVar20;
                                  local_30 = (undefined4 ******)CONCAT22(local_30._2_2_,0x100);
                                  local_298 = (undefined4 *)
                                              FUN_00e6269c(&local_30,"cgminer",7,cVar4);
                                  if (local_298 == (undefined4 *)0x0) {
                                    if ((char)local_30 == '\0') {
                                      local_298 = (undefined4 *)
                                                  FUN_00e6269c(&local_30,"general_http",0xc,
                                                               local_273);
                                      if (local_298 == (undefined4 *)0x0) {
                                        if ((char)local_30 != '\0') goto LAB_00df1da4;
                                        local_298 = (undefined4 *)
                                                    FUN_00e6269c(&local_30,
                                                                                                                                  
                                                  "graphqlstruct RawPoolReconnectBackoffConfig",7,
                                                  local_272);
                                        if (local_298 == (undefined4 *)0x0) {
                                          if ((char)local_30 != '\0') goto LAB_00df1da4;
                                          local_298 = (undefined4 *)
                                                      FUN_00e6269c(&local_30,"grpch!",4,local_271);
                                          if (local_298 == (undefined4 *)0x0) {
                                            if ((char)local_30 != '\0') goto LAB_00df1da4;
                                            local_298 = (undefined4 *)
                                                        FUN_00e6269c(&local_30,&DAT_005699d8,8,
                                                                     local_270);
                                            if (local_298 == (undefined4 *)0x0) {
                                              if ((char)local_30 != '\0') goto LAB_00df1da4;
                                              local_298 = (undefined4 *)
                                                          FUN_00e6269c(&local_30,&DAT_00568014,4,
                                                                       local_26f);
                                              if (local_298 == (undefined4 *)0x0) {
                                                if ((char)local_30 != '\0') goto LAB_00df1da4;
                                                local_298 = (undefined4 *)
                                                            FUN_00e6269c(&local_30,&DAT_00568ecc,4,
                                                                         local_26e);
                                                if (local_298 == (undefined4 *)0x0) {
                                                  if ((((uint)local_30 & 0xff00) != 0) &&
                                                     (((uint)local_30 & 1) == 0)) {
                                                    FUN_00f1f6ac(*local_2c,"}",1);
                                                  }
                                                  if ((((uint)local_38 & 0xff00) != 0) &&
                                                     (((uint)local_38 & 1) == 0)) {
                                                    FUN_00f1f6ac(*pppppppuVar20,"}",1);
                                                  }
                                                  goto LAB_00df1268;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
LAB_00df1da4:
                                      local_b8 = (undefined4 ******)0xa;
                                      local_298 = (undefined4 *)FUN_0157c50c(&local_b8,0,0);
                                    }
                                  }
                                }
                                else {
                                  local_298 = (undefined4 *)
                                              FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,
                                                                             CONCAT21(uStack_b3,
                                                                                      local_b4)));
                                }
                              }
                            }
                          }
                          else {
LAB_00df1598:
                            local_b8 = (undefined4 ******)0xa;
                            local_298 = (undefined4 *)FUN_0157c50c(&local_b8,0,0);
                          }
                        }
                      }
                    }
                    else {
                      local_298 = (undefined4 *)
                                  FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,
                                                                 CONCAT21(uStack_b3,local_b4)));
                    }
                  }
                  else {
                    ppppppuVar9 = local_44[2];
                    if (*local_44 == ppppppuVar9) {
                      FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                      ppppppuVar9 = pppppppuVar20[2];
                    }
                    pppppppuVar3 = local_44;
                    *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x7b;
                    pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                    local_2c = &local_44;
                    local_30 = (undefined4 ******)CONCAT22(local_30._2_2_,0x200);
                    FUN_00e5d350(&local_b8,pppppppuVar3,"level",5);
                    pppppppuVar20 = local_44;
                    if ((char)local_b8 == '\x04') {
                      ppppppuVar9 = local_44[2];
                      if (*local_44 == ppppppuVar9) {
                        FUN_00edff4c(local_44,ppppppuVar9,1,1,1);
                        ppppppuVar9 = pppppppuVar20[2];
                      }
                      pppppppuVar3 = local_44;
                      *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x3a;
                      pppppppuVar20[2] = (undefined4 ******)((int)ppppppuVar9 + 1);
                      if ((bVar1 & 1) == 0) {
                        FUN_00e5d350(&local_b8,pppppppuVar3,&DAT_00567b50,4);
                        local_298 = (undefined4 *)0x0;
                        if ((char)local_b8 != '\x04') {
                          local_298 = (undefined4 *)
                                      FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,
                                                                     CONCAT21(uStack_b3,local_b4)));
                        }
                      }
                      else {
                        FUN_00e5d350(&local_b8,pppppppuVar3,&DAT_00566fac,4);
                        local_298 = (undefined4 *)0x0;
                        if ((char)local_b8 != '\x04') {
                          local_298 = (undefined4 *)
                                      FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,
                                                                     CONCAT21(uStack_b3,local_b4)));
                        }
                      }
                      if ((local_298 == (undefined4 *)0x0) &&
                         (local_298 = (undefined4 *)FUN_00e6269c(&local_30,"events",6,uVar5),
                         local_298 == (undefined4 *)0x0)) {
                        if ((((uint)local_30 & 0xff00) != 0) && (((uint)local_30 & 1) == 0)) {
                          pppppppuVar20 = (undefined4 *******)*local_2c;
                          ppppppuVar9 = pppppppuVar20[2];
                          if (*pppppppuVar20 == ppppppuVar9) {
                            FUN_00edff4c(pppppppuVar20,ppppppuVar9,1,1,1);
                            ppppppuVar9 = pppppppuVar20[2];
                          }
                          *(undefined1 *)((int)pppppppuVar20[1] + (int)ppppppuVar9) = 0x7d;
                          ppppppuVar9 = (undefined4 ******)((int)ppppppuVar9 + 1);
                          goto LAB_00df11b4;
                        }
                        goto LAB_00df11b8;
                      }
                    }
                    else {
                      local_298 = (undefined4 *)
                                  FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,
                                                                 CONCAT21(uStack_b3,local_b4)));
                    }
                  }
                }
                else {
                  local_298 = (undefined4 *)
                              FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,CONCAT21(uStack_b3,local_b4))
                                          );
                }
              }
            }
            else {
              local_298 = (undefined4 *)
                          FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,CONCAT21(uStack_b3,local_b4)));
            }
          }
          else {
            local_298 = (undefined4 *)
                        FUN_0157c4a0(local_b8,CONCAT13(uStack_b1,CONCAT21(uStack_b3,local_b4)));
          }
joined_r0x00df1820:
          ppppppuVar25 = ppppppuVar8;
          if (local_60 != (undefined4 *******)0x0) {
            thunk_FUN_016d3fb4(local_5c);
          }
LAB_00df182c:
          uVar26 = 4;
          if (ppppppuVar25 != (undefined4 ******)0x3) {
LAB_00df1838:
            if ((local_264 != 0) &&
               (uVar7 = local_264 * 0x11 & 0xfffffffc, uVar7 + local_264 != -0x19)) {
              thunk_FUN_016d3fb4((local_268 - uVar7) + -0x14);
            }
            goto LAB_00df1868;
          }
        }
        local_2b0 = local_2c0 & 0xffffff | (int)local_298 << 0x18;
        local_2b4 = (uint)local_298 >> 8;
      }
      else {
        do {
          if (*(int *)(iVar6 + 0x38) == 0) goto LAB_00df0dd0;
          FUN_0098b2b8(&local_290,iVar6,param_2,iVar6 + 0x34);
          uVar26 = (uint)local_290 & 0xff;
          if (uVar26 == 5) {
            uVar26 = 7;
            goto LAB_00df13b4;
          }
          if (uVar26 != 4) {
            local_b4 = (undefined1)local_28c;
            uStack_b3 = (undefined2)((uint)local_28c >> 8);
            uStack_b1 = (undefined1)((uint)local_28c >> 0x18);
            local_b8 = local_290;
            goto joined_r0x00df13b0;
          }
        } while (local_28c != 0);
        FUN_015e79d4(&local_b8,0x17,"failed to write frame to transport",0x22);
        uVar26 = (uint)local_b8 & 0xff;
joined_r0x00df13b0:
        if (uVar26 == 6) goto LAB_00df0dd0;
LAB_00df13b4:
        if (uVar26 != 7) {
          local_2b0 = CONCAT13(local_b4,local_b8._1_3_);
          local_2b4 = (uint)CONCAT12(uStack_b1,uStack_b3);
        }
      }
      if (uVar26 == 6) goto LAB_00df18b0;
      local_2bc = local_2b4;
      local_2b8 = local_2b0;
      if (uVar26 == 7) {
LAB_00df1c38:
        uVar5 = 4;
        goto LAB_00df2248;
      }
    }
LAB_00df1984:
    if (((1 < *(int *)(param_1 + 0x180) - 3U) && (iVar6 = *(int *)(param_1 + 0x1ac), iVar6 != 0)) &&
       (uVar7 = iVar6 * 0x11 & 0xfffffffc, uVar7 + iVar6 != -0x19)) {
      thunk_FUN_016d3fb4((*(int *)(param_1 + 0x1a8) - uVar7) + -0x14);
    }
  } while (uVar26 == 6);
  local_40._1_1_ = (char)local_2b8;
  local_40._2_2_ = (undefined2)(local_2b8 >> 8);
  local_3c = (undefined1)(local_2b8 >> 0x18);
  local_40._0_1_ = (byte)uVar26;
  uStack_3b = (undefined2)local_2bc;
  uStack_39 = (undefined1)(local_2bc >> 0x10);
  if (DAT_018d9130 < 4) {
    uVar26 = (uint)DAT_018daa84;
    if (uVar26 - 1 < 2) {
LAB_00df1ab8:
      if (uVar26 != 2) {
        DataMemoryBarrier(0xb);
        pcVar23 = s_SetGloba_00414c05;
        puVar12 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar23 = DAT_018daa74;
          puVar12 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar6 = (**(code **)(puVar12 + 0x14))(pcVar23);
        if (iVar6 == 0) goto LAB_00df1c54;
      }
      iVar6 = *(int *)(DAT_018daa7c + 0x20);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878ed8);
      }
      local_60 = &local_b8;
      local_b0 = *(int *)(DAT_018daa7c + 0x24);
      local_ac = *(undefined4 *)(DAT_018daa7c + 0x28);
      local_5c = &local_38;
      local_50 = &local_60;
      local_b4 = (undefined1)iVar6;
      uStack_b3 = (undefined2)((uint)iVar6 >> 8);
      uStack_b1 = (undefined1)((uint)iVar6 >> 0x18);
      local_34 = &local_30;
      local_a8 = (undefined4 *******)0x0;
      local_4c = (undefined4 *)&DAT_00000001;
      local_58 = (uint *)&DAT_018abb78;
      local_2c = (undefined4 *******)FUN_016b17f4;
      local_38 = &DAT_005891dd;
      local_30 = (undefined4 ******)&local_40;
      local_28c = 0;
      local_290 = (undefined4 ******)0x1;
      local_280 = &local_50;
      DataMemoryBarrier(0xb);
      pcVar23 = s_SetGloba_00414c05;
      puVar12 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar23 = DAT_018daa74;
        puVar12 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar23 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      local_27c = DAT_018daa7c;
      local_b8 = *(undefined4 *******)(DAT_018daa7c + 0x1c);
      local_48 = (uint *)(DAT_018daa7c + 0x1c);
      iVar6 = (**(code **)(puVar12 + 0x28))(pcVar23,&local_290);
      if (iVar6 != 0) {
        (**(code **)(puVar12 + 0x2c))(pcVar23,&local_290);
      }
    }
    else if (uVar26 != 0) {
      uVar26 = FUN_0169ac90(&DAT_018daa7c);
      uVar26 = uVar26 & 0xff;
      if (uVar26 != 0) goto LAB_00df1ab8;
    }
  }
LAB_00df1c54:
  FUN_00df2e14((byte)local_40,CONCAT13(uStack_39,CONCAT21(uStack_3b,local_3c)));
LAB_00df2274:
  local_29c = param_1 + 0x38;
  local_2a4 = (undefined1 *)(param_1 + 0x124);
  FUN_005c178c(param_1 + 200);
  puVar24 = (undefined4 *)(param_1 + 0xc4);
  FUN_01663cc4(*puVar24);
  piVar31 = (int *)*puVar24;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar31;
    bVar32 = (bool)hasExclusiveAccess(piVar31);
  } while (!bVar32);
  *piVar31 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar24);
  }
  FUN_00e7e088(param_1 + 0x58);
  piVar31 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar31;
    bVar32 = (bool)hasExclusiveAccess(piVar31);
  } while (!bVar32);
  *piVar31 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(*(undefined4 *)(param_1 + 0x60));
  }
  uVar15 = 1;
  iVar6 = 0;
  *local_2a4 = 1;
  FUN_00de2ba8(local_29c);
LAB_00df2308:
  cVar4 = *(char *)(iVar28 + 0x38);
  *(undefined1 *)(param_1 + 0x1e4) = uVar15;
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') goto joined_r0x00df2324;
    FUN_015e8e6c(iVar28,FUN_01655ec4);
    *(undefined1 *)(iVar28 + 0x38) = 1;
  }
  *(undefined4 *)(iVar28 + 0x18) = local_2a8;
  *(undefined4 *)(iVar28 + 0x1c) = local_2ac;
joined_r0x00df2324:
  if (iVar6 == 0) {
    local_290 = (undefined4 ******)0x2;
    FUN_00df2c80(param_1,&local_290);
    return 0;
  }
  return iVar6;
}

