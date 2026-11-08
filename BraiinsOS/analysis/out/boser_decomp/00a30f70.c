// FUN_00a30f70 @ 00a30f70 size=2308 calls_out=17 calls_in=0
// strings: 

void FUN_00a30f70(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  undefined4 uVar16;
  uint unaff_r10;
  undefined4 uVar17;
  undefined4 uVar18;
  uint in_r12;
  uint extraout_r12;
  undefined4 uVar19;
  uint unaff_lr;
  undefined8 uVar20;
  undefined1 *local_214;
  undefined4 *local_210;
  undefined4 *local_20c;
  undefined4 *local_208;
  undefined4 *local_204;
  uint local_1fc;
  uint local_1f8;
  uint local_1f0;
  uint local_1ec;
  uint local_1e4;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint local_184;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar12 = *param_2;
    iVar15 = param_2[1];
    uVar11 = 0;
    local_1e4 = 0x80000007;
    param_2[2] = iVar15;
    iVar5 = *(int *)(iVar15 + 0x10);
    uVar20 = CONCAT44(*(int *)(iVar5 + 0x40),iVar5);
    local_1f0 = in_r12;
    local_1f8 = unaff_lr;
    if (*(int *)(iVar5 + 0x40) == 6) {
      local_1f8 = 0xa30fe8;
      uVar20 = thunk_FUN_01bed842(*(int *)(iVar5 + 0x3c) + 8,&DAT_0051d9f5,6);
      local_1f0 = extraout_r12;
      if ((int)uVar20 == 0) {
        param_2[4] = uVar12;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar15;
        goto LAB_00a31100;
      }
    }
    goto LAB_00a31404;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0e09c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e09c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      uVar12 = param_2[4];
      iVar15 = param_2[5];
LAB_00a31100:
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[6] = uVar12;
      param_2[7] = iVar15;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e09c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e09c);
    case 3:
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e09c);
      }
      uVar12 = param_2[6];
    }
    puVar9 = (undefined4 *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar8 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    puVar10 = param_2 + 4;
    *puVar10 = uVar12;
    iVar15 = puVar9[4];
    uVar16 = puVar9[5];
    uVar18 = puVar9[6];
    uVar17 = puVar9[7];
    uVar4 = *(undefined1 *)(puVar9 + 8);
    uVar12 = puVar9[1];
    uVar11 = puVar9[2];
    uVar19 = puVar9[3];
    *puVar8 = *puVar9;
    param_2[6] = uVar12;
    param_2[7] = uVar11;
    param_2[8] = uVar19;
    param_2[9] = iVar15 + 0x20;
    param_2[10] = uVar16;
    param_2[0xb] = uVar18;
    param_2[0xc] = uVar17;
    *(undefined1 *)(param_2 + 0xd) = uVar4;
    uVar12 = puVar9[4];
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[0x2e] = puVar10;
    param_2[0x2f] = puVar8;
    param_2[0x30] = uVar12;
LAB_00a31184:
    piVar6 = (int *)*puVar10;
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = piVar6;
    param_2[0x2b] = puVar8;
    param_2[0x2c] = uVar12;
LAB_00a311a4:
    iVar15 = *piVar6;
    *(undefined1 *)(param_2 + 0x29) = 0;
    iVar15 = iVar15 + 8;
    param_2[0x26] = iVar15;
    param_2[0x27] = puVar8;
    param_2[0x28] = uVar12;
LAB_00a311c8:
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x22] = puVar8;
    param_2[0x23] = iVar15;
LAB_00a311e0:
    *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
    bVar14 = 1;
    param_2[0x11] = puVar8;
    param_2[0x12] = iVar15;
LAB_00a311fc:
    param_2[0xe] = 0;
    param_2[0x10] = 0;
    param_2[0xf] = 4;
    *(undefined1 *)(param_2 + 0x13) = 1;
    puVar7 = &local_e8;
    FUN_007bdb80(puVar7,param_2 + 0xe,puVar8,iVar15);
    if (local_e8 != 2) {
      local_1fc = local_e8;
      local_1ec = local_e4;
      local_1e4 = local_d4;
      local_48 = local_d0;
      uStack_44 = local_cc;
      uStack_40 = local_c8;
      local_3c = local_c4;
      local_38 = local_c0;
      uStack_34 = local_bc;
      uStack_30 = uStack_b8;
      uStack_2c = uStack_b4;
      uStack_28 = uStack_b0;
      local_1f8 = local_d8;
      unaff_r10 = local_e0;
      local_1f0 = local_dc;
      goto LAB_00a31314;
    }
    if ((bVar14 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x13) = 0;
      FUN_009ec520(&local_e8);
      param_2[0x14] = local_e8;
      param_2[0x15] = local_e4;
      param_2[0x16] = local_e0;
      param_2[0x17] = local_dc;
      param_2[0x18] = local_d8;
      param_2[0x19] = local_d4;
      param_2[0x1a] = local_d0;
      param_2[0x1b] = local_cc;
      param_2[0x1c] = local_c8;
      param_2[0x1d] = local_c4;
      param_2[0x1e] = local_c0;
      param_2[0x1f] = local_bc;
      param_2[0x20] = uStack_b8;
      param_2[0x21] = uStack_b4;
      goto LAB_00a312a4;
    }
    uVar13 = param_2[0x10];
    if (0x2492492 < uVar13) {
      uVar12 = 0;
LAB_00a3145c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,puVar7);
    }
    puVar7 = (uint *)(uVar13 * 0x38);
    if (puVar7 == (uint *)0x0) {
      iVar15 = 8;
      uVar13 = 0;
    }
    else {
      uVar12 = 8;
      iVar15 = FUN_01298504(puVar7,8);
      if (iVar15 == 0) goto LAB_00a3145c;
    }
    puVar10 = (undefined4 *)param_2[0xf];
    param_2[0x15] = iVar15;
    puVar8 = puVar10 + param_2[0x10] * 2;
    param_2[0x14] = uVar13;
    param_2[0x16] = 0;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x1c] = puVar10;
    param_2[0x1d] = puVar10;
    param_2[0x1e] = param_2[0xe];
    param_2[0x1f] = puVar8;
    while (puVar10 != puVar8) {
      uVar12 = *puVar10;
      iVar15 = puVar10[1];
      param_2[0x1d] = puVar10 + 2;
      param_2[0x1a] = uVar12;
      param_2[0x17] = param_2 + 0x14;
      param_2[0x18] = uVar12;
      param_2[0x19] = iVar15;
      param_2[0x1b] = iVar15;
LAB_00a3183c:
      (**(code **)(iVar15 + 0xc))(&local_e8,uVar12,param_3);
      uVar3 = local_d0;
      local_1f8 = local_d4;
      local_1f0 = local_d8;
      unaff_r10 = local_dc;
      uVar2 = local_e0;
      uVar13 = local_e8;
      if (local_e8 == 2) {
        uVar4 = 4;
        goto LAB_00a319f8;
      }
      local_1fc = local_e4;
      local_1ec = local_e0;
      local_1e4 = local_d0;
      local_a8 = local_cc;
      uStack_a4 = local_c8;
      uStack_a0 = local_c4;
      uStack_9c = local_c0;
      local_98 = local_bc;
      uStack_94 = uStack_b8;
      uStack_90 = uStack_b4;
      uStack_8c = uStack_b0;
      uStack_88 = uStack_ac;
      FUN_01139b38(param_2[0x1a],param_2[0x1b]);
      if ((uVar13 & 1) != 0) {
        local_48 = local_a8;
        uStack_44 = uStack_a4;
        uStack_40 = uStack_a0;
        local_3c = uStack_9c;
        local_38 = local_98;
        uStack_34 = uStack_94;
        uStack_30 = uStack_90;
        uStack_2c = uStack_8c;
        uStack_28 = uStack_88;
        FUN_009495dc(param_2 + 0x1c);
        FUN_007bc140(param_2 + 0x14);
        goto LAB_00a31314;
      }
      local_74 = local_1f8;
      local_70 = uVar3;
      local_7c = unaff_r10;
      local_80 = uVar2;
      local_78 = local_1f0;
      local_6c = local_a8;
      uStack_68 = uStack_a4;
      uStack_64 = uStack_a0;
      uStack_60 = uStack_9c;
      local_5c = local_98;
      uStack_58 = uStack_94;
      uStack_54 = uStack_90;
      uStack_50 = uStack_8c;
      uStack_4c = uStack_88;
      piVar6 = (int *)param_2[0x17];
      iVar15 = piVar6[2];
      if (iVar15 == *piVar6) {
        FUN_006e4ec8(piVar6);
      }
      puVar7 = (uint *)(piVar6[1] + iVar15 * 0x38);
      *puVar7 = uVar2;
      puVar7[1] = unaff_r10;
      puVar7[2] = local_1f0;
      puVar7[3] = local_1f8;
      puVar7[4] = uVar3;
      puVar7[5] = local_a8;
      puVar7[6] = uStack_a4;
      puVar7[7] = uStack_a0;
      puVar7[8] = uStack_9c;
      puVar7[9] = local_98;
      puVar7[10] = uStack_94;
      puVar7[0xb] = uStack_90;
      puVar7[0xc] = uStack_8c;
      puVar7[0xd] = uStack_88;
      piVar6[2] = iVar15 + 1;
      puVar8 = (undefined4 *)param_2[0x1f];
      puVar10 = (undefined4 *)param_2[0x1d];
    }
    param_2[0x18] = 0;
    FUN_009495dc(param_2 + 0x1c);
    local_f8 = param_2[0x14];
    local_f4 = param_2[0x15];
    local_f0 = param_2[0x16];
LAB_00a31994:
    FUN_006cac18(&local_e8,&local_f8);
    local_1ec = local_e8;
    bVar1 = false;
    local_1f0 = local_e0;
    local_1f8 = local_dc;
    local_1e4 = local_d8;
    local_48 = local_d4;
    uStack_44 = local_d0;
    uStack_40 = local_cc;
    local_3c = local_c8;
    local_38 = local_c4;
    uStack_34 = local_c0;
    uStack_30 = local_bc;
    *(undefined1 *)(param_2 + 0x13) = 0;
    unaff_r10 = local_e4;
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x31)) {
    case 0:
      puVar10 = (undefined4 *)param_2[0x2e];
      puVar8 = (undefined4 *)param_2[0x2f];
      uVar12 = param_2[0x30];
      goto LAB_00a31184;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      piVar6 = (int *)param_2[0x2a];
      puVar8 = (undefined4 *)param_2[0x2b];
      uVar12 = param_2[0x2c];
      goto LAB_00a311a4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c185c4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c185c4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
      iVar15 = param_2[0x26];
      puVar8 = (undefined4 *)param_2[0x27];
      goto LAB_00a311c8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c18654);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c18654);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x24)) {
    case 0:
      puVar8 = (undefined4 *)param_2[0x22];
      iVar15 = param_2[0x23];
      goto LAB_00a311e0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x4d)) {
    case 0:
      puVar8 = (undefined4 *)param_2[0x11];
      iVar15 = param_2[0x12];
      bVar14 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_00a311fc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 3:
      break;
    case 4:
      uVar12 = param_2[0x1a];
      iVar15 = param_2[0x1b];
      goto LAB_00a3183c;
    }
LAB_00a312a4:
    FUN_009ecbe0(&local_e8,param_2 + 0x14,param_3);
    uStack_34 = local_bc;
    local_38 = local_c0;
    local_3c = local_c4;
    uStack_40 = local_c8;
    uStack_44 = local_cc;
    local_48 = local_d0;
    local_1e4 = local_d4;
    local_1f8 = local_d8;
    local_1f0 = local_dc;
    unaff_r10 = local_e0;
    uVar2 = local_e4;
    uVar13 = local_e8;
    if (local_e8 == 3) {
      uVar4 = 3;
LAB_00a319f8:
      local_20c = param_2 + 0x24;
      local_214 = (undefined1 *)((int)param_2 + 0x4d);
      local_204 = param_2 + 0x2d;
      local_208 = param_2 + 0x29;
      local_210 = param_2 + 0x31;
      *local_214 = uVar4;
      *(undefined1 *)local_20c = 3;
      *(undefined1 *)local_208 = 3;
      *(undefined1 *)local_204 = 3;
      *(undefined1 *)local_210 = 3;
      *param_1 = 2;
      uVar4 = 4;
      goto LAB_00a31438;
    }
    local_1fc = local_e8;
    local_1ec = local_e4;
    FUN_011928d4(param_2 + 0x14);
    if (uVar13 == 2) {
      local_f0 = local_1f0;
      local_f4 = unaff_r10;
      local_f8 = uVar2;
      goto LAB_00a31994;
    }
    uStack_30 = uStack_b8;
    uStack_2c = uStack_b4;
    uStack_28 = uStack_b0;
LAB_00a31314:
    if (*(char *)(param_2 + 0x13) != '\0') {
      FUN_00b7d620(param_2 + 0xe);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  uVar2 = uStack_28;
  uVar13 = uStack_2c;
  uStack_178 = uStack_30;
  uStack_17c = uStack_34;
  local_180 = local_38;
  local_184 = local_3c;
  uStack_188 = uStack_40;
  uStack_18c = uStack_44;
  local_190 = local_48;
  uVar20 = CONCAT44(local_3c,local_1ec);
  local_204 = param_2 + 0x2d;
  local_208 = param_2 + 0x29;
  local_20c = param_2 + 0x24;
  local_210 = param_2 + 0x31;
  local_214 = (undefined1 *)((int)param_2 + 0x4d);
  *local_214 = 1;
  FUN_01192a14(param_2 + 0xe);
  *(undefined1 *)local_20c = 1;
  *(undefined1 *)local_208 = 1;
  *(undefined1 *)local_204 = 1;
  *(undefined1 *)local_210 = 1;
  FUN_00a30f28(param_2 + 0xe);
  if (bVar1) {
    uVar11 = 1;
    uStack_174 = uVar13;
    uStack_170 = uVar2;
    uVar20 = CONCAT44(local_1fc,local_1ec);
  }
  else {
    uVar11 = 0;
  }
LAB_00a31404:
  param_1[1] = (int)((ulonglong)uVar20 >> 0x20);
  param_1[2] = (int)uVar20;
  param_1[3] = unaff_r10;
  param_1[4] = local_1f0;
  param_1[5] = local_1f8;
  param_1[6] = local_1e4;
  *param_1 = uVar11;
  param_1[7] = local_190;
  param_1[8] = uStack_18c;
  param_1[9] = uStack_188;
  param_1[10] = local_184;
  param_1[0xb] = local_180;
  param_1[0xc] = uStack_17c;
  param_1[0xd] = uStack_178;
  param_1[0xe] = uStack_174;
  param_1[0xf] = uStack_170;
  uVar4 = 1;
LAB_00a31438:
  *(undefined1 *)(param_2 + 3) = uVar4;
  return;
}

