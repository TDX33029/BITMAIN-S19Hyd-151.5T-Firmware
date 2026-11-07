// FUN_011ab3bc @ 011ab3bc size=2088 calls_out=6 calls_in=0
// strings: enabled

void FUN_011ab3bc(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_188;
  int *local_184;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar8 = *param_2;
    iVar11 = param_2[1];
    local_180 = 0x80000007;
    uVar6 = 0;
    param_2[2] = iVar11;
    iVar3 = *(int *)(iVar11 + 0x10);
    local_188 = *(int *)(iVar3 + 0x40) + -3;
    local_184 = (int *)param_4;
    switch(local_188) {
    case 0:
      uVar16 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,"url",3);
      local_188 = (int)((ulonglong)uVar16 >> 0x20);
      local_184 = (int *)extraout_r3;
      if ((int)uVar16 == 0) {
        param_2[4] = iVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar11;
        goto LAB_011ab508;
      }
      break;
    case 1:
      local_188 = 0x72657375;
      if (*(int *)(*(int *)(iVar3 + 0x3c) + 8) == 0x72657375) {
        param_2[4] = iVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar11;
        goto LAB_011ab548;
      }
      break;
    case 4:
      uVar16 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,"enabled",7);
      local_188 = (int)((ulonglong)uVar16 >> 0x20);
      local_184 = (int *)extraout_r3_00;
      if ((int)uVar16 == 0) {
        param_2[4] = iVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar11;
        goto LAB_011ab588;
      }
      break;
    case 5:
      uVar16 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,&DAT_00571120,8);
      local_188 = (int)((ulonglong)uVar16 >> 0x20);
      local_184 = (int *)extraout_r3_01;
      if ((int)uVar16 == 0) {
        param_2[4] = iVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar11;
        goto LAB_011ab4c8;
      }
    }
    goto switchD_011ab43c_caseD_2;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20d34);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20d34);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar11 = param_2[5];
LAB_011ab588:
      param_2[6] = iVar8;
      param_2[7] = iVar11;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d34);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d34);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d34);
      }
      iVar8 = param_2[6];
    }
    local_184 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8 + 0x54;
    iVar11 = piVar4[4];
    iVar14 = piVar4[5];
    iVar3 = piVar4[6];
    iVar12 = piVar4[7];
    iVar8 = piVar4[8];
    iVar7 = piVar4[1];
    iVar9 = piVar4[2];
    iVar13 = piVar4[3];
    param_2[5] = *piVar4;
    param_2[6] = iVar7;
    param_2[7] = iVar9;
    param_2[8] = iVar13;
    param_2[0xb] = iVar3;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar14;
    param_2[0xc] = iVar12;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    iVar8 = piVar4[4];
    param_2[0x2b] = (int)(param_2 + 5);
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_184;
    param_2[0x2c] = iVar8;
  case '\x04':
    FUN_011a14b4(&local_d0,param_2 + 0xe,param_3);
    if (local_d0 == 2) {
      *param_1 = 2;
      uVar2 = 4;
      goto LAB_011abb88;
    }
    puVar5 = &local_150;
    local_188 = local_cc;
    puVar10 = &local_178;
    local_184 = (int *)local_c8;
    local_150 = local_c4;
    uStack_14c = uStack_c0;
    uStack_148 = uStack_bc;
    local_180 = local_b8;
    local_178 = local_b4;
    uStack_174 = uStack_b0;
    uStack_170 = uStack_ac;
    uStack_16c = uStack_a8;
    local_168 = local_a4;
    uStack_164 = uStack_a0;
    uStack_160 = uStack_9c;
    uStack_15c = uStack_98;
    uStack_158 = uStack_94;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar15 = cVar1 == '\x03';
      if (bVar15) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar15 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011aba58;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar11 = param_2[5];
LAB_011ab508:
      param_2[6] = iVar8;
      param_2[7] = iVar11;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d34);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d34);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d34);
      }
      iVar8 = param_2[6];
    }
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8;
    iVar12 = piVar4[4];
    iVar14 = piVar4[5];
    iVar9 = piVar4[6];
    iVar7 = piVar4[7];
    iVar8 = piVar4[8];
    iVar11 = piVar4[1];
    iVar3 = piVar4[2];
    iVar13 = piVar4[3];
    param_2[5] = *piVar4;
    param_2[6] = iVar11;
    param_2[7] = iVar3;
    param_2[8] = iVar13;
    param_2[9] = iVar12 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar9;
    param_2[0xc] = iVar7;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    iVar8 = piVar4[4];
    param_2[0x2b] = (int)(param_2 + 5);
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2c] = iVar8;
    break;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar11 = param_2[5];
LAB_011ab548:
      param_2[6] = iVar8;
      param_2[7] = iVar11;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d34);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d34);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d34);
      }
      iVar8 = param_2[6];
    }
    local_184 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8 + 0x1c;
    iVar12 = piVar4[4];
    iVar14 = piVar4[5];
    iVar9 = piVar4[6];
    iVar7 = piVar4[7];
    iVar8 = piVar4[8];
    iVar11 = piVar4[1];
    iVar3 = piVar4[2];
    iVar13 = piVar4[3];
    param_2[5] = *piVar4;
    param_2[6] = iVar11;
    param_2[7] = iVar3;
    param_2[8] = iVar13;
    param_2[9] = iVar12 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar9;
    param_2[0xc] = iVar7;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    iVar8 = piVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_184;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar8;
  case '\b':
    FUN_011abd6c(&local_d0,param_2 + 0xe,param_3);
    if (local_d0 == 2) {
      *param_1 = 2;
      uVar2 = 8;
      goto LAB_011abb88;
    }
    puVar5 = &local_e0;
    local_188 = local_cc;
    puVar10 = &local_108;
    local_184 = (int *)local_c8;
    local_e0 = local_c4;
    uStack_dc = uStack_c0;
    uStack_d8 = uStack_bc;
    local_180 = local_b8;
    local_108 = local_b4;
    uStack_104 = uStack_b0;
    uStack_100 = uStack_ac;
    uStack_fc = uStack_a8;
    local_f8 = local_a4;
    uStack_f4 = uStack_a0;
    uStack_f0 = uStack_9c;
    uStack_ec = uStack_98;
    uStack_e8 = uStack_94;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar15 = cVar1 == '\x03';
      if (bVar15) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar15 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011aba58;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar11 = param_2[5];
LAB_011ab4c8:
      param_2[6] = iVar8;
      param_2[7] = iVar11;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d34);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d34);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d34);
      }
      iVar8 = param_2[6];
    }
    local_184 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8 + 0x38;
    iVar12 = piVar4[4];
    iVar14 = piVar4[5];
    iVar9 = piVar4[6];
    iVar7 = piVar4[7];
    iVar8 = piVar4[8];
    iVar11 = piVar4[1];
    iVar3 = piVar4[2];
    iVar13 = piVar4[3];
    param_2[5] = *piVar4;
    param_2[6] = iVar11;
    param_2[7] = iVar3;
    param_2[8] = iVar13;
    param_2[9] = iVar12 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar9;
    param_2[0xc] = iVar7;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    iVar8 = piVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_184;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar8;
  case '\n':
    FUN_011abd6c(&local_d0,param_2 + 0xe,param_3);
    if (local_d0 == 2) {
      *param_1 = 2;
      uVar2 = 10;
      goto LAB_011abb88;
    }
    puVar5 = &local_68;
    local_188 = local_cc;
    puVar10 = &local_90;
    local_184 = (int *)local_c8;
    local_68 = local_c4;
    uStack_64 = uStack_c0;
    uStack_60 = uStack_bc;
    local_180 = local_b8;
    local_90 = local_b4;
    uStack_8c = uStack_b0;
    uStack_88 = uStack_ac;
    local_84 = uStack_a8;
    local_80 = local_a4;
    uStack_7c = uStack_a0;
    uStack_78 = uStack_9c;
    uStack_74 = uStack_98;
    uStack_70 = uStack_94;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar15 = cVar1 == '\x03';
      if (bVar15) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar15 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011aba58;
  }
  FUN_011abd6c(&local_d0,param_2 + 0xe,param_3);
  if (local_d0 == 2) {
    *param_1 = 2;
    uVar2 = 6;
  }
  else {
    puVar5 = &local_118;
    local_188 = local_cc;
    puVar10 = &local_140;
    local_184 = (int *)local_c8;
    local_118 = local_c4;
    uStack_114 = uStack_c0;
    uStack_110 = uStack_bc;
    local_180 = local_b8;
    local_140 = local_b4;
    uStack_13c = uStack_b0;
    uStack_138 = uStack_ac;
    uStack_134 = uStack_a8;
    local_130 = local_a4;
    uStack_12c = uStack_a0;
    uStack_128 = uStack_9c;
    uStack_124 = uStack_98;
    uStack_120 = uStack_94;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar15 = cVar1 == '\x03';
      if (bVar15) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar15 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
LAB_011aba58:
    local_30 = *puVar5;
    uStack_2c = puVar5[1];
    uStack_28 = puVar5[2];
    if ((local_d0 & 1) == 0) {
      local_58 = *puVar10;
      uStack_54 = puVar10[1];
      uStack_50 = puVar10[2];
      uVar6 = 0;
      local_188 = puVar10[3];
      local_48 = puVar10[4];
      uStack_44 = puVar10[5];
      uStack_40 = puVar10[6];
      local_4c = local_188;
    }
    else {
      local_58 = *puVar10;
      uStack_54 = puVar10[1];
      uStack_50 = puVar10[2];
      local_4c = puVar10[3];
      uVar6 = 1;
      local_48 = puVar10[4];
      uStack_44 = puVar10[5];
      uStack_40 = puVar10[6];
      uStack_3c = puVar10[7];
      uStack_38 = puVar10[8];
    }
switchD_011ab43c_caseD_2:
    param_1[1] = local_188;
    param_1[2] = local_184;
    *param_1 = uVar6;
    param_1[3] = local_30;
    param_1[4] = uStack_2c;
    param_1[5] = uStack_28;
    param_1[6] = local_180;
    param_1[7] = local_58;
    param_1[8] = uStack_54;
    param_1[9] = uStack_50;
    param_1[10] = local_4c;
    param_1[0xb] = local_48;
    param_1[0xc] = uStack_44;
    param_1[0xd] = uStack_40;
    param_1[0xe] = uStack_3c;
    param_1[0xf] = uStack_38;
    uVar2 = 1;
  }
LAB_011abb88:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

