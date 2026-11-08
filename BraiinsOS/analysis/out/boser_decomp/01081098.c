// FUN_01081098 @ 01081098 size=2608 calls_out=21 calls_in=2
// strings: Cannot save scheduler crontab: no path configured | # This file is automatically managed by the scheduler - DO NOT EDIT MANUALLY | background task failed

undefined8 FUN_01081098(int *param_1,undefined4 param_2)

{
  int iVar1;
  int ***pppiVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int ***pppiVar6;
  undefined1 uVar7;
  bool bVar8;
  int ***unaff_r7;
  uint uVar9;
  uint uVar10;
  int *local_220;
  undefined1 *local_21c;
  int ***local_1a0;
  int ***local_19c;
  int ***local_198;
  int ***local_194;
  int ***pppiStack_190;
  int ***pppiStack_18c;
  int ***local_108;
  int ***local_104;
  int ***local_100;
  int ***local_fc;
  int ***local_f8;
  int ***pppiStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int ***local_c8;
  int ***local_c4;
  int ***pppiStack_c0;
  int ***pppiStack_bc;
  int iStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int ***pppiStack_90;
  int ***pppiStack_8c;
  int ***local_70;
  int ***pppiStack_6c;
  int ***pppiStack_68;
  int ***local_60;
  int ***pppiStack_5c;
  int ***pppiStack_58;
  int **local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int ***local_38;
  int ***local_34;
  int ***local_30;
  int ***local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x39]) {
  case '\0':
    iVar1 = param_1[0x38];
    piVar5 = (int *)(iVar1 + 0x18);
    if (*piVar5 != -0x80000000) {
      *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
      uVar7 = 1;
      param_1[5] = iVar1;
      param_1[6] = (int)piVar5;
LAB_01081148:
      unaff_r7 = (int ***)(param_1 + 2);
      *(undefined1 *)(param_1 + 7) = uVar7;
      *param_1 = iVar1;
      param_1[1] = (int)piVar5;
      *(undefined1 *)((int)param_1 + 0x1d) = 0;
      FUN_019afd0c(unaff_r7,piVar5[1],piVar5[2],"tmp");
      *(undefined1 *)((int)param_1 + 0x75) = 0;
      param_1[0x1c] = (int)unaff_r7;
LAB_0108118c:
      param_1[0x18] = 0;
      param_1[0x19] = 0x1b6;
      *(undefined2 *)(param_1 + 0x1b) = 0;
      param_1[0x1a] = 0;
      *(undefined1 *)(param_1 + 0x1d) = 0;
      *(undefined1 *)(param_1 + 0x17) = 0;
      param_1[8] = (int)(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x1b) = 1;
      *(undefined1 *)((int)param_1 + 0x69) = 1;
      *(undefined1 *)((int)param_1 + 0x6b) = 1;
      param_1[9] = (int)unaff_r7;
switchD_01081404_caseD_3:
      piVar5 = param_1 + 8;
      FUN_0103b9cc(&local_108,piVar5,param_2);
      if (((uint)local_108 & 1) != 0) {
        uVar7 = 3;
        *(undefined1 *)((int)param_1 + 0x75) = 3;
        goto LAB_01081be4;
      }
      FUN_0103b98c(piVar5);
      pppiVar6 = local_c4;
      pppiVar2 = local_c8;
      *(undefined2 *)(param_1 + 0x1d) = 0x100;
      if (local_c4 != (int ***)0x0) {
        *(undefined1 *)((int)param_1 + 0x1d) = 0;
        iVar1 = *param_1;
        local_c8 = local_100;
        local_c4 = local_fc;
        pppiStack_c0 = local_f8;
        pppiStack_bc = pppiStack_f4;
        iStack_b8 = iStack_f0;
        local_b4 = uStack_ec;
        uStack_b0 = local_e8;
        uStack_ac = uStack_e4;
        uStack_a8 = uStack_e0;
        uStack_a4 = uStack_dc;
        local_a0 = local_d8;
        uStack_9c = uStack_d4;
        uStack_98 = uStack_d0;
        uStack_94 = uStack_cc;
        pppiStack_90 = pppiVar2;
        pppiStack_8c = pppiVar6;
        iVar4 = param_1[7];
        FUN_01bed4e2(&local_1a0,&local_108,0x94);
        FUN_01bed4e2(piVar5,&local_1a0,0x94);
        *(undefined1 *)(param_1 + 0x2e) = 0;
        *(char *)((int)param_1 + 0xb9) = (char)iVar4;
        param_1[0x2d] = iVar1;
        param_1[0x28] = iVar1;
        param_1[8] = param_1[0x18];
        param_1[9] = param_1[0x19];
        param_1[10] = param_1[0x1a];
        param_1[0xb] = param_1[0x1b];
        param_1[0xc] = param_1[0x1c];
        param_1[0xd] = param_1[0x1d];
        param_1[0xe] = param_1[0x1e];
        param_1[0xf] = param_1[0x1f];
        param_1[0x10] = param_1[0x20];
        param_1[0x11] = param_1[0x21];
        unaff_r7 = (int ***)param_1[0x27];
        param_1[0x12] = param_1[0x22];
        param_1[0x13] = param_1[0x23];
        param_1[0x14] = param_1[0x24];
        param_1[0x15] = param_1[0x25];
        param_1[0x16] = param_1[0x26];
        param_1[0x17] = (int)unaff_r7;
        if ((char)iVar4 != '\0') goto LAB_0108130c;
        goto LAB_01081544;
      }
      local_108 = local_100;
      local_104 = local_fc;
      unaff_r7 = (int ***)FUN_007afd78(&local_108);
LAB_0108170c:
      bVar8 = false;
      *(undefined1 *)((int)param_1 + 0x1d) = 0;
      FUN_019bb7e0(param_1[2],param_1[3]);
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      goto LAB_01081724;
    }
    unaff_r7 = (int ***)FUN_00667978("Cannot save scheduler crontab: no path configured",0x31);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f038);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f038);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x1e)) {
    case 0:
      iVar1 = param_1[5];
      piVar5 = (int *)param_1[6];
      uVar7 = *(undefined1 *)((int)param_1 + 0x1f);
      goto LAB_01081148;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f048);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f048);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x75)) {
      case 0:
        unaff_r7 = (int ***)param_1[0x1c];
        goto LAB_0108118c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2046c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2046c);
      }
      goto switchD_01081404_caseD_3;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x2e]) {
      case '\0':
        iVar1 = param_1[0x2d];
        param_1[0x28] = iVar1;
        param_1[8] = param_1[0x18];
        param_1[9] = param_1[0x19];
        param_1[10] = param_1[0x1a];
        param_1[0xb] = param_1[0x1b];
        param_1[0xc] = param_1[0x1c];
        param_1[0xd] = param_1[0x1d];
        param_1[0xe] = param_1[0x1e];
        param_1[0xf] = param_1[0x1f];
        param_1[0x10] = param_1[0x20];
        param_1[0x11] = param_1[0x21];
        unaff_r7 = (int ***)param_1[0x27];
        param_1[0x12] = param_1[0x22];
        param_1[0x13] = param_1[0x23];
        param_1[0x14] = param_1[0x24];
        param_1[0x15] = param_1[0x25];
        param_1[0x16] = param_1[0x26];
        param_1[0x17] = (int)unaff_r7;
        if (*(char *)((int)param_1 + 0xb9) != '\x01') goto LAB_01081544;
LAB_0108130c:
        param_1[0x30] = (int)(param_1 + 8);
        param_1[0x31] =
             (int)"# This file is automatically managed by the scheduler - DO NOT EDIT MANUALLY";
        param_1[0x32] = 0x4c;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f058);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f058);
      case '\x04':
        goto switchD_0108135c_caseD_4;
      case '\x05':
        goto switchD_0108135c_caseD_5;
      case '\x06':
        goto switchD_0108135c_caseD_6;
      case '\a':
        goto switchD_0108135c_caseD_7;
      case '\b':
        goto switchD_0108135c_caseD_8;
      case '\t':
        piVar5 = (int *)param_1[0x30];
        goto LAB_01081914;
      }
      FUN_014b3814(&local_108,param_1 + 0x30,param_2);
      if ((char)local_108 == '\x05') {
        uVar7 = 3;
LAB_01081700:
        *(undefined1 *)(param_1 + 0x2e) = uVar7;
        bVar8 = true;
      }
      else {
        if (((uint)local_108 & 0xff) == 4) {
          param_1[0x30] = (int)(param_1 + 8);
          param_1[0x31] = (int)"\n";
          param_1[0x32] = 1;
switchD_0108135c_caseD_4:
          FUN_014b3814(&local_108,param_1 + 0x30,param_2);
          if ((char)local_108 == '\x05') {
            uVar7 = 4;
            goto LAB_01081700;
          }
          if (((uint)local_108 & 0xff) != 4) {
            unaff_r7 = (int ***)FUN_007afd78(&local_108);
            goto LAB_010819e4;
          }
          iVar1 = param_1[0x28];
          if (*(int *)(iVar1 + 8) != 0) {
            param_1[0x30] = (int)(param_1 + 8);
            param_1[0x31] = (int)"\n";
            param_1[0x32] = 1;
switchD_0108135c_caseD_5:
            FUN_014b3814(&local_108,param_1 + 0x30,param_2);
            if ((char)local_108 == '\x05') {
              uVar7 = 5;
              goto LAB_01081700;
            }
            if (((uint)local_108 & 0xff) != 4) {
              unaff_r7 = (int ***)FUN_007afd78(&local_108);
              goto LAB_010819e4;
            }
            iVar1 = param_1[0x28];
          }
LAB_01081544:
          pppiVar2 = *(int ****)(iVar1 + 4);
          pppiVar6 = pppiVar2 + *(int *)(iVar1 + 8) * 0x34;
          param_1[0x29] = (int)pppiVar2;
          param_1[0x2a] = (int)pppiVar6;
          param_1[0x2b] = 0;
          while (piVar5 = param_1 + 8, pppiVar2 != pppiVar6) {
            iVar1 = param_1[0x2b];
            param_1[0x29] = (int)(pppiVar2 + 0x34);
            param_1[0x2b] = iVar1 + 1;
            param_1[0x2c] = (int)pppiVar2;
            if (iVar1 != 0) {
              param_1[0x30] = (int)piVar5;
              param_1[0x31] = (int)&DAT_00420454;
              param_1[0x32] = 2;
switchD_0108135c_caseD_6:
              FUN_014b3814(&local_108,param_1 + 0x30,param_2);
              if ((char)local_108 == '\x05') {
                uVar7 = 6;
                goto LAB_01081700;
              }
              if (((uint)local_108 & 0xff) != 4) {
                unaff_r7 = (int ***)FUN_007afd78(&local_108);
                goto LAB_010819e4;
              }
              pppiVar2 = (int ***)param_1[0x2c];
            }
            if (pppiVar2[0x31] != (int **)0x80000000) {
              local_100 = (int ***)(param_1 + 0x30);
              *local_100 = (int **)(pppiVar2 + 0x31);
              local_104 = (int ***)&DAT_0132b6a0;
              local_fc = (int ***)&LAB_0193a90c;
              local_108 = (int ***)&DAT_01c1f068;
              unaff_r7 = &local_50;
              FUN_00664898(unaff_r7,&DAT_005ab6af,&local_108);
              param_1[0x31] = (int)local_50;
              param_1[0x32] = iStack_4c;
              param_1[0x33] = iStack_48;
              param_1[0x34] = (int)(param_1 + 8);
              param_1[0x35] = param_1[0x32];
              param_1[0x36] = param_1[0x33];
switchD_0108135c_caseD_7:
              FUN_014b3814(&local_108,param_1 + 0x34,param_2);
              if ((char)local_108 == '\x05') {
                uVar7 = 7;
                goto LAB_01081700;
              }
              if (((uint)local_108 & 0xff) == 4) {
                FUN_019bb7e0(param_1[0x31],param_1[0x32]);
                pppiVar2 = (int ***)param_1[0x2c];
                goto LAB_0108187c;
              }
              unaff_r7 = (int ***)FUN_007afd78(&local_108);
              iVar1 = param_1[0x31];
              iVar4 = param_1[0x32];
LAB_0108198c:
              FUN_019bb7e0(iVar1,iVar4);
              goto LAB_010819e4;
            }
LAB_0108187c:
            local_fc = (int ***)&LAB_00632348;
            local_100 = pppiVar2 + 0x2e;
            local_104 = (int ***)FUN_01318fa0;
            unaff_r7 = &local_50;
            local_108 = pppiVar2;
            FUN_00664898(unaff_r7,&DAT_005ab6af,&local_108);
            param_1[0x30] = (int)local_50;
            param_1[0x31] = iStack_4c;
            param_1[0x32] = iStack_48;
            param_1[0x33] = (int)(param_1 + 8);
            param_1[0x34] = param_1[0x31];
            param_1[0x35] = param_1[0x32];
switchD_0108135c_caseD_8:
            FUN_014b3814(&local_108,param_1 + 0x33,param_2);
            if ((char)local_108 == '\x05') {
              uVar7 = 8;
              goto LAB_01081700;
            }
            if (((uint)local_108 & 0xff) != 4) {
              unaff_r7 = (int ***)FUN_007afd78(&local_108);
              iVar1 = param_1[0x30];
              iVar4 = param_1[0x31];
              goto LAB_0108198c;
            }
            FUN_019bb7e0(param_1[0x30],param_1[0x31]);
            pppiVar6 = (int ***)param_1[0x2a];
            pppiVar2 = (int ***)param_1[0x29];
          }
          param_1[0x30] = (int)piVar5;
LAB_01081914:
          FUN_019e6a68(&local_108,piVar5 + 6,param_2);
          if ((char)local_108 == '\x05') {
            uVar7 = 9;
            goto LAB_01081700;
          }
          if (((uint)local_108 & 0xff) != 4) {
            unaff_r7 = (int ***)FUN_007afd78(&local_108);
            goto LAB_010819e4;
          }
          unaff_r7 = (int ***)0x0;
          FUN_0103be5c(param_1 + 8);
        }
        else {
          unaff_r7 = (int ***)FUN_007afd78(&local_108);
LAB_010819e4:
          FUN_0103be5c(param_1 + 8);
        }
        *(undefined1 *)(param_1 + 0x2e) = 1;
        bVar8 = false;
      }
      if (!bVar8) {
        FUN_01087f9c(param_1 + 8);
        if (unaff_r7 != (int ***)0x0) goto LAB_0108170c;
        *(undefined1 *)(param_1 + 0x14) = 0;
        iVar1 = param_1[1];
        param_1[8] = (int)(param_1 + 2);
        param_1[9] = iVar1;
LAB_01081a34:
        iVar4 = param_1[8];
        param_1[10] = iVar4;
        param_1[0xb] = iVar1;
        FUN_019afae4(&local_70,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
        FUN_019afae4(&local_60,*(undefined4 *)(param_1[0xb] + 4),*(undefined4 *)(param_1[0xb] + 8));
        local_1a0 = local_70;
        local_19c = pppiStack_6c;
        local_198 = pppiStack_68;
        local_194 = local_60;
        pppiStack_190 = pppiStack_5c;
        pppiStack_18c = pppiStack_58;
        local_108 = local_70;
        local_104 = pppiStack_6c;
        local_100 = pppiStack_68;
        local_fc = local_60;
        local_f8 = pppiStack_5c;
        pppiStack_f4 = pppiStack_58;
        param_1[0xc] = (int)local_70;
        param_1[0xd] = (int)pppiStack_6c;
        param_1[0xe] = (int)pppiStack_68;
        param_1[0xf] = (int)local_60;
        param_1[0x10] = (int)pppiStack_5c;
        param_1[0x11] = (int)pppiStack_58;
        param_1[0x12] = iStack_f0;
        *(undefined1 *)(param_1 + 0x13) = 0;
switchD_0108144c_caseD_0:
        local_50 = (int **)param_1[0xc];
        iStack_4c = param_1[0xd];
        iStack_48 = param_1[0xe];
        iStack_44 = param_1[0xf];
        iStack_40 = param_1[0x10];
        iStack_3c = param_1[0x11];
        iVar1 = FUN_00748514(&local_50,&DAT_01c230d0);
        param_1[0x12] = iVar1;
        goto LAB_01081ae8;
      }
      uVar7 = 4;
      break;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x14]) {
      case '\0':
        iVar1 = param_1[9];
        goto LAB_01081a34;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c204ac);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c204ac);
      case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_1[0x13]) {
        case '\0':
          goto switchD_0108144c_caseD_0;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230e0);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230e0);
        case '\x03':
          iVar1 = param_1[0x12];
        }
      }
LAB_01081ae8:
      local_220 = param_1 + 0x14;
      FUN_014b4c40(&local_1a0,iVar1,param_2);
      unaff_r7 = pppiStack_18c;
      if (((uint)local_1a0 & 1) == 0) {
        local_38 = local_198;
        local_34 = local_194;
        local_30 = pppiStack_190;
        local_2c = pppiStack_18c;
        piVar5 = (int *)param_1[0x12];
        if (*piVar5 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar8 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar8) goto LAB_01081b4c;
          *piVar5 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_01081b4c:
          (**(code **)(piVar5[2] + 0x10))();
        }
        if (local_38 == (int ***)0x0 && local_34 == (int ***)0x0) {
          uVar9 = (uint)local_30 >> 8 | (int)local_2c << 0x18;
          pppiVar2 = local_30;
          pppiVar6 = local_2c;
        }
        else {
          FUN_019a18a8(&local_1a0,0x28,"background task failed",0x16);
          pppiVar6 = local_19c;
          unaff_r7 = local_1a0;
          FUN_00b71c38(&local_38);
          uVar9 = (uint)unaff_r7 >> 8 | (int)pppiVar6 << 0x18;
          pppiVar2 = unaff_r7;
        }
        uVar10 = (uint)pppiVar2 & 0xff;
        *(undefined1 *)(param_1 + 0x13) = 1;
        if (uVar10 != 5) {
          FUN_0108800c(param_1 + 0xc);
          unaff_r7 = (int ***)0x0;
          *(undefined1 *)local_220 = 1;
          if (uVar10 != 4) {
            local_108 = (int ***)(uVar10 | uVar9 << 8);
            local_104 = (int ***)((uint)pppiVar6 & 0xffffff00 | uVar9 >> 0x18);
            unaff_r7 = (int ***)FUN_007afd78(&local_108);
          }
          goto LAB_0108170c;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x13) = 3;
        unaff_r7 = (int ***)&local_1a0;
      }
      *(undefined1 *)local_220 = 3;
      uVar7 = 5;
    }
LAB_01081be4:
    local_21c = (undefined1 *)((int)param_1 + 0x1e);
    bVar8 = true;
    *local_21c = uVar7;
LAB_01081724:
    if (bVar8) {
      *(undefined1 *)(param_1 + 0x39) = 3;
      uVar3 = 1;
      goto LAB_01081750;
    }
    FUN_01080ff0(param_1);
  }
  *(undefined1 *)(param_1 + 0x39) = 1;
  uVar3 = 0;
LAB_01081750:
  return CONCAT44(unaff_r7,uVar3);
}

