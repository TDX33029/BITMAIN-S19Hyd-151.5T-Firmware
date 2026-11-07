// FUN_0166ae98 @ 0166ae98 size=7256 calls_out=20 calls_in=1
// strings: multiline basic string | multiline literal string | multiline literal string | multiline basic string | multiline basic string

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0166ae98(undefined4 *param_1,short *******param_2)

{
  char cVar1;
  short *******pppppppsVar2;
  short ******ppppppsVar3;
  undefined4 *puVar4;
  int *piVar5;
  short ******ppppppsVar6;
  short ******ppppppsVar7;
  short *******pppppppsVar8;
  short *******extraout_r2;
  short *******extraout_r3;
  short *******pppppppsVar9;
  short *******extraout_r3_00;
  short *******extraout_r3_01;
  short *******extraout_r3_02;
  short *******extraout_r3_03;
  undefined4 uVar10;
  short *******extraout_r3_04;
  short *******extraout_r3_05;
  short *******extraout_r3_06;
  short *******extraout_r3_07;
  short *******extraout_r3_08;
  short *******extraout_r3_09;
  short *******extraout_r3_10;
  short *******extraout_r3_11;
  short *******extraout_r3_12;
  short *******extraout_r3_13;
  short *******extraout_r3_14;
  short *******pppppppsVar11;
  short ******ppppppsVar12;
  uint uVar13;
  short ******ppppppsVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  short ******ppppppsVar17;
  short ******ppppppsVar18;
  short *******pppppppsVar19;
  undefined4 uVar20;
  short *******pppppppsVar21;
  undefined4 uVar22;
  short *******pppppppsVar23;
  short ******ppppppsVar24;
  short *******extraout_r12;
  short *******extraout_r12_00;
  short *******extraout_r12_01;
  short *******extraout_r12_02;
  short *******extraout_r12_03;
  short *******pppppppsVar25;
  short *******extraout_r12_04;
  short *******extraout_r12_05;
  short *******extraout_r12_06;
  bool bVar26;
  short *******local_150;
  short *******local_14c;
  short *******local_148;
  short *******local_144;
  short *******local_140;
  short *******local_13c;
  short *******local_138;
  short *******local_134;
  short *******local_130;
  undefined4 uStack_12c;
  short *******local_128;
  undefined4 *local_124;
  int local_120;
  int local_11c;
  int iStack_118;
  short *******local_114;
  short *******local_110;
  short *******local_108;
  short *******local_104;
  short *******local_100;
  short *******local_fc;
  short *******local_f8;
  short *******local_f4;
  short *******local_f0;
  short *******local_ec;
  short *******local_e8;
  short *******local_e4;
  short *******local_e0;
  short *******local_dc;
  short ******local_d8;
  short ******local_d4;
  short *******local_d0;
  short *******pppppppsStack_cc;
  short *******pppppppsStack_c8;
  short *******local_c0;
  short *******local_bc;
  short *******local_b8;
  short *******local_b4;
  short *******local_b0;
  short *******local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  short *******local_80;
  undefined4 local_7c;
  short *******local_78;
  short *******local_74;
  short *******local_70;
  short *******local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  short *******local_40;
  short *******local_3c;
  short *******local_38;
  short *******local_34;
  short *******local_30;
  short *******local_2c;
  
  ppppppsVar17 = param_2[3];
  ppppppsVar12 = param_2[2];
  if ((((ppppppsVar17 == (short ******)0x0) || (*(char *)ppppppsVar12 != '\"')) ||
      (ppppppsVar17 == (short ******)0x1)) ||
     (((*(char *)((int)ppppppsVar12 + 1) != '\"' || (ppppppsVar17 == (short ******)0x2)) ||
      (*(char *)((int)ppppppsVar12 + 2) != '\"')))) {
    local_140 = (short *******)0x0;
    local_144 = (short *******)0x0;
    local_14c = (short *******)0x0;
    local_148 = (short *******)&DAT_00000004;
    local_150 = (short *******)&DAT_00000001;
  }
  else {
    ppppppsVar14 = (short ******)((int)ppppppsVar17 + -3);
    ppppppsVar18 = (short ******)((int)ppppppsVar12 + 3);
    param_2[2] = ppppppsVar18;
    param_2[3] = ppppppsVar14;
    local_150 = (short *******)ppppppsVar18;
    local_14c = (short *******)ppppppsVar14;
    FUN_0166ef68(&local_80,param_2);
    pppppppsVar9 = local_80;
    if (local_80 == (short *******)&DAT_00000001) {
      param_2[2] = ppppppsVar18;
      param_2[3] = ppppppsVar14;
      if (local_7c != (short *******)0x0) {
        thunk_FUN_016d3fb4(local_78);
      }
      if (local_70 != (short *******)0x0) {
        if (*local_6c != (short ******)0x0) {
          (*(code *)*local_6c)(local_70);
        }
        if (local_6c[1] != (short ******)0x0) {
          thunk_FUN_016d3fb4(local_70);
        }
      }
LAB_0166b5e0:
      ppppppsVar14 = param_2[2];
      local_130 = (short *******)0x0;
      local_80 = (short *******)0x0;
      ppppppsVar18 = param_2[3];
      local_74 = (short *******)0x9207e5d;
      local_134 = (short *******)&DAT_00000001;
      local_138 = (short *******)&DAT_80000000;
      local_78 = (short *******)0x5b2300;
      local_70 = (short *******)0xff800021;
      local_6c = (short *******)&DAT_00000001;
      FUN_0167a914(&local_c0,&local_80,param_2);
      if (local_c0 == (short *******)0x3) {
        if (local_bc != (short *******)0x80000001) {
          local_138 = local_bc;
          *(undefined4 *)((uint)&local_138 | 4) = local_b8;
          ((undefined4 *)((uint)&local_138 | 4))[1] = local_b4;
        }
LAB_0166b6ec:
        while( true ) {
          ppppppsVar18 = param_2[2];
          ppppppsVar14 = param_2[3];
          local_74 = (short *******)0x9207e5d;
          local_78 = (short *******)0x5b2300;
          local_70 = (short *******)0xff800021;
          local_80 = (short *******)0x0;
          local_6c = (short *******)&DAT_00000001;
          FUN_0167a914(&local_c0,&local_80,param_2);
          pppppppsVar8 = local_b4;
          pppppppsVar19 = local_b8;
          pppppppsVar9 = local_bc;
          pppppppsVar11 = extraout_r3_04;
          if (local_c0 != (short *******)0x3) break;
          if (local_bc == (short *******)0x80000001) goto LAB_0166b820;
          FUN_0168e618(&local_138);
          if ((short *******)((int)local_138 - (int)local_130) < pppppppsVar8) {
            FUN_0166e728(&local_138,local_130,pppppppsVar8,1,1);
          }
          pppppppsVar11 = local_130;
          FUN_016dd1aa((char *)((int)local_134 + (int)local_130),pppppppsVar19,pppppppsVar8);
          local_130 = (short *******)((int)pppppppsVar11 + (int)pppppppsVar8);
          if (((uint)pppppppsVar9 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(pppppppsVar19);
          }
        }
        local_ec = local_bc;
        local_e8 = local_b8;
        local_e4 = local_b4;
        pppppppsVar19 = local_b0;
        pppppppsVar8 = local_ac;
        pppppppsVar9 = local_c0;
        if (local_c0 != (short *******)&DAT_00000001) goto joined_r0x0166bc6c;
        param_2[2] = ppppppsVar18;
        param_2[3] = ppppppsVar14;
        if (local_bc != (short *******)0x0) {
          thunk_FUN_016d3fb4(local_b8);
          pppppppsVar11 = extraout_r3_05;
        }
        pppppppsVar19 = local_ac;
        pppppppsVar9 = local_b0;
        if (local_b0 != (short *******)0x0) {
          if (*local_ac != (short ******)0x0) {
            (*(code *)*local_ac)(local_b0);
            pppppppsVar11 = extraout_r3_06;
          }
          if (pppppppsVar19[1] != (short ******)0x0) {
            thunk_FUN_016d3fb4(pppppppsVar9);
            pppppppsVar11 = extraout_r3_07;
          }
        }
LAB_0166b820:
        while( true ) {
          pppppppsVar8 = (short *******)param_2[3];
          pppppppsVar19 = (short *******)param_2[2];
          if (pppppppsVar8 == (short *******)0x0) break;
          if (((*(char *)pppppppsVar19 == '\"') && (pppppppsVar8 != (short *******)&DAT_00000001))
             && (*(char *)((int)pppppppsVar19 + 1) == '\"')) {
            pppppppsVar9 = (short *******)((int)pppppppsVar19 + 2);
            ppppppsVar18 = (short ******)((int)pppppppsVar8 + -2);
            param_2[2] = (short ******)pppppppsVar9;
            param_2[3] = ppppppsVar18;
            if (ppppppsVar18 == (short ******)0x0) {
LAB_0166b8a4:
              param_2[2] = (short ******)pppppppsVar9;
              param_2[3] = ppppppsVar18;
              goto LAB_0166b8ac;
            }
            param_2[3] = (short ******)((int)pppppppsVar8 + -3);
            cVar1 = *(char *)((int)pppppppsVar19 + 2);
            ppppppsVar14 = (short ******)0x2;
            param_2[2] = (short ******)((int)pppppppsVar19 + 3);
            if (cVar1 == '\"') goto LAB_0166b8a4;
          }
          else {
LAB_0166b8ac:
            param_2[2] = (short ******)pppppppsVar19;
            ppppppsVar7 = (short ******)(uint)(pppppppsVar8 != (short *******)0x0);
            param_2[3] = (short ******)pppppppsVar8;
            ppppppsVar18 = (short ******)0x0;
            do {
              if (*(char *)((int)pppppppsVar19 + (int)ppppppsVar18) != '\"') {
                if (ppppppsVar18 < ppppppsVar7) goto LAB_0166c0d8;
                break;
              }
              ppppppsVar18 = (short ******)((int)ppppppsVar18 + 1);
            } while (ppppppsVar7 != ppppppsVar18);
            if (pppppppsVar8 == (short *******)0x0) goto LAB_0166c0d8;
            ppppppsVar18 = (short ******)((int)pppppppsVar8 + -1);
            bVar26 = ppppppsVar18 == (short ******)0x0;
            pppppppsVar9 = (short *******)((int)pppppppsVar19 + 1);
            param_2[2] = (short ******)pppppppsVar9;
            if (!bVar26) {
              ppppppsVar7 = (short ******)((int)pppppppsVar8 + -2);
            }
            param_2[3] = ppppppsVar18;
            if (!bVar26) {
              ppppppsVar14 = (short ******)0x1;
              param_2[3] = ppppppsVar7;
              ppppppsVar7 = (short ******)(uint)*(byte *)((int)pppppppsVar19 + 1);
              param_2[2] = (short ******)((int)pppppppsVar19 + 2);
            }
            if (bVar26 || ppppppsVar7 == (short ******)&DAT_00000022) {
              param_2[2] = (short ******)pppppppsVar9;
              param_2[3] = ppppppsVar18;
              goto LAB_0166c0d8;
            }
          }
          param_2[2] = (short ******)pppppppsVar9;
          param_2[3] = ppppppsVar18;
          if (pppppppsVar19 == (short *******)0x0) {
LAB_0166c0e8:
            pppppppsVar8 = (short *******)param_2[3];
            pppppppsVar19 = pppppppsVar9;
            goto LAB_0166c0ec;
          }
          ppppppsVar18 = param_2[3];
          local_78 = (short *******)0x5b2300;
          local_74 = (short *******)0x9207e5d;
          local_70 = (short *******)0xff800021;
          local_80 = (short *******)0x0;
          local_6c = (short *******)&DAT_00000001;
          FUN_0167a914(&local_c0,&local_80,param_2);
          pppppppsVar8 = local_b4;
          pppppppsVar23 = local_b8;
          pppppppsVar21 = local_bc;
          if (local_c0 != (short *******)0x3) {
            if (local_c0 == (short *******)&DAT_00000001) {
              param_2[2] = (short ******)pppppppsVar9;
              param_2[3] = ppppppsVar18;
              FUN_016692ac(&local_bc);
              pppppppsVar11 = extraout_r3_14;
LAB_0166c0c0:
              pppppppsVar9 = (short *******)param_2[2];
              goto LAB_0166c0e8;
            }
            local_ec = local_bc;
            local_f0 = local_c0;
            local_e8 = local_b8;
            local_e4 = local_b4;
            pppppppsVar19 = local_b0;
            pppppppsVar8 = local_ac;
            pppppppsVar9 = local_c0;
            goto joined_r0x0166bc6c;
          }
          pppppppsVar11 = extraout_r3_08;
          if (local_bc == (short *******)0x80000001) goto LAB_0166c0c0;
          FUN_0168e618(&local_138);
          if ((short ******)((int)local_138 - (int)local_130) < ppppppsVar14) {
            FUN_0166e728(&local_138,local_130,ppppppsVar14,1,1);
          }
          pppppppsVar9 = local_130;
          FUN_016dd1aa((char *)((int)local_134 + (int)local_130),pppppppsVar19,ppppppsVar14);
          local_130 = (short *******)((int)pppppppsVar9 + (int)ppppppsVar14);
          FUN_0168e618(&local_138);
          if ((short *******)((int)local_138 - (int)local_130) < pppppppsVar8) {
            FUN_0166e728(&local_138,local_130,pppppppsVar8,1,1);
          }
          pppppppsVar9 = local_130;
          FUN_016dd1aa((char *)((int)local_134 + (int)local_130),pppppppsVar23,pppppppsVar8);
          local_130 = (short *******)((int)pppppppsVar9 + (int)pppppppsVar8);
          while( true ) {
            ppppppsVar18 = param_2[2];
            ppppppsVar14 = param_2[3];
            local_74 = (short *******)0x9207e5d;
            local_78 = (short *******)0x5b2300;
            local_70 = (short *******)0xff800021;
            local_80 = (short *******)0x0;
            local_6c = (short *******)&DAT_00000001;
            FUN_0167a914(&local_c0,&local_80,param_2);
            pppppppsVar25 = local_b4;
            pppppppsVar8 = local_b8;
            pppppppsVar19 = local_bc;
            pppppppsVar9 = local_c0;
            pppppppsVar11 = extraout_r3_09;
            if (local_c0 != (short *******)0x3) break;
            if (local_bc == (short *******)0x80000001) goto LAB_0166bb44;
            FUN_0168e618(&local_138);
            if ((short *******)((int)local_138 - (int)local_130) < pppppppsVar25) {
              FUN_0166e728(&local_138,local_130,pppppppsVar25,1,1);
            }
            pppppppsVar9 = local_130;
            FUN_016dd1aa((char *)((int)local_134 + (int)local_130),pppppppsVar8,pppppppsVar25);
            local_130 = (short *******)((int)pppppppsVar9 + (int)pppppppsVar25);
            if (((uint)pppppppsVar19 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(pppppppsVar8);
            }
          }
          if (local_c0 != (short *******)&DAT_00000001) {
            local_ec = local_bc;
            local_f0 = local_c0;
            local_dc = local_ac;
            local_e8 = local_b8;
            local_e4 = local_b4;
            local_e0 = local_b0;
            pppppppsVar19 = local_b0;
            pppppppsVar8 = local_ac;
            if (((uint)pppppppsVar21 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(pppppppsVar23);
              pppppppsVar19 = local_e0;
              pppppppsVar8 = local_dc;
            }
            goto joined_r0x0166bc6c;
          }
          param_2[2] = ppppppsVar18;
          param_2[3] = ppppppsVar14;
          if (local_bc != (short *******)0x0) {
            thunk_FUN_016d3fb4(local_b8);
            pppppppsVar11 = extraout_r3_10;
          }
          pppppppsVar19 = local_ac;
          pppppppsVar9 = local_b0;
          if (local_b0 != (short *******)0x0) {
            if (*local_ac != (short ******)0x0) {
              (*(code *)*local_ac)(local_b0);
              pppppppsVar11 = extraout_r3_11;
            }
            if (pppppppsVar19[1] != (short ******)0x0) {
              thunk_FUN_016d3fb4(pppppppsVar9);
              pppppppsVar11 = extraout_r3_12;
            }
          }
LAB_0166bb44:
          if (((uint)pppppppsVar21 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(pppppppsVar23);
            pppppppsVar11 = extraout_r3_13;
          }
        }
        param_2[2] = (short ******)pppppppsVar19;
        param_2[3] = (short ******)0x0;
LAB_0166c0d8:
        param_2[2] = (short ******)pppppppsVar19;
        param_2[3] = (short ******)pppppppsVar8;
LAB_0166c0ec:
        local_c0 = (short *******)&DAT_00000001;
        local_b8 = (short *******)&DAT_00000004;
        if (pppppppsVar8 == (short *******)0x0) {
LAB_0166c1a0:
          pppppppsVar9 = (short *******)0x0;
          pppppppsVar21 = (short *******)0x0;
          local_bc = (short *******)0x0;
LAB_0166c1a8:
          local_b4 = pppppppsVar21;
          local_b0 = pppppppsVar9;
          local_ac = pppppppsVar11;
          if (local_c0 != (short *******)&DAT_00000001) goto LAB_0166c250;
          param_2[2] = (short ******)pppppppsVar19;
          param_2[3] = (short ******)pppppppsVar8;
          FUN_0166921c(&local_80,param_2,&DAT_004144ec);
          local_38 = local_78;
          local_3c = local_7c;
          if (local_80 == (short *******)0x3) {
            ppppppsVar14 = param_2[2];
            ppppppsVar18 = param_2[3];
            FUN_0166912c(&local_80,param_2,&DAT_004144ed,3);
            if (local_80 != (short *******)0x3) {
              param_2[2] = ppppppsVar14;
              param_2[3] = ppppppsVar18;
              goto LAB_0166c2dc;
            }
            param_2[2] = ppppppsVar14;
            param_2[3] = ppppppsVar18;
            local_40 = (short *******)0x3;
          }
          else {
LAB_0166c2dc:
            local_34 = local_74;
            local_30 = local_70;
            local_2c = local_6c;
            local_108 = local_74;
            local_104 = local_70;
            local_100 = local_6c;
            local_40 = local_80;
            local_3c = local_7c;
            local_38 = local_78;
          }
          pppppppsVar9 = local_40;
          FUN_016692ac((uint)&local_c0 | 4);
        }
        else {
          pppppppsVar11 = (short *******)0x0;
          if (*(char *)pppppppsVar19 != '\"') {
LAB_0166c128:
            if (pppppppsVar11 < pppppppsVar8) goto LAB_0166c1a0;
            pppppppsVar9 = (short *******)0x0;
            local_bc = (short *******)0x0;
            pppppppsVar21 = (short *******)0x0;
            if (&DAT_00000001 < pppppppsVar8) goto LAB_0166c140;
            goto LAB_0166c1a8;
          }
          if (pppppppsVar8 == (short *******)&DAT_00000001) goto LAB_0166c1a0;
          pppppppsVar11 = (short *******)&DAT_00000001;
          if (*(char *)((int)pppppppsVar19 + 1) != '\"') goto LAB_0166c128;
LAB_0166c140:
          ppppppsVar18 = (short ******)((int)pppppppsVar19 + 2);
          ppppppsVar14 = (short ******)((int)pppppppsVar8 + -2);
          param_2[2] = ppppppsVar18;
          param_2[3] = ppppppsVar14;
          FUN_0166912c(&local_80,param_2,&DAT_004144ed,3);
          if (local_80 != (short *******)0x3) {
            param_2[2] = ppppppsVar18;
            param_2[3] = ppppppsVar14;
            local_c0 = local_80;
            local_b8 = local_78;
            pppppppsVar9 = local_70;
            pppppppsVar11 = local_6c;
            local_bc = local_7c;
            pppppppsVar21 = local_74;
            goto LAB_0166c1a8;
          }
          param_2[2] = ppppppsVar18;
          param_2[3] = ppppppsVar14;
          local_b8 = (short *******)&SUB_00000002;
          local_c0 = (short *******)0x3;
          local_bc = pppppppsVar19;
LAB_0166c250:
          local_40 = local_c0;
          local_3c = local_bc;
          local_38 = local_b8;
          local_34 = local_b4;
          local_30 = local_b0;
          local_2c = local_ac;
          pppppppsVar9 = local_c0;
        }
        pppppppsVar21 = local_38;
        pppppppsVar11 = local_3c;
        if (pppppppsVar9 == (short *******)0x3) {
          FUN_0168e618(&local_138);
          if ((short *******)((int)local_138 - (int)local_130) < pppppppsVar21) {
            FUN_0166e728(&local_138,local_130,pppppppsVar21,1,1);
          }
          pppppppsVar9 = local_130;
          FUN_016dd1aa((char *)((int)local_134 + (int)local_130),pppppppsVar11,pppppppsVar21);
          local_130 = (short *******)((int)pppppppsVar9 + (int)pppppppsVar21);
        }
        else {
          if (pppppppsVar9 != (short *******)&DAT_00000001) {
            local_ec = local_3c;
            local_f0 = pppppppsVar9;
            local_e8 = local_38;
            local_e4 = local_34;
            pppppppsVar19 = local_30;
            pppppppsVar8 = local_2c;
            goto joined_r0x0166bc6c;
          }
          param_2[2] = (short ******)pppppppsVar19;
          param_2[3] = (short ******)pppppppsVar8;
          FUN_016692ac((uint)&local_40 | 4);
        }
        local_ec = local_138;
        local_e8 = local_134;
        local_e4 = local_130;
      }
      else {
        if (local_c0 == (short *******)&DAT_00000001) {
          param_2[2] = ppppppsVar14;
          param_2[3] = ppppppsVar18;
          if (local_bc != (short *******)0x0) {
            thunk_FUN_016d3fb4(local_b8);
          }
          pppppppsVar19 = local_ac;
          pppppppsVar9 = local_b0;
          if (local_b0 != (short *******)0x0) {
            if (*local_ac != (short ******)0x0) {
              (*(code *)*local_ac)(local_b0);
            }
            if (pppppppsVar19[1] != (short ******)0x0) {
              thunk_FUN_016d3fb4(pppppppsVar9);
            }
          }
          goto LAB_0166b6ec;
        }
        local_ec = local_bc;
        local_e8 = local_b8;
        local_e4 = local_b4;
        pppppppsVar19 = local_b0;
        pppppppsVar8 = local_ac;
        pppppppsVar9 = local_c0;
joined_r0x0166bc6c:
        local_dc = pppppppsVar8;
        local_e0 = pppppppsVar19;
        if (((uint)local_138 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_134);
        }
        if (pppppppsVar9 != (short *******)0x3) {
          if (pppppppsVar9 == (short *******)&DAT_00000001) {
            pppppppsVar9 = (short *******)&SUB_00000002;
          }
          local_f0 = pppppppsVar9;
          goto LAB_0166bc88;
        }
      }
LAB_0166c374:
      pppppppsVar8 = local_e4;
      pppppppsVar19 = local_e8;
      pppppppsVar9 = local_ec;
      local_f0 = (short *******)param_2[2];
      local_ec = (short *******)param_2[3];
      if (((((local_ec == (short *******)0x0) || (*(char *)local_f0 != '\"')) ||
           (local_ec == (short *******)&DAT_00000001)) ||
          ((*(char *)((int)local_f0 + 1) != '\"' || (local_ec == (short *******)&SUB_00000002)))) ||
         (*(char *)((int)local_f0 + 2) != '\"')) {
        local_b0 = (short *******)0x0;
        local_b4 = (short *******)0x0;
        local_bc = (short *******)0x0;
        local_c0 = (short *******)0x2;
        local_30 = (short *******)&local_f0;
        local_b8 = (short *******)0x4;
        local_38 = (short *******)&DAT_00000016;
        local_3c = (short *******)0x4142c0;
        local_40 = (short *******)0x3;
        local_34 = param_2;
        FUN_00953084(&local_80,&local_c0,&local_40);
        local_c0 = local_80;
        local_bc = local_7c;
        local_b8 = local_78;
        local_b4 = local_74;
        local_b0 = local_70;
        local_ac = local_6c;
        if (local_80 != (short *******)0x3) {
          local_150 = local_80;
          local_14c = local_7c;
          local_148 = local_78;
          local_144 = local_74;
          local_140 = local_70;
          local_13c = local_6c;
          if (((uint)pppppppsVar9 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(pppppppsVar19);
          }
          goto LAB_0166c4b8;
        }
      }
      else {
        param_2[2] = (short ******)((int)local_f0 + 3);
        param_2[3] = (short ******)((int)local_ec + -3);
        local_b8 = (short *******)0x3;
        local_c0 = (short *******)0x3;
        local_bc = local_f0;
      }
      local_144 = pppppppsVar8;
      local_148 = pppppppsVar19;
      local_14c = pppppppsVar9;
      local_150 = (short *******)0x3;
    }
    else {
      if (local_80 == (short *******)0x3) goto LAB_0166b5e0;
      uVar16 = (undefined1)local_7c;
      FUN_016dd1aa((uint)&local_f0 | 5,(int)&local_7c + 1,0x13);
      local_ec = (short *******)CONCAT31(local_ec._1_3_,uVar16);
      local_f0 = pppppppsVar9;
LAB_0166bc88:
      local_b0 = (short *******)&local_150;
      local_b8 = (short *******)&DAT_00000016;
      local_bc = (short *******)0x4142c0;
      local_c0 = (short *******)0x3;
      local_b4 = param_2;
      FUN_00953084(&local_80,&local_f0,&local_c0);
      local_f0 = local_80;
      local_ec = local_7c;
      local_e8 = local_78;
      local_e4 = local_74;
      local_e0 = local_70;
      local_dc = local_6c;
      if (local_80 == (short *******)0x3) goto LAB_0166c374;
      local_140 = local_70;
      local_13c = local_6c;
      local_150 = local_80;
      local_14c = local_7c;
      local_148 = local_78;
      local_144 = local_74;
    }
LAB_0166c4b8:
    if (local_150 != (short *******)&DAT_00000001) {
      *param_1 = local_150;
      param_1[1] = local_14c;
      param_1[2] = local_148;
      param_1[3] = local_144;
      param_1[4] = local_140;
      param_1[5] = local_13c;
      return;
    }
  }
  pppppppsVar11 = local_13c;
  pppppppsVar8 = local_140;
  pppppppsVar19 = local_148;
  pppppppsVar9 = local_14c;
  param_2[2] = ppppppsVar12;
  param_2[3] = ppppppsVar17;
  FUN_0166a7a4(&local_138);
  if (local_138 == (short *******)&DAT_00000001) {
    piVar5 = (int *)((uint)&local_138 | 4);
    local_120 = *piVar5;
    local_11c = piVar5[1];
    iStack_118 = piVar5[2];
    local_114 = (short *******)piVar5[3];
    local_110 = (short *******)piVar5[4];
    if (pppppppsVar9 != (short *******)0x0) {
      thunk_FUN_016d3fb4(pppppppsVar19);
    }
    if (pppppppsVar8 != (short *******)0x0) {
      if (*pppppppsVar11 != (short ******)0x0) {
        (*(code *)*pppppppsVar11)(pppppppsVar8);
      }
      if (pppppppsVar11[1] != (short ******)0x0) {
        thunk_FUN_016d3fb4(pppppppsVar8);
      }
    }
    param_2[2] = ppppppsVar12;
    param_2[3] = ppppppsVar17;
    if (((ppppppsVar17 == (short ******)0x0) || (*(char *)ppppppsVar12 != '\'')) ||
       ((ppppppsVar17 == (short ******)0x1 ||
        (((*(char *)((int)ppppppsVar12 + 1) != '\'' || (ppppppsVar17 == (short ******)0x2)) ||
         (*(char *)((int)ppppppsVar12 + 2) != '\'')))))) {
      uVar13 = 0;
      local_108 = (short *******)&DAT_00000001;
      local_100 = (short *******)&DAT_00000004;
      local_104 = (short *******)0x0;
      local_f8 = (short *******)0x0;
      local_f4 = (short *******)0x0;
      uVar16 = 0;
LAB_0166b3dc:
      local_fc = (short *******)CONCAT31((int3)uVar13,uVar16);
LAB_0166b3f8:
      if (local_108 == (short *******)&DAT_00000001) goto LAB_0166b40c;
LAB_0166bf30:
      *param_1 = local_108;
      param_1[1] = local_104;
      param_1[2] = local_100;
      param_1[3] = local_fc;
      param_1[4] = local_f8;
      param_1[5] = local_f4;
      if (local_120 != 0) {
        thunk_FUN_016d3fb4(local_11c);
      }
      pppppppsVar19 = local_110;
      pppppppsVar9 = local_114;
      if (local_114 == (short *******)0x0) goto LAB_0166bf84;
      if (*local_110 != (short ******)0x0) {
        (*(code *)*local_110)(local_114);
      }
LAB_0166bf70:
      if (pppppppsVar19[1] != (short ******)0x0) {
        thunk_FUN_016d3fb4(pppppppsVar9);
      }
    }
    else {
      param_2[2] = (short ******)((int)ppppppsVar12 + 3);
      param_2[3] = (short ******)((int)ppppppsVar17 + -3);
      FUN_0166ef68(&local_80,param_2);
      if (local_80 != (short *******)0x3) {
        if (local_80 != (short *******)&DAT_00000001) {
          uVar13 = (uint)local_74 >> 8;
          local_108 = local_80;
          local_100 = local_78;
          local_104 = local_7c;
          local_f8 = local_70;
          local_f4 = local_6c;
          uVar16 = local_74._0_1_;
          goto LAB_0166b3dc;
        }
        param_2[2] = (short ******)((int)ppppppsVar12 + 3);
        param_2[3] = (short ******)((int)ppppppsVar17 + -3);
        if (local_7c != (short *******)0x0) {
          thunk_FUN_016d3fb4(local_78);
        }
        pppppppsVar19 = local_6c;
        pppppppsVar9 = local_70;
        if (local_70 != (short *******)0x0) {
          if (*local_6c != (short ******)0x0) {
            (*(code *)*local_6c)(local_70);
          }
          if (pppppppsVar19[1] != (short ******)0x0) {
            thunk_FUN_016d3fb4(pppppppsVar9);
          }
        }
      }
      ppppppsVar14 = param_2[2];
      ppppppsVar18 = param_2[3];
      local_d8 = ppppppsVar14;
      local_d4 = ppppppsVar18;
      FUN_01669328(&local_80,param_2);
      if (local_80 == (short *******)0x3) {
        pppppppsVar2 = (short *******)((uint)&local_40 | 4);
        pppppppsVar9 = extraout_r3;
        ppppppsVar7 = param_2[3];
        pppppppsVar19 = param_2;
        pppppppsVar25 = extraout_r12;
        do {
          ppppppsVar24 = param_2[2];
          if (ppppppsVar7 == (short ******)0x0) {
            param_2[2] = ppppppsVar24;
            param_2[3] = (short ******)0x0;
LAB_0166c500:
            param_2[2] = ppppppsVar24;
            param_2[3] = ppppppsVar7;
LAB_0166c50c:
            pppppppsVar8 = (short *******)param_2[2];
            pppppppsVar9 = (short *******)&DAT_00000001;
            pppppppsVar19 = (short *******)&DAT_00000004;
            if (ppppppsVar7 == (short ******)0x0) {
LAB_0166c5d0:
              pppppppsVar21 = (short *******)0x0;
              pppppppsVar11 = (short *******)0x0;
              pppppppsVar23 = (short *******)0x0;
LAB_0166c5d4:
              local_c0 = pppppppsVar9;
              local_bc = pppppppsVar23;
              local_b8 = pppppppsVar19;
              local_b4 = pppppppsVar11;
              local_b0 = pppppppsVar21;
              local_ac = pppppppsVar25;
              if (pppppppsVar9 != (short *******)&DAT_00000001) goto LAB_0166c678;
              param_2[2] = (short ******)pppppppsVar8;
              param_2[3] = ppppppsVar7;
              FUN_0166921c(&local_80,param_2,&DAT_004144fe);
              pppppppsVar19 = local_78;
              pppppppsVar9 = local_7c;
              if (local_80 == (short *******)0x3) {
                ppppppsVar24 = param_2[2];
                ppppppsVar3 = param_2[3];
                FUN_0166912c(&local_80,param_2,&DAT_004144fb,3);
                if (local_80 != (short *******)0x3) {
                  param_2[2] = ppppppsVar24;
                  param_2[3] = ppppppsVar3;
                  goto LAB_0166c788;
                }
                param_2[2] = ppppppsVar24;
                param_2[3] = ppppppsVar3;
                local_38 = pppppppsVar19;
                local_3c = pppppppsVar9;
                local_40 = (short *******)0x3;
              }
              else {
LAB_0166c788:
                local_d0 = local_74;
                pppppppsStack_cc = local_70;
                pppppppsStack_c8 = local_6c;
                local_40 = local_80;
                local_3c = local_7c;
                local_38 = local_78;
                local_34 = local_74;
                local_30 = local_70;
                local_2c = local_6c;
              }
              pppppppsVar9 = local_40;
              FUN_016692ac((uint)&local_c0 | 4);
            }
            else {
              ppppppsVar24 = (short ******)0x0;
              if (*(char *)pppppppsVar8 != '\'') {
LAB_0166c554:
                if (ppppppsVar24 < ppppppsVar7) goto LAB_0166c5d0;
                pppppppsVar11 = (short *******)0x0;
                pppppppsVar21 = (short *******)0x0;
                pppppppsVar23 = (short *******)0x0;
                if ((short ******)0x1 < ppppppsVar7) goto LAB_0166c56c;
                goto LAB_0166c5d4;
              }
              if (ppppppsVar7 == (short ******)0x1) goto LAB_0166c5d0;
              ppppppsVar24 = (short ******)0x1;
              if (*(char *)((int)pppppppsVar8 + 1) != '\'') goto LAB_0166c554;
LAB_0166c56c:
              ppppppsVar3 = (short ******)((int)ppppppsVar7 - 2);
              ppppppsVar24 = (short ******)((int)pppppppsVar8 + 2);
              param_2[2] = ppppppsVar24;
              param_2[3] = ppppppsVar3;
              FUN_0166912c(&local_80,param_2,&DAT_004144fb,3);
              if (local_80 != (short *******)0x3) {
                param_2[2] = ppppppsVar24;
                param_2[3] = ppppppsVar3;
                pppppppsVar9 = local_80;
                pppppppsVar11 = local_74;
                pppppppsVar21 = local_70;
                pppppppsVar23 = local_7c;
                pppppppsVar19 = local_78;
                pppppppsVar25 = local_6c;
                goto LAB_0166c5d4;
              }
              param_2[2] = ppppppsVar24;
              param_2[3] = ppppppsVar3;
              local_b8 = (short *******)&SUB_00000002;
              local_c0 = (short *******)0x3;
              local_bc = pppppppsVar8;
LAB_0166c678:
              local_40 = local_c0;
              local_3c = local_bc;
              local_38 = local_b8;
              local_34 = local_b4;
              local_30 = local_b0;
              local_2c = local_ac;
              pppppppsVar9 = local_c0;
            }
            if (pppppppsVar9 == (short *******)0x3) {
LAB_0166c7e4:
              ppppppsVar7 = param_2[2];
              param_2[2] = ppppppsVar14;
              param_2[3] = ppppppsVar18;
              ppppppsVar7 = (short ******)((int)ppppppsVar7 - (int)ppppppsVar14);
              if (ppppppsVar18 < ppppppsVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
              }
              param_2[2] = (short ******)((int)ppppppsVar14 + (int)ppppppsVar7);
              param_2[3] = (short ******)((int)ppppppsVar18 - (int)ppppppsVar7);
              FUN_00fab1e0(&local_c0,ppppppsVar14);
              pppppppsVar11 = local_b8;
              pppppppsVar19 = local_bc;
              if (local_c0 == (short *******)0x0) {
                pppppppsVar9 = (short *******)0x3;
                pppppppsVar8 = extraout_r2;
                pppppppsVar21 = local_bc;
                pppppppsVar23 = local_b8;
              }
              else {
                param_2[2] = ppppppsVar14;
                param_2[3] = ppppppsVar18;
                local_74 = (short *******)0x0;
                local_78 = (short *******)0x0;
                local_7c = (short *******)&DAT_00000004;
                local_80 = (short *******)0x0;
                pppppppsVar8 = (short *******)thunk_FUN_016d4a50(8);
                if (pppppppsVar8 == (short *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,8);
                }
                pppppppsVar9 = (short *******)&DAT_00000001;
                *pppppppsVar8 = (short ******)pppppppsVar19;
                pppppppsVar8[1] = (short ******)pppppppsVar11;
                pppppppsVar21 = (short *******)0x0;
                pppppppsVar23 = (short *******)&DAT_00000004;
              }
              pppppppsVar19 = (short *******)0x0;
              pppppppsVar11 = (short *******)&DAT_018ad740;
            }
            else {
              if (pppppppsVar9 == (short *******)&DAT_00000001) {
                param_2[2] = (short ******)pppppppsVar8;
                param_2[3] = ppppppsVar7;
                FUN_016692ac(pppppppsVar2);
                goto LAB_0166c7e4;
              }
              pppppppsVar19 = local_34;
              pppppppsVar8 = local_30;
              pppppppsVar11 = local_2c;
              pppppppsVar21 = local_3c;
              pppppppsVar23 = local_38;
            }
            if (pppppppsVar9 != (short *******)0x3) goto LAB_0166bd48;
            pppppppsVar9 = pppppppsVar21;
            if (&SUB_00000002 < pppppppsVar23) {
              FUN_00fb6cfc(&local_80,pppppppsVar21,pppppppsVar23,"\r\n",2);
              FUN_00953db0(&local_c0,&local_80);
              if (local_c0 == (short *******)0x0) goto LAB_0166c90c;
            }
            else {
              pppppppsVar19 = (short *******)&DAT_80000000;
              if (pppppppsVar23 != (short *******)&SUB_00000002) {
LAB_0166c90c:
                pppppppsVar19 = (short *******)&DAT_80000000;
                goto LAB_0166bdc4;
              }
              if (*(short *)pppppppsVar21 != 0xa0d) {
                pppppppsVar23 = (short *******)&SUB_00000002;
                goto LAB_0166bdc4;
              }
            }
            pppppppsVar19 = (short *******)0x0;
            local_38 = (short *******)0x0;
            local_3c = (short *******)&DAT_00000001;
            local_40 = (short *******)0x0;
            FUN_00fb6cfc(&local_80,pppppppsVar21,pppppppsVar23,"\r\n",2);
            local_c0 = local_80;
            local_bc = local_7c;
            local_b8 = local_78;
            local_b4 = local_74;
            local_b0 = local_70;
            local_ac = local_6c;
            uStack_a8 = uStack_68;
            uStack_a4 = uStack_64;
            uStack_a0 = uStack_60;
            uStack_9c = uStack_5c;
            local_98 = local_58;
            uStack_94 = uStack_54;
            uStack_90 = uStack_50;
            uStack_8c = uStack_4c;
            uStack_88 = uStack_48;
            uStack_84 = uStack_44;
            pppppppsVar9 = (short *******)&DAT_00000001;
            pppppppsVar8 = (short *******)0x0;
            while( true ) {
              FUN_00953db0(&local_80,&local_c0);
              pppppppsVar11 = local_78;
              if (local_80 == (short *******)0x0) break;
              uVar13 = (int)local_7c - (int)pppppppsVar8;
              if ((uint)((int)local_40 - (int)pppppppsVar19) < uVar13) {
                FUN_0166e728(&local_40,pppppppsVar19,uVar13,1,1);
                pppppppsVar19 = local_38;
                pppppppsVar9 = local_3c;
              }
              FUN_016dd1aa((char *)((int)pppppppsVar9 + (int)pppppppsVar19),
                           (char *)((int)pppppppsVar21 + (int)pppppppsVar8),uVar13);
              local_38 = (short *******)((int)pppppppsVar19 + uVar13);
              if (local_40 == local_38) {
                FUN_0166e728(&local_40,local_38,1,1,1);
              }
              pppppppsVar19 = (short *******)((int)local_38 + 1);
              *(char *)((int)local_3c + (int)local_38) = '\n';
              pppppppsVar9 = local_3c;
              pppppppsVar8 = pppppppsVar11;
              local_38 = pppppppsVar19;
            }
            uVar13 = (int)pppppppsVar23 - (int)pppppppsVar8;
            if ((uint)((int)local_40 - (int)pppppppsVar19) < uVar13) {
              FUN_0166e728(&local_40,pppppppsVar19,uVar13,1,1);
              pppppppsVar19 = local_38;
              pppppppsVar9 = local_3c;
            }
            FUN_016dd1aa((char *)((int)pppppppsVar9 + (int)pppppppsVar19),
                         (char *)((int)pppppppsVar21 + (int)pppppppsVar8),uVar13);
            pppppppsVar23 = (short *******)((int)pppppppsVar19 + uVar13);
            pppppppsVar19 = local_40;
            goto LAB_0166bdc8;
          }
          ppppppsVar3 = (short ******)0x0;
          if (*(char *)ppppppsVar24 != '\'') {
LAB_0166b21c:
            if ((ppppppsVar7 <= ppppppsVar3) && ((short ******)0x1 < ppppppsVar7)) {
              param_2[2] = (short ******)((int)ppppppsVar24 + 2);
              param_2[3] = (short ******)((int)ppppppsVar7 - 2);
              goto LAB_0166b238;
            }
LAB_0166b23c:
            param_2[2] = ppppppsVar24;
            param_2[3] = ppppppsVar7;
            uVar13 = 0;
            do {
              cVar1 = *(char *)((int)ppppppsVar24 + uVar13);
              if (cVar1 != '\'') {
                if (uVar13 < (ppppppsVar7 != (short ******)0x0)) goto LAB_0166c500;
                break;
              }
              uVar13 = uVar13 + 1;
            } while ((ppppppsVar7 != (short ******)0x0) != uVar13);
            if (ppppppsVar7 != (short ******)0x0) {
              ppppppsVar6 = (short ******)((int)ppppppsVar7 - 1);
              bVar26 = ppppppsVar6 != (short ******)0x0;
              ppppppsVar3 = (short ******)((int)ppppppsVar24 + 1);
              if (bVar26) {
                pppppppsVar9 = (short *******)((int)ppppppsVar7 - 2);
                pppppppsVar19 = (short *******)((int)ppppppsVar24 + 2);
              }
              param_2[2] = ppppppsVar3;
              param_2[3] = ppppppsVar6;
              if (bVar26) {
                cVar1 = *(char *)((int)ppppppsVar24 + 1);
                param_2[2] = (short ******)pppppppsVar19;
                param_2[3] = (short ******)pppppppsVar9;
              }
              if (bVar26 && cVar1 != '\'') goto LAB_0166b2a8;
              param_2[2] = ppppppsVar3;
              param_2[3] = ppppppsVar6;
            }
            goto LAB_0166c500;
          }
          if (ppppppsVar7 == (short ******)0x1) goto LAB_0166b23c;
          ppppppsVar3 = (short ******)0x1;
          if (*(char *)((int)ppppppsVar24 + 1) != '\'') goto LAB_0166b21c;
          ppppppsVar6 = (short ******)((int)ppppppsVar7 - 2);
          ppppppsVar3 = (short ******)((int)ppppppsVar24 + 2);
          param_2[2] = ppppppsVar3;
          param_2[3] = ppppppsVar6;
          if (ppppppsVar6 == (short ******)0x0) {
LAB_0166b238:
            param_2[2] = (short ******)((int)ppppppsVar24 + 2);
            param_2[3] = (short ******)((int)ppppppsVar7 - 2);
            goto LAB_0166b23c;
          }
          cVar1 = *(char *)((int)ppppppsVar24 + 2);
          pppppppsVar19 = (short *******)((int)ppppppsVar24 + 3);
          pppppppsVar9 = (short *******)((int)ppppppsVar7 - 3);
          param_2[2] = (short ******)pppppppsVar19;
          param_2[3] = (short ******)pppppppsVar9;
          if (cVar1 == '\'') goto LAB_0166b238;
LAB_0166b2a8:
          param_2[2] = ppppppsVar3;
          param_2[3] = ppppppsVar6;
          FUN_0166a610(&local_c0,param_2);
          if (local_c0 != (short *******)0x3) {
            *pppppppsVar2 = (short ******)local_bc;
            pppppppsVar2[1] = (short ******)local_b8;
            pppppppsVar2[2] = (short ******)local_b4;
            pppppppsVar2[3] = (short ******)local_b0;
            pppppppsVar2[4] = (short ******)local_ac;
            local_40 = local_c0;
            pppppppsVar25 = pppppppsVar2;
LAB_0166c6bc:
            pppppppsVar11 = local_2c;
            pppppppsVar8 = local_30;
            pppppppsVar19 = local_34;
            pppppppsVar21 = local_3c;
            pppppppsVar23 = local_38;
            pppppppsVar9 = local_40;
            if (local_40 == (short *******)&DAT_00000001) {
              param_2[2] = ppppppsVar24;
              param_2[3] = ppppppsVar7;
              if (local_3c != (short *******)0x0) {
                thunk_FUN_016d3fb4();
                pppppppsVar25 = extraout_r12_04;
              }
              if (pppppppsVar8 != (short *******)0x0) {
                ppppppsVar7 = *pppppppsVar11;
                if (ppppppsVar7 != (short ******)0x0) {
                  (*(code *)ppppppsVar7)(pppppppsVar8);
                  pppppppsVar25 = extraout_r12_05;
                }
                if (pppppppsVar11[1] != (short ******)0x0) {
                  thunk_FUN_016d3fb4(pppppppsVar8);
                  pppppppsVar25 = extraout_r12_06;
                }
              }
              ppppppsVar7 = param_2[3];
              goto LAB_0166c50c;
            }
            goto LAB_0166bd48;
          }
          ppppppsVar3 = param_2[3];
          while( true ) {
            pppppppsVar19 = (short *******)param_2[2];
            FUN_0166a610(&local_80,param_2);
            if (local_80 != (short *******)0x3) break;
            if (param_2[3] == ppppppsVar3) {
              pppppppsVar8 = (short *******)0x0;
              pppppppsVar9 = (short *******)&SUB_00000002;
              local_34 = (short *******)0x0;
              local_38 = (short *******)&DAT_00000004;
              pppppppsVar21 = (short *******)0x0;
              pppppppsVar19 = local_34;
              pppppppsVar11 = local_2c;
              pppppppsVar23 = local_38;
              goto LAB_0166bd48;
            }
            ppppppsVar3 = param_2[3];
          }
          if (local_80 == (short *******)&DAT_00000001) {
            param_2[2] = (short ******)pppppppsVar19;
            param_2[3] = ppppppsVar3;
            local_40 = (short *******)0x3;
            pppppppsVar9 = extraout_r3_00;
            pppppppsVar25 = extraout_r12_00;
            if (local_7c != (short *******)0x0) {
              thunk_FUN_016d3fb4(local_78);
              pppppppsVar9 = extraout_r3_01;
              pppppppsVar25 = extraout_r12_01;
            }
            pppppppsVar11 = local_6c;
            pppppppsVar8 = local_70;
            if (local_70 != (short *******)0x0) {
              if (*local_6c != (short ******)0x0) {
                (*(code *)*local_6c)(local_70);
                pppppppsVar9 = extraout_r3_02;
                pppppppsVar25 = extraout_r12_02;
              }
              if (pppppppsVar11[1] != (short ******)0x0) {
                thunk_FUN_016d3fb4(pppppppsVar8);
                pppppppsVar9 = extraout_r3_03;
                pppppppsVar25 = extraout_r12_03;
              }
            }
          }
          else {
            pppppppsVar25 = (short *******)&local_40;
            local_40 = local_80;
            local_3c = local_7c;
            local_38 = local_78;
            local_34 = local_74;
            local_30 = local_70;
            local_2c = local_6c;
            pppppppsVar9 = local_78;
            pppppppsVar19 = local_6c;
          }
          if (local_40 != (short *******)0x3) goto LAB_0166c6bc;
          bVar26 = param_2[3] != ppppppsVar7;
          ppppppsVar7 = param_2[3];
        } while (bVar26);
        pppppppsVar9 = (short *******)&SUB_00000002;
        local_e0 = (short *******)0x0;
        local_e4 = (short *******)0x0;
        local_e8 = (short *******)&DAT_00000004;
        local_ec = (short *******)0x0;
      }
      else {
        pppppppsVar19 = local_74;
        pppppppsVar8 = local_70;
        pppppppsVar11 = local_6c;
        pppppppsVar21 = local_7c;
        pppppppsVar23 = local_78;
        pppppppsVar9 = local_80;
LAB_0166bd48:
        if (pppppppsVar9 == (short *******)&DAT_00000001) {
          pppppppsVar9 = (short *******)&SUB_00000002;
        }
        local_ec = pppppppsVar21;
        local_e8 = pppppppsVar23;
        local_e4 = pppppppsVar19;
        local_e0 = pppppppsVar8;
        local_dc = pppppppsVar11;
      }
      local_b0 = &local_d8;
      local_b8 = (short *******)&DAT_00000018;
      local_bc = (short *******)0x4142d6;
      local_c0 = (short *******)0x3;
      local_f0 = pppppppsVar9;
      local_b4 = param_2;
      FUN_00953084(&local_80,&local_f0,&local_c0);
      local_f0 = local_80;
      local_ec = local_7c;
      local_e8 = local_78;
      local_e4 = local_74;
      local_e0 = local_70;
      local_dc = local_6c;
      pppppppsVar19 = local_7c;
      pppppppsVar23 = local_74;
      pppppppsVar9 = local_78;
      if (local_80 != (short *******)0x3) {
        local_fc = local_74;
        local_f8 = local_70;
        local_f4 = local_6c;
        local_100 = local_78;
        local_104 = local_7c;
        local_108 = local_80;
        goto LAB_0166b3f8;
      }
LAB_0166bdc4:
LAB_0166bdc8:
      local_f0 = (short *******)param_2[2];
      local_ec = (short *******)param_2[3];
      if (((local_ec == (short *******)0x0) || (*(char *)local_f0 != '\'')) ||
         ((local_ec == (short *******)&DAT_00000001 ||
          (((*(char *)((int)local_f0 + 1) != '\'' || (local_ec == (short *******)&SUB_00000002)) ||
           (*(char *)((int)local_f0 + 2) != '\'')))))) {
        local_b0 = (short *******)0x0;
        local_b4 = (short *******)0x0;
        local_bc = (short *******)0x0;
        local_c0 = (short *******)0x2;
        local_30 = (short *******)&local_f0;
        local_b8 = (short *******)0x4;
        local_38 = (short *******)&DAT_00000018;
        local_3c = (short *******)0x4142d6;
        local_40 = (short *******)0x3;
        local_34 = param_2;
        FUN_00953084(&local_80,&local_c0,&local_40);
        local_c0 = local_80;
        local_bc = local_7c;
        local_b8 = local_78;
        local_b4 = local_74;
        local_b0 = local_70;
        local_ac = local_6c;
        if (local_80 == (short *******)0x3) goto LAB_0166beb8;
        local_108 = local_80;
        local_104 = local_7c;
        local_100 = local_78;
        local_fc = local_74;
        local_f8 = local_70;
        local_f4 = local_6c;
        if (((uint)pppppppsVar19 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(pppppppsVar9);
        }
      }
      else {
        param_2[2] = (short ******)((int)local_f0 + 3);
        param_2[3] = (short ******)((int)local_ec + -3);
        local_b8 = (short *******)0x3;
        local_bc = local_f0;
LAB_0166beb8:
        local_108 = (short *******)0x3;
        local_104 = pppppppsVar19;
        local_100 = pppppppsVar9;
        local_fc = pppppppsVar23;
      }
      if (local_108 != (short *******)&DAT_00000001) goto LAB_0166bf30;
LAB_0166b40c:
      pppppppsVar19 = local_f4;
      pppppppsVar9 = local_f8;
      pppppppsVar23 = local_100;
      pppppppsVar21 = local_104;
      pppppppsVar11 = local_110;
      pppppppsVar8 = local_114;
      if (local_120 != 0) {
        thunk_FUN_016d3fb4(local_11c);
      }
      if (pppppppsVar8 != (short *******)0x0) {
        ppppppsVar14 = *pppppppsVar11;
        if (ppppppsVar14 != (short ******)0x0) {
          (*(code *)ppppppsVar14)(pppppppsVar8);
        }
        if (pppppppsVar11[1] != (short ******)0x0) {
          thunk_FUN_016d3fb4(pppppppsVar8);
        }
      }
      param_2[2] = ppppppsVar12;
      param_2[3] = ppppppsVar17;
      FUN_0166ac58(&local_80);
      if (local_80 == (short *******)0x3) {
        local_b8 = local_7c;
        local_bc = (short *******)&DAT_80000000;
        local_b4 = local_78;
        local_c0 = (short *******)0x3;
LAB_0166b548:
        *param_1 = local_c0;
        param_1[1] = local_bc;
        param_1[2] = local_b8;
        param_1[3] = local_b4;
        param_1[4] = local_b0;
        param_1[5] = local_ac;
        if (pppppppsVar21 != (short *******)0x0) {
          thunk_FUN_016d3fb4(pppppppsVar23);
        }
        if (pppppppsVar9 != (short *******)0x0) {
          if (*pppppppsVar19 != (short ******)0x0) {
            (*(code *)*pppppppsVar19)(pppppppsVar9);
          }
          goto LAB_0166bf70;
        }
      }
      else {
        local_c0 = local_80;
        local_bc = local_7c;
        local_b8 = local_78;
        local_b4 = local_74;
        local_b0 = local_70;
        local_ac = local_6c;
        if (local_80 != (short *******)&DAT_00000001) goto LAB_0166b548;
        if (pppppppsVar21 != (short *******)0x0) {
          thunk_FUN_016d3fb4(pppppppsVar23);
        }
        if (pppppppsVar9 != (short *******)0x0) {
          if (*pppppppsVar19 != (short ******)0x0) {
            (*(code *)*pppppppsVar19)(pppppppsVar9);
          }
          if (pppppppsVar19[1] != (short ******)0x0) {
            thunk_FUN_016d3fb4(pppppppsVar9);
          }
        }
        puVar4 = (undefined4 *)((uint)&local_c0 | 4);
        uVar10 = puVar4[1];
        uVar15 = puVar4[2];
        uVar20 = puVar4[3];
        uVar22 = puVar4[4];
        param_1[1] = *puVar4;
        param_1[2] = uVar10;
        param_1[3] = uVar15;
        param_1[4] = uVar20;
        param_1[5] = uVar22;
        *param_1 = 1;
      }
    }
LAB_0166bf84:
    if (local_138 < &SUB_00000002) goto LAB_0166bfec;
    if (local_138 == (short *******)&SUB_00000002) {
      if (local_134 != (short *******)0x0) {
        thunk_FUN_016d3fb4(local_130);
      }
      if (local_128 == (short *******)0x0) goto LAB_0166bfec;
      if ((code *)*local_124 != (code *)0x0) {
        (*(code *)*local_124)(local_128);
      }
      ppppppsVar12 = (short ******)local_124[1];
      goto joined_r0x0166b0b4;
    }
    if (((uint)local_134 & 0x7fffffff) == 0) goto LAB_0166bfec;
    local_128 = local_130;
  }
  else {
    *param_1 = local_138;
    param_1[1] = local_134;
    param_1[2] = local_130;
    param_1[3] = uStack_12c;
    param_1[4] = local_128;
    param_1[5] = local_124;
    if (pppppppsVar9 != (short *******)0x0) {
      thunk_FUN_016d3fb4(pppppppsVar19);
    }
    if (pppppppsVar8 == (short *******)0x0) goto LAB_0166bfec;
    if (*pppppppsVar11 != (short ******)0x0) {
      (*(code *)*pppppppsVar11)(pppppppsVar8);
    }
    ppppppsVar12 = pppppppsVar11[1];
    local_128 = pppppppsVar8;
joined_r0x0166b0b4:
    if (ppppppsVar12 == (short ******)0x0) goto LAB_0166bfec;
  }
  thunk_FUN_016d3fb4(local_128);
LAB_0166bfec:
  if (&DAT_00000001 < local_150) {
    if (local_150 == (short *******)&SUB_00000002) {
      if (local_14c != (short *******)0x0) {
        thunk_FUN_016d3fb4(local_148);
      }
      pppppppsVar19 = local_13c;
      pppppppsVar9 = local_140;
      if (local_140 != (short *******)0x0) {
        if (*local_13c != (short ******)0x0) {
          (*(code *)*local_13c)(local_140);
        }
        if (pppppppsVar19[1] != (short ******)0x0) {
          thunk_FUN_016d3fb4(pppppppsVar9);
          return;
        }
      }
    }
    else if (((uint)local_14c & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_148);
      return;
    }
  }
  return;
}

