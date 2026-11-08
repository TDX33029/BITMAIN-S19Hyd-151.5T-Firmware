// FUN_00934cc0 @ 00934cc0 size=1516 calls_out=5 calls_in=0
// strings: 

void FUN_00934cc0(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint in_r12;
  uint extraout_r12;
  int iVar15;
  uint extraout_r12_00;
  undefined4 unaff_lr;
  int iVar16;
  int *local_10c;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 auStack_c8 [6];
  uint local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60 [6];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar8 = *param_2;
    iVar11 = param_2[1];
    uVar13 = 0x80000007;
    uVar10 = 0;
    param_2[2] = iVar11;
    iVar2 = *(int *)(iVar11 + 0x10);
    iVar4 = *(int *)(iVar2 + 0x40);
    if (iVar4 == 4) {
      if (*(int *)(*(int *)(iVar2 + 0x3c) + 8) == 0x656d616e) {
        param_2[4] = iVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar11;
        goto LAB_00934e5c;
      }
    }
    else if (iVar4 == 8) {
      unaff_lr = 0x9351f8;
      iVar2 = thunk_FUN_01bed842(*(int *)(iVar2 + 0x3c) + 8,&DAT_00571190,8);
      in_r12 = extraout_r12_00;
      if (iVar2 == 0) {
        param_2[4] = iVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar11;
        goto LAB_00934da0;
      }
    }
    else if (iVar4 == 7) {
      unaff_lr = 0x934d4c;
      iVar2 = thunk_FUN_01bed842(*(int *)(iVar2 + 0x3c) + 8,&DAT_005325f1,7);
      in_r12 = extraout_r12;
      if (iVar2 == 0) {
        param_2[4] = iVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar11;
        goto LAB_00934e18;
      }
    }
    goto LAB_0093519c;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c223e8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c223e8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar11 = param_2[5];
LAB_00934e18:
      param_2[6] = iVar8;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223e8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223e8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223e8);
      }
      iVar8 = param_2[6];
    }
    piVar3 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar9 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar7 = param_2 + 4;
    *piVar7 = iVar8;
    iVar8 = piVar3[8];
    iVar14 = piVar3[4];
    iVar11 = piVar3[5];
    iVar2 = piVar3[6];
    iVar12 = piVar3[7];
    iVar4 = piVar3[1];
    iVar15 = piVar3[2];
    iVar16 = piVar3[3];
    *piVar9 = *piVar3;
    param_2[6] = iVar4;
    param_2[7] = iVar15;
    param_2[8] = iVar16;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar11;
    param_2[0xb] = iVar2;
    param_2[0xc] = iVar12;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    iVar11 = piVar3[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar7;
    param_2[0xf] = (int)piVar9;
    param_2[0x10] = iVar11;
LAB_00934fec:
    iVar8 = *piVar7;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar8;
    param_2[0x12] = (int)piVar9;
    param_2[0x13] = iVar11;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar7 = (int *)param_2[0xe];
      piVar9 = (int *)param_2[0xf];
      iVar11 = param_2[0x10];
      goto LAB_00934fec;
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
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar8 = param_2[0x11];
    }
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar11 = param_2[5];
LAB_00934e5c:
      param_2[6] = iVar8;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223e8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223e8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223e8);
      }
      iVar8 = param_2[6];
    }
    local_10c = param_2 + 4;
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8 + 0xc;
    iVar11 = piVar7[5];
    iVar2 = piVar7[4];
    iVar14 = piVar7[6];
    iVar4 = piVar7[7];
    iVar8 = piVar7[8];
    iVar12 = piVar7[1];
    iVar15 = piVar7[2];
    iVar16 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar12;
    param_2[7] = iVar15;
    param_2[8] = iVar16;
    param_2[9] = iVar2 + 0x20;
    param_2[10] = iVar11;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar4;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    iVar8 = piVar7[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)local_10c;
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar8;
  case '\x06':
    FUN_011adb38(&local_b0,param_2 + 0xe);
    if (local_b0 == 2) {
      *param_1 = 2;
      uVar1 = 6;
      goto LAB_009351d4;
    }
    local_e8 = local_a4;
    uStack_e4 = uStack_a0;
    uStack_e0 = local_9c;
    puVar6 = &local_d8;
    local_d8 = local_94;
    uStack_d4 = local_90;
    uStack_d0 = uStack_8c;
    uStack_cc = uStack_88;
    puVar5 = auStack_c8;
    uVar13 = local_98;
    in_r12 = local_a8;
    unaff_lr = local_ac;
    goto LAB_0093515c;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar8 = param_2[4];
      iVar11 = param_2[5];
LAB_00934da0:
      param_2[6] = iVar8;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223e8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223e8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223e8);
      }
      iVar8 = param_2[6];
    }
    local_10c = param_2 + 4;
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar8 + 0x18;
    iVar11 = piVar7[5];
    iVar2 = piVar7[4];
    iVar12 = piVar7[6];
    iVar14 = piVar7[7];
    iVar8 = piVar7[8];
    iVar4 = piVar7[1];
    iVar15 = piVar7[2];
    iVar16 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar4;
    param_2[7] = iVar15;
    param_2[8] = iVar16;
    param_2[9] = iVar2 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar8;
    param_2[10] = iVar11;
    param_2[0xb] = iVar12;
    param_2[0xc] = iVar14;
    iVar8 = piVar7[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)local_10c;
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar8;
  case '\b':
    FUN_011adb38(&local_b0,param_2 + 0xe);
    if (local_b0 == 2) {
      *param_1 = 2;
      uVar1 = 8;
      goto LAB_009351d4;
    }
    local_e8 = local_a4;
    uStack_e4 = uStack_a0;
    uStack_e0 = local_9c;
    puVar6 = &local_70;
    local_70 = local_94;
    uStack_6c = local_90;
    uStack_68 = uStack_8c;
    local_64 = uStack_88;
    puVar5 = local_60;
    uVar13 = local_98;
    in_r12 = local_a8;
    unaff_lr = local_ac;
LAB_0093515c:
    *puVar5 = local_84;
    puVar5[1] = uStack_80;
    puVar5[2] = uStack_7c;
    puVar5[3] = uStack_78;
    puVar5[4] = uStack_74;
    if ((local_b0 & 1) == 0) {
      local_48 = *puVar6;
      uStack_44 = puVar6[1];
      uStack_40 = puVar6[2];
      local_3c = puVar6[3];
      local_38 = puVar6[4];
      uStack_34 = puVar6[5];
      uStack_30 = puVar6[6];
      goto LAB_00935198;
    }
    local_48 = *puVar6;
    uStack_44 = puVar6[1];
    uStack_40 = puVar6[2];
    local_3c = puVar6[3];
    uVar10 = 1;
    local_38 = puVar6[4];
    uStack_34 = puVar6[5];
    uStack_30 = puVar6[6];
    uStack_2c = puVar6[7];
    uStack_28 = puVar6[8];
    goto LAB_0093519c;
  }
  unaff_lr = 0x93501c;
  FUN_006666fc(&local_b0,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
  puVar5 = (undefined4 *)((uint)&local_b0 | 4);
  uVar13 = 0x80000002;
  local_e8 = *puVar5;
  uStack_e4 = puVar5[1];
  uStack_e0 = puVar5[2];
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  local_48 = local_9c;
  uStack_44 = local_98;
  uStack_40 = local_94;
  local_3c = local_90;
  local_38 = uStack_8c;
  uStack_34 = uStack_88;
  uStack_30 = local_84;
  in_r12 = local_b0;
LAB_00935198:
  uVar10 = 0;
LAB_0093519c:
  *param_1 = uVar10;
  param_1[1] = unaff_lr;
  param_1[2] = in_r12;
  param_1[3] = local_e8;
  param_1[4] = uStack_e4;
  param_1[5] = uStack_e0;
  param_1[6] = uVar13;
  param_1[7] = local_48;
  param_1[8] = uStack_44;
  param_1[9] = uStack_40;
  param_1[10] = local_3c;
  param_1[0xb] = local_38;
  param_1[0xc] = uStack_34;
  param_1[0xd] = uStack_30;
  param_1[0xe] = uStack_2c;
  param_1[0xf] = uStack_28;
  uVar1 = 1;
LAB_009351d4:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

