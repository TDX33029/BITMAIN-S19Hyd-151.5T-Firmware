// FUN_00cb417c @ 00cb417c size=5980 calls_out=33 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Type propagation algorithm not settling */

void FUN_00cb417c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 extraout_r1;
  undefined1 *puVar19;
  undefined **ppuVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint *******pppppppuVar25;
  char *pcVar26;
  uint *******pppppppuVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float *pfVar31;
  undefined *puVar32;
  uint *******pppppppuVar33;
  uint uVar34;
  uint *puVar35;
  uint ******ppppppuVar36;
  uint *******pppppppuVar37;
  int *piVar38;
  uint uVar39;
  undefined4 uVar40;
  int *piVar41;
  undefined4 uVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  ulonglong uVar53;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  int local_2e0;
  int local_298;
  uint local_28c;
  uint local_26c;
  uint local_268;
  undefined **local_264;
  uint *******local_260;
  uint *******local_248;
  uint *******local_244;
  uint *******local_240;
  undefined4 *local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  uint *******local_218;
  undefined **local_214;
  uint *******local_210;
  undefined *local_208;
  uint *******local_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  uint *******local_1c0;
  uint *******local_1bc;
  uint *******local_1b8;
  undefined1 *local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint *******local_170;
  uint *******local_16c;
  uint *******local_168;
  undefined **local_164;
  uint *******local_160;
  int local_15c;
  undefined4 local_158;
  uint local_154;
  undefined4 local_150;
  undefined1 local_14c;
  int local_148;
  float local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  uint *******local_12b;
  undefined3 uStack_127;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  uint *******local_f0;
  uint *******pppppppuStack_ec;
  uint *******pppppppuStack_e8;
  undefined1 *local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint *******local_d0;
  uint *******pppppppuStack_cc;
  uint *******pppppppuStack_c8;
  undefined1 *puStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int *local_98;
  int *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  uint *******local_80;
  uint *******local_7c;
  uint *******local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar9 = param_2 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xe)) {
  case 0:
    param_2[10] = param_2[8];
    param_2[0xb] = param_2[9];
    uVar53 = FUN_007143c8();
    piVar38 = (int *)uVar53;
    cVar8 = *(char *)((int)piVar38 + 0x52);
    if ((((uVar53 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
      *(undefined1 *)(piVar38 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar38;
      bVar43 = (bool)hasExclusiveAccess(piVar38);
    } while (!bVar43);
    *piVar38 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar38,0x81,1);
      if (cVar8 != '\x02') goto LAB_00cb4318;
LAB_00cb4238:
      pppppppuVar25 = (uint *******)&DAT_00000007;
    }
    else {
      if (cVar8 == '\x02') goto LAB_00cb4238;
LAB_00cb4318:
      pppppppuVar25 = (uint *******)&DAT_00000007;
      if (*(int *)(param_2[10] + 0x10) == 1) {
        param_2[0xc] = *(undefined4 *)(param_2[10] + 0x14);
        FUN_015f3b0c(&local_170,1);
        *param_2 = local_170;
        param_2[1] = local_16c;
        param_2[2] = local_168;
        *(undefined1 *)(param_2 + 0x16) = 0;
        uVar12 = param_2[10];
        param_2[0x14] = uVar12;
LAB_00cb4370:
        param_2[0x15] = uVar12;
        FUN_015f3b0c(&local_170,1);
        param_2[0x10] = local_170;
        param_2[0x11] = local_16c;
        param_2[0x12] = local_168;
        do {
          param_2[0x18] = param_2[0x15];
          param_2[0x19] = 0;
switchD_00cb4290_caseD_3:
          FUN_00cba990(&local_170,param_2 + 0x18);
          if (local_170 == (uint *******)&SUB_00000002) {
            uVar7 = 3;
            goto LAB_00cb470c;
          }
          if (local_170 == (uint *******)0x0) {
LAB_00cb4628:
            *(undefined1 *)(param_2 + 0x16) = 1;
            param_2[0x10] = param_2[10];
            param_2[0x11] = 0;
            goto switchD_00cb41c4_caseD_4;
          }
          (*(code *)**local_16c)();
          pppppppuVar27 = (uint *******)param_2[0x12];
          pppppppuVar25 = (uint *******)param_2[0x10];
          pppppppuVar33 = (uint *******)param_2[0x11];
          FUN_015f3b0c(&local_170,1);
          local_80 = local_170;
          local_7c = local_16c;
          local_78 = local_168;
          local_1c0 = pppppppuVar25;
          local_1bc = pppppppuVar33;
          local_1b8 = pppppppuVar27;
          FUN_015f3c24(&local_170,&local_80,&local_1c0);
          pppppppuVar25 = local_168;
          ppuVar20 = local_164;
          if (((uint)local_170 & 1) != 0) {
            ppuVar20 = (undefined **)0x0;
            pppppppuVar25 = (uint *******)0x0;
          }
          uVar34 = (uint)((uint)(pppppppuVar25 < &DAT_00000006) <= (uint)-(int)ppuVar20);
          if (pppppppuVar25 == (uint *******)&DAT_00000005 && ppuVar20 == (undefined **)0x0) {
            uVar34 = (uint)(local_160 != (uint *******)0x0) & ~(uint)local_170;
          }
          if (uVar34 != 0) goto LAB_00cb4628;
          FUN_01656eb8(&local_170,&DAT_0187710c,1,0,0,&DAT_0187710c);
          FUN_016dd1aa(&local_1c0,&local_170,0x50);
          FUN_016dd1aa(param_2 + 0x18,&local_1c0,0x50);
switchD_00cb4290_caseD_4:
          iVar11 = FUN_01657fc4(param_2 + 0x18,*param_3);
          if (iVar11 != 0) goto LAB_00cb4708;
          FUN_00a07b4c(param_2 + 0x18);
        } while( true );
      }
    }
    goto LAB_00cb4478;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875b68);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875b68);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16)) {
    case 0:
      uVar12 = param_2[0x14];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018770fc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018770fc);
    case 3:
      goto switchD_00cb4290_caseD_3;
    case 4:
      goto switchD_00cb4290_caseD_4;
    }
    goto LAB_00cb4370;
  case 4:
switchD_00cb41c4_caseD_4:
    FUN_00cba990(&local_170,param_2 + 0x10);
    if (local_170 == (uint *******)&SUB_00000002) {
      *param_1 = 8;
      uVar7 = 4;
      goto LAB_00cb444c;
    }
    if (((uint)local_170 & 1) == 0) {
      if ((float)local_16c <= (float)param_2[0xc]) {
        pppppppuVar25 = (uint *******)&DAT_00000007;
        if (local_170 != (uint *******)0x0) {
          (*(code *)**local_16c)(local_16c,**local_16c,DAT_018dd947);
        }
        goto LAB_00cb4478;
      }
    }
    else {
      (*(code *)**local_16c)();
    }
    local_170 = (uint *******)&SUB_00000002;
    FUN_008ebf58(param_2[10],&local_170);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(*(int *)(*(int *)(param_2[10] + 0x3c8) + 0x14) + 8) = 1;
    param_2[0xd] = 0x7f7fffff;
    FUN_015f3b0c(&local_170);
    *puVar9 = local_170;
    param_2[5] = local_16c;
    param_2[6] = local_168;
LAB_00cb4828:
    do {
      param_2[0x10] = param_2[10];
      param_2[0x11] = 0;
switchD_00cb41c4_caseD_5:
      FUN_00cba990(&local_170,param_2 + 0x10);
      pppppppuVar27 = local_16c;
      pppppppuVar25 = local_170;
      if (local_170 == (uint *******)&SUB_00000002) {
        *param_1 = 8;
        uVar7 = 5;
        goto LAB_00cb444c;
      }
      if (((uint)local_170 & 1) == 0) {
        local_248 = local_16c;
        if ((float)local_16c < (float)param_2[0xd]) {
          param_2[0xd] = local_16c;
          FUN_015f3b0c(&local_170,1);
          *puVar9 = local_170;
          param_2[5] = local_16c;
          param_2[6] = local_168;
        }
        if ((DAT_018d9130 < 3) && (DAT_018d9f20 != '\0')) {
          puVar32 = &DAT_018ae394;
          if (DAT_018d9f20 == '\x01') {
LAB_00cb4af8:
            DataMemoryBarrier(0xb);
            pcVar26 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) &&
               (pcVar26 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar11 = (**(code **)(puVar32 + 0x14))(pcVar26,DAT_018d9f18);
            if (iVar11 == 0) goto joined_r0x00cb4c88;
          }
          else if (DAT_018d9f20 != '\x02') {
            cVar8 = FUN_0169ac90(&DAT_018d9f18);
            if (cVar8 == '\0') goto joined_r0x00cb4c88;
            if (cVar8 != '\x02') goto LAB_00cb4af8;
          }
          if (*(uint ********)(DAT_018d9f18 + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875b78);
          }
          local_218 = (uint *******)&local_1c0;
          local_1b8 = *(uint ********)(DAT_018d9f18 + 0x24);
          local_1b4 = *(undefined1 **)(DAT_018d9f18 + 0x28);
          local_214 = &local_208;
          local_23c = (undefined4 *)(DAT_018d9f18 + 0x1c);
          local_1c0 = (uint *******)*local_23c;
          local_244 = (uint *******)&local_218;
          local_1b0 = 0;
          local_240 = (uint *******)0x1;
          local_210 = (uint *******)&DAT_018abb78;
          local_204 = (uint *******)&local_80;
          local_170 = (uint *******)&DAT_00000001;
          local_160 = (uint *******)&local_244;
          local_208 = &DAT_00355ed1;
          local_78 = (uint *******)&local_248;
          local_74 = &LAB_00fb1efc;
          local_80 = (uint *******)(param_2 + 0xc);
          local_7c = (uint *******)&LAB_00fb1efc;
          local_16c = (uint *******)0x0;
          DataMemoryBarrier(0xb);
          pcVar26 = s_SetGloba_00414c05;
          puVar32 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar26 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_1bc = *(uint ********)(DAT_018d9f18 + 0x20);
          local_15c = DAT_018d9f18;
          iVar11 = (**(code **)(puVar32 + 0x28))(pcVar26,&local_170);
          if (iVar11 != 0) {
            (**(code **)(puVar32 + 0x2c))(pcVar26,&local_170);
          }
        }
joined_r0x00cb4c88:
        if (pppppppuVar25 != (uint *******)0x0) {
          (*(code *)**pppppppuVar27)(pppppppuVar27);
        }
      }
      else {
        (*(code *)**local_16c)(local_16c);
        if ((DAT_018d9130 < 3) && (DAT_018d9f2c != '\0')) {
          if (DAT_018d9f2c == '\x01') {
LAB_00cb48d0:
            puVar32 = &DAT_018ae394;
            DataMemoryBarrier(0xb);
            pcVar26 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) &&
               (pcVar26 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar11 = (**(code **)(puVar32 + 0x14))(pcVar26,DAT_018d9f24);
            if (iVar11 == 0) goto LAB_00cb4c9c;
          }
          else if (DAT_018d9f2c != '\x02') {
            cVar8 = FUN_0169ac90(&DAT_018d9f24);
            if (cVar8 == '\0') goto LAB_00cb4c9c;
            if (cVar8 != '\x02') goto LAB_00cb48d0;
          }
          if (*(uint ********)(DAT_018d9f24 + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875b88);
          }
          local_7c = (uint *******)&local_244;
          local_1b8 = *(uint ********)(DAT_018d9f24 + 0x24);
          local_1b4 = *(undefined1 **)(DAT_018d9f24 + 0x28);
          local_210 = (uint *******)(DAT_018d9f24 + 0x1c);
          local_1c0 = (uint *******)*local_210;
          local_80 = (uint *******)&local_1c0;
          local_218 = (uint *******)&local_80;
          local_1b0 = 0;
          local_16c = (uint *******)0x0;
          local_160 = (uint *******)&local_218;
          local_214 = (undefined **)&DAT_00000001;
          local_78 = (uint *******)&DAT_018abb78;
          local_240 = (uint *******)0x57;
          local_244 = (uint *******)&DAT_00355f0d;
          local_170 = (uint *******)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar26 = s_SetGloba_00414c05;
          puVar32 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar26 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          local_1bc = *(uint ********)(DAT_018d9f24 + 0x20);
          local_15c = DAT_018d9f24;
          iVar11 = (**(code **)(puVar32 + 0x28))(pcVar26,&local_170);
          if (iVar11 != 0) {
            (**(code **)(puVar32 + 0x2c))(pcVar26,&local_170);
          }
        }
      }
LAB_00cb4c9c:
      if ((float)param_2[0xd] <= (float)param_2[0xc]) {
        if ((DAT_018d9130 < 3) && (DAT_018d9f5c != '\0')) {
          if (DAT_018d9f5c == '\x01') {
LAB_00cb5598:
            DataMemoryBarrier(0xb);
            puVar32 = &DAT_018ae394;
            pcVar26 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) &&
               (pcVar26 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar11 = (**(code **)(puVar32 + 0x14))(pcVar26,DAT_018d9f54);
            if (iVar11 == 0) goto LAB_00cb5938;
          }
          else if (DAT_018d9f5c != '\x02') {
            cVar8 = FUN_0169ac90(&DAT_018d9f54);
            if (cVar8 == '\0') goto LAB_00cb5938;
            if (cVar8 != '\x02') goto LAB_00cb5598;
          }
          if (*(int *)(DAT_018d9f54 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875bc8);
          }
          local_168 = *(uint ********)(DAT_018d9f54 + 0x24);
          local_164 = *(undefined ***)(DAT_018d9f54 + 0x28);
          local_1bc = (uint *******)&local_218;
          local_80 = (uint *******)&local_1c0;
          local_7c = (uint *******)0x1;
          local_160 = (uint *******)0x0;
          local_1b8 = (uint *******)&DAT_018abb78;
          local_214 = (undefined **)0x39;
          local_218 = (uint *******)&DAT_00355f78;
          local_1c0 = (uint *******)&local_170;
          local_170 = (uint *******)*(uint *******)(DAT_018d9f54 + 0x1c);
          local_16c = (uint *******)*(int *)(DAT_018d9f54 + 0x20);
          local_78 = (uint *******)(DAT_018d9f54 + 0x1c);
          FUN_00cbb080(&local_80);
        }
LAB_00cb5938:
        pppppppuVar25 = (uint *******)&DAT_00000007;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(*(int *)(*(int *)(param_2[10] + 0x3c8) + 0x14) + 8) = 0;
        goto LAB_00cb4478;
      }
      pppppppuVar27 = (uint *******)param_2[6];
      pppppppuVar25 = (uint *******)*puVar9;
      pppppppuVar33 = (uint *******)param_2[5];
      FUN_015f3b0c(&local_170,1);
      local_80 = local_170;
      local_7c = local_16c;
      local_78 = local_168;
      local_1c0 = pppppppuVar25;
      local_1bc = pppppppuVar33;
      local_1b8 = pppppppuVar27;
      FUN_015f3c24(&local_170,&local_80,&local_1c0);
      pppppppuVar25 = local_168;
      ppuVar20 = local_164;
      if (((uint)local_170 & 1) != 0) {
        ppuVar20 = (undefined **)0x0;
        pppppppuVar25 = (uint *******)0x0;
      }
      uVar34 = (uint)((uint)(pppppppuVar25 < &DAT_0000000b) <= (uint)-(int)ppuVar20);
      if (pppppppuVar25 == (uint *******)&DAT_0000000a && ppuVar20 == (undefined **)0x0) {
        uVar34 = (uint)(local_160 != (uint *******)0x0) & ~(uint)local_170;
      }
      if (uVar34 != 0) {
        if ((DAT_018d9130 < 3) && (DAT_018d9f50 != '\0')) {
          if (DAT_018d9f50 == '\x01') {
LAB_00cb56c8:
            DataMemoryBarrier(0xb);
            puVar32 = &DAT_018ae394;
            pcVar26 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) &&
               (pcVar26 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
              pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar11 = (**(code **)(puVar32 + 0x14))(pcVar26,DAT_018d9f48);
            if (iVar11 == 0) goto LAB_00cb5938;
          }
          else if (DAT_018d9f50 != '\x02') {
            cVar8 = FUN_0169ac90(&DAT_018d9f48);
            if (cVar8 == '\0') goto LAB_00cb5938;
            if (cVar8 != '\x02') goto LAB_00cb56c8;
          }
          if (*(int *)(DAT_018d9f48 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875bb8);
          }
          local_168 = *(uint ********)(DAT_018d9f48 + 0x24);
          local_1bc = (uint *******)&local_244;
          local_164 = *(undefined ***)(DAT_018d9f48 + 0x28);
          local_7c = (uint *******)0x1;
          local_240 = (uint *******)&local_218;
          local_160 = (uint *******)0x0;
          local_1b8 = (uint *******)&DAT_018abb78;
          local_244 = (uint *******)&DAT_00573fb2;
          local_214 = (undefined **)FUN_00fb8184;
          local_218 = (uint *******)0x564bc0;
          local_1c0 = (uint *******)&local_170;
          local_170 = (uint *******)*(uint *******)(DAT_018d9f48 + 0x1c);
          local_16c = (uint *******)*(int *)(DAT_018d9f48 + 0x20);
          local_80 = (uint *******)&local_1c0;
          local_78 = (uint *******)(DAT_018d9f48 + 0x1c);
          FUN_00cbafb0(&local_80);
        }
        goto LAB_00cb5938;
      }
      iVar11 = *(int *)(*(int *)(param_2[10] + 0x3c8) + 0xc);
      puVar35 = (uint *)(iVar11 + 0x98);
      uVar34 = *(uint *)(iVar11 + 0x98);
      if ((uVar34 < 0xfffffff0) && ((uVar34 & 8) == 0)) {
        if (*puVar35 != uVar34) {
          ClearExclusiveLocal();
          goto LAB_00cb4da0;
        }
        bVar43 = (bool)hasExclusiveAccess(puVar35);
        if (!bVar43) goto LAB_00cb4da0;
        *puVar35 = uVar34 + 0x10;
        DataMemoryBarrier(0xb);
      }
      else {
LAB_00cb4da0:
        FUN_0127d66c(puVar35);
      }
      FUN_0128236c(puVar35);
      uVar34 = (uint)puVar35 | 1;
      FUN_0128236c(uVar34);
      DataMemoryBarrier(0xb);
      pppppppuVar25 = *(uint ********)(iVar11 + 0xa0);
      if (pppppppuVar25 == (uint *******)&SUB_00000002) {
        FUN_01282570(puVar35);
        FUN_01282570(uVar34);
        DataMemoryBarrier(0xb);
        do {
          uVar34 = *puVar35;
          bVar43 = (bool)hasExclusiveAccess(puVar35);
        } while (!bVar43);
        *puVar35 = uVar34 - 0x10;
        if ((uVar34 & 0xfffffff2) == 0x12) {
          FUN_0127d34c(puVar35);
        }
        goto LAB_00cb5330;
      }
      uVar12 = *(undefined4 *)(iVar11 + 0xec);
      iVar13 = *(int *)(iVar11 + 200);
      pppppppuVar27 = *(uint ********)(iVar11 + 0xa4);
      pppppppuVar33 = *(uint ********)(iVar11 + 0xa8);
      uVar14 = *(undefined4 *)(iVar11 + 0xc0);
      uVar7 = *(undefined1 *)(iVar11 + 0xc4);
      ppuVar20 = *(undefined ***)(iVar11 + 0xac);
      pppppppuVar37 = *(uint ********)(iVar11 + 0xb0);
      iVar22 = *(int *)(iVar11 + 0xb4);
      uVar29 = *(undefined4 *)(iVar11 + 0xb8);
      fVar46 = *(float *)(iVar11 + 0xcc);
      uVar47 = *(undefined4 *)(iVar11 + 0xd0);
      bVar43 = *(char *)(iVar11 + 0xe4) != '\0';
      uVar48 = *(undefined4 *)(iVar11 + 0xd4);
      uVar49 = *(undefined4 *)(iVar11 + 0xd8);
      uVar50 = *(undefined4 *)(iVar11 + 0xdc);
      uVar51 = *(undefined4 *)(iVar11 + 0xe0);
      if (!bVar43) {
        local_214._0_3_ = (undefined3)((uint)*(undefined4 *)(iVar11 + 0xe8) >> 8);
        local_218 = *(uint ********)(iVar11 + 0xe5);
      }
      uVar39 = *(uint *)(iVar11 + 0x174);
      uVar15 = 0;
      bVar45 = 0x3ffffffe < uVar39;
      bVar44 = uVar39 == 0x3fffffff;
      uVar23 = *(uint *)(iVar11 + 0xbc);
      if (uVar39 < 0x40000000) {
        uVar23 = uVar39 << 2;
        bVar45 = 0x7ffffffb < uVar23;
        bVar44 = uVar23 == 0x7ffffffc;
        local_28c = *(uint *)(iVar11 + 0xbc);
        local_268 = uVar39;
      }
      if (bVar45 && !bVar44) {
LAB_00cb4eb0:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar15,local_26c);
      }
      uVar15 = *(undefined4 *)(iVar11 + 0x170);
      uVar40 = *(undefined4 *)(iVar11 + 0xf0);
      uVar2 = *(undefined1 *)(iVar11 + 0xf4);
      local_26c = 4;
      uVar39 = 0;
      if (uVar23 != 0) {
        local_26c = thunk_FUN_016d4a50(uVar23);
        if (local_26c == 0) {
          uVar15 = 4;
          local_26c = uVar23;
          goto LAB_00cb4eb0;
        }
        uVar39 = local_268;
      }
      FUN_016dd1aa(local_26c,uVar15,uVar23);
      uVar23 = *(uint *)(iVar11 + 0x100);
      uVar15 = 0xb;
      uVar3 = *(undefined1 *)(iVar11 + 0x18c);
      uVar30 = *(undefined4 *)(iVar11 + 0x180);
      bVar44 = (1 << (uVar23 & 0xff) & 0xbU) == 0;
      uVar52 = *(undefined4 *)(iVar11 + 0xfc);
      uVar21 = *(undefined4 *)(iVar11 + 0xf8);
      if (bVar44) {
        local_2f4 = *(undefined4 *)(iVar11 + 0x104);
        uVar15 = *(undefined4 *)(iVar11 + 0x108);
      }
      iVar16 = *(int *)(iVar11 + 0x10c);
      uVar42 = *(undefined4 *)(iVar11 + 0x184);
      if (bVar44) {
        local_2f8 = uVar15;
      }
      if (iVar16 == 4) {
        iVar28 = *(int *)(iVar11 + 0x118);
        local_298 = 1;
        uVar15 = *(undefined4 *)(iVar11 + 0x114);
        if ((iVar28 != 0) && (local_298 = thunk_FUN_016d4a50(iVar28), local_298 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar28);
        }
        FUN_016dd1aa(local_298,uVar15);
        uVar15 = extraout_r1;
        local_2e0 = iVar28;
      }
      else {
        iVar28 = *(int *)(iVar11 + 0x110);
        local_298 = *(int *)(iVar11 + 0x114);
        local_2f0 = *(undefined4 *)(iVar11 + 0x11c);
        local_2e0 = *(int *)(iVar11 + 0x118);
      }
      iVar17 = *(int *)(iVar11 + 0x160);
      if (iVar17 != 0) {
        local_2e8 = *(undefined4 *)(iVar11 + 0x164);
        uVar15 = *(undefined4 *)(iVar11 + 0x168);
      }
      piVar38 = *(int **)(iVar11 + 0x178);
      uVar4 = *(undefined1 *)(iVar11 + 399);
      uVar5 = *(undefined1 *)(iVar11 + 0x18e);
      uVar6 = *(undefined1 *)(iVar11 + 0x18d);
      if (iVar17 != 0) {
        local_2ec = uVar15;
      }
      do {
        iVar18 = *piVar38;
        bVar44 = (bool)hasExclusiveAccess(piVar38);
      } while (!bVar44);
      *piVar38 = iVar18 + 1;
      if (iVar18 < 0) {
LAB_00cb44c8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xcb44c8);
        (*pcVar1)();
      }
      piVar41 = *(int **)(iVar11 + 0x17c);
      do {
        iVar18 = *piVar41;
        bVar44 = (bool)hasExclusiveAccess(piVar41);
      } while (!bVar44);
      *piVar41 = iVar18 + 1;
      if (iVar18 < 0) goto LAB_00cb44c8;
      FUN_008e7060(&local_1c0,iVar11 + 0x120);
      local_80 = local_1c0;
      local_7c = local_1bc;
      local_78 = local_1b8;
      local_74 = local_1b4;
      local_70 = local_1b0;
      uStack_6c = uStack_1ac;
      uStack_68 = uStack_1a8;
      uStack_64 = uStack_1a4;
      FUN_008e7060(&local_1c0,iVar11 + 0x140);
      local_d0 = local_1c0;
      pppppppuStack_cc = local_1bc;
      pppppppuStack_c8 = local_1b8;
      puStack_c4 = local_1b4;
      local_c0 = local_1b0;
      uStack_bc = uStack_1ac;
      uStack_b8 = uStack_1a8;
      uStack_b4 = uStack_1a4;
      local_10c = local_2f4;
      uStack_108 = local_2f8;
      local_9c = local_268;
      local_f4 = local_2f0;
      local_f8 = local_2e0;
      local_fc = local_298;
      local_12b = local_218;
      uStack_127 = local_214._0_3_;
      local_88 = *(undefined4 *)(iVar11 + 0x188);
      local_f0 = local_80;
      pppppppuStack_ec = local_7c;
      pppppppuStack_e8 = local_78;
      local_e4 = local_74;
      local_e0 = local_70;
      uStack_dc = uStack_6c;
      uStack_d8 = uStack_68;
      uStack_d4 = uStack_64;
      local_154 = local_28c;
      local_ac = local_2e8;
      local_a8 = local_2ec;
      local_170 = pppppppuVar25;
      local_16c = pppppppuVar27;
      local_168 = pppppppuVar33;
      local_164 = ppuVar20;
      local_160 = pppppppuVar37;
      local_15c = iVar22;
      local_158 = uVar29;
      local_150 = uVar14;
      local_14c = uVar7;
      local_148 = iVar13;
      local_144 = fVar46;
      local_140 = uVar47;
      local_13c = uVar48;
      local_138 = uVar49;
      local_134 = uVar50;
      local_130 = uVar51;
      local_12c = bVar43;
      local_124 = uVar12;
      local_120 = uVar40;
      local_11c = uVar2;
      local_118 = uVar21;
      local_114 = uVar52;
      local_110 = uVar23;
      local_104 = iVar16;
      local_100 = iVar28;
      local_b0 = iVar17;
      local_a4 = uVar39;
      local_a0 = local_26c;
      local_98 = piVar38;
      local_94 = piVar41;
      local_90 = uVar30;
      local_8c = uVar42;
      local_84 = uVar3;
      local_83 = uVar6;
      local_82 = uVar5;
      local_81 = uVar4;
      FUN_01282570(puVar35);
      FUN_01282570(uVar34);
      DataMemoryBarrier(0xb);
      do {
        uVar34 = *puVar35;
        bVar43 = (bool)hasExclusiveAccess(puVar35);
      } while (!bVar43);
      *puVar35 = uVar34 - 0x10;
      if ((uVar34 & 0xfffffff2) == 0x12) {
        FUN_0127d34c(puVar35);
      }
      if (iVar13 == 0) {
LAB_00cb531c:
        FUN_008ebba4(&local_170);
        if (iVar13 != 0) {
          if ((DAT_018d9130 < 3) && (DAT_018d9f44 != '\0')) {
            if (DAT_018d9f44 == '\x01') {
LAB_00cb5844:
              DataMemoryBarrier(0xb);
              puVar32 = &DAT_018ae394;
              pcVar26 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar26 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar26 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar11 = (**(code **)(puVar32 + 0x14))(pcVar26,DAT_018d9f3c);
              if (iVar11 == 0) goto LAB_00cb5938;
            }
            else if (DAT_018d9f44 != '\x02') {
              cVar8 = FUN_0169ac90(&DAT_018d9f3c);
              if (cVar8 == '\0') goto LAB_00cb5938;
              if (cVar8 != '\x02') goto LAB_00cb5844;
            }
            if (*(int *)(DAT_018d9f3c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875ba8);
            }
            local_1bc = (uint *******)&local_218;
            local_168 = *(uint ********)(DAT_018d9f3c + 0x24);
            local_164 = *(undefined ***)(DAT_018d9f3c + 0x28);
            local_80 = (uint *******)&local_1c0;
            local_7c = (uint *******)0x1;
            local_160 = (uint *******)0x0;
            local_1b8 = (uint *******)&DAT_018abb78;
            local_214 = (undefined **)0x81;
            local_218 = (uint *******)&DAT_00355f38;
            local_1c0 = (uint *******)&local_170;
            local_170 = (uint *******)*(uint *******)(DAT_018d9f3c + 0x1c);
            local_16c = (uint *******)*(int *)(DAT_018d9f3c + 0x20);
            local_78 = (uint *******)(DAT_018d9f3c + 0x1c);
            FUN_00cbaee0(&local_80);
          }
          goto LAB_00cb5938;
        }
      }
      else {
        pppppppuVar27 = local_f0 + 1;
        uVar34 = ~(uint)*local_f0 & 0x80808080;
        pppppppuVar25 = local_f0;
        puVar19 = local_e4;
        while (puVar19 != (undefined1 *)0x0) {
          pppppppuVar33 = pppppppuVar27;
          if (uVar34 == 0) {
            do {
              pppppppuVar27 = pppppppuVar33 + 1;
              ppppppuVar36 = *pppppppuVar33;
              pppppppuVar25 = pppppppuVar25 + -8;
              pppppppuVar33 = pppppppuVar27;
            } while (((uint)ppppppuVar36 & 0x80808080) == 0x80808080);
            uVar34 = (uint)ppppppuVar36 & 0x80808080 ^ 0x80808080;
          }
          puVar19 = puVar19 + -1;
          iVar11 = *(int *)((int)pppppppuVar25 +
                           (-4 - (LZCOUNT(uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                                          (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) & 0x38U)));
          uVar34 = uVar34 - 1 & uVar34;
          pfVar31 = (float *)(*(int *)(iVar11 + 0xc) + 4);
          for (iVar11 = *(int *)(iVar11 + 0x10) * 0x30; iVar11 != 0; iVar11 = iVar11 + -0x30) {
            if ((pfVar31[-1] == 1.4013e-45) && (*pfVar31 < fVar46)) goto LAB_00cb531c;
            pfVar31 = pfVar31 + 0xc;
          }
        }
        FUN_008ebba4(&local_170);
      }
LAB_00cb5330:
      uVar53 = FUN_007143c8();
      piVar38 = (int *)uVar53;
      cVar8 = *(char *)((int)piVar38 + 0x52);
      pppppppuVar25 = (uint *******)&DAT_3b9aca00;
      if (cVar8 == '\x01') {
        local_260 = (uint *******)piVar38[0x10];
        local_264 = (undefined **)piVar38[0x11];
        pppppppuVar25 = (uint *******)0x0;
      }
      if ((((uVar53 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
        *(undefined1 *)(piVar38 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar38;
        bVar43 = (bool)hasExclusiveAccess(piVar38);
      } while (!bVar43);
      *piVar38 = 0;
      if (iVar11 == 2) {
        FUN_016d6968(0xf0,piVar38,0x81,1);
      }
      if (cVar8 == '\x01') {
        pppppppuVar27 = (uint *******)*param_2;
        pppppppuVar37 = (uint *******)param_2[1];
        pppppppuVar33 = (uint *******)param_2[2];
        local_218 = local_260;
        local_214 = local_264;
        local_210 = pppppppuVar25;
        FUN_015f3b0c(&local_170,1);
        local_80 = local_170;
        local_7c = local_16c;
        local_78 = local_168;
        local_1c0 = pppppppuVar27;
        local_1bc = pppppppuVar37;
        local_1b8 = pppppppuVar33;
        FUN_015f3c24(&local_170,&local_80,&local_1c0);
        pppppppuVar33 = local_160;
        ppuVar20 = local_164;
        pppppppuVar27 = local_168;
        if (((uint)local_170 & 1) != 0) {
          pppppppuVar27 = (uint *******)0x0;
          ppuVar20 = (undefined **)0x0;
          pppppppuVar33 = (uint *******)0x0;
        }
        bVar43 = pppppppuVar25 <= pppppppuVar33;
        if (pppppppuVar27 != local_260 || ppuVar20 != local_264) {
          bVar43 = local_264 < ppuVar20 ||
                   (uint)((int)ppuVar20 - (int)local_264) < (uint)(local_260 <= pppppppuVar27);
        }
        if (bVar43) {
          if ((DAT_018d9130 < 3) &&
             (((DAT_018d9f38 - 1 < 2 ||
               ((DAT_018d9f38 != 0 && (cVar8 = FUN_0169ac90(&DAT_018d9f30), cVar8 != '\0')))) &&
              (iVar11 = FUN_016949d8(DAT_018d9f30), iVar11 != 0)))) {
            if (*(int *)(DAT_018d9f30 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875b98);
            }
            local_168 = *(uint ********)(DAT_018d9f30 + 0x24);
            local_164 = *(undefined ***)(DAT_018d9f30 + 0x28);
            local_1bc = (uint *******)&local_208;
            local_7c = (uint *******)0x1;
            local_204 = (uint *******)&local_244;
            local_244 = (uint *******)&local_218;
            local_160 = (uint *******)0x0;
            local_1b8 = (uint *******)&DAT_018abb78;
            local_208 = &DAT_0058b69f;
            local_240 = (uint *******)FUN_00fb8184;
            local_1c0 = (uint *******)&local_170;
            local_170 = (uint *******)*(uint *******)(DAT_018d9f30 + 0x1c);
            local_16c = (uint *******)*(int *)(DAT_018d9f30 + 0x20);
            local_80 = (uint *******)&local_1c0;
            local_78 = (uint *******)(DAT_018d9f30 + 0x1c);
            FUN_00cbae10(&local_80);
          }
          goto LAB_00cb5938;
        }
      }
      *(undefined1 *)(param_2 + 0x35) = 0;
      param_2[0x32] = param_2[10];
      param_2[0x33] = param_2[0xb];
switchD_00cb41c4_caseD_7:
      FUN_00cbab3c(&local_170,param_2 + 0x10,param_3);
      pppppppuVar25 = local_170;
      if (local_170 == (uint *******)&DAT_00000008) {
        *param_1 = 8;
        uVar7 = 7;
        goto LAB_00cb444c;
      }
      puVar10 = (undefined4 *)((uint)&local_170 | 4);
      puVar24 = &local_200;
      local_200 = *puVar10;
      uStack_1fc = puVar10[1];
      uStack_1f8 = puVar10[2];
      local_1f4 = puVar10[3];
      uStack_1f0 = puVar10[4];
      uStack_1ec = puVar10[5];
      uStack_1e8 = puVar10[6];
      cVar8 = *(char *)(param_2 + 0x35);
      bVar43 = cVar8 == '\x03';
      if (bVar43) {
        cVar8 = *(char *)(param_2 + 0x31);
      }
      if (bVar43 && cVar8 == '\x03') {
        FUN_00b9e31c(param_2 + 0x18);
      }
    } while (pppppppuVar25 == (uint *******)&DAT_00000007);
    break;
  case 5:
    goto switchD_00cb41c4_caseD_5;
  case 6:
    FUN_00cbab3c(&local_170,param_2 + 0x10,param_3);
    pppppppuVar25 = local_170;
    if (local_170 == (uint *******)&DAT_00000008) {
      *param_1 = 8;
      uVar7 = 6;
      goto LAB_00cb444c;
    }
    puVar10 = (undefined4 *)((uint)&local_170 | 4);
    puVar24 = &local_238;
    local_238 = *puVar10;
    uStack_234 = puVar10[1];
    uStack_230 = puVar10[2];
    local_22c = puVar10[3];
    uStack_228 = puVar10[4];
    uStack_224 = puVar10[5];
    uStack_220 = puVar10[6];
    cVar8 = *(char *)(param_2 + 0x35);
    bVar43 = cVar8 == '\x03';
    if (bVar43) {
      cVar8 = *(char *)(param_2 + 0x31);
    }
    if (bVar43 && cVar8 == '\x03') {
      FUN_00b9e31c(param_2 + 0x18);
    }
    if (pppppppuVar25 == (uint *******)&DAT_00000007) goto LAB_00cb4828;
    break;
  case 7:
    goto switchD_00cb41c4_caseD_7;
  }
  local_1e0 = *puVar24;
  uStack_1dc = puVar24[1];
  uStack_1d8 = puVar24[2];
  local_1d4 = puVar24[3];
  uStack_1d0 = puVar24[4];
  uStack_1cc = puVar24[5];
  uStack_1c8 = puVar24[6];
LAB_00cb4478:
  *param_1 = pppppppuVar25;
  param_1[1] = local_1e0;
  param_1[2] = uStack_1dc;
  param_1[3] = uStack_1d8;
  uVar7 = 1;
  param_1[4] = local_1d4;
  param_1[5] = uStack_1d0;
  param_1[6] = uStack_1cc;
  param_1[7] = uStack_1c8;
LAB_00cb444c:
  *(undefined1 *)(param_2 + 0xe) = uVar7;
  return;
LAB_00cb4708:
  uVar7 = 4;
LAB_00cb470c:
  *(undefined1 *)(param_2 + 0x16) = uVar7;
  *param_1 = 8;
  uVar7 = 3;
  goto LAB_00cb444c;
}

