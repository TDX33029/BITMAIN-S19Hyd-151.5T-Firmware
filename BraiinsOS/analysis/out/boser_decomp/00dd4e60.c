// FUN_00dd4e60 @ 00dd4e60 size=1284 calls_out=6 calls_in=0
// strings: 

void FUN_00dd4e60(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  uint unaff_lr;
  undefined4 uVar11;
  undefined4 *local_a0;
  int local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  uint local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar5 = *param_2;
    iVar7 = param_2[1];
    param_2[2] = iVar7;
    bVar1 = FUN_00a21f3c(*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x40));
    if (bVar1 != 2) {
      *(undefined1 *)(param_2 + 7) = 0;
      param_2[4] = uVar5;
      param_2[5] = iVar7;
      if ((bVar1 & 1) == 0) goto LAB_00dd4f60;
LAB_00dd4f44:
      param_2[8] = uVar5;
      *(undefined1 *)(param_2 + 0xd) = 0;
      param_2[9] = iVar7;
      param_2[6] = iVar7;
LAB_00dd50f8:
      param_2[10] = uVar5;
      param_2[0xb] = iVar7;
      *(undefined1 *)((int)param_2 + 0x31) = 0;
switchD_00dd5220_caseD_0:
      *(undefined1 *)(param_2 + 0xc) = 0;
LAB_00dd510c:
      puVar4 = param_2 + 8;
      puVar3 = (undefined4 *)param_2[6];
      *(undefined1 *)((int)param_2 + 0x6f) = 1;
      *(undefined1 *)(param_2 + 0xd) = 1;
      *(undefined2 *)(param_2 + 0xc) = 0x101;
      unaff_r11 = puVar3[4];
      local_60 = puVar3[5];
      uVar10 = puVar3[6];
      uVar9 = puVar3[7];
      bVar1 = *(byte *)(puVar3 + 8);
      unaff_lr = (uint)bVar1;
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar8 = puVar3[3];
      *puVar4 = *puVar3;
      param_2[9] = uVar5;
      param_2[10] = uVar6;
      param_2[0xb] = uVar8;
      param_2[0xc] = unaff_r11 + 0x20;
      param_2[0xd] = local_60;
      param_2[0xe] = uVar10;
      param_2[0xf] = uVar9;
      *(byte *)(param_2 + 0x10) = bVar1;
      uVar5 = puVar3[4];
      *(undefined1 *)(param_2 + 0x19) = 0;
      puVar3 = param_2 + 0x1a;
      param_2[0x11] = puVar3;
      param_2[0x12] = puVar4;
      param_2[0x13] = uVar5;
LAB_00dd5180:
      param_2[0x14] = puVar4;
      iVar7 = -0x80000000;
      unaff_r11 = unaff_r11;
      local_5c = unaff_lr;
      if (*(char *)((int)puVar3 + 7) == '\0') {
        param_2[0x15] = puVar3;
        *(undefined1 *)(param_2 + 0x18) = 0;
        param_2[0x16] = puVar4;
        param_2[0x17] = param_2[0x13];
        goto LAB_00dd5260;
      }
      goto LAB_00dd52a4;
    }
    local_98 = 0;
    local_80 = -0x7ffffff9;
    local_60 = extraout_r12;
    local_5c = 0xdd4ea8;
    goto LAB_00dd52bc;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1e008);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1e008);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar5 = param_2[4];
      iVar7 = param_2[5];
LAB_00dd4f60:
      param_2[8] = uVar5;
      *(undefined1 *)(param_2 + 0xd) = 0;
      param_2[9] = iVar7;
      param_2[6] = iVar7;
LAB_00dd4fa4:
      param_2[10] = uVar5;
      param_2[0xb] = iVar7;
      *(undefined1 *)((int)param_2 + 0x31) = 0;
switchD_00dd51ec_caseD_0:
      *(undefined1 *)(param_2 + 0xc) = 0;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1e008);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1e008);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xd)) {
      case 0:
        uVar5 = param_2[8];
        iVar7 = param_2[9];
        goto LAB_00dd4fa4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e008);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e008);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x31)) {
      case 0:
        goto switchD_00dd51ec_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e008);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e008);
      case 3:
        if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1e008);
        }
      }
      break;
    case 4:
      goto switchD_00dd4ed4_caseD_4;
    }
    puVar3 = (undefined4 *)param_2[6];
    *(undefined1 *)(param_2 + 0xd) = 1;
    *(undefined2 *)(param_2 + 0xc) = 0x101;
    param_2[8] = 0x80000000;
    iVar7 = puVar3[4];
    uVar11 = puVar3[5];
    uVar9 = puVar3[6];
    uVar8 = puVar3[7];
    uVar2 = *(undefined1 *)(puVar3 + 8);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar10 = puVar3[3];
    param_2[0xb] = *puVar3;
    param_2[0xc] = uVar5;
    param_2[0xd] = uVar6;
    param_2[0xe] = uVar10;
    param_2[0xf] = iVar7 + 0x20;
    param_2[0x10] = uVar11;
    param_2[0x11] = uVar9;
    param_2[0x12] = uVar8;
    *(undefined1 *)(param_2 + 0x13) = uVar2;
    uVar5 = puVar3[4];
    *(undefined1 *)(param_2 + 0x1c) = 0;
    param_2[0x14] = param_2 + 8;
    param_2[0x15] = param_2 + 0xb;
    param_2[0x16] = uVar5;
switchD_00dd4ed4_caseD_4:
    local_a0 = param_2 + 7;
    FUN_00bd809c(&local_98,param_2 + 0x14);
    if (local_98 == 2) {
      *(undefined1 *)local_a0 = 4;
      *param_1 = 2;
      uVar2 = 3;
      goto LAB_00dd52fc;
    }
    local_38 = local_90;
    iStack_34 = iStack_8c;
    iStack_30 = local_88;
    iStack_2c = local_84;
    local_58 = local_7c;
    iStack_54 = local_78;
    iStack_50 = iStack_74;
    local_4c = local_70;
    iStack_48 = iStack_6c;
    iStack_44 = iStack_68;
    iStack_40 = iStack_64;
    if (param_2[8] != -0x80000000) {
      FUN_019bb7e0(param_2[8],param_2[9]);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar5 = param_2[4];
      iVar7 = param_2[5];
      goto LAB_00dd4f44;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1e008);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1e008);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xd)) {
      case 0:
        uVar5 = param_2[8];
        iVar7 = param_2[9];
        goto LAB_00dd50f8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e008);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e008);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x31)) {
      case 0:
        goto switchD_00dd5220_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e008);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e008);
      case 3:
        if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1e008);
        }
      }
      goto LAB_00dd510c;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x19)) {
    case 0:
      puVar3 = (undefined4 *)param_2[0x11];
      puVar4 = (undefined4 *)param_2[0x12];
      local_60 = in_r12;
      goto LAB_00dd5180;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    case 3:
      if (*(char *)(param_2 + 0x18) != '\0') {
        if (*(char *)(param_2 + 0x18) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1d430);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1d430);
      }
      puVar3 = (undefined4 *)param_2[0x15];
    }
LAB_00dd5260:
    FUN_011e64c8(&local_98,puVar3);
    local_38 = local_98;
    iStack_34 = local_94;
    iStack_30 = local_90;
    iStack_2c = iStack_8c;
    local_58 = local_84;
    iStack_54 = local_80;
    iStack_50 = local_7c;
    local_4c = local_78;
    iStack_48 = iStack_74;
    iStack_44 = local_70;
    iStack_40 = iStack_6c;
    *(undefined1 *)(param_2 + 0x18) = 1;
    iVar7 = local_88;
    local_60 = extraout_r12_00;
    local_5c = 0xdd5270;
LAB_00dd52a4:
    local_94 = unaff_r11;
    local_80 = iVar7;
    local_98 = 0;
    *(undefined1 *)(param_2 + 0x19) = 1;
  }
  local_a0 = param_2 + 7;
  *(undefined1 *)local_a0 = 1;
  unaff_r11 = local_94;
LAB_00dd52bc:
  *param_1 = local_98;
  param_1[1] = unaff_r11;
  param_1[2] = local_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  param_1[5] = iStack_2c;
  param_1[6] = local_80;
  param_1[7] = local_58;
  param_1[8] = iStack_54;
  param_1[9] = iStack_50;
  param_1[10] = local_4c;
  param_1[0xb] = iStack_48;
  param_1[0xc] = iStack_44;
  param_1[0xd] = iStack_40;
  uVar2 = 1;
  param_1[0xe] = local_60;
  param_1[0xf] = local_5c;
LAB_00dd52fc:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

