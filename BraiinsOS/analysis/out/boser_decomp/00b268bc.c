// FUN_00b268bc @ 00b268bc size=2020 calls_out=8 calls_in=0
// strings: enabled

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b268bc(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *unaff_r9;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int *local_d0;
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar10 = param_2[1];
    uVar14 = 0x80000007;
    param_2[2] = iVar10;
    iVar12 = *param_2;
    iVar3 = *(int *)(iVar10 + 0x10);
    if (*(int *)(iVar3 + 0x40) == 4) {
      if (*(int *)(*(int *)(iVar3 + 0x3c) + 8) == 0x65646f6d) {
        param_2[4] = iVar12;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_00b26eb0;
      }
      if (*(int *)(*(int *)(iVar3 + 0x3c) + 8) == 0x6c6c6563) {
        param_2[4] = iVar12;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_00b26ab8;
      }
    }
    else if ((*(int *)(iVar3 + 0x40) == 7) &&
            (iVar3 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,"enabled",7), iVar3 == 0)) {
      param_2[4] = iVar12;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar10;
      goto LAB_00b26a3c;
    }
    goto LAB_00b26fa4;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12050);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12050);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar12 = param_2[4];
      iVar10 = param_2[5];
LAB_00b26a3c:
      param_2[6] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12050);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12050);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12050);
      }
      iVar12 = param_2[6];
    }
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar6 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar7 = param_2 + 4;
    *piVar7 = iVar12 + 0x10;
    iVar10 = piVar4[4];
    iVar3 = piVar4[5];
    iVar13 = piVar4[6];
    iVar17 = piVar4[7];
    iVar12 = piVar4[8];
    iVar11 = piVar4[1];
    iVar15 = piVar4[2];
    iVar16 = piVar4[3];
    *piVar6 = *piVar4;
    param_2[6] = iVar11;
    param_2[7] = iVar15;
    param_2[8] = iVar16;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar3;
    param_2[0xb] = iVar13;
    param_2[0xc] = iVar17;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    iVar12 = piVar4[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar7;
    param_2[0xf] = (int)piVar6;
    param_2[0x10] = iVar12;
LAB_00b26ba0:
    pbVar5 = (byte *)*piVar7;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (int)pbVar5;
    param_2[0x12] = (int)piVar6;
    param_2[0x13] = iVar12;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar7 = (int *)param_2[0xe];
      piVar6 = (int *)param_2[0xf];
      iVar12 = param_2[0x10];
      goto LAB_00b26ba0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21bcc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bcc);
      }
      pbVar5 = (byte *)param_2[0x11];
    }
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar12 = param_2[4];
      iVar10 = param_2[5];
LAB_00b26eb0:
      param_2[6] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12050);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12050);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12050);
      }
      iVar12 = param_2[6];
    }
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar6 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar7 = param_2 + 4;
    *piVar7 = iVar12 + 0x11;
    iVar10 = piVar4[4];
    iVar15 = piVar4[5];
    iVar13 = piVar4[6];
    iVar17 = piVar4[7];
    iVar12 = piVar4[8];
    iVar3 = piVar4[1];
    iVar11 = piVar4[2];
    iVar16 = piVar4[3];
    *piVar6 = *piVar4;
    param_2[6] = iVar3;
    param_2[7] = iVar11;
    param_2[8] = iVar16;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar15;
    param_2[0xb] = iVar13;
    param_2[0xc] = iVar17;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    iVar12 = piVar4[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar7;
    param_2[0xf] = (int)piVar6;
    param_2[0x10] = iVar12;
LAB_00b26f40:
    puVar8 = (undefined1 *)*piVar7;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (int)puVar8;
    param_2[0x12] = (int)piVar6;
    param_2[0x13] = iVar12;
    goto LAB_00b26f58;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar7 = (int *)param_2[0xe];
      piVar6 = (int *)param_2[0xf];
      iVar12 = param_2[0x10];
      goto LAB_00b26f40;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c12a68);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c12a68);
      }
      puVar8 = (undefined1 *)param_2[0x11];
    }
LAB_00b26f58:
    FUN_00b0544c(&local_d0,*puVar8);
    puVar9 = (undefined4 *)((uint)&local_d0 | 4);
    local_110 = *puVar9;
    uStack_10c = puVar9[1];
    uStack_108 = puVar9[2];
    local_130 = local_bc;
    uStack_12c = local_b8;
    uStack_128 = local_b4;
    local_124 = local_b0;
    uStack_120 = uStack_ac;
    uStack_11c = local_a8;
    uStack_118 = uStack_a4;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    unaff_r9 = local_d0;
    uVar14 = local_c0;
    goto LAB_00b26fa4;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar12 = param_2[4];
      iVar10 = param_2[5];
LAB_00b26ab8:
      param_2[6] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12050);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12050);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12050);
      }
      iVar12 = param_2[6];
    }
    piVar6 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    unaff_r9 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar7 = param_2 + 4;
    *piVar7 = iVar12;
    iVar13 = piVar6[4];
    iVar10 = piVar6[5];
    iVar16 = piVar6[6];
    iVar15 = piVar6[7];
    iVar12 = piVar6[8];
    iVar3 = piVar6[1];
    iVar11 = piVar6[2];
    iVar17 = piVar6[3];
    *unaff_r9 = *piVar6;
    param_2[6] = iVar3;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar13 + 0x20;
    param_2[10] = iVar10;
    param_2[0xb] = iVar16;
    param_2[0xc] = iVar15;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    iVar12 = piVar6[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)piVar7;
    param_2[0x31] = (int)unaff_r9;
    param_2[0x32] = iVar12;
LAB_00b26c70:
    piVar7 = (int *)*piVar7;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = (int)piVar7;
    param_2[0x2b] = (int)unaff_r9;
    param_2[0x2c] = iVar12;
LAB_00b26c8c:
    param_2[0x2d] = (int)unaff_r9;
    if (*piVar7 != -0x80000000) {
      param_2[0x26] = (int)piVar7;
      *(undefined1 *)(param_2 + 0x29) = 0;
      param_2[0x27] = (int)unaff_r9;
      param_2[0x28] = param_2[0x2c];
      goto switchD_00b26adc_caseD_3;
    }
    uVar14 = 0x80000000;
    goto LAB_00b26dd0;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x33]) {
    case '\0':
      piVar7 = (int *)param_2[0x30];
      unaff_r9 = (int *)param_2[0x31];
      iVar12 = param_2[0x32];
      goto LAB_00b26c70;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2e]) {
    case '\0':
      piVar7 = (int *)param_2[0x2a];
      unaff_r9 = (int *)param_2[0x2b];
      goto LAB_00b26c8c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
switchD_00b26adc_caseD_3:
    FUN_00b22b60(&local_d0,param_2 + 0xe,param_3);
    if (local_d0 == (int *)0x2) {
      *(undefined1 *)(param_2 + 0x2e) = 3;
      *(undefined1 *)(param_2 + 0x33) = 3;
      *param_1 = 2;
      uVar2 = 8;
      goto LAB_00b26fe0;
    }
    local_70 = local_c4;
    uStack_6c = local_c0;
    uStack_68 = local_bc;
    local_90 = local_b4;
    uStack_8c = local_b0;
    uStack_88 = uStack_ac;
    local_84 = local_a8;
    uStack_80 = uStack_a4;
    uStack_7c = uStack_a0;
    uStack_78 = uStack_9c;
    cVar1 = (char)param_2[0x29];
    bVar18 = cVar1 == '\x03';
    if (bVar18) {
      cVar1 = (char)param_2[0x24];
    }
    if (bVar18 && cVar1 == '\x03') {
      FUN_00b238c8(param_2 + 0xe);
    }
    unaff_r9 = local_c8;
    uVar14 = local_b8;
    if (((uint)local_d0 & 1) != 0) {
      local_60 = local_cc;
      local_5c = local_c8;
      local_58 = local_70;
      uStack_54 = uStack_6c;
      uStack_50 = uStack_68;
      local_4c = local_b8;
      uVar14 = 0x80000000;
      local_48 = local_90;
      uStack_44 = uStack_8c;
      uStack_40 = uStack_88;
      local_3c = local_84;
      uStack_38 = uStack_80;
      uStack_34 = uStack_7c;
      uStack_30 = uStack_78;
      local_28 = local_94;
      local_2c = local_98;
      FUN_00a20afc(*(undefined4 *)(param_2[0x2d] + 0x18));
    }
LAB_00b26dd0:
    uStack_108 = uStack_68;
    uStack_10c = uStack_6c;
    local_110 = local_70;
    uStack_118 = uStack_78;
    uStack_11c = uStack_7c;
    uStack_120 = uStack_80;
    local_124 = local_84;
    uStack_128 = uStack_88;
    uStack_12c = uStack_8c;
    local_130 = local_90;
    local_138 = param_2 + 0x33;
    *(undefined1 *)(param_2 + 0x2e) = 1;
    *(undefined1 *)local_138 = 1;
    FUN_00b2ba78(param_2 + 0xe);
    goto LAB_00b26fa4;
  }
  unaff_r9 = (int *)(uint)*pbVar5;
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  uVar14 = 0x80000003;
LAB_00b26fa4:
  *param_1 = 0;
  param_1[2] = unaff_r9;
  param_1[3] = local_110;
  param_1[4] = uStack_10c;
  param_1[5] = uStack_108;
  param_1[6] = uVar14;
  param_1[7] = local_130;
  param_1[8] = uStack_12c;
  param_1[9] = uStack_128;
  param_1[10] = local_124;
  param_1[0xb] = uStack_120;
  param_1[0xc] = uStack_11c;
  param_1[0xd] = uStack_118;
  uVar2 = 1;
LAB_00b26fe0:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

