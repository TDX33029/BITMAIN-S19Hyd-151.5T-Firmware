// FUN_011a2a40 @ 011a2a40 size=4444 calls_out=18 calls_in=0
// strings: includeDeprecated

void FUN_011a2a40(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *extraout_r2;
  undefined4 uVar7;
  uint extraout_r3;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint unaff_r8;
  undefined4 uVar11;
  int unaff_r9;
  int unaff_r10;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 uVar14;
  int unaff_lr;
  bool bVar15;
  int local_180;
  uint local_17c;
  int local_178;
  undefined4 *local_174;
  int local_170;
  undefined4 *local_16c;
  uint local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  byte *local_158;
  undefined4 *local_150;
  uint local_14c;
  int local_148;
  int local_144;
  undefined4 *local_140;
  int local_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int local_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int local_11c;
  uint local_118;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int local_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 *puStack_c0;
  undefined4 *local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_68;
  undefined4 *local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 *local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    puVar9 = (undefined4 *)*param_2;
    iVar10 = param_2[1];
    param_2[2] = iVar10;
    uVar4 = FUN_006d1ef0(*(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar10 + 0x10) + 0x40));
    local_158 = (byte *)0x0;
    local_160 = extraout_r2;
    local_168 = extraout_r3;
    local_180 = -0x7ffffff9;
    in_r12 = extraout_r12;
    unaff_lr = 0x11a2aa0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar4) {
    case 0:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar9;
      param_2[5] = iVar10;
LAB_011a2bd8:
      param_2[8] = puVar9;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar10;
      param_2[6] = iVar10;
LAB_011a2d20:
      param_2[10] = puVar9;
      param_2[0xb] = iVar10;
      *(undefined1 *)(param_2 + 0xe) = 0;
LAB_011a2d2c:
      param_2[0xc] = puVar9;
      param_2[0xd] = 0;
LAB_011a2d34:
      uVar7 = *(undefined4 *)(puVar9[2] + 0x84);
      param_2[0x1a] = *(undefined4 *)(puVar9[2] + 0x80);
      puVar9 = (undefined4 *)param_2[6];
      param_2[0x1b] = uVar7;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar10 = puVar9[4];
      uVar8 = puVar9[5];
      uVar13 = puVar9[6];
      uVar12 = puVar9[7];
      uVar4 = *(undefined1 *)(puVar9 + 8);
      uVar7 = puVar9[1];
      uVar11 = puVar9[2];
      uVar14 = puVar9[3];
      param_2[8] = *puVar9;
      param_2[9] = uVar7;
      param_2[10] = uVar11;
      param_2[0xb] = uVar14;
      param_2[0xc] = iVar10 + 0x20;
      param_2[0xd] = uVar8;
      param_2[0xe] = uVar13;
      param_2[0xf] = uVar12;
      *(undefined1 *)(param_2 + 0x10) = uVar4;
      uVar7 = puVar9[4];
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[0x11] = param_2 + 0x1a;
      param_2[0x12] = param_2 + 8;
      param_2[0x13] = uVar7;
      goto switchD_011a2bbc_caseD_4;
    case 1:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar9;
      param_2[5] = iVar10;
LAB_011a31b0:
      param_2[8] = puVar9;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar10;
      param_2[6] = iVar10;
LAB_011a31cc:
      param_2[10] = puVar9;
      param_2[0xb] = iVar10;
      *(undefined1 *)(param_2 + 0xe) = 0;
LAB_011a31d8:
      param_2[0xc] = puVar9;
      param_2[0xd] = 0;
LAB_011a31e0:
      iVar10 = puVar9[2];
      uVar8 = *(undefined4 *)(iVar10 + 0x54);
      uVar7 = 0;
      if (*(int *)(iVar10 + 0x4c) != -0x80000000) {
        uVar7 = *(undefined4 *)(iVar10 + 0x50);
      }
      param_2[0x11] = uVar7;
      param_2[0x12] = uVar8;
      puVar9 = (undefined4 *)param_2[6];
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      iVar10 = puVar9[4];
      uVar14 = puVar9[5];
      uVar13 = puVar9[6];
      uVar12 = puVar9[7];
      uVar4 = *(undefined1 *)(puVar9 + 8);
      uVar7 = puVar9[1];
      uVar8 = puVar9[2];
      uVar11 = puVar9[3];
      param_2[8] = *puVar9;
      param_2[9] = uVar7;
      param_2[10] = uVar8;
      param_2[0xb] = uVar11;
      param_2[0xc] = iVar10 + 0x20;
      param_2[0xd] = uVar14;
      param_2[0xe] = uVar13;
      param_2[0xf] = uVar12;
      *(undefined1 *)(param_2 + 0x10) = uVar4;
      uVar7 = puVar9[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar7;
      goto switchD_011a2c0c_caseD_4;
    case 2:
      param_2[4] = puVar9;
      param_2[5] = iVar10;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011a32d8:
      param_2[8] = iVar10;
      param_2[6] = iVar10;
      param_2[9] = puVar9;
      *(undefined1 *)(param_2 + 0x10) = 0;
LAB_011a32f4:
      FUN_011a40e0(&local_68,iVar10,"includeDeprecated",0x11,&LAB_00be3e38);
      uVar3 = local_60;
      puVar9 = local_64;
      bVar2 = (byte)local_5c;
      if (local_68 == 2) {
        *(undefined1 *)(param_2 + 0xf) = 0;
        local_d0._0_3_ = (undefined3)((uint)local_5c >> 8);
        iVar10 = param_2[8];
        piVar5 = (int *)param_2[9];
        local_5c._0_1_ = (byte)local_5c & 1;
        *(byte *)((int)param_2 + 0x3d) = (byte)local_5c;
        param_2[0xd] = piVar5;
        param_2[0xe] = iVar10;
LAB_011a3360:
        *(byte *)((int)param_2 + 0x31) = (byte)local_5c;
        *(undefined1 *)(param_2 + 0xc) = 0;
        param_2[10] = piVar5;
        param_2[0xb] = iVar10;
        goto LAB_011a3370;
      }
      FUN_01bed4e2(&local_d0,(int)&local_5c + 1,0x2f);
      local_98 = ((uint)local_d0 & 0xffff) << 8;
      local_98 = CONCAT13(local_d0._2_1_,(undefined3)local_98);
      local_9c = uVar3;
      local_a0 = puVar9;
      local_98 = CONCAT31(local_98._1_3_,bVar2);
      FUN_01bed4e2(&local_58,(uint)&local_d0 | 3,0x2c);
      *(undefined1 *)(param_2 + 0x10) = 1;
      puVar9 = (undefined4 *)((uint)&local_68 | 4);
      uVar7 = param_2[6];
      *puVar9 = local_a0;
      puVar9[1] = local_9c;
      puVar9[2] = local_98;
      FUN_009ed8c0(&local_150,uVar7,&local_68);
      if (local_150 == (undefined4 *)0x2) {
        puVar6 = (undefined4 *)param_2[6];
        goto LAB_011a34a8;
      }
      local_160 = local_150;
      local_168 = local_14c;
      local_178 = local_148;
      local_16c = local_140;
      local_180 = local_13c;
      local_f0 = local_138;
      iStack_ec = iStack_134;
      iStack_e8 = iStack_130;
      local_e4 = local_12c;
      iStack_e0 = iStack_128;
      iStack_dc = iStack_124;
      iStack_d8 = iStack_120;
      local_170 = local_11c;
      local_17c = local_118;
      local_158 = (byte *)0x1;
      unaff_r9 = local_144;
LAB_011a3668:
      local_164 = param_2 + 7;
      local_174 = param_2 + 4;
      *(undefined1 *)local_164 = 1;
      FUN_011a4ad0(local_174);
      unaff_r8 = local_17c;
      unaff_r10 = local_178;
      in_r12 = local_16c;
      unaff_lr = local_170;
      break;
    case 3:
      param_2[4] = puVar9;
      param_2[5] = iVar10;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011a2f84:
      param_2[8] = puVar9;
      param_2[9] = iVar10;
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 0xf) = 0;
LAB_011a2fa0:
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[10] = puVar9;
      param_2[0xb] = iVar10;
LAB_011a2fb0:
      param_2[0xc] = puVar9;
      param_2[0xd] = 0;
LAB_011a2fb8:
      FUN_00be4a44(&local_68,*puVar9,puVar9[1],*(undefined4 *)(puVar9[2] + 0x8c),
                   *(undefined4 *)(puVar9[2] + 0x90));
      local_150 = local_64;
      local_14c = local_60;
      local_148 = local_5c;
      local_144 = local_58;
      local_140 = local_54;
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_68 != 3) {
        local_d0 = local_64;
        uStack_cc = local_60;
        iStack_c8 = local_5c;
        iStack_c4 = local_58;
        puStack_c0 = local_54;
        param_2[0x11] = local_68;
        *(undefined1 *)(param_2 + 0xf) = 1;
        *(undefined1 *)(param_2 + 0xe) = 1;
        param_2[0x12] = local_64;
        param_2[0x13] = local_60;
        param_2[0x14] = local_5c;
        param_2[0x15] = local_58;
        param_2[0x16] = local_54;
        puVar9 = (undefined4 *)param_2[6];
        iVar10 = puVar9[4];
        uVar14 = puVar9[5];
        uVar13 = puVar9[6];
        uVar12 = puVar9[7];
        uVar4 = *(undefined1 *)(puVar9 + 8);
        uVar7 = puVar9[1];
        uVar8 = puVar9[2];
        uVar11 = puVar9[3];
        param_2[8] = *puVar9;
        param_2[9] = uVar7;
        param_2[10] = uVar8;
        param_2[0xb] = uVar11;
        param_2[0xc] = iVar10 + 0x20;
        param_2[0xd] = uVar14;
        param_2[0xe] = uVar13;
        param_2[0xf] = uVar12;
        *(undefined1 *)(param_2 + 0x10) = uVar4;
        uVar7 = puVar9[4];
        *(undefined1 *)(param_2 + 0x33) = 0;
        param_2[0x30] = param_2 + 0x11;
        param_2[0x31] = param_2 + 8;
        param_2[0x32] = uVar7;
        goto switchD_011a2b44_caseD_4;
      }
      uVar4 = 3;
      *(undefined1 *)(param_2 + 0xf) = 3;
      *(undefined1 *)(param_2 + 0xe) = 3;
      goto LAB_011a30c4;
    case 4:
      param_2[4] = puVar9;
      param_2[5] = iVar10;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011a36a8:
      param_2[8] = puVar9;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar10;
      param_2[6] = iVar10;
LAB_011a36c8:
      param_2[10] = puVar9;
      param_2[0xb] = iVar10;
      *(undefined1 *)(param_2 + 0xe) = 0;
LAB_011a36d4:
      param_2[0xc] = puVar9;
      param_2[0xd] = 0;
LAB_011a36dc:
      local_158 = (byte *)(param_2 + 8);
      param_3 = (undefined4 *)param_2[6];
      iVar10 = *(int *)(puVar9[2] + 0x40);
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      *(bool *)(param_2 + 8) = iVar10 != -0x7fffffff;
      iVar10 = param_3[4];
      unaff_lr = param_3[5];
      unaff_r10 = param_3[6];
      unaff_r9 = param_3[7];
      bVar2 = *(byte *)(param_3 + 8);
      unaff_r8 = (uint)bVar2;
      uVar7 = param_3[1];
      uVar8 = param_3[2];
      uVar11 = param_3[3];
      param_2[9] = *param_3;
      param_2[10] = uVar7;
      param_2[0xb] = uVar8;
      param_2[0xc] = uVar11;
      param_2[0xd] = iVar10 + 0x20;
      param_2[0xe] = unaff_lr;
      param_2[0xf] = unaff_r10;
      param_2[0x10] = unaff_r9;
      *(byte *)(param_2 + 0x11) = bVar2;
      uVar7 = param_3[4];
      *(undefined1 *)(param_2 + 0x15) = 0;
      param_2[0x12] = local_158;
      param_2[0x13] = param_2 + 9;
      param_2[0x14] = uVar7;
      in_r12 = param_2;
      goto LAB_011a376c;
    case 5:
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = puVar9;
      param_2[5] = iVar10;
      param_4 = extraout_r3;
LAB_011a37a0:
      param_2[8] = puVar9;
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[9] = iVar10;
      param_2[6] = iVar10;
LAB_011a37b8:
      param_2[10] = puVar9;
      param_2[0xb] = iVar10;
      *(undefined1 *)(param_2 + 0xe) = 0;
LAB_011a37c4:
      param_2[0xc] = puVar9;
      param_2[0xd] = 0;
LAB_011a37cc:
      iVar10 = puVar9[2];
      uVar7 = 0;
      if (*(int *)(iVar10 + 0x40) != -0x7fffffff) {
        param_4 = *(uint *)(iVar10 + 0x48);
        uVar7 = 0;
        if (*(int *)(iVar10 + 0x40) != -0x80000000) {
          uVar7 = *(undefined4 *)(iVar10 + 0x44);
        }
      }
      param_2[0x11] = uVar7;
      puVar9 = (undefined4 *)param_2[6];
      param_2[0x12] = param_4;
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(undefined1 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      uVar7 = puVar9[5];
      iVar10 = puVar9[4];
      uVar12 = puVar9[6];
      uVar11 = puVar9[7];
      uVar4 = *(undefined1 *)(puVar9 + 8);
      uVar8 = puVar9[1];
      uVar13 = puVar9[2];
      uVar14 = puVar9[3];
      param_2[8] = *puVar9;
      param_2[9] = uVar8;
      param_2[10] = uVar13;
      param_2[0xb] = uVar14;
      param_2[0xc] = iVar10 + 0x20;
      param_2[0xd] = uVar7;
      param_2[0xe] = uVar12;
      param_2[0xf] = uVar11;
      *(undefined1 *)(param_2 + 0x10) = uVar4;
      uVar7 = puVar9[4];
      *(undefined1 *)(param_2 + 0x20) = 0;
      param_2[0x13] = param_2 + 0x11;
      param_2[0x14] = param_2 + 8;
      param_2[0x15] = uVar7;
      goto switchD_011a2b04_caseD_4;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21bac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21bac);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar9 = (undefined4 *)param_2[4];
      iVar10 = param_2[5];
      goto LAB_011a2bd8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar9 = (undefined4 *)param_2[8];
        iVar10 = param_2[9];
        goto LAB_011a2d20;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar9 = (undefined4 *)param_2[10];
        goto LAB_011a2d2c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bac);
        }
        puVar9 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011a2d34;
    }
switchD_011a2bbc_caseD_4:
    local_160 = param_2 + 7;
    FUN_00be5ca4(&local_68,param_2 + 0x11);
    if (local_68 == 2) {
      *(undefined1 *)local_160 = 4;
      *param_1 = 2;
      uVar4 = 3;
      goto LAB_011a393c;
    }
    goto LAB_011a38b4;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar9 = (undefined4 *)param_2[4];
      iVar10 = param_2[5];
      goto LAB_011a31b0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar9 = (undefined4 *)param_2[8];
        iVar10 = param_2[9];
        goto LAB_011a31cc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar9 = (undefined4 *)param_2[10];
        goto LAB_011a31d8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bac);
        }
        puVar9 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011a31e0;
    }
switchD_011a2c0c_caseD_4:
    local_160 = param_2 + 7;
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      uVar4 = 4;
      *(undefined1 *)local_160 = 4;
      *param_1 = 2;
      goto LAB_011a393c;
    }
    goto LAB_011a38b4;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar9 = (undefined4 *)param_2[4];
      iVar10 = param_2[5];
      goto LAB_011a32d8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x10)) {
      case 0:
        iVar10 = param_2[8];
        goto LAB_011a32f4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        piVar5 = (int *)param_2[0xd];
        iVar10 = param_2[0xe];
        local_5c._0_1_ = *(byte *)((int)param_2 + 0x3d);
        goto LAB_011a3360;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      case 3:
        if (*(char *)(param_2 + 0xc) != '\0') {
          if (*(char *)(param_2 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21bac);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bac);
        }
        piVar5 = (int *)param_2[10];
        iVar10 = param_2[0xb];
      }
LAB_011a3370:
      local_58 = *piVar5;
      local_54 = (undefined4 *)piVar5[1];
      local_68 = *(int *)(piVar5[2] + 0x1c);
      local_64 = (undefined4 *)(*(int *)(piVar5[2] + 0x20) * 0x6c + local_68);
      local_60 = (int)param_2 + 0x31;
      local_5c = iVar10;
      FUN_00df04dc(&local_94,&local_68);
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (local_94 != (undefined4 *)&DAT_80000000) {
        local_9c = local_90;
        local_a0 = local_94;
        local_98 = local_8c;
        puVar9 = (undefined4 *)((uint)&local_150 | 4);
        *(undefined1 *)(param_2 + 0xf) = 1;
        *(undefined1 *)(param_2 + 0x10) = 1;
        puVar6 = (undefined4 *)param_2[6];
        *puVar9 = local_94;
        puVar9[1] = local_90;
        puVar9[2] = local_8c;
LAB_011a34a8:
        local_158 = (byte *)(param_2 + 8);
        param_2[8] = local_14c;
        param_2[9] = local_148;
        param_2[10] = local_144;
        uVar7 = puVar6[5];
        iVar10 = puVar6[4];
        uVar14 = puVar6[6];
        uVar13 = puVar6[7];
        uVar4 = *(undefined1 *)(puVar6 + 8);
        uVar8 = puVar6[1];
        uVar11 = puVar6[2];
        uVar12 = puVar6[3];
        param_2[0xb] = *puVar6;
        param_2[0xc] = uVar8;
        param_2[0xd] = uVar11;
        param_2[0xe] = uVar12;
        param_2[0xf] = iVar10 + 0x20;
        param_2[0x12] = uVar13;
        param_2[0x10] = uVar7;
        param_2[0x11] = uVar14;
        *(undefined1 *)(param_2 + 0x13) = uVar4;
        uVar7 = puVar6[4];
        *(undefined1 *)(param_2 + 0x2f) = 0;
        param_2[0x2c] = local_158;
        param_2[0x2d] = param_2 + 0xb;
        param_2[0x2e] = uVar7;
        goto switchD_011a2b80_caseD_4;
      }
      uVar4 = 3;
      *(undefined1 *)(param_2 + 0x10) = 3;
      *(undefined1 *)(param_2 + 0xf) = 3;
      break;
    case 4:
switchD_011a2b80_caseD_4:
      FUN_011a4358(&local_68,param_2 + 0x14,param_3);
      unaff_r9 = local_58;
      local_158 = (byte *)local_68;
      if (local_68 != 2) {
        local_160 = local_64;
        local_168 = local_60;
        local_178 = local_5c;
        local_16c = local_54;
        local_110 = local_4c;
        iStack_10c = iStack_48;
        iStack_108 = iStack_44;
        local_104 = local_40;
        iStack_100 = iStack_3c;
        iStack_fc = iStack_38;
        iStack_f8 = iStack_34;
        local_170 = local_30;
        local_17c = local_2c;
        if (*(char *)(param_2 + 0x2f) == '\x03') {
          FUN_011c5fe8(param_2 + 0x14);
        }
        local_180 = local_50;
        local_f0 = local_110;
        iStack_ec = iStack_10c;
        iStack_e8 = iStack_108;
        local_e4 = local_104;
        iStack_e0 = iStack_100;
        iStack_dc = iStack_fc;
        iStack_d8 = iStack_f8;
        FUN_0132b958(param_2[8],param_2[9],4,0xc);
        goto LAB_011a3668;
      }
      uVar4 = 4;
    }
    *(undefined1 *)(param_2 + 7) = uVar4;
    *param_1 = 2;
    uVar4 = 5;
    goto LAB_011a393c;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar9 = (undefined4 *)param_2[4];
      iVar10 = param_2[5];
      goto LAB_011a2f84;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar9 = (undefined4 *)param_2[8];
        iVar10 = param_2[9];
        goto LAB_011a2fa0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar9 = (undefined4 *)param_2[10];
        goto LAB_011a2fb0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21bac);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bac);
        }
        puVar9 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011a2fb8;
    }
switchD_011a2b44_caseD_4:
    local_164 = param_2 + 7;
    local_174 = param_2 + 4;
    FUN_01192f60(&local_68,param_2 + 0x18,param_3);
    if (local_68 == 2) {
      uVar4 = 4;
LAB_011a30c4:
      local_164 = param_2 + 7;
      *(undefined1 *)local_164 = uVar4;
      *param_1 = 2;
      uVar4 = 6;
      goto LAB_011a393c;
    }
    local_158 = (byte *)local_68;
    local_88 = local_4c;
    iStack_84 = iStack_48;
    iStack_80 = iStack_44;
    local_7c = local_40;
    iStack_78 = iStack_3c;
    iStack_74 = iStack_38;
    iStack_70 = iStack_34;
    cVar1 = *(char *)(param_2 + 0x33);
    bVar15 = cVar1 == '\x03';
    if (bVar15) {
      cVar1 = *(char *)(param_2 + 0x2e);
    }
    if (bVar15 && cVar1 == '\x03') {
      FUN_01192a14(param_2 + 0x18);
    }
    if (param_2[0x11] != 0) {
      FUN_019bb7e0(param_2[0x12],param_2[0x13]);
    }
    local_f0 = local_88;
    iStack_ec = iStack_84;
    iStack_e8 = iStack_80;
    local_e4 = local_7c;
    iStack_e0 = iStack_78;
    iStack_dc = iStack_74;
    iStack_d8 = iStack_70;
    *(undefined1 *)local_164 = 1;
    FUN_011a4b28(local_174);
    local_160 = local_64;
    local_168 = local_60;
    unaff_r8 = local_2c;
    unaff_r9 = local_58;
    unaff_r10 = local_5c;
    local_180 = local_50;
    in_r12 = local_54;
    unaff_lr = local_30;
    break;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar9 = (undefined4 *)param_2[4];
      iVar10 = param_2[5];
      goto LAB_011a36a8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar9 = (undefined4 *)param_2[8];
        iVar10 = param_2[9];
        goto LAB_011a36c8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar9 = (undefined4 *)param_2[10];
        goto LAB_011a36d4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bac);
        }
        puVar9 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011a36dc;
    case 4:
      if (*(char *)(param_2 + 0x15) != '\0') {
        if (*(char *)(param_2 + 0x15) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21bcc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bcc);
      }
      local_158 = (byte *)param_2[0x12];
    }
LAB_011a376c:
    bVar2 = *local_158;
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined1 *)(param_2 + 0x15) = 1;
    local_158 = (byte *)0x0;
    local_160 = param_3;
    local_168 = (uint)bVar2;
    local_180 = -0x7ffffffd;
    break;
  case 8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      puVar9 = (undefined4 *)param_2[4];
      iVar10 = param_2[5];
      goto LAB_011a37a0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        puVar9 = (undefined4 *)param_2[8];
        iVar10 = param_2[9];
        goto LAB_011a37b8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        puVar9 = (undefined4 *)param_2[10];
        goto LAB_011a37c4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21bac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bac);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bac);
        }
        puVar9 = (undefined4 *)param_2[0xc];
      }
      goto LAB_011a37cc;
    }
switchD_011a2b04_caseD_4:
    local_160 = param_2 + 7;
    FUN_00be3ca4(&local_68,param_2 + 0x13);
    if (local_68 == 2) {
      *(undefined1 *)local_160 = 4;
      *param_1 = 2;
      uVar4 = 8;
      goto LAB_011a393c;
    }
LAB_011a38b4:
    local_160 = param_2 + 7;
    local_f0 = local_4c;
    iStack_ec = iStack_48;
    iStack_e8 = iStack_44;
    local_e4 = local_40;
    iStack_e0 = iStack_3c;
    iStack_dc = iStack_38;
    iStack_d8 = iStack_34;
    *(undefined1 *)local_160 = 1;
    local_160 = local_64;
    local_168 = local_60;
    unaff_r8 = local_2c;
    unaff_r9 = local_58;
    unaff_r10 = local_5c;
    local_180 = local_50;
    in_r12 = local_54;
    unaff_lr = local_30;
    local_158 = (byte *)local_68;
  }
  param_1[4] = unaff_r9;
  *param_1 = (int)local_158;
  param_1[1] = (int)local_160;
  param_1[2] = local_168;
  param_1[3] = unaff_r10;
  param_1[5] = (int)in_r12;
  param_1[6] = local_180;
  param_1[7] = local_f0;
  param_1[8] = iStack_ec;
  param_1[9] = iStack_e8;
  param_1[10] = local_e4;
  param_1[0xb] = iStack_e0;
  param_1[0xc] = iStack_dc;
  param_1[0xd] = iStack_d8;
  uVar4 = 1;
  param_1[0xe] = unaff_lr;
  param_1[0xf] = unaff_r8;
LAB_011a393c:
  *(undefined1 *)(param_2 + 3) = uVar4;
  return;
}

