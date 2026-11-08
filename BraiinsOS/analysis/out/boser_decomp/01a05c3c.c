// FUN_01a05c3c @ 01a05c3c size=5936 calls_out=33 calls_in=0
// strings: internal error: entered unreachable code | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01a05c3c(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *******pppppppiVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int *******pppppppiVar15;
  undefined4 *puVar16;
  int ***pppiVar17;
  int **ppiVar18;
  int ***pppiVar19;
  int extraout_r3;
  int ****ppppiVar20;
  undefined1 uVar21;
  int ****ppppiVar22;
  char *pcVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined4 uVar26;
  int *piVar27;
  int *piVar28;
  int *******pppppppiVar29;
  int *******pppppppiVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int local_218;
  uint *local_20c;
  int ******local_1e0;
  int *******local_1dc;
  int *******local_1d8;
  int *******local_1d4;
  undefined4 local_1d0;
  int *******local_1c8;
  int *******local_1c4;
  undefined8 local_1c0;
  int ***local_1b8;
  undefined4 uStack_1b4;
  int *local_1b0;
  uint local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  int *******pppppppiStack_19c;
  int *******pppppppiStack_198;
  undefined4 *puStack_194;
  int *******local_190;
  int *******local_18c;
  int *local_188;
  int *******local_180;
  int *******local_17c;
  undefined8 local_178;
  int ***local_170;
  undefined4 local_16c;
  int *local_168;
  uint local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  undefined8 local_148;
  int ***local_140;
  undefined4 uStack_13c;
  int *local_138;
  uint uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int *******pppppppiStack_124;
  int *******local_120;
  int *******local_11c;
  int *******local_118;
  int *******local_114;
  int ***local_110;
  undefined4 local_10c;
  int *local_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int *******local_f4;
  int *******pppppppiStack_f0;
  undefined4 *puStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int *local_c8;
  uint *local_c4;
  undefined4 local_c0;
  int *local_b8;
  int local_b4;
  int *******local_90;
  int *******local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *******local_60;
  int *******local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *******local_30;
  int *******local_2c;
  
  puVar9 = (undefined4 *)((uint)&local_120 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0xa5)) {
  case 0:
    param_1[2] = param_1[10];
    *(undefined1 *)(param_1 + 0x29) = 0;
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    param_1[0x22] = param_1[0x27];
    param_1[0x23] = param_1[0x28];
    param_1[0xc] = param_1[0x18];
    param_1[0xd] = param_1[0x19];
    param_1[0xe] = param_1[0x1a];
    param_1[0xf] = param_1[0x1b];
    param_1[0x10] = param_1[0x1c];
    param_1[0x11] = param_1[0x1d];
    param_1[0x12] = param_1[0x1e];
    param_1[0x13] = param_1[0x1f];
    param_1[0x14] = param_1[0x20];
    param_1[0x15] = param_1[0x21];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29de0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29de0);
  case 3:
    goto switchD_01a05c8c_caseD_3;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x35)) {
    case 0:
      puVar16 = (undefined4 *)param_1[0x2a];
      goto LAB_01a071d0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b400);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b400);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x34)) {
    case 0:
      puVar16 = (undefined4 *)param_1[0x2b];
      goto LAB_01a071e0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b410);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b410);
    case 3:
      goto switchD_01a05d88_caseD_3;
    }
  case 5:
    iVar14 = param_1[0x2b];
    goto LAB_01a07288;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x36)) {
    case 0:
      puVar16 = (undefined4 *)param_1[0x2b];
      goto LAB_01a05f2c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b400);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b400);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x35)) {
      case 0:
        puVar16 = (undefined4 *)param_1[0x2c];
        goto LAB_01a05f3c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b410);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b410);
      case 3:
        goto switchD_01a05d5c_caseD_3;
      }
    }
  }
  do {
    while( true ) {
      param_1[0x2a] = param_1;
      *(undefined1 *)(param_1 + 0x31) = 0;
switchD_01a05c8c_caseD_3:
      FUN_01a07ba8(&local_120,param_1 + 0x2a,*param_2);
      pppiVar17 = local_110;
      pppppppiVar11 = local_114;
      pppppppiVar29 = local_118;
      pppppppiVar30 = local_11c;
      pppppppiVar15 = local_120;
      if ((char)local_120 == '\x02') {
        uVar10 = 1;
        uVar21 = 3;
        goto LAB_01a07654;
      }
      uVar10 = CONCAT13(local_11c._0_1_,local_120._1_3_);
      uVar26 = local_10c;
      uVar32 = local_178;
      if (*(char *)(param_1 + 0x31) == '\x03') {
        FUN_009cdcac(param_1 + 0x2b);
        uVar32 = local_178;
      }
      if (((uint)pppppppiVar15 & 1) != 0) break;
      *(int ********)((int)param_1 + 0x17) = pppppppiVar29;
      *(int ********)((int)param_1 + 0x1b) = pppppppiVar11;
      param_1[4] = uVar10;
      local_178._0_4_ = (int *)param_1[0x23];
      *(int ********)((int)param_1 + 0x13) = pppppppiVar30;
      *(char *)((int)param_1 + 0x1f) = (char)pppiVar17;
      do {
        iVar14 = *(int *)local_178;
        bVar2 = (bool)hasExclusiveAccess((int *)local_178);
      } while (!bVar2);
      *(int *)local_178 = iVar14 + 1;
      uVar5 = local_148;
      uVar6 = local_1c0;
      if (iVar14 < 0) goto LAB_01a0685c;
      piVar28 = (int *)local_178 + 0x11;
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar28);
      } while (!bVar2);
      *piVar28 = *piVar28 + 1;
      do {
        do {
          local_30 = (int *******)DAT_01d50470;
          local_2c = (int *******)DAT_01d50474;
          ppppiVar20 = (int ****)((int)DAT_01d50470 + 1);
          ppppiVar22 = (int ****)((int)DAT_01d50474 + (uint)((int ****)0xfffffffe < DAT_01d50470));
          bVar2 = (bool)hasExclusiveAccess(0x1d50470);
        } while (!bVar2);
        bVar2 = DAT_01d50470 == (int ****)0x0;
        bVar3 = DAT_01d50474 == (int ****)0x0;
        DAT_01d50470 = ppppiVar20;
        DAT_01d50474 = ppppiVar22;
      } while (bVar2 && bVar3);
      local_178._4_4_ = param_1[4];
      local_170 = (int ***)param_1[5];
      local_16c = param_1[6];
      local_168 = (int *)param_1[7];
      local_17c = &local_1e0;
      local_180 = (int *******)&local_30;
      iVar14 = thunk_FUN_01bee35a();
      puVar13 = (uint *)(iVar14 + 0x20);
      local_164 = local_164 & 0xffffff00;
      if (*(char *)(iVar14 + 0x58) != '\x01') {
        if (*(char *)(iVar14 + 0x58) == '\x02') {
          uVar21 = 1;
          FUN_0193c71c(&local_178);
          goto LAB_01a06b68;
        }
        FUN_019a2bcc(puVar13,&LAB_019efb68);
        *(undefined1 *)(iVar14 + 0x58) = 1;
      }
      local_150 = local_180;
      local_14c = local_17c;
      local_148._0_4_ = (int *)local_178;
      local_148._4_4_ = local_178._4_4_;
      local_140 = local_170;
      uStack_13c = local_16c;
      local_138 = local_168;
      uStack_134 = local_164;
      uVar25 = *puVar13;
      if (0x7ffffffe < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_0130701c(&DAT_01d2e14c);
      }
      *puVar13 = uVar25 + 1;
      local_1c8 = local_180;
      local_1c4 = local_17c;
      local_1c0._0_4_ = (int *******)(int *)local_178;
      local_1c0._4_4_ = (int *******)local_178._4_4_;
      local_1b8 = local_170;
      uStack_1b4 = local_16c;
      local_1b0 = local_168;
      local_1ac = local_164;
      if (*(uint *)(iVar14 + 0x24) == 2) {
        if ((local_164 & 0xff) == 0) {
          FUN_0193c71c(&local_1c0);
          uVar25 = *puVar13 - 1;
        }
        *puVar13 = uVar25;
        uVar21 = 0;
LAB_01a06b68:
        local_120 = (int *******)CONCAT31(local_120._1_3_,uVar21);
                    /* WARNING: Subroutine does not return */
        FUN_0068d4ec(&local_120,&DAT_01d29e10);
      }
      pppppppiVar15 = (int *******)*local_180;
      pppppppiVar30 = (int *******)local_180[1];
      if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
        piVar28 = *(int **)(iVar14 + 0x28);
        do {
          iVar12 = *piVar28;
          bVar2 = (bool)hasExclusiveAccess(piVar28);
        } while (!bVar2);
        *piVar28 = iVar12 + 1;
        uVar32 = CONCAT44(local_178._4_4_,(int *)local_178);
        uVar5 = CONCAT44(local_178._4_4_,(int *)local_178);
        uVar6 = CONCAT44(local_178._4_4_,(int *)local_178);
        if (iVar12 < 0) goto LAB_01a0685c;
        piVar27 = (int *)piVar28[0x82];
        if (piVar27 != (int *)0x0) {
          do {
            iVar12 = *piVar27;
            bVar2 = (bool)hasExclusiveAccess(piVar27);
          } while (!bVar2);
          *piVar27 = iVar12 + 1;
          uVar32 = CONCAT44(local_178._4_4_,(int *)local_178);
          uVar5 = CONCAT44(local_178._4_4_,(int *)local_178);
          uVar6 = CONCAT44(local_178._4_4_,(int *)local_178);
          if (iVar12 < 0) goto LAB_01a0685c;
          local_20c = (uint *)piVar28[0x83];
        }
        puVar16 = (undefined4 *)((uint)&local_60 | 4);
        *puVar16 = (int *)local_178;
        puVar16[1] = local_178._4_4_;
        puVar16[2] = local_170;
        puVar16[3] = local_16c;
        puVar16[4] = local_168;
        puVar16[5] = local_164;
        local_90 = local_60;
        local_8c = local_5c;
        local_88 = local_58;
        local_84 = local_54;
        uStack_80 = uStack_50;
        local_7c = local_4c;
        uStack_78 = uStack_48;
        local_f8 = 0;
        local_f4 = local_60;
        pppppppiStack_f0 = local_5c;
        puStack_ec = local_58;
        local_e8 = local_54;
        uStack_e4 = uStack_50;
        local_e0 = local_4c;
        uStack_dc = uStack_48;
        puVar9[4] = pppppppiVar15;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[5] = pppppppiVar30;
        local_118 = (int *******)&PTR_LAB_01d2a1a8;
        local_11c = (int *******)0x0;
        local_120 = (int *******)&DAT_000000cc;
        local_c4 = local_20c;
        local_d0 = 0;
        local_d4 = 0;
        local_d8 = 0;
        local_60 = (int *******)0x0;
        local_108 = piVar28;
        local_c8 = piVar27;
        iVar12 = FUN_01be5878(&local_60,0x20,0x60);
        pppppppiVar29 = local_60;
        if ((iVar12 != 0) || (local_60 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(0x20,0x60);
        }
        FUN_01bed4e2(local_60,&local_120,0x60);
        iVar12 = FUN_01a2cc10(piVar28 + 0x40,pppppppiVar29,pppppppiVar29);
        local_120 = pppppppiVar15;
        local_11c = pppppppiVar30;
        if (piVar28[0x80] != 0) {
          (**(code **)(piVar28[0x81] + 0x14))
                    (piVar28[0x80] + (*(int *)(piVar28[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_120)
          ;
        }
        if (iVar12 != 0) {
          FUN_019dc904(*(undefined4 *)(iVar14 + 0x28),iVar12);
        }
      }
      else {
        piVar28 = *(int **)(iVar14 + 0x28);
        do {
          iVar14 = *piVar28;
          bVar2 = (bool)hasExclusiveAccess(piVar28);
        } while (!bVar2);
        *piVar28 = iVar14 + 1;
        uVar32 = CONCAT44(local_178._4_4_,(int *)local_178);
        uVar5 = CONCAT44(local_178._4_4_,(int *)local_178);
        uVar6 = CONCAT44(local_178._4_4_,(int *)local_178);
        if (iVar14 < 0) goto LAB_01a0685c;
        piVar27 = (int *)piVar28[0x50];
        if (piVar27 != (int *)0x0) {
          do {
            iVar14 = *piVar27;
            bVar2 = (bool)hasExclusiveAccess(piVar27);
          } while (!bVar2);
          *piVar27 = iVar14 + 1;
          uVar32 = CONCAT44(local_178._4_4_,(int *)local_178);
          uVar5 = CONCAT44(local_178._4_4_,(int *)local_178);
          uVar6 = CONCAT44(local_178._4_4_,(int *)local_178);
          if (iVar14 < 0) goto LAB_01a0685c;
          local_20c = (uint *)piVar28[0x51];
        }
        puVar16 = (undefined4 *)((uint)&local_60 | 4);
        *puVar16 = (int *)local_178;
        puVar16[1] = local_178._4_4_;
        puVar16[2] = local_170;
        puVar16[3] = local_16c;
        puVar16[4] = local_168;
        puVar16[5] = local_164;
        local_90 = local_60;
        local_8c = local_5c;
        local_88 = local_58;
        local_84 = local_54;
        uStack_80 = uStack_50;
        local_7c = local_4c;
        uStack_78 = uStack_48;
        local_f8 = 0;
        local_f4 = local_60;
        pppppppiStack_f0 = local_5c;
        puStack_ec = local_58;
        local_e8 = local_54;
        uStack_e4 = uStack_50;
        local_e0 = local_4c;
        uStack_dc = uStack_48;
        puVar9[4] = pppppppiVar15;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[5] = pppppppiVar30;
        local_118 = (int *******)&PTR_LAB_01d2a220;
        local_11c = (int *******)0x0;
        local_120 = (int *******)&DAT_000000cc;
        local_c4 = local_20c;
        local_d0 = 0;
        local_d4 = 0;
        local_d8 = 0;
        local_60 = (int *******)0x0;
        local_108 = piVar28;
        local_c8 = piVar27;
        iVar14 = FUN_01be5878(&local_60,0x20,0x60);
        pppppppiVar29 = local_60;
        if ((iVar14 != 0) || (local_60 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(0x20,0x60);
        }
        FUN_01bed4e2(local_60,&local_120,0x60);
        pppppppiVar11 = (int *******)FUN_01a2ce94(piVar28 + 0x14,pppppppiVar29,pppppppiVar29);
        local_120 = pppppppiVar15;
        local_11c = pppppppiVar30;
        if (piVar28[0x4e] != 0) {
          (**(code **)(piVar28[0x4f] + 0x14))
                    (piVar28[0x4e] + (*(int *)(piVar28[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_120)
          ;
        }
        if (pppppppiVar11 != (int *******)0x0) {
          local_60 = (int *******)((uint)local_60 & 0xffffff00);
          local_120 = (int *******)(piVar28 + 2);
          local_11c = pppppppiVar11;
          local_118 = (int *******)&local_60;
          FUN_019ee860(&local_120);
        }
      }
      *puVar13 = *puVar13 - 1;
      if (*pppppppiVar29 == (int ******)&DAT_000000cc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(pppppppiVar29);
        if (!bVar2) goto LAB_01a071a8;
        *pppppppiVar29 = (int ******)&DAT_00000084;
      }
      else {
        ClearExclusiveLocal();
LAB_01a071a8:
        (*(code *)pppppppiVar29[2][4])(pppppppiVar29);
      }
      *(undefined1 *)(param_1 + 0x35) = 0;
      puVar16 = (undefined4 *)(param_1[0x22] + 8);
      param_1[0x2a] = puVar16;
LAB_01a071d0:
      *(undefined1 *)(param_1 + 0x34) = 0;
      param_1[0x2b] = puVar16;
LAB_01a071e0:
      uVar10 = *puVar16;
      *(undefined1 *)(param_1 + 0x33) = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = uVar10;
      param_1[0x32] = uVar10;
      param_1[0x2c] = puVar16 + 1;
      param_1[0x2d] = 0;
switchD_01a05d88_caseD_3:
      puVar16 = param_1 + 0x34;
      bVar7 = FUN_019f9bc4(param_1 + 0x2c,param_2);
      if (bVar7 == 2) {
        *(undefined1 *)(param_1 + 0x35) = 3;
        uVar21 = 4;
LAB_01a0683c:
        uVar10 = 1;
        *(undefined1 *)puVar16 = 3;
        goto LAB_01a07654;
      }
      FUN_0193c3cc(param_1 + 0x2c);
      if ((bVar7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
      }
      puVar16 = (undefined4 *)param_1[0x2b];
      uVar10 = *puVar16;
      *(undefined1 *)(param_1 + 0x35) = 1;
      *(undefined1 *)(param_1 + 0x34) = 1;
      param_1[0x26] = puVar16 + 6;
      param_1[0x25] = uVar10;
      param_1[0x24] = puVar16 + 1;
      local_120 = (int *******)param_1[4];
      local_11c = (int *******)param_1[5];
      local_118 = (int *******)param_1[6];
      local_114 = (int *******)param_1[7];
      uVar32 = (**(code **)(puVar16[7] + 0x10))(puVar16[6]);
      iVar14 = (int)((ulonglong)uVar32 >> 0x20);
      *(undefined8 *)(param_1 + 0x2a) = uVar32;
LAB_01a07288:
      (**(code **)(iVar14 + 0xc))(&local_120,param_1[0x2a],param_2);
      if ((char)local_120 == '\x02') {
        uVar10 = 1;
        uVar21 = 5;
        goto LAB_01a07654;
      }
      pcVar23 = (char *)(param_1 + 0x16);
      *(int ********)pcVar23 = local_120;
      *(undefined1 *)(param_1 + 0x29) = 1;
      param_1[0x17] = local_11c;
      FUN_01139b38(param_1[0x2a],param_1[0x2b]);
      if ((*pcVar23 == '\0') && (iVar14 = param_1[0x17], iVar14 != 0)) {
        *(undefined1 *)(param_1 + 0x36) = 0;
        puVar16 = (undefined4 *)(iVar14 + 8);
        param_1[0x2a] = iVar14;
        param_1[0x2b] = puVar16;
LAB_01a05f2c:
        *(undefined1 *)(param_1 + 0x35) = 0;
        param_1[0x2c] = puVar16;
LAB_01a05f3c:
        uVar10 = *puVar16;
        param_1[0x2d] = puVar16 + 1;
        *(undefined1 *)(param_1 + 0x34) = 0;
        param_1[0x30] = 0;
        param_1[0x31] = 0;
        param_1[0x32] = uVar10;
        param_1[0x33] = uVar10;
        param_1[0x2e] = 0;
switchD_01a05d5c_caseD_3:
        puVar16 = param_1 + 0x35;
        bVar7 = FUN_019f9bc4(param_1 + 0x2d,param_2);
        if (bVar7 == 2) {
          uVar21 = 6;
          *(undefined1 *)(param_1 + 0x36) = 3;
          goto LAB_01a0683c;
        }
        FUN_0193c3cc(param_1 + 0x2d);
        if ((bVar7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
        }
        puVar16 = (undefined4 *)param_1[0x2c];
        uVar10 = *puVar16;
        *(undefined1 *)(param_1 + 0x36) = 1;
        *(undefined1 *)(param_1 + 0x35) = 1;
        local_1c8 = (int *******)param_1[4];
        local_1c4 = (int *******)param_1[5];
        local_1c0._0_4_ = (int *******)param_1[6];
        local_1c0._4_4_ = (int *******)param_1[7];
        FUN_01a35774(&local_1b8,param_1 + 0xc);
        local_120 = local_1c8;
        local_11c = local_1c4;
        local_118 = (int *******)local_1c0;
        local_114 = local_1c0._4_4_;
        local_110 = local_1b8;
        local_10c = uStack_1b4;
        local_108 = local_1b0;
        uStack_104 = local_1ac;
        uStack_100 = uStack_1a8;
        local_fc = local_1a4;
        local_f8 = uStack_1a0;
        local_f4 = pppppppiStack_19c;
        pppppppiStack_f0 = pppppppiStack_198;
        puStack_ec = puStack_194;
        uVar31 = (**(code **)(puVar16[7] + 0x10))(puVar16[6]);
        pppiVar17 = (int ***)param_1[0x23];
        do {
          ppiVar18 = *pppiVar17;
          bVar2 = (bool)hasExclusiveAccess(pppiVar17);
        } while (!bVar2);
        *pppiVar17 = (int **)((int)ppiVar18 + 1);
        uVar32 = CONCAT44(local_178._4_4_,(int *)local_178);
        uVar5 = CONCAT44(local_148._4_4_,(int *)local_148);
        uVar6 = CONCAT44(local_1c0._4_4_,(int *******)local_1c0);
        if ((int)ppiVar18 < 0) goto LAB_01a0685c;
        pppiVar19 = pppiVar17 + 0x11;
        do {
          bVar2 = (bool)hasExclusiveAccess(pppiVar19);
        } while (!bVar2);
        *pppiVar19 = (int **)((int)*pppiVar19 + 1);
        do {
          do {
            local_30 = (int *******)DAT_01d50470;
            local_2c = (int *******)DAT_01d50474;
            ppppiVar20 = (int ****)((int)DAT_01d50470 + 1);
            ppppiVar22 = (int ****)((int)DAT_01d50474 + (uint)((int ****)0xfffffffe < DAT_01d50470))
            ;
            bVar2 = (bool)hasExclusiveAccess(0x1d50470);
          } while (!bVar2);
          bVar2 = DAT_01d50470 == (int ****)0x0;
          bVar3 = DAT_01d50474 == (int ****)0x0;
          DAT_01d50470 = ppppiVar20;
          DAT_01d50474 = ppppiVar22;
        } while (bVar2 && bVar3);
        local_16c = param_1[4];
        local_168 = (int *)param_1[5];
        local_164 = param_1[6];
        uStack_160 = param_1[7];
        local_17c = &local_1e0;
        local_180 = (int *******)&local_30;
        local_170 = pppiVar17;
        local_178 = uVar31;
        iVar14 = thunk_FUN_01bee35a();
        local_20c = (uint *)(iVar14 + extraout_r3);
        local_154 = (int *******)((uint)local_154 & 0xffffff00);
        if ((char)local_20c[0xe] != '\x01') {
          if ((char)local_20c[0xe] == '\x02') {
            uVar21 = 1;
            FUN_01a017e8();
            goto LAB_01a060e4;
          }
          FUN_019a2bcc(local_20c,&LAB_019efb68);
          *(undefined1 *)(local_20c + 0xe) = 1;
        }
        local_150 = local_180;
        local_14c = local_17c;
        local_140 = local_170;
        uStack_13c = local_16c;
        local_138 = local_168;
        uStack_134 = local_164;
        uStack_130 = uStack_160;
        uStack_12c = uStack_15c;
        uStack_128 = uStack_158;
        pppppppiStack_124 = local_154;
        local_148 = local_178;
        if (0x7ffffffe < *local_20c) {
                    /* WARNING: Subroutine does not return */
          FUN_0130701c(&DAT_01d2e14c);
        }
        *local_20c = *local_20c + 1;
        local_1c8 = local_180;
        local_1c4 = local_17c;
        local_1b8 = local_170;
        uStack_1b4 = local_16c;
        local_1b0 = local_168;
        local_1ac = local_164;
        uStack_1a8 = uStack_160;
        local_1a4 = uStack_15c;
        uStack_1a0 = uStack_158;
        pppppppiStack_19c = local_154;
        local_1c0 = local_178;
        if (local_20c[1] == 2) {
          FUN_01a017e8(&local_1c0);
          uVar21 = 0;
          *local_20c = *local_20c - 1;
LAB_01a060e4:
          local_120 = (int *******)CONCAT31(local_120._1_3_,uVar21);
                    /* WARNING: Subroutine does not return */
          FUN_0068d4ec(&local_120,&DAT_01d29df0);
        }
        pppppppiVar15 = (int *******)*local_180;
        pppppppiVar30 = (int *******)local_180[1];
        uVar32 = local_178;
        uVar5 = local_178;
        uVar6 = local_178;
        if ((local_20c[1] & 1) == 0) {
          piVar28 = (int *)local_20c[2];
          do {
            iVar14 = *piVar28;
            bVar2 = (bool)hasExclusiveAccess(piVar28);
          } while (!bVar2);
          *piVar28 = iVar14 + 1;
          if (iVar14 < 0) goto LAB_01a0685c;
          piVar27 = (int *)piVar28[0x82];
          if (piVar27 != (int *)0x0) {
            do {
              iVar14 = *piVar27;
              bVar2 = (bool)hasExclusiveAccess(piVar27);
            } while (!bVar2);
            *piVar27 = iVar14 + 1;
            if (iVar14 < 0) goto LAB_01a0685c;
            local_218 = piVar28[0x83];
          }
          puVar24 = (undefined8 *)((uint)&local_60 | 4);
          *puVar24 = local_178;
          *(int ****)(puVar24 + 1) = local_170;
          *(undefined4 *)((int)puVar24 + 0xc) = local_16c;
          *(int **)(puVar24 + 2) = local_168;
          *(uint *)((int)puVar24 + 0x14) = local_164;
          *(undefined4 *)(puVar24 + 3) = uStack_160;
          *(undefined4 *)((int)puVar24 + 0x1c) = uStack_15c;
          *(undefined4 *)(puVar24 + 4) = uStack_158;
          *(int ********)((int)puVar24 + 0x24) = local_154;
          local_90 = local_60;
          local_8c = local_5c;
          local_88 = local_58;
          local_84 = local_54;
          uStack_80 = uStack_50;
          local_7c = local_4c;
          uStack_78 = uStack_48;
          uStack_74 = uStack_44;
          uStack_70 = uStack_40;
          uStack_6c = uStack_3c;
          uStack_68 = uStack_38;
          local_f8 = 0;
          local_f4 = local_60;
          pppppppiStack_f0 = local_5c;
          puStack_ec = local_58;
          local_e8 = local_54;
          uStack_e4 = uStack_50;
          local_e0 = local_4c;
          uStack_dc = uStack_48;
          local_d8 = uStack_44;
          local_d4 = uStack_40;
          local_d0 = uStack_3c;
          uStack_cc = uStack_38;
          puVar9[4] = pppppppiVar15;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[5] = pppppppiVar30;
          local_120 = (int *******)&DAT_000000cc;
          local_118 = (int *******)&PTR_LAB_01d2a270;
          local_b4 = local_218;
          local_11c = (int *******)0x0;
          local_c0 = 0;
          local_c4 = (uint *)0x0;
          local_c8 = (int *)0x0;
          local_60 = (int *******)0x0;
          local_108 = piVar28;
          local_b8 = piVar27;
          iVar14 = FUN_01be5878(&local_60,0x20,0x80);
          pppppppiVar29 = local_60;
          if ((iVar14 != 0) || (local_60 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(0x20,0x80);
          }
          FUN_01bed4e2(local_60,&local_120,0x80);
          iVar14 = FUN_01a2cc10(piVar28 + 0x40,pppppppiVar29,pppppppiVar29);
          local_120 = pppppppiVar15;
          local_11c = pppppppiVar30;
          if (piVar28[0x80] != 0) {
            (**(code **)(piVar28[0x81] + 0x14))
                      (piVar28[0x80] + (*(int *)(piVar28[0x81] + 8) - 1U & 0xfffffff8) + 8,
                       &local_120);
          }
          if (iVar14 != 0) {
            FUN_019dc904(local_20c[2],iVar14);
          }
        }
        else {
          piVar28 = (int *)local_20c[2];
          do {
            iVar14 = *piVar28;
            bVar2 = (bool)hasExclusiveAccess(piVar28);
          } while (!bVar2);
          *piVar28 = iVar14 + 1;
          if (iVar14 < 0) {
LAB_01a0685c:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x1a0685c);
            local_178 = uVar32;
            local_148 = uVar5;
            local_1c0 = uVar6;
            (*pcVar1)();
          }
          piVar27 = (int *)piVar28[0x50];
          if (piVar27 != (int *)0x0) {
            do {
              iVar14 = *piVar27;
              bVar2 = (bool)hasExclusiveAccess(piVar27);
            } while (!bVar2);
            *piVar27 = iVar14 + 1;
            if (iVar14 < 0) goto LAB_01a0685c;
            local_218 = piVar28[0x51];
          }
          puVar24 = (undefined8 *)((uint)&local_60 | 4);
          *puVar24 = local_178;
          *(int ****)(puVar24 + 1) = local_170;
          *(undefined4 *)((int)puVar24 + 0xc) = local_16c;
          *(int **)(puVar24 + 2) = local_168;
          *(uint *)((int)puVar24 + 0x14) = local_164;
          *(undefined4 *)(puVar24 + 3) = uStack_160;
          *(undefined4 *)((int)puVar24 + 0x1c) = uStack_15c;
          *(undefined4 *)(puVar24 + 4) = uStack_158;
          *(int ********)((int)puVar24 + 0x24) = local_154;
          local_90 = local_60;
          local_8c = local_5c;
          local_88 = local_58;
          local_84 = local_54;
          uStack_80 = uStack_50;
          local_7c = local_4c;
          uStack_78 = uStack_48;
          uStack_74 = uStack_44;
          uStack_70 = uStack_40;
          uStack_6c = uStack_3c;
          uStack_68 = uStack_38;
          local_f8 = 0;
          local_f4 = local_60;
          pppppppiStack_f0 = local_5c;
          puStack_ec = local_58;
          local_e8 = local_54;
          uStack_e4 = uStack_50;
          local_e0 = local_4c;
          uStack_dc = uStack_48;
          local_d8 = uStack_44;
          local_d4 = uStack_40;
          local_d0 = uStack_3c;
          uStack_cc = uStack_38;
          puVar9[4] = pppppppiVar15;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[5] = pppppppiVar30;
          local_118 = (int *******)&PTR_LAB_01d2a2e8;
          local_11c = (int *******)0x0;
          local_120 = (int *******)&DAT_000000cc;
          local_b4 = local_218;
          local_c0 = 0;
          local_c4 = (uint *)0x0;
          local_c8 = (int *)0x0;
          local_60 = (int *******)0x0;
          local_108 = piVar28;
          local_b8 = piVar27;
          iVar14 = FUN_01be5878(&local_60,0x20,0x80);
          pppppppiVar29 = local_60;
          if ((iVar14 != 0) || (local_60 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(0x20,0x80);
          }
          FUN_01bed4e2(local_60,&local_120,0x80);
          pppppppiVar11 = (int *******)FUN_01a2ce94(piVar28 + 0x14,pppppppiVar29,pppppppiVar29);
          local_120 = pppppppiVar15;
          local_11c = pppppppiVar30;
          if (piVar28[0x4e] != 0) {
            (**(code **)(piVar28[0x4f] + 0x14))
                      (piVar28[0x4e] + (*(int *)(piVar28[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                       &local_120);
          }
          if (pppppppiVar11 != (int *******)0x0) {
            local_60 = (int *******)((uint)local_60 & 0xffffff00);
            local_120 = (int *******)(piVar28 + 2);
            local_11c = pppppppiVar11;
            local_118 = (int *******)&local_60;
            FUN_019ee860(&local_120);
          }
        }
        *local_20c = *local_20c - 1;
        if (*pppppppiVar29 == (int ******)&DAT_000000cc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(pppppppiVar29);
          if (!bVar2) goto LAB_01a0653c;
          *pppppppiVar29 = (int ******)&DAT_00000084;
        }
        else {
          ClearExclusiveLocal();
LAB_01a0653c:
          (*(code *)pppppppiVar29[2][4])(pppppppiVar29);
        }
        FUN_019f8c54(puVar16 + 1,uVar10);
        piVar28 = (int *)param_1[0x2a];
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar28;
          bVar2 = (bool)hasExclusiveAccess(piVar28);
        } while (!bVar2);
        *piVar28 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38404(param_1[0x2a]);
        }
        if (*(char *)(param_1 + 0x16) != '\x01') {
          *(undefined1 *)(param_1 + 0x29) = 0;
        }
      }
      else {
        if ((DAT_01d50f88 < 5) &&
           (((DAT_01d506c0 - 1 < 2 ||
             ((DAT_01d506c0 != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d506b8), cVar8 != '\0')))) &&
            (iVar14 = FUN_01aaa278(DAT_01d506b8), iVar14 != 0)))) {
          if (*(int ********)(DAT_01d506b8 + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e20);
          }
          local_118 = *(int ********)(DAT_01d506b8 + 0x24);
          local_58 = (undefined4 *)(DAT_01d506b8 + 0x1c);
          local_120 = (int *******)*local_58;
          local_17c = (int *******)&local_30;
          local_114 = *(int ********)(DAT_01d506b8 + 0x28);
          local_5c = (int *******)&DAT_00000001;
          local_2c = (int *******)&local_90;
          local_60 = (int *******)&local_180;
          local_90 = (int *******)(param_1 + 4);
          local_110 = (int ***)0x0;
          local_178._0_4_ = (int *)&DAT_01d2ea4c;
          local_30 = (int *******)&DAT_0058fe64;
          local_8c = (int *******)FUN_005fd794;
          local_180 = (int *******)&local_120;
          local_11c = *(int ********)(DAT_01d506b8 + 0x20);
          FUN_01aaaecc(DAT_01d506b8,&local_60);
          iVar14 = DAT_01d506b8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_14c = *(int ********)(DAT_01d506b8 + 0x14);
            local_148._0_4_ = *(int **)(DAT_01d506b8 + 0x18);
            local_150 = (int *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar16 = DAT_01d4edc8;
            pcVar4 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar16 = &DAT_01cfc5e0;
              pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar12 = (*(code *)puVar16[3])(pcVar4,&local_150);
            if (iVar12 != 0) {
              local_1c8 = local_150;
              local_1c4 = local_14c;
              local_1c0._0_4_ = (int *******)(int *)local_148;
              FUN_01aaa328(iVar14,pcVar4,puVar16[4],&local_1c8,&local_60);
            }
          }
        }
        else {
          iVar14 = DAT_01d506b8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_18c = *(int ********)(DAT_01d506b8 + 0x14);
            local_188 = *(int **)(DAT_01d506b8 + 0x18);
            local_190 = (int *******)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar16 = DAT_01d4edc8;
            pcVar4 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar16 = &DAT_01cfc5e0;
              pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar12 = (*(code *)puVar16[3])(pcVar4,&local_190);
            if (iVar12 != 0) {
              if (*(int ********)(DAT_01d506b8 + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e20);
              }
              local_118 = *(int ********)(DAT_01d506b8 + 0x24);
              local_14c = (int *******)&local_90;
              local_114 = *(int ********)(DAT_01d506b8 + 0x28);
              local_180 = (int *******)&local_150;
              local_17c = (int *******)&DAT_00000001;
              local_8c = (int *******)&local_60;
              local_110 = (int ***)0x0;
              local_148._0_4_ = (int *)&DAT_01d2ea4c;
              local_90 = (int *******)&DAT_0058fe64;
              local_5c = (int *******)FUN_005fd794;
              local_60 = (int *******)(param_1 + 4);
              local_1c8 = local_190;
              local_1c4 = local_18c;
              local_1c0._0_4_ = (int *******)local_188;
              local_178._0_4_ = (int *)(DAT_01d506b8 + 0x1c);
              local_150 = (int *******)&local_120;
              local_120 = *(int ********)(DAT_01d506b8 + 0x1c);
              local_11c = *(int ********)(DAT_01d506b8 + 0x20);
              FUN_01aaa328(iVar14,pcVar4,puVar16[4],&local_1c8,&local_180);
            }
          }
        }
        local_178 = CONCAT44(local_178._4_4_,(int *)local_178);
        local_148 = CONCAT44(local_148._4_4_,(int *)local_148);
        local_1c0 = CONCAT44(local_1c0._4_4_,(int *******)local_1c0);
        if (*pcVar23 == '\0') {
          *(undefined1 *)(param_1 + 0x29) = 0;
          local_178 = CONCAT44(local_178._4_4_,(int *)local_178);
          local_148 = CONCAT44(local_148._4_4_,(int *)local_148);
          local_1c0 = CONCAT44(local_1c0._4_4_,(int *******)local_1c0);
        }
      }
      *(undefined1 *)(param_1 + 0x29) = 0;
      FUN_019f8c54(param_1[0x24],param_1[0x25]);
    }
    local_1c8 = pppppppiVar29;
    local_1c4 = pppppppiVar11;
    local_1c0._0_4_ = (int *******)pppiVar17;
    local_1c0._4_4_ = (int *******)uVar26;
    local_178 = uVar32;
    if (DAT_01d50f88 < 5) {
      if (1 < DAT_01d506b4 - 1) {
        if (DAT_01d506b4 != 0) {
          cVar8 = FUN_01aaafa8(&DAT_01d506ac);
          if (cVar8 != '\0') goto LAB_01a06904;
        }
        goto LAB_01a06b88;
      }
LAB_01a06904:
      iVar14 = FUN_01aaa278(DAT_01d506ac);
      if (iVar14 == 0) goto LAB_01a06b88;
      if (*(int ********)(DAT_01d506ac + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e00);
      }
      local_118 = *(int ********)(DAT_01d506ac + 0x24);
      local_114 = *(int ********)(DAT_01d506ac + 0x28);
      local_88 = (undefined4 *)(DAT_01d506ac + 0x1c);
      local_120 = (int *******)*local_88;
      local_5c = &local_1e0;
      local_60 = (int *******)&local_120;
      local_8c = (int *******)&DAT_00000001;
      local_1dc = (int *******)&local_30;
      local_90 = (int *******)&local_60;
      local_30 = (int *******)&local_1c8;
      local_110 = (int ***)0x0;
      local_58 = (undefined4 *)&DAT_01d2ea4c;
      local_1e0 = (int ******)&DAT_0057e1fc;
      local_2c = (int *******)&LAB_01a03334;
      local_11c = *(int ********)(DAT_01d506ac + 0x20);
      FUN_01aaaecc(DAT_01d506ac,&local_90);
      iVar14 = DAT_01d506ac;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_17c = *(int ********)(DAT_01d506ac + 0x14);
        local_178._0_4_ = *(int **)(DAT_01d506ac + 0x18);
        local_180 = (int *******)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        pcVar23 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
          pcVar23 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar12 = (*(code *)puVar16[3])(pcVar23,&local_180);
        if (iVar12 != 0) {
          local_150 = local_180;
          local_14c = local_17c;
          local_148._0_4_ = (int *)local_178;
          FUN_01aaa328(iVar14,pcVar23,puVar16[4],&local_150,&local_90);
        }
      }
    }
    else {
LAB_01a06b88:
      iVar14 = DAT_01d506ac;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_1d4 = *(int ********)(DAT_01d506ac + 0x14);
        local_1d0 = *(undefined4 *)(DAT_01d506ac + 0x18);
        local_1d8 = (int *******)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar16 = DAT_01d4edc8;
        pcVar23 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar16 = &DAT_01cfc5e0;
          pcVar23 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar12 = (*(code *)puVar16[3])(pcVar23,&local_1d8);
        if (iVar12 != 0) {
          if (*(int ********)(DAT_01d506ac + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e00);
          }
          local_180 = (int *******)&local_120;
          local_60 = (int *******)&local_180;
          local_118 = *(int ********)(DAT_01d506ac + 0x24);
          local_114 = *(int ********)(DAT_01d506ac + 0x28);
          local_17c = (int *******)&local_30;
          local_110 = (int ***)0x0;
          local_5c = (int *******)&DAT_00000001;
          local_178._0_4_ = (int *)&DAT_01d2ea4c;
          local_2c = (int *******)&local_90;
          local_30 = (int *******)&DAT_0057e1fc;
          local_8c = (int *******)&LAB_01a03334;
          local_90 = (int *******)&local_1c8;
          local_150 = local_1d8;
          local_14c = local_1d4;
          local_148._0_4_ = (int *)local_1d0;
          local_120 = *(int ********)(DAT_01d506ac + 0x1c);
          local_11c = *(int ********)(DAT_01d506ac + 0x20);
          local_58 = (undefined4 *)(DAT_01d506ac + 0x1c);
          FUN_01aaa328(iVar14,pcVar23,puVar16[4],&local_150,&local_60);
        }
      }
    }
  } while (pppppppiVar29 != (int *******)0x0 || pppppppiVar11 != (int *******)0x0);
  FUN_005fb2fc(param_1 + 0xc);
  FUN_0193c71c(param_1 + 0x23);
  FUN_019fafc0(param_1);
  piVar28 = (int *)param_1[0x22];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar28;
    bVar2 = (bool)hasExclusiveAccess(piVar28);
  } while (!bVar2);
  *piVar28 = iVar14 + -1;
  uVar10 = 0;
  uVar21 = 1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38338(param_1[0x22]);
  }
LAB_01a07654:
  *(undefined1 *)((int)param_1 + 0xa5) = uVar21;
  return uVar10;
}

