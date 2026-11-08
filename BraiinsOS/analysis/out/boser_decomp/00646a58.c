// FUN_00646a58 @ 00646a58 size=2116 calls_out=17 calls_in=1
// strings: Cannot save scheduler crontab: no path configured | # This file is automatically managed by the scheduler - DO NOT EDIT MANUALLY

undefined8 FUN_00646a58(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 uVar9;
  int *unaff_r7;
  undefined1 auStack_160 [152];
  int *local_c8;
  code *local_c4;
  int *local_c0;
  code *local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int *local_88;
  code *local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  code *pcStack_4c;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x39]) {
  case '\0':
    iVar3 = param_1[0x38];
    piVar6 = (int *)(iVar3 + 0x18);
    if (*piVar6 != -0x80000000) {
      *(undefined2 *)((int)param_1 + 0x1e) = 0x100;
      uVar9 = 1;
      param_1[5] = iVar3;
      param_1[6] = (int)piVar6;
LAB_00646b00:
      unaff_r7 = param_1 + 2;
      *(undefined1 *)(param_1 + 7) = uVar9;
      *param_1 = iVar3;
      param_1[1] = (int)piVar6;
      *(undefined1 *)((int)param_1 + 0x1d) = 0;
      FUN_019afd0c(unaff_r7,piVar6[1],piVar6[2],"tmp");
      *(undefined1 *)((int)param_1 + 0x75) = 0;
      param_1[0x1c] = (int)unaff_r7;
LAB_00646b44:
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
switchD_00646d1c_caseD_3:
      piVar6 = param_1 + 8;
      FUN_00616970(&local_c8,piVar6,param_2);
      if (((uint)local_c8 & 1) != 0) {
        uVar9 = 3;
        *(undefined1 *)((int)param_1 + 0x75) = 3;
        goto LAB_00647310;
      }
      FUN_00740564(piVar6);
      pcVar1 = local_84;
      piVar4 = local_88;
      *(undefined2 *)(param_1 + 0x1d) = 0x100;
      if (local_84 != (code *)0x0) {
        *(undefined1 *)((int)param_1 + 0x1d) = 0;
        iVar3 = *param_1;
        local_88 = local_c0;
        local_84 = local_bc;
        uStack_80 = local_b8;
        uStack_7c = uStack_b4;
        uStack_78 = uStack_b0;
        local_74 = uStack_ac;
        uStack_70 = local_a8;
        uStack_6c = uStack_a4;
        uStack_68 = uStack_a0;
        uStack_64 = uStack_9c;
        local_60 = local_98;
        uStack_5c = uStack_94;
        uStack_58 = uStack_90;
        uStack_54 = uStack_8c;
        piStack_50 = piVar4;
        pcStack_4c = pcVar1;
        iVar8 = param_1[7];
        FUN_01bed4e2(auStack_160,&local_c8,0x94);
        FUN_01bed4e2(piVar6,auStack_160,0x94);
        *(undefined1 *)(param_1 + 0x2e) = 0;
        *(char *)((int)param_1 + 0xb9) = (char)iVar8;
        param_1[0x2d] = iVar3;
        param_1[0x28] = iVar3;
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
        unaff_r7 = (int *)param_1[0x27];
        param_1[0x12] = param_1[0x22];
        param_1[0x13] = param_1[0x23];
        param_1[0x14] = param_1[0x24];
        param_1[0x15] = param_1[0x25];
        param_1[0x16] = param_1[0x26];
        param_1[0x17] = (int)unaff_r7;
        if ((char)iVar8 != '\0') goto LAB_00646ccc;
        goto LAB_00646eb0;
      }
      local_c8 = local_c0;
      local_c4 = local_bc;
      unaff_r7 = (int *)FUN_007afd78(&local_c8);
LAB_0064735c:
      bVar2 = false;
      *(undefined1 *)((int)param_1 + 0x1d) = 0;
      FUN_019bb7e0(param_1[2],param_1[3]);
      *(undefined1 *)((int)param_1 + 0x1e) = 1;
      goto LAB_00647374;
    }
    unaff_r7 = (int *)FUN_00667978("Cannot save scheduler crontab: no path configured",0x31);
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
      iVar3 = param_1[5];
      piVar6 = (int *)param_1[6];
      uVar9 = *(undefined1 *)((int)param_1 + 0x1f);
      goto LAB_00646b00;
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
        unaff_r7 = (int *)param_1[0x1c];
        goto LAB_00646b44;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2046c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2046c);
      }
      goto switchD_00646d1c_caseD_3;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x2e]) {
      case '\0':
        iVar3 = param_1[0x2d];
        param_1[0x28] = iVar3;
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
        unaff_r7 = (int *)param_1[0x27];
        param_1[0x12] = param_1[0x22];
        param_1[0x13] = param_1[0x23];
        param_1[0x14] = param_1[0x24];
        param_1[0x15] = param_1[0x25];
        param_1[0x16] = param_1[0x26];
        param_1[0x17] = (int)unaff_r7;
        if (*(char *)((int)param_1 + 0xb9) != '\x01') goto LAB_00646eb0;
LAB_00646ccc:
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
        goto switchD_00646d4c_caseD_4;
      case '\x05':
        goto switchD_00646d4c_caseD_5;
      case '\x06':
        goto switchD_00646d4c_caseD_6;
      case '\a':
        goto switchD_00646d4c_caseD_7;
      case '\b':
        goto switchD_00646d4c_caseD_8;
      case '\t':
        piVar6 = (int *)param_1[0x30];
        goto LAB_006471d8;
      }
      FUN_014b3814(&local_c8,param_1 + 0x30,param_2);
      if ((char)local_c8 == '\x05') {
        uVar9 = 3;
LAB_0064701c:
        *(undefined1 *)(param_1 + 0x2e) = uVar9;
        bVar2 = true;
      }
      else {
        if (((uint)local_c8 & 0xff) == 4) {
          param_1[0x30] = (int)(param_1 + 8);
          param_1[0x31] = (int)"\n";
          param_1[0x32] = 1;
switchD_00646d4c_caseD_4:
          FUN_014b3814(&local_c8,param_1 + 0x30,param_2);
          if ((char)local_c8 == '\x05') {
            uVar9 = 4;
            goto LAB_0064701c;
          }
          if (((uint)local_c8 & 0xff) != 4) {
            unaff_r7 = (int *)FUN_007afd78(&local_c8);
            goto LAB_006472a8;
          }
          iVar3 = param_1[0x28];
          if (*(int *)(iVar3 + 8) != 0) {
            param_1[0x30] = (int)(param_1 + 8);
            param_1[0x31] = (int)"\n";
            param_1[0x32] = 1;
switchD_00646d4c_caseD_5:
            FUN_014b3814(&local_c8,param_1 + 0x30,param_2);
            if ((char)local_c8 == '\x05') {
              uVar9 = 5;
              goto LAB_0064701c;
            }
            if (((uint)local_c8 & 0xff) != 4) {
              unaff_r7 = (int *)FUN_007afd78(&local_c8);
              goto LAB_006472a8;
            }
            iVar3 = param_1[0x28];
          }
LAB_00646eb0:
          piVar4 = *(int **)(iVar3 + 4);
          piVar7 = piVar4 + *(int *)(iVar3 + 8) * 0x34;
          param_1[0x29] = (int)piVar4;
          param_1[0x2a] = (int)piVar7;
          param_1[0x2b] = 0;
          while (piVar6 = param_1 + 8, piVar4 != piVar7) {
            iVar3 = param_1[0x2b];
            param_1[0x29] = (int)(piVar4 + 0x34);
            param_1[0x2b] = iVar3 + 1;
            param_1[0x2c] = (int)piVar4;
            if (iVar3 != 0) {
              param_1[0x30] = (int)piVar6;
              param_1[0x31] = (int)&DAT_00420454;
              param_1[0x32] = 2;
switchD_00646d4c_caseD_6:
              FUN_014b3814(&local_c8,param_1 + 0x30,param_2);
              if ((char)local_c8 == '\x05') {
                uVar9 = 6;
                goto LAB_0064701c;
              }
              if (((uint)local_c8 & 0xff) != 4) {
                unaff_r7 = (int *)FUN_007afd78(&local_c8);
                goto LAB_006472a8;
              }
              piVar4 = (int *)param_1[0x2c];
            }
            if (piVar4[0x31] != -0x80000000) {
              local_c0 = param_1 + 0x30;
              *local_c0 = (int)(piVar4 + 0x31);
              local_c4 = (code *)&DAT_0132b6a0;
              local_bc = (code *)&LAB_0193a90c;
              local_c8 = (int *)&DAT_01c1f068;
              unaff_r7 = &local_30;
              FUN_00664898(unaff_r7,&DAT_005ab6af,&local_c8);
              param_1[0x31] = local_30;
              param_1[0x32] = iStack_2c;
              param_1[0x33] = iStack_28;
              param_1[0x34] = (int)(param_1 + 8);
              param_1[0x35] = param_1[0x32];
              param_1[0x36] = param_1[0x33];
switchD_00646d4c_caseD_7:
              FUN_014b3814(&local_c8,param_1 + 0x34,param_2);
              if ((char)local_c8 == '\x05') {
                uVar9 = 7;
                goto LAB_0064701c;
              }
              if (((uint)local_c8 & 0xff) == 4) {
                FUN_019bb7e0(param_1[0x31],param_1[0x32]);
                piVar4 = (int *)param_1[0x2c];
                goto LAB_00647140;
              }
              unaff_r7 = (int *)FUN_007afd78(&local_c8);
              iVar3 = param_1[0x31];
              iVar8 = param_1[0x32];
LAB_00647250:
              FUN_019bb7e0(iVar3,iVar8);
              goto LAB_006472a8;
            }
LAB_00647140:
            local_bc = (code *)&LAB_00632348;
            local_c0 = piVar4 + 0x2e;
            local_c4 = FUN_01318fa0;
            unaff_r7 = &local_30;
            local_c8 = piVar4;
            FUN_00664898(unaff_r7,&DAT_005ab6af,&local_c8);
            param_1[0x30] = local_30;
            param_1[0x31] = iStack_2c;
            param_1[0x32] = iStack_28;
            param_1[0x33] = (int)(param_1 + 8);
            param_1[0x34] = param_1[0x31];
            param_1[0x35] = param_1[0x32];
switchD_00646d4c_caseD_8:
            FUN_014b3814(&local_c8,param_1 + 0x33,param_2);
            if ((char)local_c8 == '\x05') {
              uVar9 = 8;
              goto LAB_0064701c;
            }
            if (((uint)local_c8 & 0xff) != 4) {
              unaff_r7 = (int *)FUN_007afd78(&local_c8);
              iVar3 = param_1[0x30];
              iVar8 = param_1[0x31];
              goto LAB_00647250;
            }
            FUN_019bb7e0(param_1[0x30],param_1[0x31]);
            piVar7 = (int *)param_1[0x2a];
            piVar4 = (int *)param_1[0x29];
          }
          param_1[0x30] = (int)piVar6;
LAB_006471d8:
          FUN_019e6a68(&local_c8,piVar6 + 6,param_2);
          if ((char)local_c8 == '\x05') {
            uVar9 = 9;
            goto LAB_0064701c;
          }
          if (((uint)local_c8 & 0xff) != 4) {
            unaff_r7 = (int *)FUN_007afd78(&local_c8);
            goto LAB_006472a8;
          }
          unaff_r7 = (int *)0x0;
          FUN_005f649c(param_1 + 8);
        }
        else {
          unaff_r7 = (int *)FUN_007afd78(&local_c8);
LAB_006472a8:
          FUN_005f649c(param_1 + 8);
        }
        *(undefined1 *)(param_1 + 0x2e) = 1;
        bVar2 = false;
      }
      if (!bVar2) {
        FUN_005f0f88(param_1 + 8);
        if (unaff_r7 != (int *)0x0) goto LAB_0064735c;
        *(undefined1 *)(param_1 + 0x14) = 0;
        param_1[8] = (int)(param_1 + 2);
        param_1[9] = param_1[1];
        goto switchD_00646ac4_caseD_5;
      }
      uVar9 = 4;
      break;
    case 5:
switchD_00646ac4_caseD_5:
      FUN_00616e00(&local_c8,param_1 + 8,param_2);
      pcVar1 = local_c4;
      piVar6 = local_c8;
      if ((char)local_c8 != '\x05') {
        if ((char)param_1[0x14] == '\x03') {
          FUN_00b6bb40(param_1 + 0xc);
        }
        unaff_r7 = (int *)0x0;
        if (((uint)piVar6 & 0xff) != 4) {
          local_c8 = piVar6;
          local_c4 = pcVar1;
          unaff_r7 = (int *)FUN_007afd78(&local_c8);
        }
        goto LAB_0064735c;
      }
      uVar9 = 5;
    }
LAB_00647310:
    *(undefined1 *)((int)param_1 + 0x1e) = uVar9;
    bVar2 = true;
LAB_00647374:
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x39) = 3;
      uVar5 = 1;
      goto LAB_006473a0;
    }
    FUN_005fba14(param_1);
  }
  *(undefined1 *)(param_1 + 0x39) = 1;
  uVar5 = 0;
LAB_006473a0:
  return CONCAT44(unaff_r7,uVar5);
}

