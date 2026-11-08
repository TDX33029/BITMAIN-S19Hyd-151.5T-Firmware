// FUN_00669354 @ 00669354 size=8716 calls_out=55 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00669354(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int *********pppppppppiVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int ****ppppiVar20;
  int iVar21;
  code *pcVar22;
  int *********pppppppppiVar23;
  uint uVar24;
  int *piVar25;
  uint *puVar26;
  int *piVar27;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar28;
  int *********pppppppppiVar29;
  undefined4 uVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  int *********pppppppppiVar33;
  uint uVar34;
  char cVar35;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  bool in_ZR;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined1 *local_3a4;
  undefined1 *local_3a0;
  int local_394;
  undefined1 *local_390;
  undefined1 *local_388;
  undefined1 *local_384;
  undefined1 auStack_370 [304];
  undefined4 local_240;
  int *********local_23c;
  int *********local_238;
  int *********pppppppppiStack_234;
  int *********local_230;
  int *********local_22c;
  int local_228;
  int *local_224;
  uint *local_220;
  int local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  int local_208;
  int local_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  uint *local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  uint *local_1d8;
  int local_1d4;
  undefined1 auStack_170 [96];
  int *********local_110;
  undefined4 uStack_10c;
  int *********pppppppppiStack_108;
  int *********pppppppppiStack_104;
  int local_100;
  int *piStack_fc;
  uint *puStack_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined2 local_d6;
  int *********local_d4;
  undefined *local_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined1 uStack_c4;
  undefined2 uStack_c3;
  undefined1 uStack_c1;
  int *********local_c0;
  int *********local_bc;
  int *********local_b8;
  int *********pppppppppiStack_b4;
  int *********local_b0;
  char local_ac;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  int *********local_a8;
  int *********local_a4;
  int local_a0;
  int *piStack_9c;
  uint *puStack_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *********local_60;
  int *********local_5c;
  int *********local_58;
  int *********local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 uStack_4b;
  undefined1 uStack_49;
  int *********local_48;
  int *********local_44;
  
  puVar18 = (undefined4 *)((uint)&local_240 | 0x10);
  puVar19 = (undefined4 *)(param_1 + 0x60);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x58)) {
  case 0:
    iVar9 = *(int *)(param_1 + 0x50) + 8;
    *(int *)(param_1 + 0x60) = iVar9;
    *(undefined1 *)(param_1 + 0x59) = 1;
    *(undefined1 *)(param_1 + 0x98) = 0;
LAB_0066940c:
    *(int *)(param_1 + 100) = iVar9;
    *(undefined1 *)(param_1 + 0x94) = 0;
LAB_00669420:
    *(int *)(param_1 + 0x68) = iVar9;
    *(undefined1 *)(param_1 + 0x70) = 0;
LAB_00669434:
    *(int *)(param_1 + 0x6c) = iVar9;
LAB_00669438:
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined4 *)(param_1 + 0x8c) = 1;
    *(int *)(param_1 + 0x74) = iVar9;
    *(undefined4 *)(param_1 + 0x78) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018583cc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018583cc);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x98)) {
    case 0:
      iVar9 = *(int *)(param_1 + 0x60);
      goto LAB_0066940c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886258);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886258);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x94)) {
    case 0:
      iVar9 = *(int *)(param_1 + 100);
      goto LAB_00669420;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886268);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886268);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x70)) {
    case 0:
      iVar9 = *(int *)(param_1 + 0x68);
      goto LAB_00669434;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01886278);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01886278);
    case 3:
      iVar9 = *(int *)(param_1 + 0x6c);
      goto LAB_00669438;
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 400)) {
    case 0:
      iVar9 = *(int *)(param_1 + 0x18c);
      goto LAB_00669568;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018583dc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018583dc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x1e4)) {
      case 0:
        puVar31 = *(undefined4 **)(param_1 + 0x1a8);
        iVar9 = *(int *)(param_1 + 0x1ac);
        goto LAB_006699dc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b498);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b498);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x1e1)) {
        case 0:
          puVar31 = *(undefined4 **)(param_1 + 0x1d8);
          iVar9 = *(int *)(param_1 + 0x1dc);
          goto LAB_006699fc;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187b4a8);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0187b4a8);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(param_1 + 0x1d4)) {
          case 0:
            local_390 = *(undefined1 **)(param_1 + 0x1b4);
            local_394 = *(int *)(param_1 + 0x1b8);
            goto LAB_00669a90;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_0187b4e8);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_0187b4e8);
          case 3:
            iVar9 = *(int *)(param_1 + 0x1d0);
          }
        }
      }
      goto LAB_00669d90;
    case 4:
      iVar9 = *(int *)(param_1 + 0x1a0);
      goto LAB_0066a22c;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x1a4)) {
      case 0:
        iVar9 = *(int *)(param_1 + 0x198);
LAB_0066a2e4:
        *(int *)(param_1 + 0x1a8) = iVar9;
        *(int *)(param_1 + 0x19c) = iVar9;
        *(undefined1 *)(param_1 + 0x1e0) = 0;
LAB_0066a304:
        *(int *)(param_1 + 0x1ac) = iVar9;
        *(undefined1 *)(param_1 + 0x1dc) = 0;
LAB_0066a318:
        *(int *)(param_1 + 0x1b0) = iVar9;
        *(undefined1 *)(param_1 + 0x1b8) = 0;
LAB_0066a32c:
        *(int *)(param_1 + 0x1b4) = iVar9;
LAB_0066a330:
        *(undefined1 *)(param_1 + 0x1d8) = 0;
        *(undefined4 *)(param_1 + 0x1c8) = 0;
        *(undefined4 *)(param_1 + 0x1cc) = 0;
        *(undefined4 *)(param_1 + 0x1d0) = 1;
        *(undefined4 *)(param_1 + 0x1d4) = 1;
        *(int *)(param_1 + 0x1bc) = iVar9;
        *(undefined4 *)(param_1 + 0x1c0) = 0;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01857dfc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01857dfc);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x1e0)) {
        case 0:
          iVar9 = *(int *)(param_1 + 0x1a8);
          goto LAB_0066a304;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01886258);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01886258);
        }
        piVar16 = (int *)(&switchD_0066a780::switchdataD_0066a784)[*(byte *)(param_1 + 0x1dc)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(byte *)(param_1 + 0x1dc)) {
        case 0:
          iVar9 = *(int *)(param_1 + 0x1ac);
          goto LAB_0066a318;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01886268);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01886268);
        case 4:
          if (in_ZR) {
            *piVar16 = (int)(piVar16 + -0x63689c);
            piVar16[1] = (int)&switchD_0066a780::switchdataD_0066a784;
            piVar16[-0x63689c] = (int)(piVar16 + -0xc6d13b);
            piVar16[-0x63689b] = (int)&switchD_0066a780::switchdataD_0066a784;
            piVar16[-0xc6d13b] = (int)(piVar16 + -0x12a39dd);
            piVar16[-0xc6d13a] = (int)&switchD_0066a780::switchdataD_0066a784;
            piVar16[-0x12a39dd] = (int)(piVar16 + -0x18da282);
            piVar16[-0x12a39dc] = (int)&switchD_0066a780::switchdataD_0066a784;
            piVar16[-0x18da282] = (int)(piVar16 + -0x1f10b2a);
            piVar16[-0x18da281] = (int)&switchD_0066a780::switchdataD_0066a784;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x1b8)) {
        case 0:
          iVar9 = *(int *)(param_1 + 0x1b0);
          goto LAB_0066a32c;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01886278);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01886278);
        case 3:
          iVar9 = *(int *)(param_1 + 0x1b4);
          goto LAB_0066a330;
        }
        break;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x1b0)) {
        case 0:
          goto switchD_0066a4fc_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01857e0c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01857e0c);
        case 3:
          piVar16 = *(int **)(param_1 + 0x1ac);
        }
        goto LAB_0066a518;
      case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x1b0)) {
        case 0:
          goto switchD_0066a5e4_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187b4e8);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0187b4e8);
        case 3:
          pppppppppiVar12 = *(int **********)(param_1 + 0x1ac);
        }
        goto LAB_0066ac10;
      }
      local_388 = (undefined1 *)(param_1 + 0x1e0);
      bVar5 = FUN_0163c8bc(param_1 + 0x1bc,param_2);
      if (bVar5 == 2) {
        uVar8 = 3;
        *(undefined1 *)(param_1 + 0x1dc) = 3;
        *(undefined1 *)(param_1 + 0x1b8) = 4;
LAB_0066afb0:
        *local_388 = 3;
LAB_0066afbc:
        local_390 = (undefined1 *)(param_1 + 0x1a4);
        *local_390 = uVar8;
        uVar8 = 5;
        goto LAB_0066afc8;
      }
      FUN_0163c790(param_1 + 0x1bc);
      if (*(int *)(param_1 + 0x1c0) != 0) {
        (**(code **)(*(int *)(param_1 + 0x1c0) + 0xc))(*(undefined4 *)(param_1 + 0x1c4));
      }
      if ((bVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_01886288);
      }
      *(undefined1 *)(param_1 + 0x1b0) = 0;
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1ac);
      *(undefined1 *)(param_1 + 0x1b8) = 1;
      *(undefined1 *)(param_1 + 0x1e0) = 1;
      *(undefined1 *)(param_1 + 0x1dc) = 1;
      *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1ac) + 0x18;
switchD_0066a4fc_caseD_0:
      piVar16 = *(int **)(param_1 + 0x1a8);
      *(int **)(param_1 + 0x1ac) = piVar16;
LAB_0066a518:
      local_388 = (undefined1 *)(param_1 + 0x1b0);
      uVar10 = *param_2;
      iVar9 = piVar16[6];
      *(undefined1 *)(piVar16 + 6) = 0x2a;
      if ((char)iVar9 == '*') {
        if (*piVar16 == -0x7fffffff) {
          FUN_016626bc(&local_240,piVar16[1],uVar10);
          piVar25 = local_224;
          iVar9 = local_228;
          pppppppppiVar29 = local_22c;
          pppppppppiVar33 = local_230;
          pppppppppiVar12 = local_240;
          if (local_240 == (int *********)&DAT_00000005) {
            local_50._0_1_ = 5;
LAB_0066a564:
            uVar17 = (uint)(byte)local_50;
          }
          else {
            if (local_240 == (int *********)&DAT_00000004) {
              uVar10 = 0xd;
              pcVar28 = "task panicked";
              if (local_230 == (int *********)0x0) {
                uVar10 = 0x12;
                pcVar28 = "task was cancelled";
              }
              FUN_015e79d4(&local_50,0x28,pcVar28,uVar10);
              if (pppppppppiVar33 != (int *********)0x0) {
                if (*pppppppppiVar29 != (int ********)0x0) {
                  (*(code *)*pppppppppiVar29)(pppppppppiVar33);
                }
                if (pppppppppiVar29[1] != (int ********)0x0) {
                  thunk_FUN_016d3fb4(pppppppppiVar33);
                }
              }
              goto LAB_0066a564;
            }
            local_b0 = local_240;
            local_ac = (char)local_23c;
            uStack_ab = (undefined2)((uint)local_23c >> 8);
            uStack_a9 = (undefined1)((uint)local_23c >> 0x18);
            local_a8 = local_238;
            local_a4 = pppppppppiStack_234;
            iVar13 = *piVar16;
            if (iVar13 != -0x80000000) {
              if (iVar13 == -0x7fffffff) {
                piVar27 = (int *)piVar16[1];
                if (*piVar27 == 0xcc) {
                  DataMemoryBarrier(0xb);
                  bVar1 = (bool)hasExclusiveAccess(piVar27);
                  if (bVar1) {
                    *piVar27 = 0x84;
                    goto LAB_0066b2b4;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                (**(code **)(piVar27[2] + 0x10))();
              }
              else if (iVar13 != 0) {
                thunk_FUN_016d3fb4(piVar16[1]);
              }
            }
LAB_0066b2b4:
            puVar11 = (undefined1 *)((int)pppppppppiVar12 + -2);
            *piVar16 = (int)pppppppppiVar33;
            piVar16[1] = (int)pppppppppiVar29;
            piVar16[2] = iVar9;
            piVar16[3] = (int)piVar25;
            if (pppppppppiVar12 < &SUB_00000002) {
              puVar11 = (undefined1 *)0x2;
            }
            if ((puVar11 == (undefined1 *)0x0) || (puVar11 != (undefined1 *)0x1)) {
              uVar17 = 4;
              local_50._0_1_ = 4;
            }
            else {
              uVar17 = *(uint *)((uint)&local_b0 | 4);
              uVar24 = ((uint *)((uint)&local_b0 | 4))[1];
              local_4c = (char)uVar24;
              uStack_4b = (undefined2)(uVar24 >> 8);
              uStack_49 = (undefined1)(uVar24 >> 0x18);
              local_50._0_1_ = (byte)uVar17;
              local_50._1_1_ = (char)(uVar17 >> 8);
              local_50._2_2_ = (undefined2)(uVar17 >> 0x10);
            }
            if (pppppppppiVar12 != (int *********)0x3) {
              if (puVar11 < (undefined1 *)0x2) {
                if (local_ac != '\x04') goto LAB_0066b324;
              }
              else if (pppppppppiVar12 != (int *********)0x0) {
LAB_0066b324:
                FUN_0157163c(local_ac,local_a8);
              }
            }
          }
          if ((uVar17 & 0xff) != 4) {
            if ((uVar17 & 0xff) == 5) {
              uVar8 = 4;
              goto LAB_0066afb0;
            }
            goto LAB_0066a594;
          }
        }
      }
      else {
        local_50._0_1_ = 1;
        local_50._1_1_ = (char)iVar9;
LAB_0066a594:
        puVar31 = (undefined4 *)CONCAT13(uStack_49,CONCAT21(uStack_4b,local_4c));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((byte)local_50) {
        case 0:
          cVar6 = FUN_005bc530(puVar31);
          break;
        case 1:
          cVar6 = local_50._1_1_;
          break;
        case 2:
          cVar6 = *(char *)(puVar31 + 2);
          break;
        case 3:
          uVar10 = *puVar31;
          puVar32 = (undefined4 *)puVar31[1];
          pcVar22 = (code *)*puVar32;
          *(undefined1 *)(piVar16 + 6) = *(undefined1 *)(puVar31 + 2);
          if (pcVar22 != (code *)0x0) {
            (*pcVar22)(uVar10);
          }
          if (puVar32[1] != 0) {
            thunk_FUN_016d3fb4(uVar10);
          }
          thunk_FUN_016d3fb4(puVar31);
          goto LAB_0066a910;
        }
        *(char *)(piVar16 + 6) = cVar6;
      }
LAB_0066a910:
      *(undefined1 *)(param_1 + 0x1b0) = 1;
      piVar16 = *(int **)(*(int *)(param_1 + 0x19c) + 0x3c);
      do {
        iVar9 = *piVar16;
        bVar1 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar1);
      *piVar16 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0066aaec;
      *(int **)(param_1 + 0x1a8) = piVar16;
      *(undefined1 *)(param_1 + 0x1b0) = 0;
switchD_0066a5e4_caseD_0:
      iVar9 = *(int *)(param_1 + 0x1a8);
      uVar36 = FUN_0164ec90(&DAT_0187b4d8);
      piVar16 = (int *)(uVar36 >> 0x20);
      do {
        do {
          iVar13 = DAT_018d9204;
          uVar17 = DAT_018d9200;
          uVar24 = DAT_018d9200 + 1;
          iVar14 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
          bVar1 = (bool)hasExclusiveAccess(0x18d9200);
        } while (!bVar1);
        bVar1 = DAT_018d9200 == 0;
        bVar3 = DAT_018d9204 == 0;
        DAT_018d9200 = uVar24;
        DAT_018d9204 = iVar14;
      } while (bVar1 && bVar3);
      iVar15 = 0x248;
      if ((uVar36 & 1) == 0) {
        piVar25 = piVar16 + 0x60;
        if ((char)*piVar25 == '\0') {
          bVar1 = (bool)hasExclusiveAccess(piVar25);
          if (!bVar1) goto LAB_0066aa20;
          *(char *)piVar25 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0066aa20:
          FUN_01280da8(piVar25);
        }
        FUN_0128236c(piVar25);
        piVar16[0x6a] = piVar16[0x6a] + 1;
        FUN_01282570(piVar25);
        if ((char)*piVar25 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar25);
            if (bVar1) {
              *(char *)piVar25 = '\0';
              iVar14 = extraout_r3;
              goto LAB_0066aa7c;
            }
          } while ((char)*piVar25 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(piVar25);
        iVar14 = extraout_r3_00;
LAB_0066aa7c:
        do {
          iVar21 = *piVar16;
          bVar1 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar1);
        *piVar16 = iVar21 + 1;
        if (iVar21 < 0) goto LAB_0066aaec;
        iVar21 = 0;
        piVar25 = piVar16 + 0x8c;
        piVar27 = (int *)piVar16[0x8e];
        if (piVar27 != (int *)0x0) goto LAB_0066aab0;
LAB_0066aaf4:
        puVar26 = (uint *)0x0;
      }
      else {
        iVar15 = 0x178;
        do {
          iVar21 = *piVar16;
          bVar1 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar1);
        *piVar16 = iVar21 + 1;
        if (iVar21 < 0) goto LAB_0066aaec;
        iVar21 = 1;
        piVar25 = piVar16 + 0x5a;
        piVar27 = (int *)piVar16[0x5c];
        if (piVar27 == (int *)0x0) goto LAB_0066aaf4;
LAB_0066aab0:
        do {
          iVar14 = *piVar27;
          bVar1 = (bool)hasExclusiveAccess(piVar27);
        } while (!bVar1);
        *piVar27 = iVar14 + 1;
        if (iVar14 < 0) goto LAB_0066aaec;
        puVar26 = (uint *)piVar25[2];
        iVar14 = piVar25[3];
        do {
          uVar24 = *puVar26;
          bVar1 = (bool)hasExclusiveAccess(puVar26);
        } while (!bVar1);
        *puVar26 = uVar24 + 1;
        if (0x7fffffff < uVar24) goto LAB_0066aaec;
      }
      local_240 = (int *********)&DAT_000000cc;
      puVar18[6] = uVar17;
      puVar18[7] = iVar13;
      local_238 = (int *********)&PTR_LAB_01857f14;
      *puVar18 = 0;
      puVar18[1] = 0;
      local_23c = (int *********)0x0;
      local_1f0 = 0;
      local_1f4 = 0;
      local_1f8 = 0;
      local_210 = 0;
      local_b0 = (int *********)0x0;
      local_228 = iVar21;
      local_224 = piVar16;
      local_220 = puVar26;
      local_21c = iVar14;
      local_208 = iVar9;
      local_1e8 = puVar26;
      local_1e4 = iVar14;
      iVar9 = FUN_016d51b0(&local_b0,0x20,0x60);
      pppppppppiVar12 = local_b0;
      if ((iVar9 != 0) || (local_b0 == (int *********)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0x60);
      }
      FUN_016dd1aa(local_b0,&local_240,0x60);
      FUN_0164f1a8(&local_240,*(undefined4 *)((int)piVar16 + iVar15),pppppppppiVar12,1,uVar36);
      if (((uint)local_240 & 0xfe) != 4) {
        local_ac = (char)local_23c;
        uStack_a9 = (undefined1)((uint)local_23c >> 0x18);
        local_b0 = local_240;
        uStack_ab = (undefined2)((uint)local_23c >> 8);
        local_23c = (int *********)FUN_015ef5b4;
        local_240 = (int *********)&local_b0;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00582d59,&local_240,&DAT_0187b4d8);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar16;
        bVar1 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar1);
      *piVar16 = iVar9 + -1;
      if ((int)uVar36 == 0) {
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659344(piVar16);
        }
      }
      else if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(piVar16);
      }
      *(int **********)(param_1 + 0x1ac) = pppppppppiVar12;
LAB_0066ac10:
      local_388 = (undefined1 *)(param_1 + 0x1b0);
      local_390 = (undefined1 *)(param_1 + 0x1a4);
      local_394 = param_1 + 0x198;
      uVar37 = thunk_FUN_016de0ee(param_1,0x40);
      iVar9 = (int)uVar37 + (int)((ulonglong)uVar37 >> 0x20);
      cVar6 = '\0';
      param_2 = (undefined4 *)*param_2;
      local_23c = (int *********)0x0;
      local_240 = (int *********)&DAT_00000001;
      if (*(char *)(iVar9 + 0x38) == '\x01') {
LAB_0066ac64:
        cVar35 = *(char *)(iVar9 + 0x31);
        cVar6 = *(char *)(iVar9 + 0x30);
        cVar7 = cVar35;
        if (cVar6 != '\x01') {
LAB_0066ac84:
          *(char *)(iVar9 + 0x31) = cVar7;
          goto LAB_0066ac88;
        }
        if (cVar35 != '\0') {
          cVar7 = cVar35 + -1;
          goto LAB_0066ac84;
        }
        FUN_016455a4(*param_2,param_2[1]);
LAB_0066afac:
        uVar8 = 5;
        goto LAB_0066afb0;
      }
      cVar35 = '\0';
      if (*(char *)(iVar9 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar9,FUN_009948a0);
        *(undefined1 *)(iVar9 + 0x38) = 1;
        goto LAB_0066ac64;
      }
LAB_0066ac88:
      (*(code *)pppppppppiVar12[2][3])(pppppppppiVar12,&local_240,param_2);
      uVar8 = uStack_a9;
      uVar4 = uStack_ab;
      cVar7 = local_ac;
      local_ac = (char)pppppppppiStack_234;
      uStack_a9 = (undefined1)((uint)pppppppppiStack_234 >> 0x18);
      uStack_ab = (undefined2)((uint)pppppppppiStack_234 >> 8);
      if (local_240 != (int *********)0x0 || local_23c != (int *********)0x0) {
        local_b0 = local_238;
        local_a8 = local_230;
        local_a4 = local_22c;
        if (cVar6 != '\0') {
          if (*(char *)(iVar9 + 0x38) != '\x01') {
            if (*(char *)(iVar9 + 0x38) == '\x02') goto LAB_0066afac;
            FUN_015e8e6c(iVar9,FUN_01655ec4);
            *(undefined1 *)(iVar9 + 0x38) = 1;
          }
          *(char *)(iVar9 + 0x31) = cVar35;
          *(undefined1 *)(iVar9 + 0x30) = 1;
        }
        goto LAB_0066afac;
      }
      local_a4 = local_22c;
      local_50._0_1_ = (byte)local_238;
      local_50._1_1_ = (char)((uint)local_238 >> 8);
      local_50._2_2_ = (undefined2)((uint)local_238 >> 0x10);
      local_48 = local_230;
      local_44 = local_22c;
      piVar16 = *(int **)(param_1 + 0x1ac);
      local_4c = local_ac;
      uStack_4b = uStack_ab;
      uStack_49 = uStack_a9;
      if (*piVar16 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(piVar16);
        if (!bVar1) goto LAB_0066ad5c;
        *piVar16 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_0066ad5c:
        local_ac = cVar7;
        uStack_ab = uVar4;
        uStack_a9 = uVar8;
        (**(code **)(piVar16[2] + 0x10))();
        cVar7 = local_ac;
        uVar4 = uStack_ab;
        uVar8 = uStack_a9;
      }
      uStack_a9 = uVar8;
      uStack_ab = uVar4;
      local_ac = cVar7;
      if (CONCAT22(local_50._2_2_,CONCAT11(local_50._1_1_,(byte)local_50)) == 0 &&
          CONCAT13(uStack_49,CONCAT21(uStack_4b,local_4c)) == 0) {
        uVar24 = (uint)local_48 & 0xff;
        uVar34 = (uint)local_48 >> 8 | (int)local_44 << 0x18;
        uVar17 = (uint)local_44 >> 8;
      }
      else {
        FUN_015e79d4(&local_240,0x28,"background task failed",0x16);
        pppppppppiVar33 = local_44;
        pppppppppiVar12 = local_48;
        uVar24 = (uint)local_240 & 0xff;
        uVar34 = (uint)local_240 >> 8 | (int)local_23c << 0x18;
        uVar17 = (uint)local_23c >> 8;
        if (local_48 != (int *********)0x0) {
          if (*local_44 != (int ********)0x0) {
            (*(code *)*local_44)(local_48);
          }
          if (pppppppppiVar33[1] != (int ********)0x0) {
            thunk_FUN_016d3fb4(pppppppppiVar12);
          }
        }
      }
      *local_388 = 1;
      uVar8 = 5;
      if (uVar24 == 5) goto LAB_0066afbc;
      FUN_008672e4(*(undefined4 *)(param_1 + 0x1a0));
      *local_390 = 1;
      FUN_006550a4(local_394);
      if (uVar24 != 4) {
        uStack_c3 = (undefined2)uVar17;
        local_c8._1_1_ = (undefined1)uVar34;
        local_c8._2_2_ = (undefined2)(uVar34 >> 8);
        uStack_c4 = (undefined1)(uVar34 >> 0x18);
        local_c8._0_1_ = (char)uVar24;
        uStack_c1 = (undefined1)(uVar17 >> 0x10);
        if (((DAT_018d9130 < 5) &&
            ((DAT_018d929c - 1 < 2 ||
             ((DAT_018d929c != 0 && (cVar6 = FUN_0169ac90(&DAT_018d9294), cVar6 != '\0')))))) &&
           (iVar9 = FUN_016949d8(DAT_018d9294), iVar9 != 0)) {
          if (*(int **********)(DAT_018d9294 + 0x20) == (int *********)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185840c);
          }
          local_238 = *(int **********)(DAT_018d9294 + 0x24);
          pppppppppiStack_234 = *(int **********)(DAT_018d9294 + 0x28);
          local_4c = 1;
          uStack_4b = 0;
          uStack_49 = 0;
          local_bc = (int *********)&local_60;
          local_60 = (int *********)&local_c8;
          local_ac = (char)&local_c0;
          uStack_ab = (undefined2)((uint)&local_c0 >> 8);
          uStack_a9 = (undefined1)((uint)&local_c0 >> 0x18);
          local_50._0_1_ = (byte)&local_b0;
          local_50._1_1_ = (char)((uint)&local_b0 >> 8);
          local_50._2_2_ = (undefined2)((uint)&local_b0 >> 0x10);
          local_230 = (int *********)0x0;
          local_a8 = (int *********)&DAT_018abb78;
          local_c0 = (int *********)&DAT_00597ebc;
          local_5c = (int *********)FUN_015ef5b4;
          local_240 = *(int **********)(DAT_018d9294 + 0x1c);
          local_23c = *(int **********)(DAT_018d9294 + 0x20);
          local_b0 = (int *********)&local_240;
          local_48 = (int *********)(DAT_018d9294 + 0x1c);
          FUN_0066c6e0(&local_50);
        }
        if ((char)local_c8 == '\x03') {
          puVar18 = (undefined4 *)CONCAT13(uStack_c1,CONCAT21(uStack_c3,uStack_c4));
          uVar10 = *puVar18;
          puVar31 = (undefined4 *)puVar18[1];
          pcVar22 = (code *)*puVar31;
          if (pcVar22 != (code *)0x0) {
            (*pcVar22)(uVar10);
          }
          if (puVar31[1] != 0) {
            thunk_FUN_016d3fb4(uVar10);
          }
          thunk_FUN_016d3fb4(puVar18);
        }
      }
      FUN_00648db8(param_1 + 0xa0);
    }
    goto LAB_0066b144;
  }
  local_384 = (undefined1 *)(param_1 + 0x60);
  bVar5 = FUN_0163c8bc(param_1 + 0x74,param_2);
  if (bVar5 == 2) {
    *(undefined1 *)(param_1 + 0x70) = 4;
    uVar8 = 3;
    *(undefined1 *)(param_1 + 0x94) = 3;
    uVar10 = 1;
    *(undefined1 *)(param_1 + 0x98) = 3;
    goto LAB_0066b264;
  }
  FUN_0163c790(param_1 + 0x74);
  if (*(int *)(param_1 + 0x78) != 0) {
    (**(code **)(*(int *)(param_1 + 0x78) + 0xc))(*(undefined4 *)(param_1 + 0x7c));
  }
  if ((bVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01886288);
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  iVar9 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x54) = iVar9;
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_016dd1aa(auStack_170,param_1,0x50);
  FUN_016dd1aa(auStack_370,&local_240,300);
  FUN_016dd1aa(local_384,auStack_370,300);
  iVar9 = iVar9 + 0x14;
  *(undefined1 *)(param_1 + 400) = 0;
  *(int *)(param_1 + 0x18c) = iVar9;
LAB_00669568:
  FUN_016dd1aa(param_1 + 0xe0,param_1 + 0x130,0x50);
  puVar11 = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_60 = (int *********)&local_b0;
  local_a8 = (int *********)&DAT_00000001;
  local_b0 = (int *********)&DAT_00000080;
  local_ac = (char)puVar11;
  uStack_ab = (undefined2)((uint)puVar11 >> 8);
  uStack_a9 = (undefined1)((uint)puVar11 >> 0x18);
  uVar10 = *(undefined4 *)(param_1 + 0x104);
  uVar30 = *(undefined4 *)(param_1 + 0x108);
  *puVar11 = 0x7b;
  local_4c = (char)&local_60;
  uStack_4b = (undefined2)((uint)&local_60 >> 8);
  uStack_49 = (undefined1)((uint)&local_60 >> 0x18);
  local_50._0_1_ = 0;
  local_50._1_1_ = '\x01';
  pppppppppiVar12 = (int *********)FUN_007539b4(&local_50,&DAT_0033fd50,10,uVar10,uVar30);
  if (pppppppppiVar12 == (int *********)0x0) {
    if ((byte)local_50 != 0) {
LAB_00669614:
      local_240 = (int *********)&DAT_0000000a;
      pppppppppiVar12 = (int *********)FUN_0157c50c(&local_240,0,0);
      goto LAB_00669750;
    }
    pppppppppiVar12 =
         (int *********)FUN_00753b00(&local_50,&DAT_00411046,*(undefined4 *)(param_1 + 0xf8));
    if (pppppppppiVar12 != (int *********)0x0) goto LAB_00669750;
    if ((byte)local_50 != 0) goto LAB_00669614;
    pppppppppiVar12 =
         (int *********)
         FUN_007539b4(&local_50,&DAT_0034fb98,0xf,*(undefined4 *)(param_1 + 0x110),
                      *(undefined4 *)(param_1 + 0x114));
    if (pppppppppiVar12 != (int *********)0x0) goto LAB_00669750;
    if ((byte)local_50 != 0) goto LAB_00669614;
    pppppppppiVar12 =
         (int *********)
         FUN_007539b4(&local_50,"url",3,*(undefined4 *)(param_1 + 0x11c),
                      *(undefined4 *)(param_1 + 0x120));
    if (pppppppppiVar12 != (int *********)0x0) goto LAB_00669750;
    if ((byte)local_50 != 0) goto LAB_00669614;
    pppppppppiVar12 =
         (int *********)
         FUN_007539b4(&local_50,"user--",4,*(undefined4 *)(param_1 + 0x128),
                      *(undefined4 *)(param_1 + 300));
    if ((pppppppppiVar12 != (int *********)0x0) ||
       (pppppppppiVar12 = (int *********)FUN_0071467c(&local_50,param_1 + 0xe0),
       pppppppppiVar12 != (int *********)0x0)) goto LAB_00669750;
    if ((byte)local_50 != 0) goto LAB_00669614;
    uVar37 = FUN_00753b00(&local_50,&DAT_0041104b,*(undefined4 *)(param_1 + 0xfc));
    pppppppppiVar12 = (int *********)uVar37;
    if ((pppppppppiVar12 != (int *********)0x0) ||
       (pppppppppiVar12 =
             (int *********)
             FUN_00714880(&local_50,(int)((ulonglong)uVar37 >> 0x20),*(undefined4 *)(param_1 + 0xf0)
                          ,*(undefined4 *)(param_1 + 0xf4)), pppppppppiVar12 != (int *********)0x0))
    goto LAB_00669750;
    if ((local_50._1_1_ != '\0') && (((byte)local_50 & 1) == 0)) {
      FUN_007b97d0(*(undefined4 *)CONCAT13(uStack_49,CONCAT21(uStack_4b,local_4c)),"}",1);
    }
    pppppppppiVar12 = (int *********)CONCAT13(uStack_a9,CONCAT21(uStack_ab,local_ac));
    if (local_b0 == (int *********)&DAT_80000000) goto LAB_00669764;
    pppppppppiVar33 = local_b0;
    pppppppppiVar29 = local_a8;
LAB_00669964:
    *(undefined4 *)(param_1 + 0x180) = pppppppppiVar33;
    *(int **********)(param_1 + 0x184) = pppppppppiVar12;
    *(int **********)(param_1 + 0x188) = pppppppppiVar29;
    pppppppppiVar23 = pppppppppiVar29;
    if (pppppppppiVar33 == pppppppppiVar29) {
      FUN_006bca64((undefined4 *)(param_1 + 0x180),pppppppppiVar29,1,1,1);
      pppppppppiVar12 = *(int **********)(param_1 + 0x184);
      pppppppppiVar23 = *(int **********)(param_1 + 0x188);
    }
    *(undefined1 *)((int)pppppppppiVar12 + (int)pppppppppiVar23) = 10;
    puVar31 = (undefined4 *)(param_1 + 0x198);
    *puVar31 = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0x1b6;
    *(undefined1 **)(param_1 + 0x188) = (undefined1 *)((int)pppppppppiVar29 + 1);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 **)(param_1 + 0x1a8) = puVar31;
    *(undefined2 *)(param_1 + 0x1a4) = 0;
    *(undefined1 *)(param_1 + 0x1a2) = 1;
    *(undefined1 *)(param_1 + 0x1a4) = 1;
    *(undefined1 *)(param_1 + 0x1e4) = 0;
    *(int *)(param_1 + 0x1ac) = iVar9;
LAB_006699dc:
    *(undefined1 *)(param_1 + 0x1e1) = 0;
    *(undefined4 **)(param_1 + 0x1d8) = puVar31;
    *(int *)(param_1 + 0x1dc) = iVar9;
LAB_006699fc:
    *(int *)(param_1 + 0x1b0) = iVar9;
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    local_394 = 1;
    local_390 = *(undefined1 **)(iVar9 + 8);
    uVar10 = *(undefined4 *)(iVar9 + 4);
    if ((local_390 != (undefined1 *)0x0) &&
       (local_394 = thunk_FUN_016d4a50(local_390), local_394 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_390);
    }
    FUN_016dd1aa(local_394,uVar10,local_390);
    *(undefined1 *)(param_1 + 0x1e0) = 1;
    local_240 = (int *********)*puVar31;
    local_23c = (int *********)puVar31[1];
    local_238 = (int *********)puVar31[2];
    pppppppppiStack_234 = (int *********)puVar31[3];
    *(undefined1 **)(param_1 + 0x1b4) = local_390;
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    *(int *)(param_1 + 0x1b8) = local_394;
    *(undefined1 **)(param_1 + 0x1bc) = local_390;
    *(int **********)(param_1 + 0x1c0) = local_240;
    *(int **********)(param_1 + 0x1c4) = local_23c;
    *(int **********)(param_1 + 0x1c8) = local_238;
    *(int **********)(param_1 + 0x1cc) = pppppppppiStack_234;
    *(undefined1 *)(param_1 + 0x1d4) = 0;
    local_c0 = local_240;
    local_bc = local_23c;
    local_b8 = local_238;
    pppppppppiStack_b4 = pppppppppiStack_234;
LAB_00669a90:
    local_78 = *(undefined4 *)(param_1 + 0x1bc);
    uStack_74 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_70 = *(undefined4 *)(param_1 + 0x1c4);
    uStack_6c = *(undefined4 *)(param_1 + 0x1c8);
    uStack_68 = *(undefined4 *)(param_1 + 0x1cc);
    uVar36 = FUN_0164ec90(&DAT_0187b4d8);
    piVar16 = (int *)(uVar36 >> 0x20);
    do {
      do {
        iVar9 = DAT_018d9204;
        uVar17 = DAT_018d9200;
        uVar24 = DAT_018d9200 + 1;
        iVar13 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
        bVar1 = (bool)hasExclusiveAccess(0x18d9200);
      } while (!bVar1);
      bVar1 = DAT_018d9200 == 0;
      bVar3 = DAT_018d9204 == 0;
      DAT_018d9200 = uVar24;
      DAT_018d9204 = iVar13;
    } while (bVar1 && bVar3);
    iVar13 = 0x248;
    if ((uVar36 & 1) == 0) {
      piVar25 = piVar16 + 0x60;
      if ((char)*piVar25 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(piVar25);
        if (!bVar1) goto LAB_00669b78;
        *(char *)piVar25 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00669b78:
        FUN_01280da8(piVar25);
      }
      FUN_0128236c(piVar25);
      piVar16[0x6a] = piVar16[0x6a] + 1;
      FUN_01282570(piVar25);
      if ((char)*piVar25 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar25);
          if (bVar1) {
            *(char *)piVar25 = '\0';
            iVar14 = extraout_r12_00;
            goto LAB_00669bd4;
          }
        } while ((char)*piVar25 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(piVar25);
      iVar14 = extraout_r12_01;
LAB_00669bd4:
      do {
        iVar15 = *piVar16;
        bVar1 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar1);
      *piVar16 = iVar15 + 1;
      if (iVar15 < 0) goto LAB_0066aaec;
      iVar15 = 0;
      iVar21 = 0x230;
    }
    else {
      iVar13 = 0x178;
      do {
        iVar14 = *piVar16;
        bVar1 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar1);
      *piVar16 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_0066aaec;
      iVar15 = 1;
      iVar21 = 0x168;
      iVar14 = extraout_r12;
    }
    piVar25 = *(int **)((int)piVar16 + iVar21 + 8);
    if (piVar25 == (int *)0x0) {
      puVar26 = (uint *)0x0;
    }
    else {
      do {
        iVar14 = *piVar25;
        bVar1 = (bool)hasExclusiveAccess(piVar25);
      } while (!bVar1);
      *piVar25 = iVar14 + 1;
      if (iVar14 < 0) {
LAB_0066aaec:
                    /* WARNING: Does not return */
        pcVar22 = (code *)software_udf(0xfdee,0x66aaec);
        (*pcVar22)();
      }
      puVar26 = *(uint **)((int)piVar16 + iVar21 + 8);
      iVar14 = *(int *)((int)piVar16 + iVar21 + 0xc);
      do {
        uVar24 = *puVar26;
        bVar1 = (bool)hasExclusiveAccess(puVar26);
      } while (!bVar1);
      *puVar26 = uVar24 + 1;
      if (0x7fffffff < uVar24) goto LAB_0066aaec;
    }
    local_240 = (int *********)&DAT_000000cc;
    local_204 = local_394;
    local_208 = (int)local_390;
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[6] = uVar17;
    puVar18[7] = iVar9;
    local_23c = (int *********)0x0;
    local_210 = 0;
    local_238 = (int *********)&PTR_LAB_01857eec;
    local_200 = local_78;
    uStack_1fc = uStack_74;
    local_1f8 = uStack_70;
    local_1f4 = uStack_6c;
    local_1f0 = uStack_68;
    local_1e0 = 0;
    local_1e4 = 0;
    local_1e8 = (uint *)0x0;
    local_50._0_1_ = 0;
    local_50._1_1_ = '\0';
    local_50._2_2_ = 0;
    local_228 = iVar15;
    local_224 = piVar16;
    local_220 = puVar26;
    local_21c = iVar14;
    local_1d8 = puVar26;
    local_1d4 = iVar14;
    iVar9 = FUN_016d51b0(&local_50,0x20,0x80);
    if ((iVar9 != 0) ||
       (iVar9 = CONCAT22(local_50._2_2_,CONCAT11(local_50._1_1_,(byte)local_50)), iVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x80);
    }
    FUN_016dd1aa(iVar9,&local_240,0x80);
    FUN_0164f1a8(&local_240,*(undefined4 *)((int)piVar16 + iVar13),iVar9,1,uVar36);
    if (((uint)local_240 & 0xfe) != 4) {
      local_50._0_1_ = (byte)local_240;
      local_50._1_1_ = (char)((uint)local_240 >> 8);
      local_50._2_2_ = (undefined2)((uint)local_240 >> 0x10);
      local_4c = (char)local_23c;
      uStack_49 = (undefined1)((uint)local_23c >> 0x18);
      uStack_4b = (undefined2)((uint)local_23c >> 8);
      local_23c = (int *********)FUN_015ef5b4;
      local_240 = (int *********)&local_50;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00582d59,&local_240,&DAT_0187b4d8);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar16;
      bVar1 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar1);
    *piVar16 = iVar13 + -1;
    if ((int)uVar36 == 0) {
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar16);
      }
    }
    else if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(piVar16);
    }
    *(int *)(param_1 + 0x1d0) = iVar9;
LAB_00669d90:
    local_3a0 = (undefined1 *)(param_1 + 0x1e4);
    local_3a4 = (undefined1 *)(param_1 + 0x1e1);
    puVar11 = (undefined1 *)(param_1 + 0x1d4);
    uVar37 = thunk_FUN_016de0ee(param_1,0x40);
    iVar13 = (int)uVar37 + (int)((ulonglong)uVar37 >> 0x20);
    cVar6 = '\0';
    puVar31 = (undefined4 *)*param_2;
    local_23c = (int *********)0x0;
    local_240 = (int *********)&DAT_00000001;
    if (*(char *)(iVar13 + 0x38) == '\x01') {
LAB_00669de4:
      cVar35 = *(char *)(iVar13 + 0x31);
      cVar6 = *(char *)(iVar13 + 0x30);
      cVar7 = cVar35;
      if (cVar6 != '\x01') {
LAB_00669e04:
        *(char *)(iVar13 + 0x31) = cVar7;
        goto LAB_00669e08;
      }
      if (cVar35 != '\0') {
        cVar7 = cVar35 + -1;
        goto LAB_00669e04;
      }
      FUN_016455a4(*puVar31,puVar31[1]);
      FUN_00715a30(&local_240);
LAB_0066a15c:
      *puVar11 = 3;
    }
    else {
      cVar35 = '\0';
      if (*(char *)(iVar13 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar13,FUN_009948a0);
        *(undefined1 *)(iVar13 + 0x38) = 1;
        goto LAB_00669de4;
      }
LAB_00669e08:
      (**(code **)(*(int *)(iVar9 + 8) + 0xc))(iVar9,&local_240,puVar31);
      if (local_240 != (int *********)0x0 || local_23c != (int *********)0x0) {
        local_50._0_1_ = (byte)local_238;
        local_50._1_1_ = (char)((uint)local_238 >> 8);
        local_50._2_2_ = (undefined2)((uint)local_238 >> 0x10);
        local_4c = (char)pppppppppiStack_234;
        uStack_4b = (undefined2)((uint)pppppppppiStack_234 >> 8);
        uStack_49 = (undefined1)((uint)pppppppppiStack_234 >> 0x18);
        local_48 = local_230;
        local_44 = local_22c;
        if (cVar6 != '\0') {
          if (*(char *)(iVar13 + 0x38) != '\x01') {
            if (*(char *)(iVar13 + 0x38) == '\x02') goto LAB_0066a15c;
            FUN_015e8e6c(iVar13,FUN_01655ec4);
            *(undefined1 *)(iVar13 + 0x38) = 1;
          }
          *(char *)(iVar13 + 0x31) = cVar35;
          *(undefined1 *)(iVar13 + 0x30) = 1;
        }
        goto LAB_0066a15c;
      }
      local_44 = local_22c;
      local_60 = local_238;
      local_5c = pppppppppiStack_234;
      local_58 = local_230;
      local_54 = local_22c;
      piVar16 = *(int **)(param_1 + 0x1d0);
      if (*piVar16 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(piVar16);
        if (!bVar1) goto LAB_00669ec8;
        *piVar16 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00669ec8:
        (**(code **)(piVar16[2] + 0x10))();
      }
      if (local_60 == (int *********)0x0 && local_5c == (int *********)0x0) {
        uVar17 = (uint)local_58 >> 8 | (int)local_54 << 0x18;
        *puVar11 = 1;
        pppppppppiVar12 = local_54;
        pppppppppiVar33 = local_58;
      }
      else {
        FUN_015e79d4(&local_240,0x28,"background task failed",0x16);
        pppppppppiVar12 = local_23c;
        pppppppppiVar33 = local_240;
        FUN_006556e4(&local_60);
        uVar17 = (uint)pppppppppiVar33 >> 8 | (int)pppppppppiVar12 << 0x18;
        *puVar11 = 1;
      }
      uVar24 = (uint)pppppppppiVar33 & 0xff;
      if (uVar24 != 5) {
        pppppppppiVar12 = (int *********)(uVar17 >> 0x18 | (uint)pppppppppiVar12 & 0xffffff00);
        if (uVar24 == 4) {
          FUN_0163d570(&local_240,pppppppppiVar12);
          local_b0 = local_238;
          local_ac = (char)pppppppppiStack_234;
          uStack_ab = (undefined2)((uint)pppppppppiStack_234 >> 8);
          uStack_a9 = (undefined1)((uint)pppppppppiStack_234 >> 0x18);
          local_a8 = local_230;
          local_a4 = local_22c;
          local_a0 = local_228;
          piStack_9c = local_224;
          puStack_98 = local_220;
          iStack_94 = local_21c;
          local_90 = local_218;
          uStack_8c = uStack_214;
          uStack_88 = local_210;
          uStack_84 = uStack_20c;
          iStack_80 = local_208;
          pppppppppiVar33 = local_240;
          pppppppppiVar12 = local_23c;
          iVar9 = local_204;
        }
        else {
          pppppppppiVar33 = (int *********)(uVar24 | uVar17 << 8);
          iVar9 = 0;
        }
        *(undefined1 *)(param_1 + 0x1e0) = 0;
        uStack_10c = CONCAT13(uStack_a9,CONCAT21(uStack_ab,local_ac));
        local_110 = local_b0;
        pppppppppiStack_108 = local_a8;
        pppppppppiStack_104 = local_a4;
        local_100 = local_a0;
        piStack_fc = piStack_9c;
        puStack_f8 = puStack_98;
        iStack_f4 = iStack_94;
        local_f0 = local_90;
        uStack_ec = uStack_8c;
        uStack_e8 = uStack_88;
        uStack_e4 = uStack_84;
        iStack_e0 = iStack_80;
        *(undefined1 *)(param_1 + 0x1e1) = 1;
        *(undefined1 *)(param_1 + 0x1e4) = 1;
        *puVar19 = pppppppppiVar33;
        *(int **********)(param_1 + 100) = pppppppppiVar12;
        *(int **********)(param_1 + 0x68) = local_b0;
        *(undefined4 *)(param_1 + 0x6c) = uStack_10c;
        *(int **********)(param_1 + 0x70) = local_a8;
        *(int **********)(param_1 + 0x74) = local_a4;
        *(int *)(param_1 + 0x78) = local_a0;
        *(int **)(param_1 + 0x7c) = piStack_9c;
        *(uint **)(param_1 + 0x80) = puStack_98;
        *(int *)(param_1 + 0x84) = iStack_94;
        *(undefined4 *)(param_1 + 0x88) = local_90;
        *(undefined4 *)(param_1 + 0x8c) = uStack_8c;
        *(undefined4 *)(param_1 + 0x90) = uStack_88;
        *(undefined4 *)(param_1 + 0x94) = uStack_84;
        *(int *)(param_1 + 0x98) = iStack_80;
        *(int *)(param_1 + 0x9c) = iVar9;
        if (iVar9 == 0) {
          local_c8._0_1_ = (char)pppppppppiVar33;
          local_c8._1_1_ = (undefined1)((uint)pppppppppiVar33 >> 8);
          local_c8._2_2_ = (undefined2)((uint)pppppppppiVar33 >> 0x10);
          uStack_c4 = SUB41(pppppppppiVar12,0);
          uStack_c3 = (undefined2)((uint)pppppppppiVar12 >> 8);
          uStack_c1 = (undefined1)((uint)pppppppppiVar12 >> 0x18);
          if ((DAT_018d9130 < 5) &&
             (((DAT_018d92b4 - 1 < 2 ||
               ((DAT_018d92b4 != 0 && (cVar6 = FUN_0169ac90(&DAT_018d92ac), cVar6 != '\0')))) &&
              (iVar9 = FUN_016949d8(DAT_018d92ac), iVar9 != 0)))) {
            if (*(int **********)(DAT_018d92ac + 0x20) == (int *********)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018583ec);
            }
            local_238 = *(int **********)(DAT_018d92ac + 0x24);
            pppppppppiStack_234 = *(int **********)(DAT_018d92ac + 0x28);
            local_4c = 1;
            uStack_4b = 0;
            uStack_49 = 0;
            local_bc = (int *********)&local_60;
            local_60 = (int *********)&local_c8;
            local_ac = (char)&local_c0;
            uStack_ab = (undefined2)((uint)&local_c0 >> 8);
            uStack_a9 = (undefined1)((uint)&local_c0 >> 0x18);
            local_b0 = (int *********)&local_240;
            local_50._0_1_ = (byte)&local_b0;
            local_50._1_1_ = (char)((uint)&local_b0 >> 8);
            local_50._2_2_ = (undefined2)((uint)&local_b0 >> 0x10);
            local_230 = (int *********)0x0;
            local_a8 = (int *********)&DAT_018abb78;
            local_c0 = (int *********)&DAT_005749ad;
            local_5c = (int *********)FUN_015ef5b4;
            local_240 = *(int **********)(DAT_018d92ac + 0x1c);
            local_23c = *(int **********)(DAT_018d92ac + 0x20);
            local_48 = (int *********)(DAT_018d92ac + 0x1c);
            FUN_0066c364(&local_50);
          }
          if ((char)local_c8 == '\x03') {
            puVar18 = (undefined4 *)CONCAT13(uStack_c1,CONCAT21(uStack_c3,uStack_c4));
            uVar10 = *puVar18;
            puVar31 = (undefined4 *)puVar18[1];
            pcVar22 = (code *)*puVar31;
            if (pcVar22 != (code *)0x0) {
              (*pcVar22)(uVar10);
            }
            if (puVar31[1] != 0) {
              thunk_FUN_016d3fb4(uVar10);
            }
            thunk_FUN_016d3fb4(puVar18);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xa0) = *puVar19;
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
          *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
          *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
          *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x70);
          *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x74);
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x78);
          *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x7c);
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x80);
          *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x84);
          *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x88);
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x8c);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x90);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x94);
          *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x98);
          *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x9c);
          iVar9 = *(int *)(param_1 + 0x188);
          *(undefined4 **)(param_1 + 0x198) = (undefined4 *)(param_1 + 0xa0);
          *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x184);
          *(int *)(param_1 + 0x1a0) = iVar9;
LAB_0066a22c:
          uVar10 = *param_2;
          do {
            if (iVar9 == 0) {
              *(undefined1 *)(param_1 + 0x1a4) = 0;
              iVar9 = param_1 + 0xa0;
              *(int *)(param_1 + 0x198) = iVar9;
              goto LAB_0066a2e4;
            }
            FUN_0164034c(&local_240,*(undefined4 *)(param_1 + 0x198),uVar10,
                         *(undefined4 *)(param_1 + 0x19c),iVar9);
            if (((uint)local_240 & 0xff) == 5) {
              uVar8 = 4;
              goto LAB_0066afc8;
            }
            if (((uint)local_240 & 0xff) != 4) {
              local_d6 = local_240._2_2_;
              local_c8._0_1_ = (char)local_240;
              local_c8._1_1_ = local_240._1_1_;
              goto LAB_0066a40c;
            }
            pppppppppiVar12 = *(int **********)(param_1 + 0x1a0);
            iVar13 = *(int *)(param_1 + 0x19c);
            *(undefined4 *)(param_1 + 0x19c) = 1;
            *(undefined4 *)(param_1 + 0x1a0) = 0;
            if (pppppppppiVar12 < local_23c) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018a54b8);
            }
            iVar9 = (int)pppppppppiVar12 - (int)local_23c;
            *(undefined1 **)(param_1 + 0x19c) = (undefined1 *)(iVar13 + (int)local_23c);
            *(int *)(param_1 + 0x1a0) = iVar9;
          } while (local_23c != (int *********)0x0);
          local_c8._1_1_ = 0x17;
          local_c8._0_1_ = '\x01';
LAB_0066a40c:
          uStack_c4 = SUB41(local_23c,0);
          uStack_c3 = (undefined2)((uint)local_23c >> 8);
          uStack_c1 = (undefined1)((uint)local_23c >> 0x18);
          local_c8._2_2_ = local_d6;
          if (((DAT_018d9130 < 5) &&
              ((DAT_018d92a8 - 1 < 2 ||
               ((DAT_018d92a8 != 0 && (cVar6 = FUN_0169ac90(&DAT_018d92a0), cVar6 != '\0')))))) &&
             (iVar9 = FUN_016949d8(DAT_018d92a0), iVar9 != 0)) {
            if (*(int **********)(DAT_018d92a0 + 0x20) == (int *********)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018583fc);
            }
            local_238 = *(int **********)(DAT_018d92a0 + 0x24);
            pppppppppiStack_234 = *(int **********)(DAT_018d92a0 + 0x28);
            local_4c = 1;
            uStack_4b = 0;
            uStack_49 = 0;
            local_bc = (int *********)&local_60;
            local_50._0_1_ = (byte)&local_b0;
            local_50._1_1_ = (char)((uint)&local_b0 >> 8);
            local_50._2_2_ = (undefined2)((uint)&local_b0 >> 0x10);
            local_60 = (int *********)&local_c8;
            local_230 = (int *********)0x0;
            local_ac = (char)&local_c0;
            uStack_ab = (undefined2)((uint)&local_c0 >> 8);
            uStack_a9 = (undefined1)((uint)&local_c0 >> 0x18);
            local_a8 = (int *********)&DAT_018abb78;
            local_c0 = (int *********)&DAT_005770f8;
            local_5c = (int *********)FUN_015ef5b4;
            local_240 = *(int **********)(DAT_018d92a0 + 0x1c);
            local_23c = *(int **********)(DAT_018d92a0 + 0x20);
            local_b0 = (int *********)&local_240;
            local_48 = (int *********)(DAT_018d92a0 + 0x1c);
            FUN_0066c434(&local_50);
          }
          if ((char)local_c8 == '\x03') {
            puVar18 = (undefined4 *)CONCAT13(uStack_c1,CONCAT21(uStack_c3,uStack_c4));
            uVar10 = *puVar18;
            puVar31 = (undefined4 *)puVar18[1];
            pcVar22 = (code *)*puVar31;
            if (pcVar22 != (code *)0x0) {
              (*pcVar22)(uVar10);
            }
            if (puVar31[1] != 0) {
              thunk_FUN_016d3fb4(uVar10);
            }
            thunk_FUN_016d3fb4(puVar18);
          }
          piVar16 = *(int **)(param_1 + 0xdc);
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar16;
            bVar1 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar1);
          *piVar16 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_016592f4(*(undefined4 *)(param_1 + 0xdc));
          }
          iVar9 = *(int *)(param_1 + 0xb8);
          if (iVar9 != -0x80000000) {
            if (iVar9 == -0x7fffffff) {
              piVar16 = *(int **)(param_1 + 0xbc);
              if (*piVar16 == 0xcc) {
                DataMemoryBarrier(0xb);
                bVar1 = (bool)hasExclusiveAccess(piVar16);
                if (bVar1) {
                  *piVar16 = 0x84;
                  goto LAB_0066b144;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              (**(code **)(piVar16[2] + 0x10))();
            }
            else if (iVar9 != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc));
            }
          }
        }
LAB_0066b144:
        if (*(int *)(param_1 + 0x180) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x184));
        }
        goto LAB_0066b15c;
      }
    }
    uVar8 = 3;
    *local_3a4 = 3;
    *local_3a0 = 3;
LAB_0066afc8:
    local_384 = (undefined1 *)(param_1 + 400);
    *local_384 = uVar8;
    *(undefined1 *)(param_1 + 0x58) = 4;
    return 1;
  }
LAB_00669750:
  if (local_b0 != (int *********)0x0) {
    thunk_FUN_016d3fb4(CONCAT13(uStack_a9,CONCAT21(uStack_ab,local_ac)));
  }
LAB_00669764:
  local_c0 = (int *********)&DAT_80000000;
  local_d4 = (int *********)&local_bc;
  if ((DAT_018d9130 < 5) && (DAT_018d92c0 != '\0')) {
    local_bc = pppppppppiVar12;
    if (DAT_018d92c0 == '\x01') {
LAB_006697e8:
      DataMemoryBarrier(0xb);
      pcVar28 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if (DAT_018dd984 == 2) {
        pcVar28 = DAT_018daa74;
        puVar2 = DAT_018daa78;
        if (DAT_018daa70 != 0) {
          pcVar28 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
      }
      iVar13 = (**(code **)(puVar2 + 0x14))(pcVar28,DAT_018d92b8);
      pppppppppiVar12 = local_bc;
      if (iVar13 == 0) goto joined_r0x00669b3c;
    }
    else if (DAT_018d92c0 != '\x02') {
      cVar6 = FUN_0169ac90(&DAT_018d92b8);
      pppppppppiVar12 = local_bc;
      if (cVar6 == '\0') goto joined_r0x00669b3c;
      if (cVar6 != '\x02') goto LAB_006697e8;
    }
    local_22c = (int *********)DAT_018d92b8;
    if (DAT_018d92b8[8] == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185841c);
    }
    ppppiVar20 = DAT_018d92b8[8];
    local_a8 = (int *********)DAT_018d92b8[9];
    local_a4 = (int *********)DAT_018d92b8[10];
    local_ac = (char)ppppiVar20;
    uStack_ab = (undefined2)((uint)ppppiVar20 >> 8);
    uStack_a9 = (undefined1)((uint)ppppiVar20 >> 0x18);
    local_50._0_1_ = (byte)&local_b0;
    local_50._1_1_ = (char)((uint)&local_b0 >> 8);
    local_50._2_2_ = (undefined2)((uint)&local_b0 >> 0x10);
    local_4c = (char)&local_d0;
    uStack_4b = (undefined2)((uint)&local_d0 >> 8);
    uStack_49 = (undefined1)((uint)&local_d0 >> 0x18);
    local_58 = (int *********)(DAT_018d92b8 + 7);
    local_b0 = (int *********)*local_58;
    local_cc = (char *)&local_c8;
    local_a0 = 0;
    local_48 = (int *********)&DAT_018abb78;
    local_d0 = &DAT_00594dd7;
    uStack_c4 = 0xe8;
    uStack_c3 = 0x76da;
    uStack_c1 = 0;
    local_c8._0_1_ = (char)&local_d4;
    local_c8._1_1_ = (undefined1)((uint)&local_d4 >> 8);
    local_c8._2_2_ = (undefined2)((uint)&local_d4 >> 0x10);
    local_5c = (int *********)&DAT_00000001;
    local_23c = (int *********)0x0;
    local_240 = (int *********)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar28 = s_SetGloba_00414c05;
    puVar2 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar28 = DAT_018daa74;
      puVar2 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar28 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_230 = (int *********)&local_60;
    local_60 = (int *********)&local_50;
    iVar13 = (**(code **)(puVar2 + 0x28))(pcVar28,&local_240);
    pppppppppiVar12 = local_bc;
    if (iVar13 != 0) {
      (**(code **)(puVar2 + 0x2c))(pcVar28,&local_240);
      pppppppppiVar12 = local_bc;
    }
  }
joined_r0x00669b3c:
  local_bc = pppppppppiVar12;
  if (local_c0 != (int *********)&DAT_80000000) {
    pppppppppiVar33 = local_c0;
    pppppppppiVar29 = local_b8;
    goto LAB_00669964;
  }
  FUN_0066c0f8(0x80000000,pppppppppiVar12);
LAB_0066b15c:
  local_384 = (undefined1 *)(param_1 + 400);
  if (*(int *)(param_1 + 0x100) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x104));
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x110));
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x128));
  }
  *local_384 = 1;
  FUN_00654e6c(puVar19);
  pcVar28 = *(char **)(param_1 + 0x54);
  if (*pcVar28 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar28);
    if (!bVar1) goto LAB_0066b1f0;
    *pcVar28 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0066b1f0:
    FUN_01280da8(pcVar28);
  }
  FUN_0128236c(pcVar28);
  FUN_0163af68(pcVar28,1,pcVar28);
  piVar16 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar16;
    bVar1 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar1);
  *piVar16 = iVar9 + -1;
  uVar10 = 0;
  uVar8 = 1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f9f4(*(undefined4 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 0;
  }
LAB_0066b264:
  *(undefined1 *)(param_1 + 0x58) = uVar8;
  return uVar10;
}

