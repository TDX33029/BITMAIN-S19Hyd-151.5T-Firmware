// FUN_006ff5dc @ 006ff5dc size=2864 calls_out=30 calls_in=3
// strings: internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006ff5dc(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  int *extraout_r2_02;
  int *extraout_r2_03;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int **ppiVar16;
  undefined4 uVar17;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined4 *extraout_r12_01;
  undefined4 *extraout_r12_02;
  undefined4 *extraout_r12_03;
  undefined4 *extraout_r12_04;
  int *piVar18;
  undefined8 uVar19;
  int local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  int *local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int *local_1a4;
  int *local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int *local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int *local_174;
  int *local_170;
  int *local_16c;
  int *local_168;
  int *local_164;
  int *local_160;
  int *local_15c;
  int *local_158;
  int *local_154;
  int **local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  int iStack_140;
  int *local_138;
  int *local_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  int **local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int local_114;
  int iStack_110;
  int iStack_10c;
  int *local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  int *local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int *local_ec;
  int **local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  undefined4 local_d8;
  int local_d4;
  int *local_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  undefined4 local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int *local_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *local_58;
  int *local_54;
  int *local_50;
  int *piStack_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *piStack_3c;
  int *local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar9 = *param_2;
  iVar12 = param_2[4];
  uVar19 = FUN_0070093c(param_3,uVar9,iVar12);
  uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
  ppiVar16 = (int **)param_2[3];
  uVar10 = param_2[1];
  uVar17 = param_2[2];
  uVar4 = FUN_006fb3b4(uVar9,iVar12);
  FUN_006fb414(&local_b0,uVar9,uVar10,uVar17,ppiVar16,iVar12 + 1,uVar4);
  FUN_006fa500(&local_1e4,&local_b0);
  uVar5 = FUN_006fb3b4(local_1e4,local_1d4);
  if (*(uint *)(local_1e4 + 0x10) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,*(uint *)(local_1e4 + 0x10),&DAT_01c06500);
  }
  pcVar7 = (char *)(*(int *)(local_1e4 + 0xc) + uVar5 * 0x14);
  if (*pcVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06510);
  }
  bVar1 = pcVar7[1];
  if (0x10 < bVar1 - 0x31) {
switchD_006ff6a8_caseD_32:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c064d0);
  }
  piVar11 = param_1 + 2;
  switch(bVar1) {
  case 0x31:
    piVar18 = (int *)0x6ff700;
    FUN_006fdff4(&local_b0,&local_1e4,param_3);
    if (local_b0 != (int *)&DAT_00000009) {
      param_1[3] = local_a8;
      param_1[4] = local_a4;
      param_1[5] = local_a0;
      param_1[6] = local_9c;
      param_1[7] = local_98;
      param_1[8] = local_94;
      *param_1 = 1;
      param_1[1] = local_b0;
      param_1[2] = local_ac;
      return;
    }
    local_128 = (int *)0x80000001;
    local_12c = local_94;
    local_120 = (int *)extraout_r3;
    piVar14 = local_a0;
    param_3 = local_9c;
    piVar11 = local_98;
    local_11c = extraout_r12;
    break;
  default:
    goto switchD_006ff6a8_caseD_32;
  case 0x36:
    piVar18 = (int *)0x6ff848;
    FUN_006fe3a0(&local_b0,&local_1e4,param_3);
    if (local_b0 != (int *)&DAT_00000009) {
      param_1[7] = local_98;
      param_1[4] = local_a4;
      param_1[5] = local_a0;
      param_1[6] = local_9c;
      *piVar11 = (int)local_ac;
      param_1[3] = local_a8;
      param_1[8] = local_94;
      *param_1 = 1;
      param_1[1] = local_b0;
      return;
    }
    local_128 = (int *)0x80000002;
    local_12c = extraout_r2_01;
    local_120 = (int *)extraout_r3_02;
    piVar14 = local_a4;
    param_3 = local_a0;
    piVar11 = local_9c;
    local_11c = extraout_r12_02;
    break;
  case 0x3c:
    piVar18 = (int *)0x6ffc48;
    FUN_006ff124(&local_b0,&local_1e4,param_3);
    if (local_b0 != (int *)&DAT_00000009) {
      FUN_01bed4e2((int)param_1 + 0x11,(int)&local_a4 + 1,0x13);
      *piVar11 = (int)local_ac;
      param_1[3] = local_a8;
      *(undefined1 *)(param_1 + 4) = (undefined1)local_a4;
      *param_1 = 1;
      param_1[1] = local_b0;
      return;
    }
    local_128 = (int *)0x80000003;
    piVar14 = (int *)((uint)local_a4 & 0xff);
    local_12c = extraout_r2_02;
    local_120 = (int *)extraout_r3_03;
    local_11c = extraout_r12_03;
    break;
  case 0x3d:
    param_1[8] = 0x80000000;
    param_1[2] = (int)uVar19;
    *param_1 = 0;
    param_1[3] = uVar6;
    FUN_006f6e98(local_1e4,local_1d8);
    return;
  case 0x3e:
    piVar18 = (int *)0x6ff818;
    FUN_006fdf4c(&local_b0,&local_1e4,param_3);
    if (local_b0 != (int *)&DAT_00000009) {
      param_1[6] = local_9c;
      param_1[7] = local_98;
      param_1[8] = local_94;
      param_1[4] = local_a4;
      *piVar11 = (int)local_ac;
      param_1[3] = local_a8;
      param_1[5] = local_a0;
      *param_1 = 1;
      param_1[1] = local_b0;
      return;
    }
    local_128 = (int *)&DAT_80000005;
    local_12c = extraout_r2_00;
    local_120 = (int *)extraout_r3_01;
    piVar14 = local_a4;
    param_3 = local_a0;
    local_11c = extraout_r12_01;
    break;
  case 0x3f:
    uVar4 = FUN_006fb3b4(local_1e4,local_1d4);
    FUN_006fb414(&local_1c0,local_1e4,local_1e0,local_1dc,local_1d8,local_1d4 + 1,uVar4);
    local_190 = (int *)0x9;
    local_170 = local_1c0;
    local_16c = (int *)uStack_1bc;
    local_168 = (int *)uStack_1b8;
    local_164 = (int *)local_1b4;
    local_160 = (int *)local_1b0;
    local_15c = (int *)uStack_1ac;
    local_158 = (int *)uStack_1a8;
    local_150 = &local_190;
    ppiVar16 = &local_138;
    local_1a4 = param_3;
    local_154 = param_3;
    FUN_006f750c(ppiVar16);
    if (local_128 == (int *)0x80000007) {
      piVar18 = (int *)0x6ff7f0;
      FUN_006f6e98(local_170,local_164);
      param_3 = (int *)&DAT_00000008;
      piVar11 = (int *)0x0;
      local_12c = extraout_r2;
      local_120 = (int *)extraout_r3_00;
      piVar14 = (int *)0x0;
      local_11c = extraout_r12_00;
    }
    else {
      local_b0 = local_138;
      local_ac = local_134;
      local_a8 = local_130;
      local_a4 = local_12c;
      local_a0 = local_128;
      local_9c = (int *)local_124;
      local_98 = local_120;
      local_94 = local_11c;
      local_90 = local_118;
      local_8c = local_114;
      iStack_88 = iStack_110;
      iStack_84 = iStack_10c;
      param_3 = (int *)FUN_01298504(0xc0,8);
      if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0xc0);
      }
      *param_3 = (int)local_138;
      param_3[1] = (int)local_134;
      param_3[2] = (int)local_130;
      param_3[3] = (int)local_12c;
      param_3[4] = (int)local_128;
      param_3[5] = (int)local_124;
      ppiVar16 = (int **)&DAT_00000030;
      param_3[6] = (int)local_120;
      param_3[7] = (int)local_11c;
      param_3[8] = (int)local_118;
      param_3[9] = local_114;
      param_3[10] = iStack_110;
      param_3[0xb] = iStack_10c;
      local_e4 = (int *)&SUB_00000004;
      local_dc = (int *)&DAT_00000001;
      local_108 = local_170;
      local_104 = local_16c;
      uStack_100 = local_168;
      local_fc = local_164;
      local_f8 = local_160;
      uStack_f4 = local_15c;
      uStack_f0 = local_158;
      local_ec = local_154;
      local_e8 = local_150;
      local_e0 = param_3;
      while (piVar11 = local_dc, FUN_006f750c(&local_58,&local_108), local_48 != (int *)0x80000007)
      {
        local_b0 = local_58;
        local_ac = local_54;
        local_a8 = local_50;
        local_a4 = piStack_4c;
        local_a0 = local_48;
        local_9c = local_44;
        local_98 = local_40;
        local_94 = piStack_3c;
        local_90 = local_38;
        local_8c = iStack_34;
        iStack_88 = iStack_30;
        iStack_84 = iStack_2c;
        if (piVar11 == local_e4) {
          FUN_006520b4(&local_e4,piVar11,1,8,0x30);
          param_3 = local_e0;
        }
        puVar8 = (undefined4 *)((int)param_3 + (int)ppiVar16);
        local_dc = (int *)((int)piVar11 + 1);
        ppiVar16 = ppiVar16 + 0xc;
        *puVar8 = local_58;
        puVar8[1] = local_54;
        puVar8[2] = local_50;
        puVar8[3] = piStack_4c;
        puVar8[4] = local_48;
        puVar8[5] = local_44;
        puVar8[6] = local_40;
        puVar8[7] = piStack_3c;
        puVar8[8] = local_38;
        puVar8[9] = iStack_34;
        puVar8[10] = iStack_30;
        puVar8[0xb] = iStack_2c;
      }
      piVar18 = (int *)0x6ffe4c;
      FUN_006f6e98(local_108,local_fc);
      local_12c = extraout_r2_03;
      local_120 = (int *)extraout_r3_04;
      piVar14 = local_e4;
      local_11c = extraout_r12_04;
    }
    piVar13 = local_190;
    if (local_190 != (int *)0x9) {
      local_70 = local_180;
      piStack_6c = (int *)uStack_17c;
      piStack_68 = (int *)uStack_178;
      piStack_64 = local_174;
      FUN_00702d50(param_3,piVar11);
      FUN_0134aee0(piVar14,param_3,8,0x30);
      param_1[5] = local_70;
      param_1[6] = piStack_6c;
      param_1[7] = piStack_68;
      param_1[8] = piStack_64;
      *param_1 = 1;
      param_1[1] = piVar13;
      param_1[2] = local_18c;
      param_1[3] = local_188;
      param_1[4] = local_184;
      return;
    }
    local_128 = (int *)0x80000006;
    break;
  case 0x41:
    uVar4 = FUN_006fb3b4(local_1e4,local_1d4);
    FUN_006fb414(&local_190,local_1e4,local_1e0,local_1dc,local_1d8,local_1d4 + 1,uVar4);
    local_170 = (int *)&DAT_00000009;
    local_174 = param_3;
    FUN_012818a0(&local_b0);
    local_120 = (int *)0x0;
    local_128 = (int *)0x0;
    local_124 = (int **)&DAT_00000008;
    local_11c = &DAT_0056d238;
    local_118 = (int *)0x0;
    local_114 = 0;
    iStack_110 = 0;
    local_12c = local_a4;
    local_130 = local_a8;
    local_134 = local_ac;
    local_138 = local_b0;
    FUN_00701d30(&local_138,0);
    puVar8 = (undefined4 *)((uint)&local_190 | 4);
    local_e8 = &local_170;
    local_104 = *puVar8;
    uStack_100 = puVar8[1];
    local_108 = local_190;
    local_fc = local_184;
    local_f8 = local_180;
    uStack_f4 = uStack_17c;
    uStack_f0 = uStack_178;
    local_ec = local_174;
switchD_006ffb34_caseD_0:
    FUN_006fb748(&local_e4,&local_108);
    iVar12 = local_d4;
    uVar4 = local_d8;
    piVar18 = local_dc;
    piVar14 = local_e0;
    piVar11 = local_e4;
    if (local_e4 != (int *)0x0) {
      uVar9 = FUN_006fb3b4(local_e4,local_d4);
      FUN_006fb414(&local_1c0,piVar11,piVar14,piVar18,uVar4,iVar12 + 1,uVar9);
      FUN_006fb748(&local_58,&local_1c0);
      piVar11 = local_ec;
      if (local_58 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c06260);
      }
      local_70 = local_58;
      piStack_6c = local_54;
      piStack_68 = local_50;
      piStack_64 = piStack_4c;
      piStack_60 = local_48;
      FUN_006fc9e8(&local_b0,&local_70,local_ec);
      piVar18 = local_a0;
      piVar14 = local_a4;
      if (local_b0 != (int *)&DAT_00000009) {
        local_d0 = local_9c;
        piStack_cc = local_98;
        piStack_c8 = local_94;
        piVar11 = local_ac;
        piVar14 = local_b0;
        piVar18 = local_a8;
        piVar13 = local_a4;
        piVar15 = local_a0;
        goto LAB_006fff74;
      }
      FUN_006fb748(&local_58,&local_1c0);
      if (local_58 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c06270);
      }
      local_70 = local_58;
      piStack_6c = local_54;
      piStack_68 = local_50;
      piStack_64 = piStack_4c;
      piStack_60 = local_48;
      FUN_006ff5dc(&local_b0,&local_70,piVar11);
      if (local_b0 != (int *)&DAT_00000001) {
        piVar11 = local_a0;
        piVar13 = local_9c;
        local_d0 = local_98;
        piStack_cc = local_94;
        piStack_c8 = local_90;
        FUN_006f6e98(local_1c0,local_1b4);
        local_50 = local_d0;
        piStack_4c = piStack_cc;
        local_48 = piStack_c8;
        local_58 = piVar11;
        local_54 = piVar13;
        FUN_007017f4(&local_b0,&local_138,piVar14,piVar18,&local_58);
        if (local_a0 != (int *)0x80000007) {
          uVar5 = 7;
          if ((int)local_a0 < 0) {
            uVar5 = (uint)local_a0 ^ 0x80000000;
          }
          switch(uVar5) {
          case 0:
          case 1:
          case 3:
            break;
          case 2:
            FUN_0134bd64(local_b0,local_ac);
            break;
          case 4:
            (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
            break;
          case 5:
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *local_b0;
              bVar2 = (bool)hasExclusiveAccess(local_b0);
            } while (!bVar2);
            *local_b0 = iVar12 + -1;
            if (iVar12 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0070451c(local_b0,local_ac);
            }
            break;
          case 6:
            FUN_00702d50(local_ac,local_a8);
            FUN_0134aee0(local_b0,local_ac,8,0x30);
            break;
          default:
            if ((local_90 != (int *)0x0) && (local_90 + (int)local_90 + 1 != (int *)0xfffffffb)) {
              thunk_FUN_01be4678((int)local_94 - ((int)local_90 * 4 + 4));
            }
            piVar11 = local_9c;
            FUN_00702da0(local_9c,local_98);
            FUN_0134aee0(local_a0,piVar11,8,0x40);
          }
        }
        goto switchD_006ffb34_caseD_0;
      }
      local_d0 = local_98;
      piStack_cc = local_94;
      piStack_c8 = local_90;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar14,piVar18);
      }
      piVar11 = local_a8;
      piVar14 = local_ac;
      piVar18 = local_a4;
      piVar13 = local_a0;
      piVar15 = local_9c;
LAB_006fff74:
      FUN_006f6e98(local_1c0,local_1b4);
      FUN_006f6e10(&local_170);
      local_15c = local_d0;
      local_158 = piStack_cc;
      local_154 = piStack_c8;
      local_170 = piVar14;
      local_16c = piVar11;
      local_168 = piVar18;
      local_164 = piVar13;
      local_160 = piVar15;
    }
    FUN_006f6e98(local_108,local_fc);
    piVar3 = local_120;
    ppiVar16 = local_124;
    piVar15 = local_128;
    piVar13 = local_154;
    piVar18 = local_158;
    piVar14 = local_15c;
    piVar11 = local_170;
    local_148 = local_114;
    uStack_144 = iStack_110;
    iStack_140 = iStack_10c;
    if (local_170 != (int *)&DAT_00000009) {
      if ((local_118 != (int *)0x0) &&
         (iVar12 = (int)local_118 * 4 + 4, (int)local_118 + iVar12 != -5)) {
        thunk_FUN_01be4678((int)local_11c - iVar12);
      }
      FUN_00702da0(ppiVar16,piVar3);
      FUN_0134aee0(piVar15,ppiVar16,8,0x40);
      *param_1 = 1;
      param_1[1] = piVar11;
      param_1[2] = local_16c;
      param_1[3] = local_168;
      param_1[4] = local_164;
      param_1[5] = local_160;
      param_1[6] = piVar14;
      param_1[8] = piVar13;
      param_1[7] = piVar18;
      return;
    }
    local_1d0 = local_114;
    uStack_1cc = iStack_110;
    iStack_1c8 = iStack_10c;
    piVar14 = local_138;
    param_3 = local_134;
    piVar11 = local_130;
    piVar18 = local_118;
    break;
  }
  param_1[2] = (int)uVar19;
  param_1[9] = ppiVar16;
  param_1[10] = local_120;
  param_1[3] = uVar6;
  param_1[4] = piVar14;
  param_1[5] = param_3;
  param_1[6] = piVar11;
  param_1[0xb] = local_11c;
  param_1[7] = local_12c;
  param_1[8] = local_128;
  param_1[0xc] = piVar18;
  param_1[0xd] = local_1d0;
  param_1[0xe] = uStack_1cc;
  param_1[0xf] = iStack_1c8;
  *param_1 = 0;
  return;
}

