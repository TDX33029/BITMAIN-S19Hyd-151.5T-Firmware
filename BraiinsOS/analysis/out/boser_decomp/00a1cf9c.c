// FUN_00a1cf9c @ 00a1cf9c size=4252 calls_out=26 calls_in=0
// strings: latestRelease

void FUN_00a1cf9c(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 uVar9;
  int iVar10;
  int **ppiVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  byte bVar16;
  uint uVar17;
  undefined *puVar18;
  int unaff_r6;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  int *unaff_r8;
  int iVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  int *local_394;
  int *local_390;
  int *local_38c;
  int *local_388;
  int *local_384;
  int *local_380;
  int *local_378;
  int *local_374;
  int *local_370;
  int *local_36c;
  int *local_368;
  int *local_338;
  int *piStack_334;
  int *piStack_330;
  int *piStack_32c;
  int *local_328;
  int *piStack_324;
  int *piStack_320;
  int *piStack_31c;
  int *piStack_318;
  int *local_310;
  int *piStack_30c;
  int *piStack_308;
  int *local_304;
  int *local_300;
  int *piStack_2fc;
  int *piStack_2f8;
  int *piStack_2f4;
  int *piStack_2f0;
  int *local_2e8;
  int *piStack_2e4;
  int *piStack_2e0;
  int *piStack_2dc;
  int *local_2d8;
  int *piStack_2d4;
  int *piStack_2d0;
  int *piStack_2cc;
  int *piStack_2c8;
  int *local_2c4;
  int *piStack_2c0;
  int *piStack_2bc;
  int *piStack_2b8;
  int *piStack_2b4;
  int local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int *local_2a0;
  int *piStack_29c;
  int *piStack_298;
  int *piStack_294;
  int *local_290;
  int *piStack_28c;
  int *piStack_288;
  int *piStack_284;
  int *piStack_280;
  int *local_278;
  int *local_274;
  int *local_270;
  int *local_268;
  int *piStack_264;
  int *piStack_260;
  int *piStack_25c;
  int *local_258;
  int *piStack_254;
  int *piStack_250;
  int *piStack_24c;
  int *piStack_248;
  int *local_240;
  int *local_23c;
  int *local_238;
  int *local_234;
  int *local_230;
  int *local_22c;
  int *local_228;
  int *local_224;
  int *local_220;
  int *local_21c;
  int *local_218;
  int *local_214;
  int *piStack_210;
  int *piStack_20c;
  int *piStack_208;
  int *piStack_204;
  int local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int *local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined1 local_198;
  undefined1 local_194;
  int local_d8;
  int local_d4;
  uint local_d0;
  int *local_cc;
  int *piStack_c8;
  int *piStack_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0;
  undefined1 local_ac;
  int *local_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *local_9c;
  int *local_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *local_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *local_48;
  int *piStack_44;
  int *piStack_40;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar19 = *param_2;
    iVar22 = param_2[1];
    uVar25 = 0;
    local_374 = (int *)0x80000007;
    param_2[2] = iVar22;
    iVar10 = *(int *)(iVar22 + 0x10);
    piVar13 = param_2;
    local_378 = param_3;
    if (*(int *)(iVar10 + 0x40) == 0x10) {
      iVar10 = thunk_FUN_01bed842(*(int *)(iVar10 + 0x3c) + 8,&DAT_005698a8,0x10);
      if (iVar10 == 0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar22;
        goto LAB_00a1d614;
      }
    }
    else if ((*(int *)(iVar10 + 0x40) == 0xd) &&
            (iVar10 = thunk_FUN_01bed842(*(int *)(iVar10 + 0x3c) + 8,"latestRelease",0xd),
            iVar10 == 0)) {
      param_2[4] = iVar19;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar22;
      goto LAB_00a1d0d8;
    }
    goto LAB_00a1dd14;
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
      iVar19 = param_2[4];
      iVar22 = param_2[5];
LAB_00a1d0d8:
      param_2[6] = iVar19;
      param_2[7] = iVar22;
      *(undefined1 *)(param_2 + 8) = 0;
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
      iVar19 = param_2[6];
    }
    piVar15 = param_2 + 4;
    piVar14 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar13 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19;
    iVar22 = piVar14[4];
    iVar27 = piVar14[5];
    iVar26 = piVar14[6];
    iVar24 = piVar14[7];
    iVar19 = piVar14[8];
    iVar10 = piVar14[1];
    iVar20 = piVar14[2];
    iVar23 = piVar14[3];
    *piVar13 = *piVar14;
    param_2[6] = iVar10;
    param_2[7] = iVar20;
    param_2[8] = iVar23;
    param_2[9] = iVar22 + 0x20;
    param_2[10] = iVar27;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar24;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar22 = piVar14[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar15;
    param_2[0x2b] = (int)piVar13;
    param_2[0x2c] = iVar22;
LAB_00a1d208:
    iVar19 = *piVar15;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar19;
    param_2[0x27] = (int)piVar13;
    param_2[0x28] = iVar22;
LAB_00a1d228:
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x22] = (int)piVar13;
    param_2[0x23] = iVar19;
LAB_00a1d240:
    *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
    bVar16 = 1;
    param_2[0x11] = (int)piVar13;
    param_2[0x12] = iVar19;
LAB_00a1d25c:
    param_2[0xe] = 0;
    param_2[0x10] = 0;
    param_2[0xf] = 4;
    *(undefined1 *)(param_2 + 0x13) = 1;
    ppiVar11 = &local_240;
    FUN_008643f0(ppiVar11,param_2 + 0xe,piVar13,iVar19);
    unaff_r8 = local_240;
    if (local_240 != (int *)0x2) {
      local_36c = local_234;
      local_368 = local_230;
      local_a8 = local_228;
      piStack_a4 = local_224;
      piStack_a0 = local_220;
      local_9c = local_21c;
      local_98 = local_218;
      piStack_94 = local_214;
      piStack_90 = piStack_210;
      piStack_8c = piStack_20c;
      piStack_88 = piStack_208;
      local_374 = local_22c;
      local_378 = local_238;
      piVar13 = local_23c;
      goto LAB_00a1d368;
    }
    if ((bVar16 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x13) = 0;
      local_2b0 = param_2[0xe];
      iStack_2ac = param_2[0xf];
      iStack_2a8 = param_2[0x10];
      FUN_009ec520(&local_240);
      local_2e8 = local_240;
      piStack_2e4 = local_23c;
      piStack_2e0 = local_238;
      piStack_2dc = local_234;
      local_2d8 = local_230;
      piStack_2d4 = local_22c;
      piStack_2d0 = local_228;
      piStack_2cc = local_224;
      piStack_2c8 = local_220;
      local_2c4 = local_21c;
      piStack_2c0 = local_218;
      piStack_2bc = local_214;
      piStack_2b8 = piStack_210;
      piStack_2b4 = piStack_20c;
      param_2[0x14] = (int)local_240;
      param_2[0x15] = (int)local_23c;
      param_2[0x16] = (int)local_238;
      param_2[0x17] = (int)local_234;
      param_2[0x18] = (int)local_230;
      param_2[0x19] = (int)local_22c;
      param_2[0x1a] = (int)local_228;
      param_2[0x1b] = (int)local_224;
      param_2[0x1c] = (int)local_220;
      param_2[0x1d] = (int)local_21c;
      param_2[0x1e] = (int)local_218;
      param_2[0x1f] = (int)local_214;
      param_2[0x20] = (int)piStack_210;
      param_2[0x21] = (int)piStack_20c;
      goto switchD_00a1d974_caseD_3;
    }
    uVar17 = param_2[0x10];
    if (0x2492492 < uVar17) {
      uVar25 = 0;
LAB_00a1d434:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar25,ppiVar11);
    }
    ppiVar11 = (int **)(uVar17 * 0x38);
    if (ppiVar11 == (int **)0x0) {
      iVar19 = 8;
      uVar17 = 0;
    }
    else {
      uVar25 = 8;
      iVar19 = FUN_01298504(ppiVar11,8);
      if (iVar19 == 0) goto LAB_00a1d434;
    }
    piVar15 = (int *)param_2[0xf];
    param_2[0x15] = iVar19;
    piVar13 = piVar15 + param_2[0x10] * 2;
    param_2[0x14] = uVar17;
    param_2[0x16] = 0;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x1c] = (int)piVar15;
    param_2[0x1d] = (int)piVar15;
    param_2[0x1e] = param_2[0xe];
    param_2[0x1f] = (int)piVar13;
    while (piVar15 != piVar13) {
      iVar19 = *piVar15;
      iVar22 = piVar15[1];
      param_2[0x1d] = (int)(piVar15 + 2);
      param_2[0x1a] = iVar19;
      param_2[0x17] = (int)(param_2 + 0x14);
      param_2[0x18] = iVar19;
      param_2[0x19] = iVar22;
      param_2[0x1b] = iVar22;
LAB_00a1e1e0:
      (**(code **)(iVar22 + 0xc))(&local_240,iVar19,param_3);
      local_374 = local_228;
      piVar2 = local_22c;
      piVar14 = local_230;
      local_378 = local_234;
      piVar13 = local_238;
      unaff_r8 = local_23c;
      piVar15 = local_240;
      if (local_240 == (int *)0x2) {
        uVar9 = 4;
        goto LAB_00a1e390;
      }
      local_36c = local_230;
      local_368 = local_22c;
      local_268 = local_224;
      piStack_264 = local_220;
      piStack_260 = local_21c;
      piStack_25c = local_218;
      local_258 = local_214;
      piStack_254 = piStack_210;
      piStack_250 = piStack_20c;
      piStack_24c = piStack_208;
      piStack_248 = piStack_204;
      FUN_01139b38(param_2[0x1a],param_2[0x1b]);
      if (((uint)piVar15 & 1) != 0) {
        local_a8 = local_268;
        piStack_a4 = piStack_264;
        piStack_a0 = piStack_260;
        local_9c = piStack_25c;
        local_98 = local_258;
        piStack_94 = piStack_254;
        piStack_90 = piStack_250;
        piStack_8c = piStack_24c;
        piStack_88 = piStack_248;
        FUN_009495dc(param_2 + 0x1c);
        FUN_007bc140(param_2 + 0x14);
        goto LAB_00a1d368;
      }
      local_74 = piVar2;
      local_80 = piVar13;
      local_7c = local_378;
      local_70 = local_374;
      local_78 = piVar14;
      local_6c = local_268;
      piStack_68 = piStack_264;
      piStack_64 = piStack_260;
      piStack_60 = piStack_25c;
      local_5c = local_258;
      piStack_58 = piStack_254;
      piStack_54 = piStack_250;
      piStack_50 = piStack_24c;
      piStack_4c = piStack_248;
      puVar21 = (undefined4 *)param_2[0x17];
      unaff_r8 = (int *)puVar21[2];
      if (unaff_r8 == (int *)*puVar21) {
        FUN_006e4ec8(puVar21);
      }
      puVar12 = (undefined4 *)(puVar21[1] + (int)unaff_r8 * 0x38);
      *puVar12 = piVar13;
      puVar12[1] = local_378;
      puVar12[2] = piVar14;
      puVar12[3] = piVar2;
      puVar12[4] = local_374;
      puVar12[5] = local_268;
      puVar12[6] = piStack_264;
      puVar12[7] = piStack_260;
      puVar12[8] = piStack_25c;
      puVar12[9] = local_258;
      puVar12[10] = piStack_254;
      puVar12[0xb] = piStack_250;
      puVar12[0xc] = piStack_24c;
      puVar12[0xd] = piStack_248;
      puVar21[2] = (undefined1 *)((int)unaff_r8 + 1);
      piVar13 = (int *)param_2[0x1f];
      piVar15 = (int *)param_2[0x1d];
    }
    param_2[0x18] = 0;
    FUN_009495dc(param_2 + 0x1c);
    local_278 = (int *)param_2[0x14];
    local_274 = (int *)param_2[0x15];
    local_270 = (int *)param_2[0x16];
LAB_00a1e32c:
    FUN_006cac18(&local_240,&local_278);
    local_378 = local_23c;
    bVar1 = false;
    local_36c = local_238;
    local_368 = local_234;
    local_374 = local_230;
    local_a8 = local_22c;
    piStack_a4 = local_228;
    piStack_a0 = local_224;
    local_9c = local_220;
    local_98 = local_21c;
    piStack_94 = local_218;
    piStack_90 = local_214;
    *(undefined1 *)(param_2 + 0x13) = 0;
    piVar13 = local_240;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar15 = (int *)param_2[0x2a];
      piVar13 = (int *)param_2[0x2b];
      iVar22 = param_2[0x2c];
      goto LAB_00a1d208;
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
      iVar19 = param_2[0x26];
      piVar13 = (int *)param_2[0x27];
      goto LAB_00a1d228;
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
      iVar19 = param_2[0x23];
      goto LAB_00a1d240;
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
      iVar19 = param_2[0x12];
      bVar16 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_00a1d25c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar19 = param_2[0x1a];
      iVar22 = param_2[0x1b];
      goto LAB_00a1e1e0;
    }
switchD_00a1d974_caseD_3:
    FUN_009ecbe0(&local_240,param_2 + 0x14,param_3);
    local_374 = local_22c;
    piVar15 = local_234;
    local_378 = local_238;
    piVar13 = local_23c;
    unaff_r8 = local_240;
    if (local_240 == (int *)&DAT_00000003) {
      uVar9 = 3;
LAB_00a1e390:
      local_384 = param_2 + 0x29;
      local_388 = param_2 + 0x24;
      local_38c = (int *)((int)param_2 + 0x4d);
      local_380 = param_2 + 0x2d;
      *(undefined1 *)local_38c = uVar9;
      *(undefined1 *)local_388 = 3;
      *(undefined1 *)local_384 = 3;
      *(undefined1 *)local_380 = 3;
      *param_1 = 2;
      uVar9 = 4;
      goto LAB_00a1dd60;
    }
    local_36c = local_234;
    local_368 = local_230;
    local_2a0 = local_228;
    piStack_29c = local_224;
    piStack_298 = local_220;
    piStack_294 = local_21c;
    local_290 = local_218;
    piStack_28c = local_214;
    piStack_288 = piStack_210;
    piStack_284 = piStack_20c;
    piStack_280 = piStack_208;
    FUN_009e8dc0(param_2 + 0x14);
    if (unaff_r8 == (int *)0x2) {
      local_274 = local_378;
      local_278 = piVar13;
      local_270 = piVar15;
      goto LAB_00a1e32c;
    }
    local_a8 = local_2a0;
    piStack_a4 = piStack_29c;
    piStack_a0 = piStack_298;
    local_9c = piStack_294;
    local_98 = local_290;
    piStack_94 = piStack_28c;
    piStack_90 = piStack_288;
    piStack_8c = piStack_284;
    piStack_88 = piStack_280;
LAB_00a1d368:
    if ((char)param_2[0x13] != '\0') {
      FUN_00b7d620(param_2 + 0xe);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar22 = param_2[5];
LAB_00a1d614:
      param_2[6] = iVar19;
      param_2[7] = iVar22;
      *(undefined1 *)(param_2 + 8) = 0;
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
      iVar19 = param_2[6];
    }
    piVar15 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_370 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar13 = param_2 + 4;
    *piVar13 = iVar19 + 0x40;
    iVar20 = piVar15[4];
    iVar23 = piVar15[5];
    iVar26 = piVar15[6];
    iVar24 = piVar15[7];
    iVar19 = piVar15[8];
    iVar22 = piVar15[1];
    iVar10 = piVar15[2];
    unaff_r6 = piVar15[3];
    *local_370 = *piVar15;
    param_2[6] = iVar22;
    param_2[7] = iVar10;
    param_2[8] = unaff_r6;
    param_2[9] = iVar20 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar26;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    param_2[0xc] = iVar24;
    local_36c = (int *)piVar15[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar13;
    param_2[0x2b] = (int)local_370;
    param_2[0x2c] = (int)local_36c;
LAB_00a1d69c:
    iVar19 = *piVar13;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x28] = (int)local_36c;
    param_2[0x27] = (int)local_370;
    param_2[0x26] = iVar19;
LAB_00a1d6b4:
    puVar18 = *(undefined **)(iVar19 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar19;
    param_2[0x11] = (int)local_36c;
    param_2[0x10] = (int)local_370;
    param_2[0xf] = (int)puVar18;
    param_2[0xe] = 1;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_368 = local_370 + 6;
    if (*(int *)(*(int *)*local_368 + 0x10) == 0) {
LAB_00a1d9f8:
      if (&UNK_00ba2e8b < puVar18) {
        uVar25 = 0;
LAB_00a1da10:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar25,unaff_r6);
      }
      unaff_r6 = (int)puVar18 * 0xb0;
      if (unaff_r6 == 0) {
        iVar22 = 8;
        puVar18 = (undefined *)0x0;
      }
      else {
        uVar25 = 8;
        iVar22 = FUN_01298504(unaff_r6,8);
        if (iVar22 == 0) goto LAB_00a1da10;
      }
      param_2[0x14] = (int)puVar18;
LAB_00a1da84:
      param_2[0x15] = iVar22;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar19 + 8) != 0) {
        iVar22 = *(int *)(iVar19 + 4);
        iVar10 = 0;
        iVar19 = *(int *)(iVar19 + 8) * 0x24;
        do {
          iVar20 = param_2[0x16];
          local_19c = local_370[7];
          local_1a8 = local_370[4];
          local_1a4 = local_370[5];
          local_1ac = (int *)0x0;
          if (*local_370 != 0) {
            local_1ac = local_370 + 1;
          }
          local_1a0 = *local_368;
          local_198 = (undefined1)local_370[8];
          local_1b8 = 1;
          local_1b4 = 0;
          local_194 = 0;
          local_1bc = (int)local_36c;
          local_1c0 = iVar22;
          local_1b0 = iVar10;
          if (iVar20 == param_2[0x14]) {
            FUN_00a20d80(param_2 + 0x14);
          }
          iVar22 = iVar22 + 0x24;
          FUN_01bed4e2(iVar20 * 0xb0 + param_2[0x15],&local_240,0xb0);
          iVar10 = iVar10 + 1;
          iVar19 = iVar19 + -0x24;
          param_2[0x16] = iVar20 + 1;
        } while (iVar19 != 0);
      }
      local_268 = (int *)param_2[0x14];
      piStack_264 = (int *)param_2[0x15];
      piStack_260 = (int *)param_2[0x16];
      FUN_00a1563c(&local_240);
      local_80 = local_240;
      local_7c = local_23c;
      local_78 = local_238;
      local_74 = local_234;
      local_70 = local_230;
      local_6c = local_22c;
      piStack_68 = local_228;
      piStack_64 = local_224;
      piStack_60 = local_220;
      local_5c = local_21c;
      piStack_58 = local_218;
      piStack_54 = local_214;
      piStack_50 = piStack_210;
      piStack_4c = piStack_20c;
      param_2[0x18] = (int)local_240;
      param_2[0x19] = (int)local_23c;
      param_2[0x1a] = (int)local_238;
      param_2[0x1b] = (int)local_234;
      param_2[0x1c] = (int)local_230;
      param_2[0x1d] = (int)local_22c;
      param_2[0x1e] = (int)local_228;
      param_2[0x1f] = (int)local_224;
      param_2[0x20] = (int)local_220;
      param_2[0x21] = (int)local_21c;
      param_2[0x22] = (int)local_218;
      param_2[0x23] = (int)local_214;
      param_2[0x24] = (int)piStack_210;
      param_2[0x25] = (int)piStack_20c;
      goto LAB_00a1dbcc;
    }
LAB_00a1d6ec:
    if (&UNK_00505050 < puVar18) {
      uVar25 = 0;
LAB_00a1d700:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar25,unaff_r6);
    }
    unaff_r6 = (int)puVar18 * 0x198;
    if (unaff_r6 == 0) {
      puVar18 = (undefined *)0x0;
      iVar22 = 8;
    }
    else {
      uVar25 = 8;
      iVar22 = FUN_01298504(unaff_r6,8);
      if (iVar22 == 0) goto LAB_00a1d700;
    }
    param_2[0x14] = (int)puVar18;
LAB_00a1d75c:
    param_2[0x15] = iVar22;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar19 + 8) != 0) {
      iVar10 = *(int *)(iVar19 + 4);
      iVar22 = 0;
      iVar19 = *(int *)(iVar19 + 8) * 0x24;
      do {
        if (*local_370 == 1) {
          local_80 = (int *)local_370[1];
          local_7c = (int *)local_370[2];
          local_78 = (int *)local_370[3];
        }
        local_d0 = (uint)(*local_370 == 1);
        local_c0 = local_370[4];
        local_bc = local_370[5];
        local_b4 = local_370[7];
        local_b8 = *local_368;
        local_b0 = (undefined1)local_370[8];
        local_cc = local_80;
        piStack_c8 = local_7c;
        piStack_c4 = local_78;
        local_ac = 0;
        iVar20 = param_2[0x16];
        local_d8 = (int)local_36c;
        local_1b0 = iVar22;
        local_d4 = iVar10;
        if (iVar20 == param_2[0x14]) {
          FUN_00f9d59c(param_2 + 0x14);
        }
        iVar10 = iVar10 + 0x24;
        FUN_01bed4e2(iVar20 * 0x198 + param_2[0x15],&local_240,0x198);
        iVar22 = iVar22 + 1;
        iVar19 = iVar19 + -0x24;
        param_2[0x16] = iVar20 + 1;
      } while (iVar19 != 0);
    }
    local_268 = (int *)param_2[0x14];
    piStack_264 = (int *)param_2[0x15];
    piStack_260 = (int *)param_2[0x16];
    FUN_00a138ec(&local_240);
    local_80 = local_240;
    local_7c = local_23c;
    local_78 = local_238;
    local_74 = local_234;
    local_70 = local_230;
    local_6c = local_22c;
    piStack_68 = local_228;
    piStack_64 = local_224;
    piStack_60 = local_220;
    local_5c = local_21c;
    piStack_58 = local_218;
    piStack_54 = local_214;
    piStack_50 = piStack_210;
    piStack_4c = piStack_20c;
    param_2[0x18] = (int)local_240;
    param_2[0x19] = (int)local_23c;
    param_2[0x1a] = (int)local_238;
    param_2[0x1b] = (int)local_234;
    param_2[0x1c] = (int)local_230;
    param_2[0x1d] = (int)local_22c;
    param_2[0x1e] = (int)local_228;
    param_2[0x1f] = (int)local_224;
    param_2[0x20] = (int)local_220;
    param_2[0x21] = (int)local_21c;
    param_2[0x22] = (int)local_218;
    param_2[0x23] = (int)local_214;
    param_2[0x24] = (int)piStack_210;
    param_2[0x25] = (int)piStack_20c;
LAB_00a1d8dc:
    FUN_009e9258(&local_240,param_2 + 0x18,param_3);
    if (local_240 != (int *)&DAT_00000003) {
      ppiVar11 = &local_a8;
      local_378 = local_238;
      local_36c = local_234;
      local_368 = local_230;
      local_374 = local_22c;
      local_a8 = local_228;
      piStack_a4 = local_224;
      piStack_a0 = local_220;
      local_9c = local_21c;
      local_98 = local_218;
      piStack_94 = local_214;
      piStack_90 = piStack_210;
      piStack_8c = piStack_20c;
      piStack_88 = piStack_208;
      FUN_00a1e4d0(param_2 + 0x18);
      unaff_r8 = local_240;
      piVar13 = local_23c;
      goto LAB_00a1dc70;
    }
    uVar9 = 3;
LAB_00a1dbf4:
    local_394 = param_2 + 0x13;
    *(undefined1 *)local_394 = uVar9;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)(param_2 + 0x29) = 3;
    *param_1 = 2;
    uVar9 = 6;
    goto LAB_00a1dd60;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar13 = (int *)param_2[0x2a];
      local_370 = (int *)param_2[0x2b];
      local_36c = (int *)param_2[0x2c];
      goto LAB_00a1d69c;
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
      iVar19 = param_2[0x26];
      local_370 = (int *)param_2[0x27];
      local_36c = (int *)param_2[0x28];
      goto LAB_00a1d6b4;
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
      puVar18 = (undefined *)param_2[0xf];
      local_370 = (int *)param_2[0x10];
      local_36c = (int *)param_2[0x11];
      iVar19 = param_2[0x12];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_368 = local_370 + 6;
      if (*(int *)(*(int *)*local_368 + 0x10) != 0) {
        if (param_2[0xe] != 0) goto LAB_00a1d6ec;
        param_2[0x14] = 0;
        iVar22 = 8;
        goto LAB_00a1d75c;
      }
      if (param_2[0xe] != 0) goto LAB_00a1d9f8;
      param_2[0x14] = 0;
      iVar22 = 8;
      goto LAB_00a1da84;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      goto LAB_00a1d8dc;
    case '\x04':
    }
LAB_00a1dbcc:
    FUN_009fdd18(&local_240,param_2 + 0x18,param_3);
    if (local_240 == (int *)&DAT_00000003) {
      uVar9 = 4;
      goto LAB_00a1dbf4;
    }
    ppiVar11 = &local_2e8;
    local_378 = local_238;
    local_36c = local_234;
    local_368 = local_230;
    local_374 = local_22c;
    local_2e8 = local_228;
    piStack_2e4 = local_224;
    piStack_2e0 = local_220;
    piStack_2dc = local_21c;
    local_2d8 = local_218;
    piStack_2d4 = local_214;
    piStack_2d0 = piStack_210;
    piStack_2cc = piStack_20c;
    piStack_2c8 = piStack_208;
    FUN_00a1e5ac(param_2 + 0x18);
    unaff_r8 = local_240;
    piVar13 = local_23c;
LAB_00a1dc70:
    local_38c = param_2 + 0x29;
    local_390 = param_2 + 0x2d;
    local_388 = param_2 + 0xe;
    if (unaff_r8 != (int *)0x2) {
      local_48 = *ppiVar11;
      piStack_44 = ppiVar11[1];
      piStack_40 = ppiVar11[2];
      local_3c = ppiVar11[3];
      local_38 = ppiVar11[4];
      piStack_34 = ppiVar11[5];
      piStack_30 = ppiVar11[6];
      piStack_2c = ppiVar11[7];
      piStack_28 = ppiVar11[8];
    }
    else {
      local_374 = (int *)0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00a1e688(local_388);
    *(undefined1 *)local_390 = 1;
    *(undefined1 *)local_38c = 1;
    ppiVar11 = &local_48;
    if (unaff_r8 != (int *)0x2) goto LAB_00a1dce0;
    ppiVar11 = &local_3c;
    goto LAB_00a1dd08;
  }
  piVar8 = piStack_88;
  piVar7 = piStack_8c;
  piVar6 = piStack_90;
  piVar5 = piStack_94;
  piVar4 = local_98;
  piVar3 = local_9c;
  piVar2 = piStack_a0;
  piVar14 = piStack_a4;
  piVar15 = local_a8;
  local_370 = param_2 + 0xe;
  local_380 = param_2 + 0x2d;
  local_384 = param_2 + 0x29;
  local_388 = param_2 + 0x24;
  local_38c = (int *)((int)param_2 + 0x4d);
  *(undefined1 *)local_38c = 1;
  FUN_009f6fb8(local_370);
  *(undefined1 *)local_388 = 1;
  *(undefined1 *)local_384 = 1;
  *(undefined1 *)local_380 = 1;
  ppiVar11 = &local_338;
  local_338 = piVar15;
  piStack_334 = piVar14;
  piStack_330 = piVar2;
  piStack_32c = piVar3;
  local_328 = piVar4;
  piStack_324 = piVar5;
  piStack_320 = piVar6;
  piStack_31c = piVar7;
  piStack_318 = piVar8;
  if (bVar1) {
LAB_00a1dce0:
    uVar25 = 1;
    local_310 = *ppiVar11;
    piStack_30c = ppiVar11[1];
    piStack_308 = ppiVar11[2];
    local_304 = ppiVar11[3];
    local_300 = ppiVar11[4];
    piStack_2fc = ppiVar11[5];
    piStack_2f8 = ppiVar11[6];
    piStack_2f4 = ppiVar11[7];
    piStack_2f0 = ppiVar11[8];
  }
  else {
    ppiVar11 = &piStack_32c;
    local_48 = piVar15;
    piStack_44 = piVar14;
    piStack_40 = piVar2;
LAB_00a1dd08:
    uVar25 = 0;
    local_310 = local_48;
    piStack_30c = piStack_44;
    piStack_308 = piStack_40;
    local_304 = *ppiVar11;
    local_300 = ppiVar11[1];
    piStack_2fc = ppiVar11[2];
    piStack_2f8 = ppiVar11[3];
  }
LAB_00a1dd14:
  param_1[1] = unaff_r8;
  param_1[2] = piVar13;
  param_1[3] = local_378;
  param_1[4] = local_36c;
  param_1[5] = local_368;
  param_1[6] = local_374;
  *param_1 = uVar25;
  param_1[7] = local_310;
  param_1[8] = piStack_30c;
  param_1[9] = piStack_308;
  param_1[10] = local_304;
  param_1[0xb] = local_300;
  param_1[0xc] = piStack_2fc;
  param_1[0xd] = piStack_2f8;
  param_1[0xe] = piStack_2f4;
  param_1[0xf] = piStack_2f0;
  uVar9 = 1;
LAB_00a1dd60:
  *(undefined1 *)(param_2 + 3) = uVar9;
  return;
}

