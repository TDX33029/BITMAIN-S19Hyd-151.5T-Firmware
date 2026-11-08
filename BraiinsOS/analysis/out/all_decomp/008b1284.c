// FUN_008b1284 @ 008b1284 size=6708 calls_out=39 calls_in=0
// strings: BUG: impossible

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x008b2318 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_008b1284(undefined4 *param_1,double *param_2,undefined4 *param_3)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  double *******pppppppdVar4;
  double ******ppppppdVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  double *pdVar15;
  code *pcVar16;
  undefined1 *puVar17;
  double *******pppppppdVar18;
  double *pdVar19;
  double *******pppppppdVar20;
  double *******pppppppdVar21;
  double *******pppppppdVar22;
  bool bVar23;
  uint in_fpscr;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  ulonglong uVar27;
  undefined4 local_214;
  undefined4 local_210;
  int local_20c;
  double *local_208;
  double *local_204;
  double *local_200;
  undefined1 *local_1fc;
  double local_1e8;
  undefined2 local_1da;
  undefined4 local_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  double *******local_188;
  double *******local_184;
  undefined4 *local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  double *******local_150;
  double *******local_14c;
  undefined4 *puStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  double *******local_118;
  double *******local_114;
  double *******local_110;
  code *local_10c;
  undefined4 local_c8;
  double *******local_c4;
  double *******local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  double *******local_78;
  double *******local_74;
  double *******local_70;
  double *******local_6c;
  double *******pppppppdStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double *******local_34;
  double *******local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x10e) = 0;
    iVar11 = *(int *)(param_2 + 3);
    *(int *)(param_2 + 0x21) = iVar11;
    *(int *)((int)param_2 + 0x1c) = iVar11;
LAB_008b1398:
    puVar14 = (undefined2 *)((int)param_2 + 0x10c);
    *puVar14 = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
    *(int *)(param_2 + 0x1f) = iVar11;
    *(undefined2 **)((int)param_2 + 0xfc) = puVar14;
LAB_008b13b8:
    uVar6 = *(undefined1 *)(iVar11 + 0xf0);
    *(undefined1 *)((int)param_2 + 0xf1) = 0;
    iVar11 = iVar11 + 0xf8;
    *(undefined1 *)((int)param_2 + 0xf2) = uVar6;
    *(int *)(param_2 + 0x1d) = iVar11;
    *(undefined2 **)((int)param_2 + 0xec) = puVar14;
LAB_008b13d8:
    pdVar15 = param_2 + 0x1e;
    *(undefined1 *)pdVar15 = uVar6;
    *(undefined4 *)((int)param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)((int)param_2 + 0x41) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)((int)param_2 + 0x2c) = 0;
    *(int *)(param_2 + 0x1a) = iVar11;
    *(undefined2 **)((int)param_2 + 0xd4) = puVar14;
    *(double **)(param_2 + 0x1b) = pdVar15;
    *(int *)(param_2 + 6) = iVar11;
    *(undefined2 **)((int)param_2 + 0x34) = puVar14;
    *(double **)(param_2 + 7) = pdVar15;
    *(int *)((int)param_2 + 0xdc) = (int)param_2 + 0xf1;
    *(undefined1 **)(param_2 + 0x1c) = &LAB_01103938;
    *(undefined4 *)(param_2 + 0x19) = 2;
    *(undefined4 *)(param_2 + 0x17) = 2;
    *(int *)((int)param_2 + 0x3c) = (int)param_2 + 0xf1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863c9c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863c9c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x10e)) {
    case 0:
      iVar11 = *(int *)(param_2 + 0x21);
      goto LAB_008b1398;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01863a1c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863a1c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x20)) {
    case 0:
      iVar11 = *(int *)(param_2 + 0x1f);
      puVar14 = *(undefined2 **)((int)param_2 + 0xfc);
      goto LAB_008b13b8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01863a9c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863a9c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0xf1)) {
    case 0:
      iVar11 = *(int *)(param_2 + 0x1d);
      puVar14 = *(undefined2 **)((int)param_2 + 0xec);
      uVar6 = *(undefined1 *)((int)param_2 + 0xf2);
      goto LAB_008b13d8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018639ec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018639ec);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x33)) {
    case 0:
      iVar11 = *(int *)((int)param_2 + 0x2c);
      goto LAB_008b1850;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01863a6c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863a6c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x16)) {
      case 0:
        iVar11 = *(int *)(param_2 + 0x15);
        pdVar15 = *(double **)((int)param_2 + 0xac);
        goto LAB_008b1880;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01863a5c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01863a5c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0x51)) {
        case 0:
          iVar11 = *(int *)(param_2 + 9);
          pdVar15 = *(double **)((int)param_2 + 0x4c);
          uVar6 = *(undefined1 *)((int)param_2 + 0x52);
          goto LAB_008b18a0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0186398c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0186398c);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)param_2 + 0x69)) {
          case 0:
            pppppppdVar22 = *(double ********)((int)param_2 + 0x5c);
            pppppppdVar21 = *(double ********)(param_2 + 0xc);
            uVar13 = *(undefined4 *)((int)param_2 + 100);
            uVar6 = *(undefined1 *)((int)param_2 + 0x6a);
            goto LAB_008b19a4;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0186397c);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0186397c);
          case 3:
            puVar8 = *(undefined4 **)((int)param_2 + 0x54);
          }
          goto LAB_008b1a34;
        case 4:
          goto switchD_008b177c_caseD_4;
        case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)param_2 + 0x5c)) {
          case 0:
            uVar6 = *(undefined1 *)((int)param_2 + 0x5d);
            uVar13 = *(undefined4 *)(param_2 + 0xb);
            goto LAB_008b1cb0;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0186396c);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0186396c);
          case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)((int)param_2 + 0x99)) {
            case 0:
              uVar6 = *(undefined1 *)((int)param_2 + 0x9a);
              uVar13 = *(undefined4 *)((int)param_2 + 0x94);
              goto LAB_008b1ccc;
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_018639ac);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_018639ac);
            }
            goto switchD_008b2820_caseD_3;
          case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)(param_2 + 0x13)) {
            case 0:
              goto switchD_008b2854_caseD_0;
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_018639cc);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_018639cc);
            }
            goto switchD_008b2854_caseD_3;
          }
        }
      }
      goto switchD_008b2648_caseD_5;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2b)) {
      case 0:
        iVar11 = *(int *)(param_2 + 0x2a);
        uVar13 = *(undefined4 *)((int)param_2 + 0x154);
        goto LAB_008b1d74;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01863a9c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01863a9c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0x149)) {
        case 0:
          iVar11 = *(int *)(param_2 + 0x28);
          uVar13 = *(undefined4 *)((int)param_2 + 0x144);
          uVar6 = *(undefined1 *)((int)param_2 + 0x14a);
          goto LAB_008b1d90;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018639ec);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018639ec);
        }
      }
    }
    goto switchD_008b17b8_caseD_3;
  case 5:
    goto switchD_008b12ac_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x10d)) {
    case 0:
      iVar11 = *(int *)(param_2 + 0x21);
      goto LAB_008b21b0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01863a2c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863a2c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x20)) {
      case 0:
        iVar11 = *(int *)(param_2 + 0x1f);
        puVar17 = *(undefined1 **)((int)param_2 + 0xfc);
        goto LAB_008b2200;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01863a9c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01863a9c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0xf1)) {
        case 0:
          iVar11 = *(int *)(param_2 + 0x1d);
          puVar17 = *(undefined1 **)((int)param_2 + 0xec);
          uVar6 = *(undefined1 *)((int)param_2 + 0xf2);
          goto LAB_008b2220;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018639ec);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018639ec);
        }
      }
    }
    goto switchD_008b166c_caseD_3;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x11c)) {
    case 0:
      iVar11 = *(int *)(param_2 + 0x23);
      goto LAB_008b2334;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186394c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186394c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x114)) {
      case 0:
        iVar11 = *(int *)(param_2 + 0x21);
        goto LAB_008b234c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01863a8c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01863a8c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x20)) {
        case 0:
          iVar11 = *(int *)(param_2 + 0x1f);
          pdVar15 = *(double **)((int)param_2 + 0xfc);
          goto LAB_008b236c;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01863a9c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01863a9c);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)param_2 + 0xf1)) {
          case 0:
            iVar11 = *(int *)(param_2 + 0x1d);
            pdVar15 = *(double **)((int)param_2 + 0xec);
            uVar6 = *(undefined1 *)((int)param_2 + 0xf2);
            goto LAB_008b2388;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_018639ec);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_018639ec);
          }
        }
      }
    }
    goto switchD_008b17ec_caseD_3;
  case 8:
    goto switchD_008b12ac_caseD_8;
  }
  puVar17 = (undefined1 *)((int)param_2 + 0x10e);
  FUN_0080ec44(&local_c8,param_2 + 5,param_3);
  if (((uint)local_c8 & 0xffff) == 2) {
    *(undefined1 *)(param_2 + 0x20) = 3;
    *(undefined1 *)((int)param_2 + 0xf1) = 3;
LAB_008b14ac:
    *puVar17 = 3;
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 4) = 3;
    return;
  }
  FUN_008b42e8(param_2 + 5);
  *(undefined1 *)((int)param_2 + 0xf1) = 1;
  *(undefined1 *)(param_2 + 0x20) = 1;
  if (((uint)local_c8 & 0xffff) == 2) goto LAB_008b14ac;
  uVar1 = ~(uint)local_c8;
  if ((uVar1 & 1) == 0) {
    (*(code *)**local_c4)();
    *puVar17 = 1;
  }
  else {
    *puVar17 = 1;
    uVar3 = (undefined2)((uint)local_c8 >> 0x10);
    local_1da = uVar3;
    if ((DAT_018d9130 < 3) &&
       ((DAT_018d94f4 - 1 < 2 ||
        ((DAT_018d94f4 != 0 && (cVar7 = FUN_0169ac90(&DAT_018d94ec), cVar7 != '\0')))))) {
      iVar11 = FUN_016949d8(DAT_018d94ec);
      if (iVar11 != 0) {
        local_70 = (double *******)(DAT_018d94ec + 0x1c);
        local_c8 = (double *******)*local_70;
        local_c4 = *(double ********)(DAT_018d94ec + 0x20);
        if (local_c4 == (double *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01863cac);
        }
        local_c0 = *(double ********)(DAT_018d94ec + 0x24);
        local_bc = *(undefined4 *)(DAT_018d94ec + 0x28);
        local_114 = (double *******)&local_188;
        local_78 = (double *******)&local_118;
        local_74 = (double *******)&DAT_00000001;
        local_184 = (double *******)&local_150;
        local_150 = (double *******)&local_1da;
        local_b8 = 0;
        local_110 = (double *******)&DAT_018abb78;
        local_188 = (double *******)&DAT_00345195;
        local_14c = (double *******)FUN_00fa9620;
        local_118 = (double *******)&local_c8;
        FUN_008b36ec(&local_78);
      }
    }
    iVar11 = *(int *)((int)param_2 + 0x1c);
    *(short *)(iVar11 + 0x15c) = (short)(uVar1 & 1);
    *(undefined2 *)(iVar11 + 0x15e) = uVar3;
  }
  *(undefined1 *)((int)param_2 + 0x33) = 0;
  iVar11 = *(int *)((int)param_2 + 0x1c);
  *(int *)((int)param_2 + 0x2c) = iVar11;
LAB_008b1850:
  *(int *)(param_2 + 5) = iVar11;
  *(undefined2 *)((int)param_2 + 0x31) = 0;
  uVar6 = *(undefined1 *)(iVar11 + 0xf1);
  *(undefined1 *)(param_2 + 0x16) = 0;
  pdVar15 = param_2 + 6;
  *(undefined1 *)pdVar15 = uVar6;
  *(int *)(param_2 + 0x15) = iVar11;
  *(double **)((int)param_2 + 0xac) = pdVar15;
LAB_008b1880:
  uVar6 = *(undefined1 *)(iVar11 + 0xf0);
  iVar11 = iVar11 + 0xf8;
  *(undefined1 *)((int)param_2 + 0x51) = 0;
  *(undefined1 *)((int)param_2 + 0x52) = uVar6;
  *(int *)(param_2 + 9) = iVar11;
  *(double **)((int)param_2 + 0x4c) = pdVar15;
LAB_008b18a0:
  local_1fc = (undefined1 *)((int)param_2 + 0x51);
  *(undefined1 *)(param_2 + 10) = uVar6;
  *(int *)(param_2 + 7) = iVar11;
  FUN_00821d4c(&local_c8,pdVar15);
  if (local_c8 != (double *******)&DAT_80000000) {
    *(undefined1 *)((int)param_2 + 0x69) = 0;
    uVar13 = *(undefined4 *)(param_2 + 7);
    uVar6 = *(undefined1 *)(param_2 + 10);
    *(double ********)((int)param_2 + 0x3c) = local_c8;
    *(double ********)(param_2 + 8) = local_c4;
    *(double ********)((int)param_2 + 0x44) = local_c0;
    *(undefined1 *)((int)param_2 + 0x6a) = uVar6;
    *(double ********)((int)param_2 + 0x5c) = local_c4;
    *(double ********)(param_2 + 0xc) = local_c0;
    *(undefined4 *)((int)param_2 + 100) = uVar13;
    pppppppdVar21 = local_c0;
    pppppppdVar22 = local_c4;
LAB_008b19a4:
    local_20c = (int)param_2 + 0x54;
    *(undefined1 *)(param_2 + 0xd) = uVar6;
    FUN_007dea10(&local_118,param_2 + 0xd,pppppppdVar22,pppppppdVar21);
    local_c8 = local_118;
    local_c4 = local_114;
    local_c0 = local_110;
    local_9c = CONCAT22(local_9c._2_2_,0x1000);
    local_bc = uVar13;
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    *puVar8 = local_c8;
    puVar8[1] = local_c4;
    puVar8[2] = local_c0;
    puVar8[3] = local_bc;
    puVar8[4] = local_b8;
    puVar8[5] = local_b4;
    puVar8[6] = local_b0;
    puVar8[7] = local_ac;
    puVar8[8] = local_a8;
    puVar8[9] = uStack_a4;
    puVar8[10] = uStack_a0;
    puVar8[0xb] = local_9c;
    puVar8[0xc] = uStack_98;
    *(undefined4 **)((int)param_2 + 0x54) = puVar8;
    *(undefined4 **)(param_2 + 0xb) = &DAT_018868f4;
LAB_008b1a34:
    uVar27 = (**(code **)(*(int *)(param_2 + 0xb) + 0xc))(puVar8,param_3);
    pppppppdVar21 = (double *******)(uVar27 >> 0x20);
    if ((uVar27 & 1) != 0) {
      uVar6 = 3;
      *(undefined1 *)((int)param_2 + 0x69) = 3;
      goto LAB_008b1d10;
    }
    puVar8 = *(undefined4 **)(param_2 + 0xb);
    uVar13 = *(undefined4 *)((int)param_2 + 0x54);
    pcVar16 = (code *)*puVar8;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar13);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    *(undefined1 *)((int)param_2 + 0x69) = 1;
    if (pppppppdVar21 == (double *******)0x0) {
      FUN_01656eb8(&local_c8,&DAT_0186399c,0,0);
      FUN_016dd1aa(&local_118,&local_c8,0x50);
      FUN_016dd1aa(param_2 + 0xb,&local_118,0x50);
switchD_008b177c_caseD_4:
      iVar11 = FUN_01657fc4(param_2 + 0xb,*param_3);
      if (iVar11 == 0) {
        FUN_00a07b4c(param_2 + 0xb);
        *(undefined1 *)((int)param_2 + 0x5c) = 0;
        uVar6 = *(undefined1 *)(param_2 + 10);
        uVar13 = *(undefined4 *)(param_2 + 7);
        *(undefined1 *)((int)param_2 + 0x5d) = uVar6;
        *(undefined4 *)(param_2 + 0xb) = uVar13;
LAB_008b1cb0:
        *(undefined1 *)((int)param_2 + 0x99) = 0;
        *(undefined1 *)((int)param_2 + 0x9a) = uVar6;
        *(undefined4 *)((int)param_2 + 0x94) = uVar13;
        *(undefined4 *)((int)param_2 + 0x54) = uVar13;
LAB_008b1ccc:
        *(undefined1 *)(param_2 + 0x12) = 0;
        *(undefined4 *)(param_2 + 0xc) = uVar13;
        *(undefined4 *)((int)param_2 + 100) = 2;
        *(undefined1 *)(param_2 + 0x13) = uVar6;
switchD_008b2820_caseD_3:
        pdVar15 = (double *)((int)param_2 + 0x99);
        FUN_0080d3e4(&local_118,param_2 + 0xc,param_3);
        pppppppdVar20 = local_110;
        pppppppdVar21 = local_114;
        pppppppdVar22 = local_118;
        if (local_118 != (double *******)0x80000001) {
          FUN_0080cf9c(param_2 + 0xc);
          pppppppdVar18 = local_c8;
          if (pppppppdVar22 == (double *******)&DAT_80000000) {
LAB_008b2718:
            local_20c = (int)param_2 + 0x54;
            *(undefined1 *)pdVar15 = 1;
LAB_008b2720:
            *(undefined1 *)((int)param_2 + 0x5c) = 1;
LAB_008b2728:
            local_c8 = (double *******)0x3;
            local_114 = (double *******)&DAT_00000013;
            local_118 = (double *******)&DAT_00345062;
            local_110 = pppppppdVar21;
            local_70 = (double *******)FUN_0080807c(&local_118,&local_c8);
            goto LAB_008b2758;
          }
          if (pppppppdVar20 < &SUB_00000002) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00345075,0x1c,&DAT_018639bc);
          }
          sVar2 = *(short *)pppppppdVar21;
          if (sVar2 != -0x55ab) {
            local_c8 = (double *******)CONCAT31((uint3)(byte)sVar2,1);
            ppppppdVar5 = (double ******)local_c8;
            local_c8._3_1_ = SUB41(pppppppdVar18,3);
            local_c8._0_3_ = CONCAT12((char)((ushort)sVar2 >> 8),(short)ppppppdVar5);
            pppppppdVar18 = (double *******)FUN_0080b0cc(&local_c8);
            pppppppdVar20 = pppppppdVar21;
            goto joined_r0x008b270c;
          }
          if (pppppppdVar22 != (double *******)0x0) {
            thunk_FUN_016d3fb4(pppppppdVar21);
          }
          *(undefined1 *)((int)param_2 + 0x99) = 1;
          *(undefined1 *)(param_2 + 0x13) = 0;
          *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)((int)param_2 + 0x54);
switchD_008b2854_caseD_0:
          *(undefined1 *)((int)param_2 + 0x94) = 0;
          *(undefined4 *)((int)param_2 + 100) = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(param_2 + 0xd) = 1;
switchD_008b2854_caseD_3:
          pdVar15 = param_2 + 0x13;
          local_20c = (int)param_2 + 0x54;
          FUN_0080d3e4(&local_34,(int)param_2 + 100,param_3);
          pppppppdVar21 = local_30;
          pppppppdVar22 = local_34;
          if (local_34 == (double *******)0x80000001) {
            *(undefined1 *)pdVar15 = 3;
            uVar6 = 4;
            goto LAB_008b1d08;
          }
          FUN_0080cf9c((int)param_2 + 100);
          if (pppppppdVar22 == (double *******)0x80000000) goto LAB_008b2718;
          if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00345075,0x1c,&DAT_018639dc);
          }
          pppppppdVar18 = (double *******)(uint)*(byte *)pppppppdVar21;
          pppppppdVar20 = pppppppdVar21;
          if (pppppppdVar18 == (double *******)0xf5) {
            local_118 = (double *******)CONCAT31(local_118._1_3_,2);
            pppppppdVar18 = (double *******)FUN_0080b0cc(&local_118);
joined_r0x008b270c:
            pppppppdVar21 = pppppppdVar18;
            if (pppppppdVar22 != (double *******)0x0) {
              thunk_FUN_016d3fb4(pppppppdVar20);
            }
            goto LAB_008b2718;
          }
          if (pppppppdVar18 < &DAT_00000004) {
            local_c0 = (double *******)&DAT_00000004;
            local_c8 = (double *******)CONCAT31(local_c8._1_3_,3);
            local_c4 = pppppppdVar18;
            pppppppdVar18 = (double *******)FUN_0080b0cc(&local_c8);
            goto joined_r0x008b270c;
          }
          if (pppppppdVar22 != (double *******)0x0) {
            thunk_FUN_016d3fb4(pppppppdVar21);
          }
          *(undefined1 *)(param_2 + 0x13) = 1;
          *(undefined1 *)((int)param_2 + 0x94) = 0;
          *(double ********)(param_2 + 0xc) = pppppppdVar18;
          *(undefined4 *)((int)param_2 + 100) = *(undefined4 *)((int)param_2 + 0x54);
          *(byte **)(param_2 + 0xd) = (byte *)((int)pppppppdVar18 + -1);
switchD_008b2648_caseD_5:
          FUN_0080d3e4(&local_c8,(int)param_2 + 100,param_3);
          pppppppdVar18 = local_c0;
          pppppppdVar20 = local_c4;
          pppppppdVar22 = local_c8;
          if (local_c8 == (double *******)0x80000001) {
            uVar6 = 5;
            goto LAB_008b1d08;
          }
          FUN_0080cf9c((int)param_2 + 100);
          pppppppdVar21 = pppppppdVar20;
          if (pppppppdVar22 == (double *******)&DAT_80000000) goto LAB_008b2720;
          FUN_007f58d8(&local_c8,*(undefined4 *)(param_2 + 0xc),0,1);
          if (local_c8 == (double *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_c4,local_c0);
          }
          local_110 = (double *******)0x0;
          uVar13 = *(undefined4 *)(param_2 + 0xc);
          local_114 = local_c0;
          local_118 = local_c4;
          if (local_c4 == (double *******)0x0) {
            FUN_006029c0(&local_118);
          }
          *(byte *)local_114 = (byte)uVar13;
          local_110 = (double *******)&DAT_00000001;
          FUN_008354f4(&local_118,pppppppdVar20,pppppppdVar18);
          pppppppdVar4 = local_110;
          pppppppdVar21 = local_114;
          pppppppdVar18 = local_118;
          if (pppppppdVar22 != (double *******)0x0) {
            thunk_FUN_016d3fb4(pppppppdVar20);
          }
          *(undefined1 *)((int)param_2 + 0x5c) = 1;
          uVar6 = 5;
          if (pppppppdVar18 == (double *******)0x80000001) goto LAB_008b1d10;
          if (pppppppdVar18 == (double *******)&DAT_80000000) goto LAB_008b2728;
          FUN_008232c0(&local_78,pppppppdVar21,pppppppdVar4,*(undefined1 *)(param_2 + 10));
          if (pppppppdVar18 != (double *******)0x0) {
            thunk_FUN_016d3fb4(pppppppdVar21);
          }
          iVar11 = *(int *)((int)param_2 + 0x3c);
          goto joined_r0x008b2ac8;
        }
        uVar6 = 3;
        *(undefined1 *)pdVar15 = 3;
LAB_008b1d08:
        *(undefined1 *)((int)param_2 + 0x5c) = uVar6;
        uVar6 = 5;
      }
      else {
        uVar6 = 4;
      }
LAB_008b1d10:
      local_1fc = (undefined1 *)((int)param_2 + 0x51);
      *local_1fc = uVar6;
    }
    else {
      local_c8 = (double *******)0x3;
      local_114 = (double *******)&DAT_00000014;
      local_118 = (double *******)&DAT_0034504e;
      local_110 = pppppppdVar21;
      local_70 = (double *******)FUN_0080807c(&local_118,&local_c8);
LAB_008b2758:
      local_74 = (double *******)0x0;
      local_78 = (double *******)&SUB_00000002;
      iVar11 = *(int *)((int)param_2 + 0x3c);
joined_r0x008b2ac8:
      if (iVar11 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 8));
      }
      local_1fc = (undefined1 *)((int)param_2 + 0x51);
      local_188 = local_6c;
      local_184 = pppppppdStack_68;
      local_180 = puStack_64;
      uStack_17c = uStack_60;
      local_178 = local_5c;
      uStack_174 = uStack_58;
      uStack_170 = uStack_54;
      uStack_16c = uStack_50;
      local_168 = local_4c;
      uStack_164 = uStack_48;
      uStack_160 = uStack_44;
      uStack_15c = uStack_40;
      uStack_158 = uStack_3c;
      *local_1fc = 1;
      if (local_78 != (double *******)0x3 || local_74 != (double *******)0x0) goto LAB_008b190c;
    }
    local_200 = param_2 + 0x16;
    uVar6 = 3;
    *(undefined1 *)local_200 = 3;
LAB_008b27dc:
    *(undefined1 *)((int)param_2 + 0x33) = uVar6;
LAB_008b27e0:
    *param_1 = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 4) = 4;
    return;
  }
  local_74 = (double *******)0x0;
  local_78 = (double *******)&SUB_00000002;
  local_70 = local_c4;
  local_188 = local_6c;
  local_184 = pppppppdStack_68;
  local_180 = puStack_64;
  uStack_17c = uStack_60;
  local_178 = local_5c;
  uStack_174 = uStack_58;
  uStack_170 = uStack_54;
  uStack_16c = uStack_50;
  local_168 = local_4c;
  uStack_164 = uStack_48;
  uStack_160 = uStack_44;
  uStack_15c = uStack_40;
  uStack_158 = uStack_3c;
  *local_1fc = 1;
LAB_008b190c:
  pppppppdVar20 = local_70;
  pppppppdVar22 = local_74;
  pppppppdVar21 = local_78;
  local_1fc = (undefined1 *)((int)param_2 + 0x51);
  local_200 = param_2 + 0x16;
  local_208 = param_2 + 7;
  FUN_0080feb8(local_208);
  *(undefined1 *)local_200 = 1;
  local_150 = local_188;
  local_14c = local_184;
  puStack_148 = local_180;
  uStack_144 = uStack_17c;
  local_140 = local_178;
  uStack_13c = uStack_174;
  uStack_138 = uStack_170;
  uStack_134 = uStack_16c;
  local_130 = local_168;
  local_12c = uStack_164;
  uStack_128 = uStack_160;
  uStack_124 = uStack_15c;
  uStack_120 = uStack_158;
  if (pppppppdVar21 == (double *******)&SUB_00000002 && pppppppdVar22 == (double *******)0x0) {
    pppppppdVar22 = (double *******)0x0;
    pppppppdVar21 = (double *******)&SUB_00000002;
    *(undefined1 *)((int)param_2 + 0x33) = 1;
    *(undefined2 *)((int)param_2 + 0x31) = 0;
  }
  else {
    *(double ********)(param_2 + 0x2c) = pppppppdVar21;
    *(double ********)(param_2 + 0x2d) = pppppppdVar20;
    *(double ********)((int)param_2 + 0x164) = pppppppdVar22;
    *(double ********)((int)param_2 + 0x16c) = local_188;
    *(double ********)(param_2 + 0x2e) = local_184;
    *(undefined4 **)((int)param_2 + 0x174) = local_180;
    *(undefined4 *)(param_2 + 0x2f) = uStack_17c;
    *(undefined4 *)((int)param_2 + 0x17c) = local_178;
    *(undefined4 *)(param_2 + 0x30) = uStack_174;
    *(undefined4 *)((int)param_2 + 0x184) = uStack_170;
    *(undefined4 *)(param_2 + 0x31) = uStack_16c;
    *(undefined4 *)((int)param_2 + 0x18c) = local_168;
    *(undefined4 *)(param_2 + 0x32) = uStack_164;
    *(undefined4 *)((int)param_2 + 0x194) = uStack_160;
    *(undefined4 *)(param_2 + 0x33) = uStack_15c;
    *(undefined4 *)((int)param_2 + 0x19c) = uStack_158;
    *(undefined1 *)((int)param_2 + 0x32) = 0;
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)((int)param_2 + 0x164);
    *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_2 + 0x2d);
    *(undefined4 *)((int)param_2 + 0x5c) = *(undefined4 *)((int)param_2 + 0x16c);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x2e);
    *(undefined4 *)((int)param_2 + 100) = *(undefined4 *)((int)param_2 + 0x174);
    *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_2 + 0x2f);
    *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)((int)param_2 + 0x17c);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((int)param_2 + 0x74) = *(undefined4 *)((int)param_2 + 0x184);
    *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(param_2 + 0x31);
    *(undefined4 *)((int)param_2 + 0x7c) = *(undefined4 *)((int)param_2 + 0x18c);
    *(undefined1 *)((int)param_2 + 0x31) = 0;
    *(undefined4 *)((int)param_2 + 0x34) = uStack_164;
    *(undefined4 *)(param_2 + 7) = uStack_160;
    *(undefined4 *)((int)param_2 + 0x3c) = uStack_15c;
    if ((DAT_018d9130 < 3) &&
       (((DAT_018d94e8 - 1 < 2 ||
         ((DAT_018d94e8 != 0 && (cVar7 = FUN_0169ac90(&DAT_018d94e0), cVar7 != '\0')))) &&
        (iVar11 = FUN_016949d8(DAT_018d94e0), iVar11 != 0)))) {
      if (*(double ********)(DAT_018d94e0 + 0x20) == (double *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01863a7c);
      }
      local_c0 = *(double ********)(DAT_018d94e0 + 0x24);
      local_bc = *(undefined4 *)(DAT_018d94e0 + 0x28);
      local_74 = (double *******)&local_34;
      local_184 = (double *******)&DAT_00000001;
      local_30 = (double *******)&local_118;
      local_110 = (double *******)((int)param_2 + 0x7c);
      local_118 = (double *******)(param_2 + 0xc);
      local_188 = (double *******)&local_78;
      local_b8 = 0;
      local_70 = (double *******)&DAT_018abb78;
      local_34 = (double *******)&DAT_00593ebb;
      local_10c = FUN_00fac0c8;
      local_114 = (double *******)&DAT_006043a8;
      local_180 = (undefined4 *)(DAT_018d94e0 + 0x1c);
      local_c8 = *(double ********)(DAT_018d94e0 + 0x1c);
      local_c4 = *(double ********)(DAT_018d94e0 + 0x20);
      local_78 = (double *******)&local_c8;
      FUN_008b38e4(&local_188);
    }
    *(undefined4 *)(param_2 + 8) = 0x80000000;
    if (3 < *(byte *)((int)param_2 + 0x7c)) {
      *(undefined1 *)(param_2 + 0x2b) = 0;
      uVar13 = 1;
      iVar11 = *(int *)(param_2 + 5);
      *(int *)(param_2 + 0x2a) = iVar11;
      *(undefined4 *)((int)param_2 + 0x154) = 1;
LAB_008b1d74:
      uVar6 = *(undefined1 *)(iVar11 + 0xf0);
      iVar11 = iVar11 + 0xf8;
      *(undefined1 *)((int)param_2 + 0x149) = 0;
      *(undefined1 *)((int)param_2 + 0x14a) = uVar6;
      *(int *)(param_2 + 0x28) = iVar11;
      *(undefined4 *)((int)param_2 + 0x144) = uVar13;
LAB_008b1d90:
      pdVar15 = param_2 + 0x29;
      *(undefined1 *)pdVar15 = uVar6;
      *(undefined4 *)((int)param_2 + 0x114) = 0;
      *(undefined4 *)(param_2 + 0x23) = 0;
      *(undefined1 *)((int)param_2 + 0x99) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)((int)param_2 + 0x84) = 0;
      *(int *)(param_2 + 0x25) = iVar11;
      *(undefined4 *)((int)param_2 + 300) = uVar13;
      *(double **)(param_2 + 0x26) = pdVar15;
      *(int *)((int)param_2 + 0x134) = (int)param_2 + 0x149;
      *(undefined1 **)(param_2 + 0x27) = &LAB_01103938;
      *(undefined4 *)(param_2 + 0x24) = 2;
      *(undefined4 *)(param_2 + 0x22) = 2;
      *(int *)(param_2 + 0x11) = iVar11;
      *(undefined4 *)((int)param_2 + 0x8c) = uVar13;
      *(double **)(param_2 + 0x12) = pdVar15;
      *(int *)((int)param_2 + 0x94) = (int)param_2 + 0x149;
switchD_008b17b8_caseD_3:
      FUN_0080d714(&local_c8,param_2 + 0x10,param_3);
      if (local_c8 == (double *******)0x80000001) {
        *(undefined1 *)(param_2 + 0x2b) = 3;
        *(undefined1 *)((int)param_2 + 0x149) = 3;
      }
      else {
        FUN_008b39b4(param_2 + 0x10);
        pppppppdVar20 = local_c0;
        pppppppdVar22 = local_c4;
        pppppppdVar21 = local_c8;
        *(undefined1 *)((int)param_2 + 0x149) = 1;
        *(undefined1 *)(param_2 + 0x2b) = 1;
        if (local_c8 != (double *******)0x80000001) {
          if (local_c8 == (double *******)&DAT_80000000) {
            (*(code *)**local_c4)();
          }
          else {
            if (((ulonglong)param_2[8] & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)((int)param_2 + 0x44));
            }
            *(double ********)(param_2 + 8) = pppppppdVar21;
            *(double ********)((int)param_2 + 0x44) = pppppppdVar22;
            *(double ********)(param_2 + 9) = pppppppdVar20;
          }
          goto LAB_008b1ea4;
        }
      }
      uVar6 = 4;
      goto LAB_008b27dc;
    }
LAB_008b1ea4:
    local_200 = *(double **)((int)param_2 + 0x34);
    local_20c = *(int *)(param_2 + 7);
    local_1fc = *(undefined1 **)((int)param_2 + 0x3c);
    local_208 = *(double **)(param_2 + 8);
    local_210 = *(undefined4 *)((int)param_2 + 0x44);
    local_214 = *(undefined4 *)(param_2 + 9);
    pppppppdVar21 = *(double ********)(param_2 + 10);
    pppppppdVar22 = *(double ********)((int)param_2 + 0x54);
    *(undefined2 *)((int)param_2 + 0x31) = 0;
    pppppppdVar20 = *(double ********)(param_2 + 0xb);
    local_1d8 = *(undefined4 *)((int)param_2 + 0x5c);
    iStack_1d4 = *(int *)(param_2 + 0xc);
    uStack_1d0 = *(undefined4 *)((int)param_2 + 100);
    iStack_1cc = *(int *)(param_2 + 0xd);
    local_1c8 = *(int *)((int)param_2 + 0x6c);
    uStack_1c4 = *(undefined4 *)(param_2 + 0xe);
    uStack_1c0 = *(undefined4 *)((int)param_2 + 0x74);
    uStack_1bc = *(undefined4 *)(param_2 + 0xf);
    uStack_1b8 = *(undefined4 *)((int)param_2 + 0x7c);
    *(undefined1 *)((int)param_2 + 0x33) = 1;
    if (pppppppdVar21 == (double *******)0x3 && pppppppdVar22 == (double *******)0x0)
    goto LAB_008b27e0;
  }
  local_204 = param_2 + 5;
  local_1b0 = local_1d8;
  iStack_1ac = iStack_1d4;
  uStack_1a8 = uStack_1d0;
  iStack_1a4 = iStack_1cc;
  local_1a0 = local_1c8;
  uStack_19c = uStack_1c4;
  uStack_198 = uStack_1c0;
  uStack_194 = uStack_1bc;
  uStack_190 = uStack_1b8;
  FUN_008b37bc(local_204);
  iVar11 = iStack_1a4;
  uVar13 = uStack_1a8;
  if (pppppppdVar21 == (double *******)&SUB_00000002 && pppppppdVar22 == (double *******)0x0) {
    (*(code *)**pppppppdVar20)(pppppppdVar20);
  }
  else {
    local_bc = local_1b0;
    local_b8 = iStack_1ac;
    local_b4 = uStack_1a8;
    local_b0 = iStack_1a4;
    local_ac = local_1a0;
    local_a8 = uStack_19c;
    uStack_a4 = uStack_198;
    uStack_a0 = uStack_194;
    local_9c = uStack_190;
    local_c8 = pppppppdVar21;
    local_c4 = pppppppdVar22;
    local_c0 = pppppppdVar20;
    if (iStack_1a4 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = thunk_FUN_016d4a50(iStack_1a4);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
    }
    FUN_016dd1aa(iVar9,uVar13,iVar11);
    iVar10 = *(int *)((int)param_2 + 0x1c);
    if ((*(uint *)(iVar10 + 0x128) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 300));
      iVar10 = *(int *)((int)param_2 + 0x1c);
    }
    *(int *)(iVar10 + 0x128) = iVar11;
    *(int *)(iVar10 + 300) = iVar9;
    *(int *)(iVar10 + 0x130) = iVar11;
    iVar11 = *(int *)((int)param_2 + 0x1c);
    if ((*(uint *)(iVar11 + 0x140) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x144));
      iVar11 = *(int *)((int)param_2 + 0x1c);
    }
    *(double **)(iVar11 + 0x140) = local_200;
    *(int *)(iVar11 + 0x144) = local_20c;
    *(undefined1 **)(iVar11 + 0x148) = local_1fc;
    iVar11 = *(int *)((int)param_2 + 0x1c);
    if ((*(uint *)(iVar11 + 0x14c) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + 0x150));
      iVar11 = *(int *)((int)param_2 + 0x1c);
    }
    *(double **)(iVar11 + 0x14c) = local_208;
    *(undefined4 *)(iVar11 + 0x150) = local_210;
    *(undefined4 *)(iVar11 + 0x154) = local_214;
    if (local_b8 != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    if (local_ac != 0) {
      thunk_FUN_016d3fb4(local_a8);
    }
  }
  if (*(char *)(*(int *)((int)param_2 + 0x1c) + 0x168) == '\x01') {
    if (*(undefined1 **)(*(int *)((int)param_2 + 0x1c) + 0x68) == &DAT_3b9aca00) {
      iVar11 = FUN_006fe37c();
      if (iVar11 != 0) goto LAB_008b2308;
      local_c4 = (double *******)FUN_00808f1c(&DAT_003451b0,0x53);
    }
    else {
      FUN_01656eb8(&local_c8,&DAT_01863cbc,0,0);
      FUN_016dd1aa(&local_118,&local_c8,0x50);
      FUN_016dd1aa(local_204,&local_118,0x50);
switchD_008b12ac_caseD_5:
      iVar11 = FUN_01657fc4(param_2 + 5,*param_3);
      if (iVar11 != 0) {
        *param_1 = 3;
        param_1[1] = 0;
        *(undefined1 *)(param_2 + 4) = 5;
        return;
      }
      FUN_00a07b4c(param_2 + 5);
      *(undefined1 *)((int)param_2 + 0x10d) = 0;
      iVar11 = *(int *)((int)param_2 + 0x1c);
      *(int *)(param_2 + 0x21) = iVar11;
LAB_008b21b0:
      if (*(undefined1 **)(iVar11 + 0x68) != &DAT_3b9aca00) {
        puVar17 = (undefined1 *)((int)param_2 + 0x10c);
        *puVar17 = 1;
        *(int *)(param_2 + 0x1f) = iVar11;
        *(undefined1 **)((int)param_2 + 0xfc) = puVar17;
        *(undefined1 *)(param_2 + 0x20) = 0;
LAB_008b2200:
        uVar6 = *(undefined1 *)(iVar11 + 0xf0);
        *(undefined1 *)((int)param_2 + 0xf1) = 0;
        iVar11 = iVar11 + 0xf8;
        *(undefined1 *)((int)param_2 + 0xf2) = uVar6;
        *(int *)(param_2 + 0x1d) = iVar11;
        *(undefined1 **)((int)param_2 + 0xec) = puVar17;
LAB_008b2220:
        pdVar15 = param_2 + 0x1e;
        *(undefined1 *)pdVar15 = uVar6;
        *(undefined4 *)((int)param_2 + 0xbc) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined1 *)((int)param_2 + 0x41) = 0;
        *(undefined4 *)(param_2 + 5) = 0;
        *(undefined4 *)((int)param_2 + 0x2c) = 0;
        *(int *)(param_2 + 0x1a) = iVar11;
        *(undefined1 **)((int)param_2 + 0xd4) = puVar17;
        *(double **)(param_2 + 0x1b) = pdVar15;
        *(int *)((int)param_2 + 0xdc) = (int)param_2 + 0xf1;
        *(int *)(param_2 + 6) = iVar11;
        *(undefined1 **)((int)param_2 + 0x34) = puVar17;
        *(double **)(param_2 + 7) = pdVar15;
        *(int *)((int)param_2 + 0x3c) = (int)param_2 + 0xf1;
        *(undefined1 **)(param_2 + 0x1c) = &LAB_01103938;
        *(undefined4 *)(param_2 + 0x19) = 2;
        *(undefined4 *)(param_2 + 0x17) = 2;
switchD_008b166c_caseD_3:
        puVar17 = (undefined1 *)((int)param_2 + 0x10d);
        FUN_0080f570(&local_c8,param_2 + 5,param_3);
        if (((uint)local_c8 & 0xff) == 2) {
          *(undefined1 *)(param_2 + 0x20) = 3;
          *(undefined1 *)((int)param_2 + 0xf1) = 3;
LAB_008b22b8:
          *puVar17 = 3;
          *param_1 = 3;
          param_1[1] = 0;
          *(undefined1 *)(param_2 + 4) = 6;
          return;
        }
        FUN_008b42e8(param_2 + 5);
        *(undefined1 *)((int)param_2 + 0xf1) = 1;
        *(undefined1 *)(param_2 + 0x20) = 1;
        if (((uint)local_c8 & 0xff) == 2) goto LAB_008b22b8;
        if (((uint)local_c8 & 1) == 0) {
          *puVar17 = 1;
        }
        else {
          *puVar17 = 1;
          if (local_c4 != (double *******)0x0) goto LAB_008b2588;
        }
        goto LAB_008b2308;
      }
      local_c4 = (double *******)FUN_00808f1c(&DAT_003450c2,0x2a);
      *(undefined1 *)((int)param_2 + 0x10d) = 1;
    }
LAB_008b2588:
    local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_c4);
    uVar13 = 2;
  }
  else {
LAB_008b2308:
    iVar11 = *(int *)((int)param_2 + 0x1c);
    dVar25 = *(double *)(iVar11 + 0x98);
    uVar24 = *(undefined8 *)(iVar11 + 0x160);
    *(int *)(param_2 + 0x23) = iVar11;
    FUN_016d5622(SUB84(dVar25,0),(int)((ulonglong)dVar25 >> 0x20),(int)uVar24);
    *param_2 = dVar25;
    *(undefined1 *)((int)param_2 + 0x11c) = 0;
LAB_008b2334:
    *(undefined1 *)((int)param_2 + 0x114) = 0;
    *(int *)(param_2 + 0x21) = iVar11;
LAB_008b234c:
    pdVar15 = param_2 + 0x22;
    *(undefined4 *)pdVar15 = 0;
    *(int *)(param_2 + 0x1f) = iVar11;
    *(int *)((int)param_2 + 0x10c) = iVar11;
    *(double **)((int)param_2 + 0xfc) = pdVar15;
    *(undefined1 *)(param_2 + 0x20) = 0;
LAB_008b236c:
    uVar6 = *(undefined1 *)(iVar11 + 0xf0);
    *(undefined1 *)((int)param_2 + 0xf1) = 0;
    iVar11 = iVar11 + 0xf8;
    *(undefined1 *)((int)param_2 + 0xf2) = uVar6;
    *(int *)(param_2 + 0x1d) = iVar11;
    *(double **)((int)param_2 + 0xec) = pdVar15;
LAB_008b2388:
    pdVar19 = param_2 + 0x1e;
    *(undefined1 *)pdVar19 = uVar6;
    *(undefined4 *)((int)param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)((int)param_2 + 0x41) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)((int)param_2 + 0x2c) = 0;
    *(int *)(param_2 + 0x1a) = iVar11;
    *(double **)((int)param_2 + 0xd4) = pdVar15;
    *(double **)(param_2 + 0x1b) = pdVar19;
    *(int *)((int)param_2 + 0xdc) = (int)param_2 + 0xf1;
    *(undefined1 **)(param_2 + 0x1c) = &LAB_01103938;
    *(undefined4 *)(param_2 + 0x19) = 2;
    *(undefined4 *)(param_2 + 0x17) = 2;
    *(int *)(param_2 + 6) = iVar11;
    *(double **)((int)param_2 + 0x34) = pdVar15;
    *(double **)(param_2 + 7) = pdVar19;
    *(int *)((int)param_2 + 0x3c) = (int)param_2 + 0xf1;
switchD_008b17ec_caseD_3:
    local_1fc = (undefined1 *)((int)param_2 + 0x11c);
    uVar27 = FUN_00811490(param_2 + 5,param_3);
    puVar8 = (undefined4 *)(uVar27 >> 0x20);
    if ((int)uVar27 == 2) {
      *(undefined1 *)((int)param_2 + 0xf1) = 3;
      *(undefined1 *)(param_2 + 0x20) = 3;
      *local_1fc = 3;
      *(undefined1 *)((int)param_2 + 0x114) = 3;
      *param_1 = 3;
      param_1[1] = 0;
      *(undefined1 *)(param_2 + 4) = 7;
      return;
    }
    FUN_008b42e8(param_2 + 5);
    *(undefined1 *)(param_2 + 0x20) = 1;
    *(undefined1 *)((int)param_2 + 0xf1) = 1;
    if ((uVar27 & 1) == 0) {
      puVar12 = *(uint **)((int)param_2 + 0x10c);
      dVar25 = (double)VectorUnsignedToFloat(puVar8,(byte)(in_fpscr >> 0x16) & 3);
      if ((*puVar12 & 1) == 0) {
        dVar25 = (double)(float)((uint)(0.0 < dVar25) * (int)(longlong)dVar25);
      }
      else {
        dVar25 = (*(double *)(puVar12 + 2) - dVar25) / *(double *)(puVar12 + 4);
      }
      *(undefined1 *)((int)param_2 + 0x11c) = 1;
      *(undefined4 *)(param_2 + 1) = 1;
      *(undefined4 *)((int)param_2 + 0xc) = 0;
      *(undefined1 *)((int)param_2 + 0x114) = 1;
      dVar26 = *param_2;
      param_2[2] = dVar25;
      if (NAN(dVar25)) {
        if (!NAN(dVar26)) goto LAB_008b2504;
      }
      else if (dVar26 < dVar25) {
        if (dVar25 < dVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
        }
        goto LAB_008b2504;
      }
    }
    else {
      *(undefined1 *)((int)param_2 + 0x114) = 1;
      (**(code **)*puVar8)(puVar8);
      dVar26 = *param_2;
      *(undefined4 *)(param_2 + 1) = 0;
      *(undefined4 *)((int)param_2 + 0xc) = 0;
      *(undefined1 *)((int)param_2 + 0x11c) = 1;
LAB_008b2504:
      *(undefined1 *)((int)param_2 + 300) = 0;
      param_2[5] = dVar26;
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((int)param_2 + 0x1c);
switchD_008b12ac_caseD_8:
      uVar27 = FUN_008af8d0(param_2 + 5,param_3);
      pppppppdVar21 = (double *******)(uVar27 >> 0x20);
      if ((uVar27 & 1) != 0) {
        *param_1 = 3;
        param_1[1] = 0;
        *(undefined1 *)(param_2 + 4) = 8;
        return;
      }
      if (*(char *)((int)param_2 + 300) == '\x03') {
        cVar7 = *(char *)((int)param_2 + 0x11c);
        bVar23 = cVar7 == '\x03';
        if (bVar23) {
          cVar7 = *(char *)((int)param_2 + 0x109);
        }
        if (bVar23 && cVar7 == '\x03') {
          FUN_008b42e8(param_2 + 7);
        }
      }
      local_c4 = pppppppdVar21;
      if (pppppppdVar21 != (double *******)0x0) goto LAB_008b2588;
      dVar25 = *param_2;
    }
    uVar13 = 1;
    local_1e8 = dVar25;
  }
  *param_1 = uVar13;
  param_1[1] = 0;
  *(double *)(param_1 + 2) = local_1e8;
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}

