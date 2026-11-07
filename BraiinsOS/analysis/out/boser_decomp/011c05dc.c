// FUN_011c05dc @ 011c05dc size=1676 calls_out=6 calls_in=0
// strings: modeDefault | cooldownFanSpeed | runtimeLimitedTime

void FUN_011c05dc(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *in_r12;
  uint *extraout_r12;
  uint uVar14;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint unaff_lr;
  uint uVar15;
  bool bVar16;
  uint *local_d4;
  uint local_b0;
  uint *local_ac;
  uint local_a8;
  uint *local_a4;
  uint local_a0;
  uint *local_9c;
  uint local_98;
  uint *local_94;
  uint local_90;
  uint *puStack_8c;
  uint uStack_88;
  uint *local_84;
  uint uStack_80;
  uint *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint *local_70;
  uint uStack_6c;
  uint *puStack_68;
  uint local_64;
  uint *local_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint *local_48;
  uint uStack_44;
  uint *puStack_40;
  uint local_3c;
  uint *local_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    uVar8 = *param_2;
    puVar10 = (uint *)param_2[1];
    uVar12 = 0x80000007;
    uVar7 = 0;
    param_2[2] = (uint)puVar10;
    local_d4 = (uint *)puVar10[4];
    uVar4 = local_d4[0x10];
    if (uVar4 == 0x12) {
      unaff_lr = 0x11c0b80;
      local_d4 = (uint *)thunk_FUN_01bed842(local_d4[0xf] + 8,"runtimeLimitedTime",0x12);
      in_r12 = extraout_r12_01;
      if (local_d4 == (uint *)0x0) {
        param_2[4] = uVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (uint)puVar10;
        goto LAB_011c06f8;
      }
    }
    else if (uVar4 == 0x10) {
      unaff_lr = 0x11c0b44;
      local_d4 = (uint *)thunk_FUN_01bed842(local_d4[0xf] + 8,"cooldownFanSpeed",0x10);
      in_r12 = extraout_r12_00;
      if (local_d4 == (uint *)0x0) {
        param_2[4] = uVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (uint)puVar10;
        goto LAB_011c06bc;
      }
    }
    else if (uVar4 == 0xb) {
      unaff_lr = 0x11c066c;
      local_d4 = (uint *)thunk_FUN_01bed842(local_d4[0xf] + 8,"modeDefault",0xb);
      in_r12 = extraout_r12;
      if (local_d4 == (uint *)0x0) {
        param_2[4] = uVar8;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (uint)puVar10;
        goto LAB_011c0768;
      }
    }
    goto LAB_011c0b88;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20e04);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20e04);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar8 = param_2[4];
      puVar10 = (uint *)param_2[5];
LAB_011c0768:
      param_2[6] = uVar8;
      param_2[7] = (uint)puVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e04);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e04);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e04);
      }
      uVar8 = param_2[6];
    }
    puVar6 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar5 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    puVar10 = param_2 + 4;
    *puVar10 = uVar8 + 0x24;
    uVar8 = puVar6[8];
    uVar13 = puVar6[4];
    uVar12 = puVar6[5];
    uVar11 = puVar6[6];
    uVar9 = puVar6[7];
    uVar4 = puVar6[1];
    uVar14 = puVar6[2];
    uVar15 = puVar6[3];
    *puVar5 = *puVar6;
    param_2[6] = uVar4;
    param_2[7] = uVar14;
    param_2[8] = uVar15;
    param_2[9] = uVar13 + 0x20;
    param_2[10] = uVar12;
    param_2[0xb] = uVar11;
    *(char *)(param_2 + 0xd) = (char)uVar8;
    param_2[0xc] = uVar9;
    uVar8 = puVar6[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)puVar10;
    param_2[0xf] = (uint)puVar5;
    param_2[0x10] = uVar8;
LAB_011c0a78:
    puVar3 = (undefined1 *)*puVar10;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (uint)puVar3;
    param_2[0x12] = (uint)puVar5;
    param_2[0x13] = uVar8;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      puVar10 = (uint *)param_2[0xe];
      puVar5 = (uint *)param_2[0xf];
      uVar8 = param_2[0x10];
      goto LAB_011c0a78;
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
          FUN_013079f0(&DAT_01c22600);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22600);
      }
      puVar3 = (undefined1 *)param_2[0x11];
    }
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar8 = param_2[4];
      puVar10 = (uint *)param_2[5];
LAB_011c06f8:
      param_2[6] = uVar8;
      param_2[7] = (uint)puVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e04);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e04);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e04);
      }
      uVar8 = param_2[6];
    }
    local_d4 = param_2 + 4;
    puVar5 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar10 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar8 + 0x20;
    uVar8 = puVar5[8];
    uVar12 = puVar5[4];
    uVar13 = puVar5[5];
    uVar11 = puVar5[6];
    uVar9 = puVar5[7];
    uVar4 = puVar5[1];
    uVar14 = puVar5[2];
    uVar15 = puVar5[3];
    *puVar10 = *puVar5;
    param_2[6] = uVar4;
    param_2[7] = uVar14;
    param_2[8] = uVar15;
    param_2[9] = uVar12 + 0x20;
    *(char *)(param_2 + 0xd) = (char)uVar8;
    param_2[10] = uVar13;
    param_2[0xb] = uVar11;
    param_2[0xc] = uVar9;
    uVar8 = puVar5[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)local_d4;
    param_2[0xf] = (uint)puVar10;
    param_2[0x10] = uVar8;
LAB_011c09bc:
    local_d4 = (uint *)*local_d4;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (uint)local_d4;
    param_2[0x12] = (uint)puVar10;
    param_2[0x13] = uVar8;
    goto LAB_011c0b04;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_d4 = (uint *)param_2[0xe];
      puVar10 = (uint *)param_2[0xf];
      uVar8 = param_2[0x10];
      goto LAB_011c09bc;
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
          FUN_013079f0(&DAT_01c21c2c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c2c);
      }
      local_d4 = (uint *)param_2[0x11];
    }
LAB_011c0b04:
    unaff_lr = *local_d4;
    *(undefined1 *)(param_2 + 0x15) = 1;
    in_r12 = (uint *)0x0;
    *(undefined1 *)(param_2 + 0x14) = 1;
    uVar12 = 0x80000001;
    puVar10 = (uint *)0x0;
    uVar7 = 0;
    uVar8 = 0;
    goto LAB_011c0b88;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar8 = param_2[4];
      puVar10 = (uint *)param_2[5];
LAB_011c06bc:
      param_2[6] = uVar8;
      param_2[7] = (uint)puVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e04);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e04);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e04);
      }
      uVar8 = param_2[6];
    }
    local_d4 = param_2 + 4;
    puVar10 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar8;
    uVar12 = puVar10[5];
    uVar8 = puVar10[8];
    uVar4 = puVar10[4];
    uVar13 = puVar10[6];
    uVar11 = puVar10[7];
    uVar9 = puVar10[1];
    uVar14 = puVar10[2];
    uVar15 = puVar10[3];
    param_2[5] = *puVar10;
    param_2[6] = uVar9;
    param_2[7] = uVar14;
    param_2[8] = uVar15;
    param_2[9] = uVar4 + 0x20;
    param_2[10] = uVar12;
    param_2[0xb] = uVar13;
    param_2[0xc] = uVar11;
    *(char *)(param_2 + 0xd) = (char)uVar8;
    uVar8 = puVar10[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (uint)local_d4;
    param_2[0x2b] = (uint)(param_2 + 5);
    param_2[0x2c] = uVar8;
  case '\b':
    FUN_011a2318(&local_b0,param_2 + 0xe,param_3);
    if (local_b0 == 2) {
      *param_1 = 2;
      uVar2 = 8;
      goto LAB_011c0bb4;
    }
    local_70 = local_94;
    uStack_6c = local_90;
    puStack_68 = puStack_8c;
    local_64 = uStack_88;
    local_60 = local_84;
    uStack_5c = uStack_80;
    puStack_58 = puStack_7c;
    uStack_54 = uStack_78;
    uStack_50 = uStack_74;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar16 = cVar1 == '\x03';
      if (bVar16) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar16 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    uVar8 = local_a8;
    puVar10 = local_9c;
    uVar12 = local_98;
    in_r12 = local_a4;
    unaff_lr = local_a0;
    if ((local_b0 & 1) == 0) {
      local_48 = local_70;
      uStack_44 = uStack_6c;
      puStack_40 = puStack_68;
      local_d4 = &local_3c;
      local_3c = local_64;
      local_38 = local_60;
      uStack_34 = uStack_5c;
      puStack_30 = puStack_58;
      uVar7 = 0;
    }
    else {
      local_48 = local_70;
      uStack_44 = uStack_6c;
      puStack_40 = puStack_68;
      local_3c = local_64;
      local_38 = local_60;
      uStack_34 = uStack_5c;
      puStack_30 = puStack_58;
      uStack_2c = uStack_54;
      uStack_28 = uStack_50;
      uVar7 = 1;
      local_d4 = local_ac;
    }
    goto LAB_011c0b88;
  }
  FUN_00b566e8(&local_b0,*puVar3);
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  local_48 = local_9c;
  uStack_44 = local_98;
  puStack_40 = local_94;
  local_d4 = &local_3c;
  local_3c = local_90;
  local_38 = puStack_8c;
  uStack_34 = uStack_88;
  puStack_30 = local_84;
  uVar7 = 0;
  uVar8 = local_b0;
  puVar10 = local_a4;
  uVar12 = local_a0;
  in_r12 = local_ac;
  unaff_lr = local_a8;
LAB_011c0b88:
  param_1[1] = local_d4;
  param_1[2] = uVar8;
  param_1[3] = in_r12;
  param_1[4] = unaff_lr;
  *param_1 = uVar7;
  param_1[5] = puVar10;
  param_1[6] = uVar12;
  param_1[7] = local_48;
  param_1[8] = uStack_44;
  param_1[9] = puStack_40;
  param_1[10] = local_3c;
  param_1[0xb] = local_38;
  param_1[0xc] = uStack_34;
  param_1[0xd] = puStack_30;
  param_1[0xe] = uStack_2c;
  param_1[0xf] = uStack_28;
  uVar2 = 1;
LAB_011c0bb4:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

