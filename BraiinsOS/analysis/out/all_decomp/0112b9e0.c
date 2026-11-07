// FUN_0112b9e0 @ 0112b9e0 size=1796 calls_out=11 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | SetGloba | finalize_open_channelv2_targethandle_set_difficultyevent open/protocols/stratum-proxy/src/translation.rs:1323event open/protocols/stratum-proxy/src/translation.rs:1330handle_set_extranoncehandle_stratum_result

/* WARNING: Removing unreachable block (ram,0x0112c284) */
/* WARNING: Switch with 1 destination removed at 0x0112bf90 */
/* WARNING: Type propagation algorithm not settling */

void FUN_0112b9e0(undefined4 *param_1,int param_2,int *param_3,int ***param_4,undefined4 param_5)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int ******ppppppiVar5;
  int *extraout_r2;
  int *extraout_r2_00;
  char *pcVar6;
  undefined4 uVar7;
  int ******ppppppiVar8;
  int ******ppppppiVar9;
  int ******ppppppiVar10;
  int ***pppiVar11;
  undefined4 *puVar12;
  int *******pppppppiVar13;
  int *******unaff_r10;
  int ******ppppppiVar14;
  undefined4 *unaff_r11;
  int ******ppppppiVar15;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int ******ppppppiVar16;
  int *******unaff_lr;
  undefined *puVar17;
  int *local_1a4;
  int ***local_1a0;
  undefined4 local_19c;
  int ******local_198;
  int ******ppppppiStack_194;
  int ******local_190;
  int ******local_18c;
  int ******local_188;
  int ******ppppppiStack_184;
  int ******ppppppiStack_180;
  int ******ppppppiStack_17c;
  int *******local_174;
  undefined4 local_170;
  int *local_16c;
  int **local_168;
  int ****local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int ******local_100;
  int ***local_fc;
  undefined *local_f8;
  int *local_f4;
  int *****local_f0;
  undefined *local_ec;
  int local_e8;
  undefined4 local_cc;
  undefined2 local_c8;
  int *******local_b0;
  int ******local_ac;
  int ******local_a8;
  int ******local_a4;
  int ******local_a0;
  int ******local_9c;
  int ******ppppppiStack_98;
  int ******ppppppiStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  uint uStack_84;
  int *******pppppppiStack_80;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  uint local_6c;
  int *******local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int *****local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int iStack_40;
  uint uStack_3c;
  int *******pppppppiStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pppppppiVar13 = &local_100;
  local_19c = param_5;
  local_1a4 = param_3;
  local_1a0 = param_4;
  if ((DAT_018d9130 < 3) || (bVar2 = false, DAT_018dd947 == '\0')) {
    puVar12 = &DAT_018da6a4;
    if ((DAT_018d9130 < 3) && (DAT_018da718 != '\0')) {
      if (DAT_018da718 == '\x01') {
LAB_0112ba80:
        DataMemoryBarrier(0xb);
        puVar17 = &DAT_018ae394;
        pcVar6 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) &&
           (pcVar6 = DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        unaff_lr = (int *******)0x112bae0;
        iVar4 = (**(code **)(puVar17 + 0x14))(pcVar6,DAT_018da710);
        param_3 = extraout_r2_00;
        in_r12 = extraout_r12_00;
        if (iVar4 == 0) goto LAB_0112bbac;
      }
      else if (DAT_018da718 != '\x02') {
        unaff_lr = (int *******)0x112ba6c;
        cVar3 = FUN_0169ac90(&DAT_018da710);
        if (cVar3 == '\0') goto LAB_0112bbac;
        param_3 = extraout_r2;
        in_r12 = extraout_r12;
        if (cVar3 != '\x02') goto LAB_0112ba80;
      }
      local_6c = *(uint *)(DAT_018da710 + 0x20);
      if (local_6c != 0) {
        unaff_r10 = *(int ********)(DAT_018da710 + 0x24);
        unaff_r11 = *(undefined4 **)(DAT_018da710 + 0x28);
        param_3 = (int *)(DAT_018da710 + 0x1c);
        in_r12 = *param_3;
        local_50 = *(undefined4 *)(DAT_018da710 + 0x24);
        local_58 = (int *****)*param_3;
        local_54 = *(undefined4 *)(DAT_018da710 + 0x20);
        local_4c = *(undefined4 *)(DAT_018da710 + 0x28);
        local_48 = 0;
        local_168 = &local_1a4;
      }
      if (local_6c < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01887cf8);
      }
      local_f0 = &local_164;
      local_f4 = &local_70;
      local_fc = &local_168;
      local_100 = &local_58;
      local_170 = 2;
      local_164 = &local_1a0;
      local_60 = 1;
      local_ec = &DAT_01887d18;
      local_f8 = &DAT_01887d08;
      local_174 = pppppppiVar13;
      local_16c = param_3;
      local_70 = in_r12;
      local_68 = unaff_r10;
      local_64 = unaff_r11;
      FUN_016948f0(&local_b0,DAT_018da710,&local_174);
    }
    else {
LAB_0112bbac:
      local_f8 = (undefined *)0x2;
      local_e8 = DAT_018da710;
      if (DAT_018dd947 == '\0') {
        local_16c = (int *)(DAT_018da710 + 0x1c);
        local_70 = *local_16c;
        local_6c = *(uint *)(DAT_018da710 + 0x20);
        if (local_6c != 0) {
          puVar12 = *(undefined4 **)(DAT_018da710 + 0x28);
          local_58 = (int *****)*local_16c;
          local_54 = *(undefined4 *)(DAT_018da710 + 0x20);
          unaff_lr = *(int ********)(DAT_018da710 + 0x24);
          local_50 = *(undefined4 *)(DAT_018da710 + 0x24);
          local_4c = *(undefined4 *)(DAT_018da710 + 0x28);
          local_48 = 0;
          local_168 = &local_1a4;
          unaff_r10 = pppppppiVar13;
        }
        pppppppiVar13 = unaff_r10;
        if (local_6c < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01887cf8);
        }
        local_a0 = (int ******)&local_164;
        local_a4 = (int ******)&local_70;
        local_ac = (int ******)&local_168;
        local_b0 = (int *******)&local_58;
        local_174 = (int *******)&local_b0;
        local_170 = 2;
        local_164 = &local_1a0;
        local_60 = 1;
        local_9c = (int ******)&DAT_01887d18;
        local_a8 = (int ******)&DAT_01887d08;
        local_68 = unaff_lr;
        local_64 = puVar12;
        FUN_01694880(&local_100,&local_174);
      }
      local_b0 = (int *******)*pppppppiVar13;
      local_ac = pppppppiVar13[1];
      local_a8 = pppppppiVar13[2];
      local_a4 = pppppppiVar13[3];
      local_a0 = pppppppiVar13[4];
      local_9c = pppppppiVar13[5];
      ppppppiStack_98 = pppppppiVar13[6];
      ppppppiStack_94 = pppppppiVar13[7];
    }
    local_198 = (int ******)local_b0;
    ppppppiStack_194 = local_ac;
    local_190 = local_a8;
    local_18c = local_a4;
    local_188 = local_a0;
    ppppppiStack_184 = local_9c;
    ppppppiStack_180 = ppppppiStack_98;
    ppppppiStack_17c = ppppppiStack_94;
    if (local_a8 != (int ******)0x2) {
      ppppppiVar5 = local_a4;
      if (((uint)local_a8 & 1) != 0) {
        ppppppiVar5 = (int ******)((int)local_a4 + ((int)local_a0[2] - 1U & 0xfffffff8) + 8);
      }
      (*(code *)local_a0[0xc])(ppppppiVar5,&local_198);
    }
    bVar2 = true;
  }
  puVar12 = (undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  local_100 = *(int *******)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x28) = 5;
  ppppppiVar8 = (int ******)local_1a4[3];
  ppppppiVar9 = (int ******)local_1a4[4];
  iVar4 = *(int *)(param_2 + 0x30);
  pppiVar11 = *(int ****)(param_2 + 0x2c);
  ppppppiVar10 = (int ******)local_1a4[5];
  ppppppiVar5 = (int ******)local_1a4[6];
  ppppppiVar16 = (int ******)local_1a4[7];
  ppppppiVar14 = (int ******)*local_1a4;
  ppppppiVar15 = (int ******)local_1a4[1];
  local_f4 = (int *)uVar7;
  if (local_100 == (int ******)0x3) {
    local_160 = *puVar12;
    uStack_15c = *(undefined4 *)(param_2 + 0x3c);
    uStack_158 = *(undefined4 *)(param_2 + 0x40);
    uStack_154 = *(undefined4 *)(param_2 + 0x44);
    local_150 = *(undefined4 *)(param_2 + 0x48);
    uStack_14c = *(undefined4 *)(param_2 + 0x4c);
    uStack_148 = *(undefined4 *)(param_2 + 0x50);
    uStack_144 = *(undefined4 *)(param_2 + 0x54);
    uStack_140 = *(undefined4 *)(param_2 + 0x58);
    pppppppiVar13[7] = (int ******)local_1a4[2];
    pppppppiVar13[8] = ppppppiVar8;
    pppppppiVar13[9] = ppppppiVar9;
    pppppppiVar13[5] = ppppppiVar14;
    pppppppiVar13[6] = ppppppiVar15;
    pppppppiVar13[10] = ppppppiVar10;
    pppppppiVar13[0xb] = ppppppiVar5;
    pppppppiVar13[0xc] = ppppppiVar16;
    local_fc = local_1a0;
    local_f8 = (undefined *)local_19c;
    local_f0 = (int *****)0x0;
    local_100 = (int ******)0x5;
    local_cc = 0;
    FUN_0161cae8(&local_58,&local_100);
    FUN_01134840(&local_70,param_2 + 0x1b0,&local_58);
    if (local_70 == -0x80000000) {
      if (*(int *)(param_2 + 0x30) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x2c));
      }
      *(undefined4 *)(param_2 + 0x28) = 6;
      *(int ****)(param_2 + 0x2c) = pppiVar11;
      *(int *)(param_2 + 0x30) = iVar4;
      *(undefined4 *)(param_2 + 0x34) = uVar7;
      *puVar12 = local_160;
      *(undefined4 *)(param_2 + 0x3c) = uStack_15c;
      *(undefined4 *)(param_2 + 0x40) = uStack_158;
      *(undefined4 *)(param_2 + 0x44) = uStack_154;
      *(undefined4 *)(param_2 + 0x48) = local_150;
      *(undefined4 *)(param_2 + 0x4c) = uStack_14c;
      *(undefined4 *)(param_2 + 0x50) = uStack_148;
      *(undefined4 *)(param_2 + 0x54) = uStack_144;
      *(undefined4 *)(param_2 + 0x58) = uStack_140;
      ppppppiVar5 = *(int *******)(param_2 + 0x158);
      *(undefined4 *)(param_2 + 0x158) = 0x80000000;
      if (ppppppiVar5 == (int ******)0x80000000) {
LAB_0112c058:
        *param_1 = 0x11;
        if (!bVar2) {
          return;
        }
        if (local_190 != (int ******)0x2) {
          ppppppiVar5 = local_18c;
          if (((uint)local_190 & 1) != 0) {
            ppppppiVar5 = (int ******)((int)local_18c + ((int)local_188[2] - 1U & 0xfffffff8) + 8);
          }
          (*(code *)local_188[0xd])(ppppppiVar5,&local_198);
        }
        FUN_005c3320(&local_198);
        return;
      }
      local_100 = ppppppiVar5;
      FUN_016dd1aa(&local_fc,param_2 + 0x15c,0x48);
      FUN_011296dc(&local_b0,param_2,&local_100,0);
      if (local_b0 == (int *******)0x11) {
        FUN_0112c418(&local_100);
        goto LAB_0112c058;
      }
      *param_1 = local_b0;
      param_1[1] = local_ac;
      param_1[2] = local_a8;
      param_1[3] = local_a4;
      param_1[4] = local_a0;
      param_1[5] = local_9c;
      param_1[6] = ppppppiStack_98;
      param_1[7] = ppppppiStack_94;
      param_1[8] = uStack_90;
      param_1[9] = uStack_8c;
      FUN_0112c418(&local_100);
      goto joined_r0x0112c2bc;
    }
    iStack_88 = local_70;
    uStack_84 = local_6c;
    pppppppiStack_80 = local_68;
    puStack_7c = local_64;
    uStack_78 = local_60;
    uStack_74 = uStack_5c;
    FUN_011330d8((uint)&local_b0 | 4);
  }
  else {
    if (local_100 != (int ******)0x4) {
      ppppppiVar5 = *(int *******)(param_2 + 0x3c);
      ppppppiVar8 = *(int *******)(param_2 + 0x40);
      ppppppiVar9 = *(int *******)(param_2 + 0x44);
      ppppppiVar10 = *(int *******)(param_2 + 0x48);
      pppppppiVar13[4] = (int ******)*puVar12;
      pppppppiVar13[5] = ppppppiVar5;
      pppppppiVar13[6] = ppppppiVar8;
      pppppppiVar13[7] = ppppppiVar9;
      pppppppiVar13[8] = ppppppiVar10;
      ppppppiVar5 = *(int *******)(param_2 + 0x50);
      ppppppiVar8 = *(int *******)(param_2 + 0x54);
      ppppppiVar9 = *(int *******)(param_2 + 0x58);
      ppppppiVar10 = *(int *******)(param_2 + 0x5c);
      pppppppiVar13[9] = *(int *******)(param_2 + 0x4c);
      pppppppiVar13[10] = ppppppiVar5;
      pppppppiVar13[0xb] = ppppppiVar8;
      pppppppiVar13[0xc] = ppppppiVar9;
      pppppppiVar13[0xd] = ppppppiVar10;
      local_ac = (int ******)&LAB_0067c674;
      local_fc = pppiVar11;
      local_f8 = (undefined *)iVar4;
      local_b0 = pppppppiVar13;
      FUN_00600d2c(&local_110,&DAT_0058658b,&local_b0);
      *param_1 = 1;
      param_1[1] = local_110;
      param_1[2] = uStack_10c;
      param_1[3] = uStack_108;
                    /* WARNING: Could not recover jumptable at 0x0112c140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0112c144 + *(int *)(&DAT_0112c144 + (int)local_100 * 4)))();
      return;
    }
    local_138 = *puVar12;
    uStack_134 = *(undefined4 *)(param_2 + 0x3c);
    uStack_130 = *(undefined4 *)(param_2 + 0x40);
    uStack_12c = *(undefined4 *)(param_2 + 0x44);
    uStack_128 = *(undefined4 *)(param_2 + 0x48);
    local_124 = *(undefined4 *)(param_2 + 0x4c);
    uStack_120 = *(undefined4 *)(param_2 + 0x50);
    uStack_11c = *(undefined4 *)(param_2 + 0x54);
    uStack_118 = *(undefined4 *)(param_2 + 0x58);
    uStack_114 = *(undefined4 *)(param_2 + 0x5c);
    uVar1 = *(undefined2 *)(param_2 + 0x200);
    pppppppiVar13[7] = (int ******)local_1a4[2];
    pppppppiVar13[8] = ppppppiVar8;
    pppppppiVar13[9] = ppppppiVar9;
    pppppppiVar13[10] = ppppppiVar10;
    pppppppiVar13[0xb] = ppppppiVar5;
    pppppppiVar13[5] = ppppppiVar14;
    pppppppiVar13[6] = ppppppiVar15;
    pppppppiVar13[0xc] = ppppppiVar16;
    local_fc = local_1a0;
    local_f8 = (undefined *)local_19c;
    local_f0 = (int *****)0x0;
    local_100 = (int ******)0x7;
    local_cc = 0;
    local_c8 = uVar1;
    FUN_0161cae8(&local_58,&local_100);
    FUN_01134840(&local_70,param_2 + 0x1b0,&local_58);
    if (local_70 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0112be44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0112be48 + *(int *)(&UNK_0112be48 + *(int *)(param_2 + 0x28) * 4)))();
      return;
    }
    iStack_40 = local_70;
    uStack_3c = local_6c;
    pppppppiStack_38 = local_68;
    puStack_34 = local_64;
    uStack_30 = local_60;
    uStack_2c = uStack_5c;
    FUN_011330d8((uint)&local_b0 | 4);
  }
  local_b0 = (int *******)0xb;
  *param_1 = 0xb;
  param_1[1] = local_ac;
  param_1[2] = local_a8;
  param_1[3] = local_a4;
  param_1[4] = local_a0;
  param_1[5] = local_9c;
  param_1[6] = ppppppiStack_98;
  param_1[7] = ppppppiStack_94;
  param_1[8] = uStack_90;
  param_1[9] = uStack_8c;
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(pppiVar11);
  }
joined_r0x0112c2bc:
  if (bVar2) {
    if (local_190 != (int ******)0x2) {
      ppppppiVar5 = local_18c;
      if (((uint)local_190 & 1) != 0) {
        ppppppiVar5 = (int ******)((int)local_18c + ((int)local_188[2] - 1U & 0xfffffff8) + 8);
      }
      (*(code *)local_188[0xd])(ppppppiVar5,&local_198);
    }
    FUN_005c3320(&local_198);
  }
  return;
}

