// FUN_007cc3e4 @ 007cc3e4 size=5372 calls_out=19 calls_in=0
// strings: Autotuning | Autotuning | enabled | hashrateTarget | Autotuning | Autotuning

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007cc3e4(int *******param_1,int *******param_2,int *******param_3,int *******param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *******pppppppiVar4;
  undefined1 uVar5;
  int iVar6;
  int ******ppppppiVar7;
  int *piVar8;
  int ****ppppiVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int ******ppppppiVar14;
  int iVar15;
  int ******ppppppiVar16;
  uint uVar17;
  int *****pppppiVar18;
  int *****pppppiVar19;
  int *******extraout_r2;
  int *******extraout_r2_00;
  int *******extraout_r2_01;
  int *******extraout_r3;
  int *******extraout_r3_00;
  int *******extraout_r3_01;
  int iVar20;
  int ****ppppiVar21;
  int ******ppppppiVar22;
  int *******pppppppiVar23;
  int *******pppppppiVar24;
  int ******ppppppiVar25;
  int *****pppppiVar26;
  int ****ppppiVar27;
  int *******pppppppiVar28;
  int *******pppppppiVar29;
  int ****ppppiVar30;
  int *******pppppppiVar31;
  int *******pppppppiVar32;
  int *****pppppiVar33;
  int *******pppppppiVar34;
  int *******pppppppiVar35;
  int *******pppppppiVar36;
  int *******in_r12;
  int *******unaff_lr;
  int ******ppppppiVar37;
  int ******ppppppiVar38;
  bool bVar39;
  undefined8 uVar40;
  int ******local_124;
  int ******local_120;
  int local_114;
  int *******local_f4;
  int *******local_f0;
  int *******local_ec;
  int *******local_e8;
  int *******local_e4;
  int *******local_e0;
  int *******local_dc;
  int *******local_d8;
  int *******local_d4;
  int *******local_d0;
  int *******local_c8;
  int *******local_bc;
  int *******local_b8;
  int *******local_b4;
  int ******local_b0;
  int ******ppppppiStack_ac;
  int ******ppppppiStack_a8;
  int *******local_a0;
  int ******local_9c;
  int *******local_98;
  int ******local_94;
  int *****local_90;
  int ******local_8c;
  int ******ppppppiStack_88;
  int ******ppppppiStack_84;
  undefined1 local_80;
  int ******local_78;
  int ******ppppppiStack_74;
  int ******ppppppiStack_70;
  int *******local_68;
  int *******local_64;
  int *******local_60;
  int *******local_5c;
  int *******local_58;
  int *******local_54;
  int *******local_50;
  int *******local_4c;
  int *******local_48;
  int *******local_44;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  int *******local_2c;
  
  pppppppiVar35 = (int *******)&local_44;
  pppppppiVar36 = (int *******)&local_48;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x17)) {
  case 0:
    ppppppiVar14 = param_2[9];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    pppppppiVar29 = (int *******)0x0;
    if (*param_2 != (int ******)0x0) {
      pppppppiVar29 = param_2 + 1;
    }
    *(undefined1 *)(param_2 + 0x13) = *(undefined1 *)(param_2 + 8);
    param_2[0xf] = ppppppiVar14;
    pppppiVar18 = ppppppiVar14[0x13];
    param_2[0xe] = (int ******)pppppppiVar29;
    iVar6 = 0x3c;
    iVar15 = 0x3c;
    if (pppppiVar18 == (int *****)0x0) {
      iVar15 = 0x2c;
    }
    iVar20 = *(int *)((int)ppppppiVar14 + iVar15 + 0x10);
    param_2[0xd] = *(int *******)((int)ppppppiVar14 + iVar15 + 0x14);
    pppppppiVar29 = param_2 + 0xb;
    *pppppppiVar29 = (int ******)0x1;
    pppppppiVar23 = param_2 + 0xc;
    *pppppppiVar23 = (int ******)(iVar20 + 8);
    if (ppppppiVar14[0x13] == (int *****)0x0) {
      iVar6 = 0x2c;
    }
    pppppppiVar31 = *(int ********)((int)ppppppiVar14 + iVar6 + 0x10);
    do {
      ppppppiVar16 = *pppppppiVar31;
      bVar39 = (bool)hasExclusiveAccess(pppppppiVar31);
    } while (!bVar39);
    *pppppppiVar31 = (int ******)((int)ppppppiVar16 + 1);
    if ((int)ppppppiVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x7cd9f8);
      (*pcVar1)();
    }
    local_f4 = *(int ********)((int)ppppppiVar14 + iVar6 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    pppppiVar18 = *param_2[6];
    local_b8 = pppppppiVar31;
    local_b4 = local_f4;
    if ((pppppiVar18[4] != (int ****)0x0) || (param_2[9][7] != (int *****)0x0)) {
      param_2[0x14] = (int ******)0x80000000;
      param_2[0x15] = (int ******)"Autotuning";
      param_2[0x16] = (int ******)0xa;
      if (param_2[0xb] == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&LAB_01c14638);
      }
      iVar6 = FUN_006c176c((*param_2[0x10])[0x1e],(*param_2[0x10])[0x1f],"Autotuning",10);
      if (iVar6 != 0) {
        uVar17 = 2;
        if ((int)*(uint *)(iVar6 + 0x10) < 0) {
          uVar17 = *(uint *)(iVar6 + 0x10) ^ 0x80000000;
        }
        if (uVar17 != 2) {
          if (uVar17 != 1) goto LAB_007cc640;
          iVar6 = iVar6 + 0x18;
        }
        iVar6 = FUN_006e05dc(iVar6,param_2[9][0xf] + 2,param_2[9][0x10]);
        if (iVar6 != 0) {
          ppppppiVar14 = param_2[9];
          pppppiVar19 = ppppppiVar14[0xf];
          if (ppppppiVar14[0x13] == (int *****)0x0) {
            local_120 = (int ******)0x0;
          }
          else {
            local_124 = (int ******)ppppppiVar14[0x14];
            local_120 = (int ******)(ppppppiVar14[0x13] + 2);
          }
          ppppppiVar37 = *(int *******)(iVar6 + 0x8c);
          local_d8 = (int *******)(pppppiVar18 + 2);
          ppppppiVar16 = *(int *******)(iVar6 + 0x90);
          ppppppiVar22 = (int ******)ppppppiVar14[0x10];
          *(undefined1 *)((int)param_2 + 0x5e) = 1;
          ppppppiVar25 = param_2[10];
          uVar5 = *(undefined1 *)(param_2 + 0x13);
          pppppiVar18 = ppppppiVar14[7];
          *(undefined1 *)((int)param_2 + 0x5e) = 0;
          if (pppppiVar18 == (int *****)0x0) {
            param_2[0x18] = ppppppiVar25;
            param_2[0x19] = (int ******)pppppppiVar29;
            param_2[0x5a] = (int ******)local_f4;
            param_2[0x55] = local_120;
            param_2[0x54] = ppppppiVar14 + 2;
            param_2[0x56] = local_124;
            *(undefined1 *)(param_2 + 0x1b) = 0;
            param_2[0x59] = (int ******)pppppppiVar31;
            *(undefined1 *)((int)param_2 + 0x5d) = 0;
            *(undefined1 *)(param_2 + 0x58) = 0;
            *(undefined1 *)(param_2 + 0x57) = uVar5;
            param_2[0x4c] = (int ******)local_d8;
            param_2[0x4d] = (int ******)pppppppiVar23;
            param_2[0x52] = (int ******)(pppppiVar19 + 2);
            param_2[0x4e] = (int ******)"Autotuning";
            param_2[0x4f] = (int ******)0xa;
            param_2[0x50] = ppppppiVar37;
            param_2[0x51] = ppppppiVar16;
            param_2[0x34] = (int ******)(param_2 + 0x33);
            param_2[0x53] = ppppppiVar22;
            param_2[0x33] = (int ******)(param_2 + 0x18);
            param_2[0x35] = (int ******)&DAT_01c0b370;
            goto switchD_007cc41c_caseD_4;
          }
          ppppppiVar7 = (int ******)thunk_FUN_01be5118(0x6c);
          if (ppppppiVar7 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x6c);
          }
          *(undefined1 *)(ppppppiVar7 + 3) = 0;
          *ppppppiVar7 = (int *****)ppppppiVar25;
          ppppppiVar7[1] = (int *****)pppppppiVar29;
          param_2[0x3d] = ppppppiVar7;
          param_2[0x3e] = (int ******)&DAT_01c10994;
          if (ppppppiVar14[7] != (int *****)0x0) {
            pppppiVar33 = ppppppiVar14[6];
            pppppiVar18 = pppppiVar33 + (int)ppppppiVar14[7] * 9;
            piVar8 = (int *)((uint)&local_68 | 4);
            do {
              pppppiVar26 = *param_2[5];
              if (pppppiVar26[5] != (int ****)0x0) {
                ppppiVar9 = pppppiVar33[7];
                ppppiVar30 = pppppiVar33[8];
                uVar10 = FUN_01a9c24c(pppppiVar26[6],pppppiVar26[7],pppppiVar26[8],pppppiVar26[9],
                                      ppppiVar9 + 2,ppppiVar30);
                uVar17 = uVar10 >> 0x19;
                ppppiVar21 = pppppiVar26[2];
                ppppiVar27 = pppppiVar26[3];
                local_114 = 0;
                while( true ) {
                  uVar10 = (uint)ppppiVar27 & uVar10;
                  uVar11 = *(uint *)((int)ppppiVar21 + uVar10);
                  uVar12 = uVar11 ^ uVar17 * 0x1010101;
                  for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
                      uVar12 = uVar12 - 1 & uVar12) {
                    uVar13 = uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18)
                                      >> 3) & (uint)ppppiVar27;
                    if ((ppppiVar30 == (int ****)ppppiVar21[uVar13 * -5 + -3]) &&
                       (iVar6 = thunk_FUN_01bed842(ppppiVar9 + 2,ppppiVar21[uVar13 * -5 + -4],
                                                   ppppiVar30), iVar6 == 0)) {
                      local_a0 = (int *******)*pppppppiVar29;
                      local_9c = param_2[0xc];
                      local_98 = (int *******)param_2[0xd];
                      local_94 = param_2[0xe];
                      local_80 = 0;
                      local_8c = param_2[0x10];
                      ppppppiStack_88 = param_2[0x11];
                      ppppppiStack_84 = param_2[0x12];
                      local_90 = pppppiVar33;
                      (*(code *)ppppiVar21[uVar13 * -5 + -1][5])
                                (&local_68,ppppiVar21[uVar13 * -5 + -2],&local_a0,pppppiVar33 + 2);
                      pppppppiVar34 = local_48;
                      pppppppiVar24 = local_4c;
                      pppppppiVar32 = local_54;
                      pppppppiVar36 = local_68;
                      local_bc = local_64;
                      if (local_68 != (int *******)0x2) {
                        local_d8 = local_44;
                        local_d0 = local_40;
                        local_e8 = local_3c;
                        local_c8 = local_38;
                        local_ec = local_34;
                        local_e0 = local_30;
                        local_e4 = local_5c;
                        local_d4 = local_58;
                        local_dc = local_50;
                        FUN_0175d85c(param_2 + 0x3d);
                        local_5c = local_60;
                        goto LAB_007cd0d8;
                      }
                      if (*pppppppiVar29 == (int ******)0x1) {
                        local_78 = *pppppppiVar23;
                        ppppppiStack_74 = param_2[0xd];
                        ppppppiStack_70 = param_2[0xe];
                      }
                      local_68 = (int *******)(uint)(*pppppppiVar29 == (int ******)0x1);
                      local_58 = (int *******)param_2[0xf];
                      local_54 = (int *******)param_2[0x10];
                      local_50 = (int *******)param_2[0x11];
                      local_4c = (int *******)param_2[0x12];
                      uVar2 = *(undefined1 *)(param_2 + 0x13);
                      *piVar8 = (int)local_78;
                      piVar8[1] = (int)ppppppiStack_74;
                      piVar8[2] = (int)ppppppiStack_70;
                      local_44 = local_64;
                      local_3c = (int *******)param_2[0x3d];
                      local_38 = (int *******)param_2[0x3e];
                      local_40 = local_60;
                      local_48 = (int *******)CONCAT31(local_48._1_3_,uVar2);
                      local_2c = (int *******)((uint)local_2c & 0xffffff00);
                      ppppppiVar25 = (int ******)thunk_FUN_01be5118(0x40);
                      if (ppppppiVar25 == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0066439c(4,0x40);
                      }
                      *ppppppiVar25 = (int *****)local_68;
                      ppppppiVar25[1] = (int *****)local_64;
                      ppppppiVar25[2] = (int *****)local_60;
                      ppppppiVar25[3] = (int *****)local_5c;
                      ppppppiVar25[4] = (int *****)local_58;
                      ppppppiVar25[5] = (int *****)local_54;
                      ppppppiVar25[6] = (int *****)local_50;
                      ppppppiVar25[7] = (int *****)local_4c;
                      ppppppiVar25[8] = (int *****)local_48;
                      ppppppiVar25[9] = (int *****)local_44;
                      ppppppiVar25[10] = (int *****)local_40;
                      ppppppiVar25[0xb] = (int *****)local_3c;
                      ppppppiVar25[0xc] = (int *****)local_38;
                      ppppppiVar25[0xd] = (int *****)local_34;
                      ppppppiVar25[0xe] = (int *****)local_30;
                      ppppppiVar25[0xf] = (int *****)local_2c;
                      param_2[0x3d] = ppppppiVar25;
                      param_2[0x3e] = (int ******)&DAT_01c0b360;
                      goto LAB_007cccac;
                    }
                  }
                  if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
                  local_114 = local_114 + 4;
                  uVar10 = uVar10 + local_114;
                }
              }
LAB_007cccac:
              pppppiVar33 = pppppiVar33 + 9;
            } while (pppppiVar33 != pppppiVar18);
          }
          param_2[0x3f] = (int ******)pppppppiVar31;
          param_2[0x40] = (int ******)local_f4;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3c) = 0;
          param_2[0x39] = local_120;
          param_2[0x30] = (int ******)local_d8;
          param_2[0x3a] = local_124;
          *(undefined1 *)(param_2 + 0x3b) = uVar5;
          param_2[0x38] = ppppppiVar14 + 2;
          param_2[0x31] = (int ******)pppppppiVar23;
          param_2[0x33] = (int ******)0xa;
          param_2[0x32] = (int ******)"Autotuning";
          param_2[0x18] = (int ******)(param_2 + 0x3d);
          param_2[0x19] = (int ******)&DAT_01c0b0b0;
          param_2[0x34] = ppppppiVar37;
          param_2[0x35] = ppppppiVar16;
          param_2[0x36] = (int ******)(pppppiVar19 + 2);
          param_2[0x37] = ppppppiVar22;
          local_f0 = pppppppiVar35;
          goto switchD_007cc41c_caseD_5;
        }
      }
LAB_007cc640:
      local_9c = (int ******)&LAB_00701524;
      local_a0 = (int *******)&local_b8;
      local_94 = (int ******)&LAB_012b97d8;
      local_98 = param_2 + 0x14;
      FUN_00664898(&local_78,&DAT_005952c0,&local_a0);
      local_b0 = local_78;
      ppppppiStack_ac = ppppppiStack_74;
      ppppppiStack_a8 = ppppppiStack_70;
      local_9c = (int ******)*param_2[0xf];
      local_98 = (int *******)param_2[0xf][1];
      local_a0 = (int *******)0x1;
      FUN_006bd784(&local_68,&local_b0,&local_a0);
      local_d8 = local_44;
      local_d0 = local_40;
      local_c8 = local_38;
      local_e0 = local_30;
      local_dc = local_50;
      local_d4 = local_58;
      local_bc = local_64;
      local_e4 = local_5c;
      pppppppiVar23 = local_4c;
      local_ec = local_34;
      local_f4 = local_54;
      pppppppiVar36 = local_68;
      local_e8 = local_3c;
      local_f0 = local_48;
      local_5c = local_60;
LAB_007cd0f4:
      pppppppiVar29 = pppppppiVar36;
      pppppppiVar35 = local_5c;
      if (param_2[0x14] != (int ******)0x80000000) {
        FUN_019bb7e0(param_2[0x14],param_2[0x15]);
      }
      goto LAB_007cd760;
    }
    *(undefined1 *)(param_2 + 0x1b) = 0;
    pppppppiVar35 = (int *******)param_2[10];
    param_2[0x33] = (int ******)pppppppiVar31;
    param_2[0x18] = (int ******)pppppppiVar35;
    param_2[0x34] = (int ******)local_f4;
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    param_2[0x19] = (int ******)pppppppiVar29;
    param_4 = (int *******)0x0;
    param_3 = local_f4;
LAB_007cc73c:
    param_2[0x1a] = (int ******)pppppppiVar29;
    pppppppiVar23 = (int *******)0x80000007;
    ppppppiVar14 = pppppppiVar29[4];
    local_e0 = (int *******)ppppppiVar14[0x10];
    pppppppiVar32 = (int *******)&local_50;
    if ((int)local_e0 < 0xb) {
      if (local_e0 == (int *******)&SUB_00000004) {
        local_e0 = (int *******)0x65646f6d;
        if (ppppppiVar14[0xf][2] == (int ****)0x65646f6d) {
          param_2[0x1c] = (int ******)pppppppiVar35;
          *(undefined1 *)(param_2 + 0x21) = 0;
          param_2[0x1d] = (int ******)pppppppiVar29;
          goto LAB_007cd310;
        }
      }
      else if (local_e0 == (int *******)&DAT_00000007) {
        unaff_lr = (int *******)0x7cc77c;
        uVar40 = thunk_FUN_01bed842(ppppppiVar14[0xf] + 2,"enabled",7);
        local_e0 = (int *******)((ulonglong)uVar40 >> 0x20);
        param_3 = extraout_r2;
        param_4 = extraout_r3;
        if ((int)uVar40 == 0) {
          param_2[0x1c] = (int ******)pppppppiVar35;
          *(undefined1 *)(param_2 + 0x21) = 0;
          param_2[0x1d] = (int ******)pppppppiVar29;
          goto LAB_007cc8ec;
        }
      }
    }
    else if (local_e0 == (int *******)&DAT_0000000b) {
      unaff_lr = (int *******)0x7cd410;
      uVar40 = thunk_FUN_01bed842(ppppppiVar14[0xf] + 2,"powerTarget",0xb);
      local_e0 = (int *******)((ulonglong)uVar40 >> 0x20);
      param_3 = extraout_r2_01;
      param_4 = extraout_r3_01;
      if ((int)uVar40 == 0) {
        param_2[0x1c] = (int ******)pppppppiVar35;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)pppppppiVar29;
        goto LAB_007cd524;
      }
    }
    else if (local_e0 == (int *******)&DAT_0000000e) {
      unaff_lr = (int *******)0x7cc7cc;
      uVar40 = thunk_FUN_01bed842(ppppppiVar14[0xf] + 2,"hashrateTarget",0xe);
      local_e0 = (int *******)((ulonglong)uVar40 >> 0x20);
      param_3 = extraout_r2_00;
      param_4 = extraout_r3_00;
      if ((int)uVar40 == 0) {
        param_2[0x1c] = (int ******)pppppppiVar35;
        *(undefined1 *)(param_2 + 0x21) = 0;
        param_2[0x1d] = (int ******)pppppppiVar29;
        goto LAB_007cc82c;
      }
    }
    goto LAB_007cd4f4;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c14668);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c14668);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1b)) {
    case 0:
      pppppppiVar35 = (int *******)param_2[0x18];
      pppppppiVar29 = (int *******)param_2[0x19];
      pppppppiVar31 = param_1;
      goto LAB_007cc73c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10784);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10784);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        pppppppiVar35 = (int *******)param_2[0x1c];
        pppppppiVar29 = (int *******)param_2[0x1d];
LAB_007cc8ec:
        param_2[0x1e] = (int ******)pppppppiVar35;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar29;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10784);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10784);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c10784);
        }
        pppppppiVar35 = (int *******)param_2[0x1e];
      }
      ppppppiVar16 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = (int ******)(pppppppiVar35 + 6);
      ppppppiVar14 = (int ******)ppppppiVar16[6];
      pppppiVar18 = ppppppiVar16[4];
      ppppppiVar38 = (int ******)ppppppiVar16[5];
      ppppppiVar37 = (int ******)ppppppiVar16[7];
      uVar5 = *(undefined1 *)(ppppppiVar16 + 8);
      ppppppiVar22 = (int ******)ppppppiVar16[1];
      ppppppiVar25 = (int ******)ppppppiVar16[2];
      ppppppiVar7 = (int ******)ppppppiVar16[3];
      param_2[0x1d] = (int ******)*ppppppiVar16;
      param_2[0x1e] = ppppppiVar22;
      param_2[0x1f] = ppppppiVar25;
      param_2[0x20] = ppppppiVar7;
      param_2[0x21] = (int ******)(pppppiVar18 + 8);
      *(undefined1 *)(param_2 + 0x25) = uVar5;
      param_2[0x22] = ppppppiVar38;
      param_2[0x23] = ppppppiVar14;
      param_2[0x24] = ppppppiVar37;
      ppppppiVar14 = (int ******)ppppppiVar16[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar14;
      break;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        pppppppiVar35 = (int *******)param_2[0x1c];
        pppppppiVar29 = (int *******)param_2[0x1d];
LAB_007cd310:
        param_2[0x1e] = (int ******)pppppppiVar35;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar29;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10784);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10784);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c10784);
        }
        pppppppiVar35 = (int *******)param_2[0x1e];
      }
      ppppppiVar14 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      param_4 = param_2 + 0x1d;
      *(undefined1 *)(param_2 + 0x20) = 1;
      pppppppiVar29 = param_2 + 0x1c;
      *pppppppiVar29 = (int ******)((int)pppppppiVar35 + 0x19);
      uVar5 = *(undefined1 *)(ppppppiVar14 + 8);
      unaff_lr = (int *******)ppppppiVar14[4];
      ppppppiVar22 = (int ******)ppppppiVar14[5];
      pppppppiVar36 = (int *******)ppppppiVar14[6];
      ppppppiVar25 = (int ******)ppppppiVar14[7];
      pppppppiVar35 = (int *******)ppppppiVar14[1];
      ppppppiVar16 = (int ******)ppppppiVar14[2];
      in_r12 = (int *******)ppppppiVar14[3];
      *param_4 = (int ******)*ppppppiVar14;
      param_2[0x1e] = (int ******)pppppppiVar35;
      param_2[0x1f] = ppppppiVar16;
      param_2[0x20] = (int ******)in_r12;
      param_2[0x21] = (int ******)(unaff_lr + 8);
      param_2[0x22] = ppppppiVar22;
      param_2[0x23] = (int ******)pppppppiVar36;
      param_2[0x24] = ppppppiVar25;
      *(undefined1 *)(param_2 + 0x25) = uVar5;
      param_3 = (int *******)ppppppiVar14[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)pppppppiVar29;
      param_2[0x27] = (int ******)param_4;
      param_2[0x28] = (int ******)param_3;
LAB_007cd3a4:
      ppppppiVar14 = *pppppppiVar29;
      *(undefined1 *)(param_2 + 0x31) = 0;
      param_2[0x29] = ppppppiVar14;
      param_2[0x2a] = (int ******)param_4;
      param_2[0x2b] = (int ******)param_3;
LAB_007cd3c0:
      param_2[0x2c] = (int ******)param_4;
      if (*(char *)ppppppiVar14 != '\x02') {
        param_2[0x2d] = ppppppiVar14;
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x2e] = (int ******)param_4;
        param_2[0x2f] = param_2[0x2b];
        goto LAB_007cd494;
      }
      local_58 = (int *******)&DAT_80000000;
      local_e0 = (int *******)0x2;
      local_40 = pppppppiVar35;
      local_48 = param_1;
      local_54 = (int *******)&local_50;
      local_64 = pppppppiVar36;
      local_50 = in_r12;
      goto LAB_007cd4e0;
    case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x32)) {
      case 0:
        pppppppiVar29 = (int *******)param_2[0x26];
        param_4 = (int *******)param_2[0x27];
        param_3 = (int *******)param_2[0x28];
        goto LAB_007cd3a4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x31)) {
      case 0:
        ppppppiVar14 = param_2[0x29];
        param_4 = (int *******)param_2[0x2a];
        goto LAB_007cd3c0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21c3c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c3c);
      case 3:
        if (*(char *)(param_2 + 0x30) != '\0') {
          if (*(char *)(param_2 + 0x30) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22530);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c22530);
        }
        ppppppiVar14 = param_2[0x2d];
      }
LAB_007cd494:
      FUN_00b565c4(&local_68,*(char *)ppppppiVar14);
      local_e4 = local_68;
      local_dc = local_5c;
      *(undefined1 *)(param_2 + 0x30) = 1;
      local_e0 = local_3c;
      param_3 = local_4c;
      param_4 = local_44;
      unaff_lr = local_60;
LAB_007cd4e0:
      pppppppiVar29 = param_2 + 0x32;
      *(undefined1 *)(param_2 + 0x31) = 1;
      *(undefined1 *)pppppppiVar29 = 1;
      pppppppiVar23 = local_58;
      pppppppiVar35 = local_40;
      pppppppiVar31 = local_48;
      pppppppiVar32 = local_54;
      pppppppiVar36 = local_64;
      local_d8 = local_50;
LAB_007cd4f4:
      local_5c = pppppppiVar36;
      local_4c = pppppppiVar32;
      local_40 = pppppppiVar31;
      local_38 = pppppppiVar35;
      *(undefined1 *)(param_2 + 0x1b) = 1;
      local_44 = param_3;
      local_3c = param_4;
      local_f4 = unaff_lr;
      goto LAB_007cd6f8;
    case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        pppppppiVar35 = (int *******)param_2[0x1c];
        pppppppiVar29 = (int *******)param_2[0x1d];
LAB_007cd524:
        param_2[0x1e] = (int ******)pppppppiVar35;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar29;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10784);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10784);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c10784);
        }
        pppppppiVar35 = (int *******)param_2[0x1e];
      }
      ppppppiVar16 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = (int ******)(pppppppiVar35 + 4);
      ppppppiVar14 = (int ******)ppppppiVar16[6];
      pppppiVar18 = ppppppiVar16[4];
      ppppppiVar38 = (int ******)ppppppiVar16[5];
      ppppppiVar37 = (int ******)ppppppiVar16[7];
      uVar5 = *(undefined1 *)(ppppppiVar16 + 8);
      ppppppiVar22 = (int ******)ppppppiVar16[1];
      ppppppiVar25 = (int ******)ppppppiVar16[2];
      ppppppiVar7 = (int ******)ppppppiVar16[3];
      param_2[0x1d] = (int ******)*ppppppiVar16;
      param_2[0x1e] = ppppppiVar22;
      param_2[0x1f] = ppppppiVar25;
      param_2[0x20] = ppppppiVar7;
      param_2[0x21] = (int ******)(pppppiVar18 + 8);
      *(undefined1 *)(param_2 + 0x25) = uVar5;
      param_2[0x22] = ppppppiVar38;
      param_2[0x23] = ppppppiVar14;
      param_2[0x24] = ppppppiVar37;
      ppppppiVar14 = (int ******)ppppppiVar16[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar14;
    case 8:
      FUN_007cb920(&local_68,param_2 + 0x26);
      if (local_68 == (int *******)0x2) {
        uVar5 = 8;
        goto LAB_007cd5d4;
      }
      goto LAB_007cd5f4;
    case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x21)) {
      case 0:
        pppppppiVar35 = (int *******)param_2[0x1c];
        pppppppiVar29 = (int *******)param_2[0x1d];
LAB_007cc82c:
        param_2[0x1e] = (int ******)pppppppiVar35;
        *(undefined1 *)(param_2 + 0x20) = 0;
        param_2[0x1f] = (int ******)pppppppiVar29;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10784);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10784);
      case 3:
        if (((uint)param_2[0x20] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c10784);
        }
        pppppppiVar35 = (int *******)param_2[0x1e];
      }
      ppppppiVar16 = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x1c] = (int ******)pppppppiVar35;
      ppppppiVar14 = (int ******)ppppppiVar16[6];
      pppppiVar18 = ppppppiVar16[4];
      ppppppiVar38 = (int ******)ppppppiVar16[5];
      ppppppiVar37 = (int ******)ppppppiVar16[7];
      uVar5 = *(undefined1 *)(ppppppiVar16 + 8);
      ppppppiVar22 = (int ******)ppppppiVar16[1];
      ppppppiVar25 = (int ******)ppppppiVar16[2];
      ppppppiVar7 = (int ******)ppppppiVar16[3];
      param_2[0x1d] = (int ******)*ppppppiVar16;
      param_2[0x1e] = ppppppiVar22;
      param_2[0x1f] = ppppppiVar25;
      param_2[0x20] = ppppppiVar7;
      param_2[0x21] = (int ******)(pppppiVar18 + 8);
      *(undefined1 *)(param_2 + 0x25) = uVar5;
      param_2[0x22] = ppppppiVar38;
      param_2[0x23] = ppppppiVar14;
      param_2[0x24] = ppppppiVar37;
      ppppppiVar14 = (int ******)ppppppiVar16[4];
      *(undefined1 *)(param_2 + 0x32) = 0;
      param_2[0x26] = (int ******)(param_2 + 0x1c);
      param_2[0x27] = (int ******)(param_2 + 0x1d);
      param_2[0x28] = ppppppiVar14;
    case 10:
      FUN_007c539c(&local_68,param_2 + 0x26);
      if (local_68 == (int *******)0x2) {
        uVar5 = 10;
        goto LAB_007cd5d4;
      }
      goto LAB_007cd5f4;
    }
    FUN_007cb7c0(&local_68,param_2 + 0x26);
    if (local_68 == (int *******)0x2) {
      uVar5 = 4;
LAB_007cd5d4:
      *(undefined1 *)(param_2 + 0x1b) = uVar5;
      *param_1 = (int ******)0x2;
      uVar5 = 3;
      goto LAB_007cd810;
    }
LAB_007cd5f4:
    local_e8 = local_38;
    local_d0 = local_3c;
    pppppppiVar36 = local_40;
    local_f0 = local_44;
    pppppppiVar23 = local_48;
    local_dc = local_4c;
    local_f4 = local_50;
    local_e4 = local_58;
    local_d8 = local_48;
    local_c8 = local_34;
    local_e0 = local_2c;
    local_d4 = local_54;
    local_bc = local_60;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    pppppppiVar29 = local_64;
    if (((uint)local_68 & 1) == 0) {
      local_e4 = local_60;
      local_dc = local_54;
      local_e0 = local_34;
      pppppppiVar23 = local_50;
      local_f4 = local_58;
LAB_007cd6f8:
      if (pppppppiVar23 == (int *******)0x80000007) {
        pppppppiVar23 = (int *******)&DAT_80000000;
      }
      pppppppiVar35 = (int *******)param_2[0x34];
      local_bc = (int *******)param_2[0x33];
      local_e8 = local_38;
      local_f0 = local_4c;
      local_d4 = local_5c;
      local_d0 = local_44;
      local_c8 = local_3c;
      goto LAB_007cd724;
    }
    ppppppiVar14 = param_2[0x33];
    DataMemoryBarrier(0xb);
    do {
      pppppiVar18 = *ppppppiVar14;
      bVar39 = (bool)hasExclusiveAccess(ppppppiVar14);
    } while (!bVar39);
    *ppppppiVar14 = (int *****)((int)pppppiVar18 + -1);
    if (pppppiVar18 == (int *****)0x1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_2[0x33],param_2[0x34]);
    }
    local_d8 = pppppppiVar36;
    local_ec = local_30;
    pppppppiVar35 = local_5c;
LAB_007cd760:
    if (*(char *)((int)param_2 + 0x5d) != '\0') {
      DataMemoryBarrier(0xb);
      do {
        ppppppiVar14 = *local_b8;
        bVar39 = (bool)hasExclusiveAccess(local_b8);
      } while (!bVar39);
      *local_b8 = (int ******)((int)ppppppiVar14 + -1);
      if (ppppppiVar14 == (int ******)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_b8,local_b4);
      }
    }
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    ppppppiVar14 = (int ******)0x1;
    goto LAB_007cd7ac;
  case 4:
switchD_007cc41c_caseD_4:
    FUN_00b4f44c(&local_68,param_2 + 0x34,param_3);
    local_e0 = local_2c;
    local_e8 = local_38;
    pppppppiVar31 = local_3c;
    pppppppiVar36 = local_40;
    pppppppiVar34 = local_44;
    pppppppiVar24 = local_48;
    pppppppiVar29 = local_4c;
    pppppppiVar32 = local_50;
    local_d4 = local_54;
    local_e4 = local_58;
    pppppppiVar35 = local_68;
    if (local_68 == (int *******)0x2) {
      *param_1 = (int ******)0x2;
      uVar5 = 4;
      goto LAB_007cd810;
    }
    local_d8 = local_48;
    local_d0 = local_44;
    local_c8 = local_34;
    local_ec = local_30;
    local_f4 = local_58;
    local_f0 = local_4c;
    local_dc = local_54;
    cVar3 = *(char *)(param_2 + 0x58);
    bVar39 = cVar3 == '\x03';
    if (bVar39) {
      cVar3 = *(char *)(param_2 + 0x49);
    }
    if (bVar39 && cVar3 == '\x03') {
      FUN_0175d85c(param_2 + 0x4a);
    }
    if (((uint)pppppppiVar35 & 1) != 0) {
      ppppppiVar14 = param_2[0x59];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar18 = *ppppppiVar14;
        bVar39 = (bool)hasExclusiveAccess(ppppppiVar14);
      } while (!bVar39);
      *ppppppiVar14 = (int *****)((int)pppppiVar18 + -1);
      if (pppppiVar18 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x59],param_2[0x5a]);
      }
      local_dc = pppppppiVar29;
      local_d8 = pppppppiVar36;
      local_bc = local_60;
      local_d0 = pppppppiVar31;
      pppppppiVar36 = local_64;
      goto LAB_007cd0d8;
    }
    pppppppiVar23 = pppppppiVar32;
    if (pppppppiVar32 == (int *******)0x80000007) {
      pppppppiVar23 = (int *******)&DAT_80000000;
    }
    local_bc = (int *******)param_2[0x59];
    pppppppiVar35 = (int *******)param_2[0x5a];
    pppppppiVar29 = local_64;
    local_e4 = local_60;
    local_d4 = local_5c;
    break;
  case 5:
switchD_007cc41c_caseD_5:
    FUN_00b4f44c(&local_68,param_2 + 0x18,param_3);
    pppppppiVar31 = local_3c;
    pppppppiVar36 = local_40;
    pppppppiVar34 = local_44;
    pppppppiVar24 = local_48;
    pppppppiVar4 = local_4c;
    pppppppiVar23 = local_50;
    pppppppiVar32 = local_54;
    pppppppiVar29 = local_58;
    pppppppiVar35 = local_68;
    if (local_68 == (int *******)0x2) {
      *param_1 = (int ******)0x2;
      uVar5 = 5;
      goto LAB_007cd810;
    }
    local_d0 = local_3c;
    local_e8 = local_38;
    local_c8 = local_34;
    local_ec = local_30;
    local_e0 = local_2c;
    local_bc = local_60;
    local_e4 = local_58;
    local_dc = local_4c;
    local_d4 = local_54;
    cVar3 = *(char *)(param_2 + 0x3c);
    bVar39 = cVar3 == '\x03';
    pppppppiVar28 = local_40;
    if (bVar39) {
      cVar3 = *(char *)(param_2 + 0x2d);
    }
    if (bVar39 && cVar3 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    if (((uint)pppppppiVar35 & 1) != 0) {
      ppppppiVar14 = param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar18 = *ppppppiVar14;
        bVar39 = (bool)hasExclusiveAccess(ppppppiVar14);
      } while (!bVar39);
      *ppppppiVar14 = (int *****)((int)pppppiVar18 + -1);
      if (pppppiVar18 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      pppppppiVar36 = local_64;
      pppppppiVar32 = pppppppiVar23;
      local_d8 = pppppppiVar28;
LAB_007cd0d8:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      pppppppiVar23 = pppppppiVar24;
      local_f4 = pppppppiVar32;
      local_f0 = pppppppiVar34;
      goto LAB_007cd0f4;
    }
    if (pppppppiVar23 == (int *******)0x80000007) {
      pppppppiVar23 = (int *******)&DAT_80000000;
      pppppppiVar36 = (int *******)0x80000007;
      pppppppiVar31 = pppppppiVar35;
      local_d4 = param_2;
    }
    else {
      local_d0 = pppppppiVar34;
      local_f4 = pppppppiVar29;
      local_f0 = pppppppiVar4;
      local_d8 = pppppppiVar24;
      local_dc = pppppppiVar32;
      pppppppiVar34 = local_60;
      local_d4 = local_5c;
    }
    local_bc = (int *******)param_2[0x3f];
    pppppppiVar35 = (int *******)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
    pppppppiVar29 = local_64;
    local_e4 = pppppppiVar34;
  }
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != (int ******)0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_e0 = local_c8;
  local_40 = pppppppiVar36;
  local_c8 = pppppppiVar31;
LAB_007cd724:
  ppppppiVar14 = (int ******)0x0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
  local_ec = local_e8;
  local_e8 = local_40;
LAB_007cd7ac:
  *param_1 = ppppppiVar14;
  param_1[1] = (int ******)pppppppiVar29;
  param_1[2] = (int ******)local_bc;
  param_1[4] = (int ******)local_e4;
  param_1[5] = (int ******)local_d4;
  param_1[7] = (int ******)local_dc;
  param_1[8] = (int ******)pppppppiVar23;
  param_1[9] = (int ******)local_f0;
  param_1[3] = (int ******)pppppppiVar35;
  param_1[6] = (int ******)local_f4;
  param_1[10] = (int ******)local_d8;
  param_1[0xe] = (int ******)local_ec;
  param_1[0xb] = (int ******)local_d0;
  param_1[0xc] = (int ******)local_e8;
  param_1[0xd] = (int ******)local_c8;
  param_1[0xf] = (int ******)local_e0;
  uVar5 = 1;
LAB_007cd810:
  *(undefined1 *)(param_2 + 0x17) = uVar5;
  return;
}

