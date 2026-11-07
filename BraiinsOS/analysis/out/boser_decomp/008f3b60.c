// FUN_008f3b60 @ 008f3b60 size=4280 calls_out=26 calls_in=0
// strings: latestRelease

void FUN_008f3b60(uint *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  undefined *puVar25;
  uint unaff_r10;
  uint uVar26;
  int iVar27;
  int *local_320;
  int *local_31c;
  int *local_318;
  int *local_314;
  uint *local_310;
  uint local_308;
  uint local_304;
  int *local_300;
  uint local_2fc;
  int *local_2f8;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  int local_190;
  int *local_18c;
  int local_188;
  int local_184;
  int iStack_180;
  int iStack_17c;
  undefined1 local_178;
  undefined1 local_174;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined1 local_90;
  undefined1 local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  param_2 = (int *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar17 = *param_2;
    iVar23 = param_2[1];
    uVar26 = 0x80000007;
    uVar20 = 0;
    param_2[2] = iVar23;
    iVar11 = *(int *)(iVar23 + 0x10);
    local_308 = param_3;
    local_304 = unaff_r10;
    if (*(int *)(iVar11 + 0x40) == 0x10) {
      iVar11 = thunk_FUN_01bed842(*(int *)(iVar11 + 0x3c) + 8,&DAT_005698a8,0x10);
      if (iVar11 == 0) {
        param_2[4] = iVar17;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar23;
        goto LAB_008f4240;
      }
    }
    else if ((*(int *)(iVar11 + 0x40) == 0xd) &&
            (iVar11 = thunk_FUN_01bed842(*(int *)(iVar11 + 0x3c) + 8,"latestRelease",0xd),
            iVar11 == 0)) {
      param_2[4] = iVar17;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar23;
      goto LAB_008f3c9c;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0d3e0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0d3e0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar17 = param_2[4];
      iVar23 = param_2[5];
LAB_008f3c9c:
      param_2[6] = iVar17;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar23;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0d3e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0d3e0);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0d3e0);
      }
      iVar17 = param_2[6];
    }
    piVar15 = param_2 + 4;
    piVar14 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar13 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar17;
    iVar23 = piVar14[4];
    iVar27 = piVar14[5];
    unaff_r10 = piVar14[6];
    iVar24 = piVar14[7];
    iVar17 = piVar14[8];
    iVar11 = piVar14[1];
    iVar18 = piVar14[2];
    iVar21 = piVar14[3];
    *piVar13 = *piVar14;
    param_2[6] = iVar11;
    param_2[7] = iVar18;
    param_2[8] = iVar21;
    param_2[9] = iVar23 + 0x20;
    param_2[10] = iVar27;
    param_2[0xb] = unaff_r10;
    param_2[0xc] = iVar24;
    *(char *)(param_2 + 0xd) = (char)iVar17;
    iVar23 = piVar14[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar15;
    param_2[0x2b] = (int)piVar13;
    param_2[0x2c] = iVar23;
LAB_008f3dd0:
    iVar17 = *piVar15;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar17;
    param_2[0x27] = (int)piVar13;
    param_2[0x28] = iVar23;
LAB_008f3df0:
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x22] = (int)piVar13;
    param_2[0x23] = iVar17;
LAB_008f3e08:
    *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
    bVar16 = 1;
    param_2[0x11] = (int)piVar13;
    param_2[0x12] = iVar17;
LAB_008f3e28:
    param_2[0xe] = 0;
    param_2[0x10] = 0;
    param_2[0xf] = 4;
    *(undefined1 *)(param_2 + 0x13) = 1;
    puVar22 = &local_220;
    FUN_008643f0(puVar22,param_2 + 0xe,piVar13,iVar17);
    if (local_220 != 2) {
      local_304 = local_220;
      local_2f8 = (int *)local_21c;
      local_2fc = local_210;
      local_88 = local_208;
      uStack_84 = local_204;
      uStack_80 = local_200;
      local_7c = local_1fc;
      local_78 = local_1f8;
      uStack_74 = local_1f4;
      uStack_70 = uStack_1f0;
      uStack_6c = uStack_1ec;
      uStack_68 = uStack_1e8;
      uVar26 = local_20c;
      local_308 = local_214;
      local_300 = (int *)local_218;
      goto LAB_008f3f4c;
    }
    if ((bVar16 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x13) = 0;
      FUN_009ec520(&local_220);
      param_2[0x14] = local_220;
      param_2[0x15] = local_21c;
      param_2[0x16] = local_218;
      param_2[0x17] = local_214;
      param_2[0x18] = local_210;
      param_2[0x19] = local_20c;
      param_2[0x1a] = local_208;
      param_2[0x1b] = local_204;
      param_2[0x1c] = local_200;
      param_2[0x1d] = local_1fc;
      param_2[0x1e] = local_1f8;
      param_2[0x1f] = local_1f4;
      param_2[0x20] = uStack_1f0;
      param_2[0x21] = uStack_1ec;
      goto switchD_008f45d0_caseD_3;
    }
    uVar26 = param_2[0x10];
    if (0x2492492 < uVar26) {
      uVar19 = 0;
LAB_008f4044:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar19,puVar22);
    }
    puVar22 = (uint *)(uVar26 * 0x38);
    if (puVar22 == (uint *)0x0) {
      iVar17 = 8;
      uVar26 = 0;
    }
    else {
      uVar19 = 8;
      iVar17 = FUN_01298504(puVar22,8);
      if (iVar17 == 0) goto LAB_008f4044;
    }
    piVar15 = (int *)param_2[0xf];
    param_2[0x15] = iVar17;
    piVar13 = piVar15 + param_2[0x10] * 2;
    param_2[0x14] = uVar26;
    param_2[0x16] = 0;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x1c] = (int)piVar15;
    param_2[0x1d] = (int)piVar15;
    param_2[0x1e] = param_2[0xe];
    param_2[0x1f] = (int)piVar13;
    while (piVar15 != piVar13) {
      iVar17 = *piVar15;
      iVar23 = piVar15[1];
      param_2[0x1d] = (int)(piVar15 + 2);
      param_2[0x1a] = iVar17;
      param_2[0x17] = (int)(param_2 + 0x14);
      param_2[0x18] = iVar17;
      param_2[0x19] = iVar23;
      param_2[0x1b] = iVar23;
LAB_008f4dd0:
      (**(code **)(iVar23 + 0xc))(&local_220,iVar17,param_3);
      uVar26 = local_208;
      uVar3 = local_20c;
      local_308 = local_210;
      local_300 = (int *)local_214;
      uVar2 = local_218;
      uVar20 = local_220;
      if (local_220 == 2) {
        uVar10 = 4;
        goto LAB_008f4f70;
      }
      local_304 = local_21c;
      local_2f8 = (int *)local_218;
      local_2fc = local_20c;
      local_248 = local_204;
      uStack_244 = local_200;
      uStack_240 = local_1fc;
      uStack_23c = local_1f8;
      local_238 = local_1f4;
      uStack_234 = uStack_1f0;
      uStack_230 = uStack_1ec;
      uStack_22c = uStack_1e8;
      uStack_228 = uStack_1e4;
      FUN_01139b38(param_2[0x1a],param_2[0x1b]);
      if ((uVar20 & 1) != 0) {
        local_88 = local_248;
        uStack_84 = uStack_244;
        uStack_80 = uStack_240;
        local_7c = uStack_23c;
        local_78 = local_238;
        uStack_74 = uStack_234;
        uStack_70 = uStack_230;
        uStack_6c = uStack_22c;
        uStack_68 = uStack_228;
        FUN_009495dc(param_2 + 0x1c);
        FUN_007bc140(param_2 + 0x14);
        goto LAB_008f3f4c;
      }
      local_54 = uVar3;
      local_60 = uVar2;
      local_5c = (uint)local_300;
      local_50 = uVar26;
      local_58 = local_308;
      local_4c = local_248;
      uStack_48 = uStack_244;
      uStack_44 = uStack_240;
      uStack_40 = uStack_23c;
      local_3c = local_238;
      uStack_38 = uStack_234;
      uStack_34 = uStack_230;
      uStack_30 = uStack_22c;
      uStack_2c = uStack_228;
      puVar22 = (uint *)param_2[0x17];
      unaff_r10 = puVar22[2];
      if (unaff_r10 == *puVar22) {
        FUN_006e4ec8(puVar22);
      }
      puVar12 = (uint *)(puVar22[1] + unaff_r10 * 0x38);
      *puVar12 = uVar2;
      puVar12[1] = (uint)local_300;
      puVar12[2] = local_308;
      puVar12[3] = uVar3;
      puVar12[4] = uVar26;
      puVar12[5] = local_248;
      puVar12[6] = uStack_244;
      puVar12[7] = uStack_240;
      puVar12[8] = uStack_23c;
      puVar12[9] = local_238;
      puVar12[10] = uStack_234;
      puVar12[0xb] = uStack_230;
      puVar12[0xc] = uStack_22c;
      puVar12[0xd] = uStack_228;
      puVar22[2] = unaff_r10 + 1;
      piVar13 = (int *)param_2[0x1f];
      piVar15 = (int *)param_2[0x1d];
    }
    param_2[0x18] = 0;
    FUN_009495dc(param_2 + 0x1c);
    local_258 = param_2[0x14];
    local_254 = param_2[0x15];
    local_250 = param_2[0x16];
LAB_008f4f14:
    FUN_006cac18(&local_220,&local_258);
    local_2f8 = (int *)local_220;
    bVar1 = false;
    local_300 = (int *)local_21c;
    local_308 = local_218;
    local_2fc = local_214;
    local_88 = local_20c;
    uStack_84 = local_208;
    uStack_80 = local_204;
    local_7c = local_200;
    local_78 = local_1fc;
    uStack_74 = local_1f8;
    uStack_70 = local_1f4;
    *(undefined1 *)(param_2 + 0x13) = 0;
    uVar26 = local_210;
    local_304 = unaff_r10;
    goto LAB_008f3f80;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar15 = (int *)param_2[0x2a];
      piVar13 = (int *)param_2[0x2b];
      iVar23 = param_2[0x2c];
      goto LAB_008f3dd0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      iVar17 = param_2[0x26];
      piVar13 = (int *)param_2[0x27];
      goto LAB_008f3df0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0d3f0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0d3f0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x24]) {
    case '\0':
      piVar13 = (int *)param_2[0x22];
      iVar17 = param_2[0x23];
      goto LAB_008f3e08;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x4d)) {
    case 0:
      piVar13 = (int *)param_2[0x11];
      iVar17 = param_2[0x12];
      bVar16 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_008f3e28;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar17 = param_2[0x1a];
      iVar23 = param_2[0x1b];
      goto LAB_008f4dd0;
    }
switchD_008f45d0_caseD_3:
    FUN_009ecbe0(&local_220,param_2 + 0x14,param_3);
    uStack_74 = local_1f4;
    local_78 = local_1f8;
    local_7c = local_1fc;
    uStack_80 = local_200;
    uStack_84 = local_204;
    local_88 = local_208;
    uVar26 = local_20c;
    local_308 = local_214;
    unaff_r10 = local_218;
    uVar2 = local_21c;
    uVar20 = local_220;
    if (local_220 == 3) {
      uVar10 = 3;
LAB_008f4f70:
      local_314 = param_2 + 0x29;
      local_318 = param_2 + 0x24;
      local_31c = (int *)((int)param_2 + 0x4d);
      local_310 = (uint *)(param_2 + 0x2d);
      *(undefined1 *)local_31c = uVar10;
      *(undefined1 *)local_318 = 3;
      *(undefined1 *)local_314 = 3;
      *(undefined1 *)local_310 = 3;
      *param_1 = 2;
      uVar10 = 4;
      goto LAB_008f4970;
    }
    local_304 = local_220;
    local_2f8 = (int *)local_21c;
    local_2fc = local_210;
    FUN_00ba64b4(param_2 + 0x14);
    if (uVar20 == 2) {
      local_258 = uVar2;
      local_254 = unaff_r10;
      local_250 = local_308;
      goto LAB_008f4f14;
    }
    uStack_70 = uStack_1f0;
    uStack_6c = uStack_1ec;
    uStack_68 = uStack_1e8;
    local_300 = (int *)unaff_r10;
LAB_008f3f4c:
    if ((char)param_2[0x13] != '\0') {
      FUN_00b7d620(param_2 + 0xe);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
LAB_008f3f80:
    uVar9 = uStack_68;
    uVar8 = uStack_6c;
    uVar7 = uStack_70;
    uVar6 = uStack_74;
    uVar5 = local_78;
    uVar4 = local_7c;
    uVar3 = uStack_80;
    uVar2 = uStack_84;
    uVar20 = local_88;
    local_310 = (uint *)(param_2 + 0x2d);
    local_314 = param_2 + 0x29;
    local_318 = param_2 + 0x24;
    local_31c = (int *)((int)param_2 + 0x4d);
    *(undefined1 *)local_31c = 1;
    FUN_00ba638c(param_2 + 0xe);
    *(undefined1 *)local_318 = 1;
    *(undefined1 *)local_314 = 1;
    *(undefined1 *)local_310 = 1;
    if (bVar1) {
      uStack_44 = uVar8;
      uStack_40 = uVar9;
    }
    uStack_48 = uVar7;
    local_4c = uVar6;
    local_50 = uVar5;
    local_54 = uVar4;
    local_58 = uVar3;
    local_5c = uVar2;
    local_60 = uVar20;
    uVar20 = (uint)bVar1;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar17 = param_2[4];
      iVar23 = param_2[5];
LAB_008f4240:
      param_2[6] = iVar17;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar23;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0d3e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0d3e0);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0d3e0);
      }
      iVar17 = param_2[6];
    }
    piVar13 = param_2 + 4;
    piVar15 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_2f8 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar17 + 0x40;
    iVar23 = piVar15[4];
    iVar27 = piVar15[5];
    iVar24 = piVar15[6];
    iVar21 = piVar15[7];
    iVar17 = piVar15[8];
    uVar26 = piVar15[1];
    iVar11 = piVar15[2];
    iVar18 = piVar15[3];
    *local_2f8 = *piVar15;
    param_2[6] = uVar26;
    param_2[7] = iVar11;
    param_2[8] = iVar18;
    param_2[9] = iVar23 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar17;
    param_2[10] = iVar27;
    param_2[0xb] = iVar24;
    param_2[0xc] = iVar21;
    local_2fc = piVar15[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar13;
    param_2[0x2b] = (int)local_2f8;
    param_2[0x2c] = local_2fc;
LAB_008f42cc:
    iVar17 = *piVar13;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar17;
    param_2[0x27] = (int)local_2f8;
    param_2[0x28] = local_2fc;
LAB_008f42f0:
    puVar25 = *(undefined **)(iVar17 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar17;
    param_2[0x11] = local_2fc;
    param_2[0xe] = 1;
    param_2[0xf] = (int)puVar25;
    param_2[0x10] = (int)local_2f8;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_300 = local_2f8 + 6;
    if (*(int *)(*(int *)*local_300 + 0x10) == 0) {
LAB_008f464c:
      if (&UNK_00ba2e8b < puVar25) {
        uVar19 = 0;
LAB_008f4660:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar19,uVar26);
      }
      uVar26 = (int)puVar25 * 0xb0;
      if (uVar26 == 0) {
        iVar23 = 8;
        puVar25 = (undefined *)0x0;
      }
      else {
        uVar19 = 8;
        iVar23 = FUN_01298504(uVar26,8);
        if (iVar23 == 0) goto LAB_008f4660;
      }
      param_2[0x14] = (int)puVar25;
LAB_008f46bc:
      param_2[0x15] = iVar23;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar17 + 8) != 0) {
        iVar23 = *(int *)(iVar17 + 4);
        iVar11 = 0;
        iVar17 = *(int *)(iVar17 + 8) * 0x24;
        do {
          local_178 = (undefined1)local_2f8[8];
          local_184 = local_2f8[5];
          iStack_180 = local_2f8[6];
          iStack_17c = local_2f8[7];
          local_188 = local_2f8[4];
          local_18c = (int *)0x0;
          if (*local_2f8 != 0) {
            local_18c = local_2f8 + 1;
          }
          iVar18 = param_2[0x16];
          local_198 = 1;
          local_194 = 0;
          local_174 = 0;
          local_19c = local_2fc;
          local_1a0 = iVar23;
          local_190 = iVar11;
          if (iVar18 == param_2[0x14]) {
            FUN_00a20d80(param_2 + 0x14);
          }
          iVar23 = iVar23 + 0x24;
          FUN_01bed4e2(iVar18 * 0xb0 + param_2[0x15],&local_220,0xb0);
          iVar11 = iVar11 + 1;
          iVar17 = iVar17 + -0x24;
          param_2[0x16] = iVar18 + 1;
        } while (iVar17 != 0);
      }
      local_248 = param_2[0x14];
      uStack_244 = param_2[0x15];
      uStack_240 = param_2[0x16];
      FUN_00a1563c(&local_220);
      local_60 = local_220;
      local_5c = local_21c;
      local_58 = local_218;
      local_54 = local_214;
      local_50 = local_210;
      local_4c = local_20c;
      uStack_48 = local_208;
      uStack_44 = local_204;
      uStack_40 = local_200;
      local_3c = local_1fc;
      uStack_38 = local_1f8;
      uStack_34 = local_1f4;
      uStack_30 = uStack_1f0;
      uStack_2c = uStack_1ec;
      param_2[0x18] = local_220;
      param_2[0x19] = local_21c;
      param_2[0x1a] = local_218;
      param_2[0x1b] = local_214;
      param_2[0x1c] = local_210;
      param_2[0x1d] = local_20c;
      param_2[0x1e] = local_208;
      param_2[0x1f] = local_204;
      param_2[0x20] = local_200;
      param_2[0x21] = local_1fc;
      param_2[0x22] = local_1f8;
      param_2[0x23] = local_1f4;
      param_2[0x24] = uStack_1f0;
      param_2[0x25] = uStack_1ec;
      goto switchD_008f415c_caseD_4;
    }
LAB_008f4330:
    if (&UNK_00505050 < puVar25) {
      uVar19 = 0;
      iVar11 = local_2fc;
LAB_008f4344:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar19,iVar11);
    }
    iVar11 = (int)puVar25 * 0x198;
    if (iVar11 == 0) {
      iVar23 = 8;
      puVar25 = (undefined *)0x0;
    }
    else {
      uVar19 = 8;
      iVar23 = FUN_01298504(iVar11,8);
      if (iVar23 == 0) goto LAB_008f4344;
    }
    param_2[0x14] = (int)puVar25;
LAB_008f43a4:
    local_310 = (uint *)(param_2 + 0x14);
    param_2[0x15] = iVar23;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar17 + 8) != 0) {
      iVar23 = *(int *)(iVar17 + 4);
      iVar11 = 0;
      iVar17 = *(int *)(iVar17 + 8) * 0x24;
      do {
        if (*local_2f8 == 1) {
          local_60 = local_2f8[1];
          local_5c = local_2f8[2];
          local_58 = local_2f8[3];
        }
        local_b0 = (uint)(*local_2f8 == 1);
        local_a0 = local_2f8[4];
        local_9c = local_2f8[5];
        local_94 = local_2f8[7];
        local_98 = *local_300;
        local_90 = (undefined1)local_2f8[8];
        local_ac = local_60;
        uStack_a8 = local_5c;
        uStack_a4 = local_58;
        local_8c = 0;
        iVar18 = param_2[0x16];
        local_b8 = local_2fc;
        local_190 = iVar11;
        local_b4 = iVar23;
        if (iVar18 == param_2[0x14]) {
          FUN_00f9d59c(local_310);
        }
        iVar23 = iVar23 + 0x24;
        FUN_01bed4e2(iVar18 * 0x198 + param_2[0x15],&local_220,0x198);
        iVar11 = iVar11 + 1;
        iVar17 = iVar17 + -0x24;
        param_2[0x16] = iVar18 + 1;
      } while (iVar17 != 0);
    }
    local_248 = *local_310;
    uStack_244 = param_2[0x15];
    uStack_240 = param_2[0x16];
    FUN_00a138ec(&local_220);
    local_60 = local_220;
    local_5c = local_21c;
    local_58 = local_218;
    local_54 = local_214;
    local_50 = local_210;
    local_4c = local_20c;
    uStack_48 = local_208;
    uStack_44 = local_204;
    uStack_40 = local_200;
    local_3c = local_1fc;
    uStack_38 = local_1f8;
    uStack_34 = local_1f4;
    uStack_30 = uStack_1f0;
    uStack_2c = uStack_1ec;
    param_2[0x18] = local_220;
    param_2[0x19] = local_21c;
    param_2[0x1a] = local_218;
    param_2[0x1b] = local_214;
    param_2[0x1c] = local_210;
    param_2[0x1d] = local_20c;
    param_2[0x1e] = local_208;
    param_2[0x1f] = local_204;
    param_2[0x20] = local_200;
    param_2[0x21] = local_1fc;
    param_2[0x22] = local_1f8;
    param_2[0x23] = local_1f4;
    param_2[0x24] = uStack_1f0;
    param_2[0x25] = uStack_1ec;
switchD_008f415c_caseD_3:
    FUN_009e9258(&local_220,param_2 + 0x18,param_3);
    uVar20 = local_220;
    if (local_220 != 3) {
      local_2f8 = (int *)local_21c;
      local_300 = (int *)local_218;
      local_308 = local_214;
      local_2fc = local_210;
      local_304 = local_20c;
      local_88 = local_208;
      uStack_84 = local_204;
      uStack_80 = local_200;
      local_7c = local_1fc;
      local_78 = local_1f8;
      uStack_74 = local_1f4;
      uStack_70 = uStack_1f0;
      uStack_6c = uStack_1ec;
      uStack_68 = uStack_1e8;
      FUN_008fdff4(param_2 + 0x18);
      if (uVar20 == 2) goto LAB_008f48a0;
      local_220 = local_88;
      local_21c = uStack_84;
      local_218 = uStack_80;
      local_214 = local_7c;
      local_210 = local_78;
      local_20c = uStack_74;
      local_208 = uStack_70;
      local_204 = uStack_6c;
      local_200 = uStack_68;
      goto LAB_008f48bc;
    }
    uVar10 = 3;
LAB_008f481c:
    local_31c = param_2 + 0x29;
    *(undefined1 *)(param_2 + 0x13) = uVar10;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)local_31c = 3;
    *param_1 = 2;
    uVar10 = 6;
    goto LAB_008f4970;
  case '\x06':
    uVar26 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar13 = (int *)param_2[0x2a];
      local_2f8 = (int *)param_2[0x2b];
      local_2fc = param_2[0x2c];
      goto LAB_008f42cc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      iVar17 = param_2[0x26];
      local_2f8 = (int *)param_2[0x27];
      local_2fc = param_2[0x28];
      goto LAB_008f42f0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      puVar25 = (undefined *)param_2[0xf];
      local_2f8 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_300 = local_2f8 + 6;
      local_2fc = param_2[0x11];
      iVar17 = param_2[0x12];
      if (*(int *)(*(int *)*local_300 + 0x10) != 0) {
        if (param_2[0xe] != 0) goto LAB_008f4330;
        param_2[0x14] = 0;
        iVar23 = 8;
        goto LAB_008f43a4;
      }
      if (param_2[0xe] != 0) goto LAB_008f464c;
      param_2[0x14] = 0;
      iVar23 = 8;
      goto LAB_008f46bc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      goto switchD_008f415c_caseD_3;
    }
switchD_008f415c_caseD_4:
    FUN_009fdd18(&local_220,param_2 + 0x18,param_3);
    uVar3 = local_200;
    uVar2 = local_204;
    uVar26 = local_208;
    uVar20 = local_220;
    if (local_220 == 3) {
      uVar10 = 4;
      goto LAB_008f481c;
    }
    local_2f8 = (int *)local_21c;
    local_300 = (int *)local_218;
    local_308 = local_214;
    local_2fc = local_210;
    local_304 = local_20c;
    FUN_008fe134(param_2 + 0x18);
    if (uVar20 == 2) {
LAB_008f48a0:
      uVar26 = 0x80000006;
      bVar1 = false;
    }
    else {
      local_220 = uVar26;
      local_21c = uVar2;
      local_218 = uVar3;
      local_214 = local_1fc;
      local_210 = local_1f8;
      local_20c = local_1f4;
      local_208 = uStack_1f0;
      local_204 = uStack_1ec;
      local_200 = uStack_1e8;
LAB_008f48bc:
      bVar1 = true;
      uVar26 = local_304;
    }
    local_304 = uVar20;
    local_320 = param_2 + 0x2d;
    local_318 = param_2 + 0xe;
    local_31c = param_2 + 0x29;
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_008fe274(local_318);
    *(undefined1 *)local_320 = 1;
    *(undefined1 *)local_31c = 1;
    if (bVar1) {
      uStack_44 = local_204;
      uStack_40 = local_200;
    }
    uStack_48 = local_208;
    local_4c = local_20c;
    local_50 = local_210;
    local_54 = local_214;
    local_58 = local_218;
    local_5c = local_21c;
    local_60 = local_220;
    uVar20 = (uint)bVar1;
  }
  param_1[2] = (uint)local_2f8;
  param_1[3] = (uint)local_300;
  param_1[4] = local_308;
  param_1[5] = local_2fc;
  *param_1 = uVar20;
  param_1[1] = local_304;
  param_1[6] = uVar26;
  param_1[7] = local_60;
  param_1[8] = local_5c;
  param_1[9] = local_58;
  param_1[10] = local_54;
  param_1[0xb] = local_50;
  param_1[0xc] = local_4c;
  param_1[0xd] = uStack_48;
  param_1[0xe] = uStack_44;
  param_1[0xf] = uStack_40;
  uVar10 = 1;
LAB_008f4970:
  *(undefined1 *)(param_2 + 3) = uVar10;
  return;
}

