// FUN_010c87b4 @ 010c87b4 size=3060 calls_out=23 calls_in=0
// strings: Missing request message.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010c87b4(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  bool bVar11;
  int *local_444;
  int **local_440;
  int local_434;
  int *local_430;
  int **local_428;
  int *local_424;
  int **local_420;
  int *local_41c;
  int **local_418;
  int local_40c;
  undefined1 auStack_400 [72];
  undefined1 auStack_3b8 [72];
  int *local_370;
  int **local_36c;
  int *local_368;
  int **local_364;
  int *local_360;
  int **local_35c;
  int *local_358;
  int **ppiStack_354;
  int *piStack_350;
  int **ppiStack_34c;
  int *piStack_348;
  int **local_344;
  int *piStack_340;
  int **ppiStack_33c;
  int *piStack_338;
  int **ppiStack_334;
  int *local_330;
  int **ppiStack_32c;
  int *piStack_328;
  int **ppiStack_324;
  int *piStack_320;
  int **ppiStack_31c;
  int *local_318;
  int **ppiStack_314;
  int *piStack_310;
  int **ppiStack_30c;
  int *piStack_308;
  int **local_304;
  int *piStack_300;
  int **ppiStack_2fc;
  int *piStack_2f8;
  int **ppiStack_2f4;
  int *local_2f0;
  int **ppiStack_2ec;
  int *piStack_2e8;
  int **ppiStack_2e4;
  int *piStack_2e0;
  int **ppiStack_2dc;
  int *local_2d8;
  int **ppiStack_2d4;
  int *piStack_2d0;
  int **ppiStack_2cc;
  int *piStack_2c8;
  int **local_2c4;
  int *piStack_2c0;
  int **ppiStack_2bc;
  int *piStack_2b8;
  int **ppiStack_2b4;
  int *local_2b0;
  int **ppiStack_2ac;
  int *piStack_2a8;
  int **ppiStack_2a4;
  int *piStack_2a0;
  int **ppiStack_29c;
  int *local_298;
  int **local_294;
  int *local_290;
  int **local_28c;
  int *local_288;
  int **local_284;
  int *local_280;
  int **local_27c;
  int *local_278;
  int **local_274;
  int *local_270;
  int **local_26c;
  int *piStack_268;
  int **local_264;
  int *piStack_260;
  int **local_25c;
  int *local_258;
  int **local_254;
  int *local_250;
  int **local_24c;
  int *local_248;
  int **local_244;
  int *piStack_240;
  int **ppiStack_23c;
  int *local_238;
  int **local_234;
  int *local_230;
  int **local_22c;
  undefined4 local_1f0;
  int *local_1e8;
  int *local_1e0;
  int **ppiStack_1dc;
  int *piStack_1d8;
  int **ppiStack_1d4;
  int *piStack_1d0;
  int **local_1cc;
  int *piStack_1c8;
  int **ppiStack_1c4;
  int *piStack_1c0;
  int **ppiStack_1bc;
  int *local_1b8;
  int **ppiStack_1b4;
  int *piStack_1b0;
  int **ppiStack_1ac;
  int *piStack_1a8;
  int **ppiStack_1a4;
  int local_1a0;
  int local_19c;
  undefined1 auStack_198 [72];
  int *local_150;
  int **ppiStack_14c;
  int *piStack_148;
  int **ppiStack_144;
  int *piStack_140;
  int **local_13c;
  int *piStack_138;
  int **ppiStack_134;
  int *piStack_130;
  int **ppiStack_12c;
  int *local_128;
  int **ppiStack_124;
  int *piStack_120;
  int **ppiStack_11c;
  int *piStack_118;
  int **ppiStack_114;
  int *local_110;
  int **ppiStack_10c;
  int *piStack_108;
  int **ppiStack_104;
  int *piStack_100;
  int **ppiStack_fc;
  int *local_f8;
  int **ppiStack_f4;
  int *piStack_f0;
  int **ppiStack_ec;
  int *piStack_e8;
  int **local_e4;
  int *piStack_e0;
  int **ppiStack_dc;
  int *piStack_d8;
  int **ppiStack_d4;
  int *local_d0;
  int **ppiStack_cc;
  int *piStack_c8;
  int **ppiStack_c4;
  int *piStack_c0;
  int **local_bc;
  int *piStack_b8;
  int **ppiStack_b4;
  int *piStack_b0;
  int **ppiStack_ac;
  int *local_a8;
  int **ppiStack_a4;
  int *piStack_a0;
  int **ppiStack_9c;
  int *piStack_98;
  int **ppiStack_94;
  int *local_90;
  int **local_8c;
  int *local_88;
  int **local_84;
  int *local_80;
  int **local_7c;
  int *local_78;
  int **ppiStack_74;
  int *local_70;
  int **ppiStack_6c;
  int *piStack_68;
  int **local_64;
  int *piStack_60;
  int **local_5c;
  int *piStack_58;
  int **ppiStack_54;
  int *local_50;
  int **ppiStack_4c;
  int *local_48;
  int **ppiStack_44;
  int *piStack_40;
  int **ppiStack_3c;
  int *local_38;
  int **local_34;
  int *local_30;
  int **local_2c;
  
  puVar8 = (undefined4 *)(param_2 + 0x400);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar5 = 0x101;
    puVar9 = (undefined4 *)(param_2 + 0xa0);
    bVar11 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    if (bVar11) {
      uVar5 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined2 *)(param_2 + 0x495) = 0;
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    uVar7 = *(undefined4 *)(param_2 + 0x490);
    *(uint *)(param_2 + 0xa0) = (uint)bVar11;
    *(undefined4 *)(param_2 + 0xa4) = uVar5;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(undefined4 **)(param_2 + 0x1d0) = puVar9;
    *(undefined4 *)(param_2 + 0x1d4) = uVar7;
LAB_010c88dc:
    *(undefined4 **)(param_2 + 0x1d8) = puVar9;
    *(undefined4 *)(param_2 + 0x1dc) = uVar7;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(undefined4 **)(param_2 + 0x3f0) = puVar9;
LAB_010c8924:
    iVar6 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar6,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_298,iVar6);
    if (local_298 == (int *)&DAT_00000003 && local_294 == (int **)0x0) {
      *(undefined2 *)(param_2 + 0x3f9) = 1;
      uVar7 = *(undefined4 *)(param_2 + 0x300);
      uVar5 = *(undefined4 *)(param_2 + 0x304);
      FUN_01bed4e2(param_2 + 0x408,iVar6,0x88);
      iVar6 = param_2 + 0x308;
      *(undefined1 *)(param_2 + 0x3fc) = 0;
      FUN_00faca34(iVar6,0x2000,0x8000,uVar7,uVar5,*puVar9,puVar9[1]);
      *(int *)(param_2 + 0x3f4) = iVar6;
      *(int **)(param_2 + 0x400) = (int *)(param_2 + 0x3f4);
LAB_010c89c8:
      FUN_00ebaca8(&local_298,iVar6,param_3);
      if (local_298 == (int *)&SUB_00000004 && local_294 == (int **)0x0) {
        uVar2 = 3;
        goto LAB_010c8c28;
      }
      local_418 = local_294;
      local_430 = local_290;
      local_440 = local_28c;
      local_420 = local_284;
      local_424 = local_280;
      local_428 = local_27c;
      local_41c = local_298;
      local_444 = local_288;
      local_150 = local_278;
      ppiStack_14c = local_274;
      piStack_148 = local_270;
      ppiStack_144 = local_26c;
      piStack_140 = piStack_268;
      local_13c = local_264;
      piStack_138 = piStack_260;
      ppiStack_134 = local_25c;
      piStack_130 = local_258;
      ppiStack_12c = local_254;
      local_128 = local_250;
      ppiStack_124 = local_24c;
      piStack_120 = local_248;
      ppiStack_11c = local_244;
      piStack_118 = piStack_240;
      ppiStack_114 = ppiStack_23c;
      if (local_298 != (int *)&DAT_00000003 || local_294 != (int **)0x0) {
        local_d0 = local_278;
        ppiStack_cc = local_274;
        piStack_c8 = local_270;
        ppiStack_c4 = local_26c;
        piStack_c0 = piStack_268;
        local_bc = local_264;
        piStack_b8 = piStack_260;
        ppiStack_b4 = local_25c;
        piStack_b0 = local_258;
        ppiStack_ac = local_254;
        local_a8 = local_250;
        ppiStack_a4 = local_24c;
        piStack_a0 = local_248;
        ppiStack_9c = local_244;
        piStack_98 = piStack_240;
        ppiStack_94 = ppiStack_23c;
        ppiVar10 = local_234;
        piVar4 = local_238;
        goto LAB_010c8e30;
      }
      piVar4 = local_288;
      if (((uint)local_290 & 1) != 0) {
LAB_010c8b44:
        *(undefined1 *)(param_2 + 0x3f9) = 0;
        FUN_01bed4e2(&local_298,param_2 + 0x408,0x88);
        local_84 = local_428;
        local_88 = local_424;
        *(undefined1 *)(param_2 + 0x3fb) = 0;
        local_8c = local_420;
        local_90 = piVar4;
        FUN_00f07b8c(puVar8,&local_298,&local_90);
        *(undefined1 *)(param_2 + 0x46c) = 0;
        *(undefined4 *)(param_2 + 0x458) = *(undefined4 *)(param_2 + 0x3f4);
        goto switchD_010c8bc4_caseD_4;
      }
      FUN_01a71aac(&local_90,0xd,"Missing request message.",0x18);
      local_420 = local_7c;
      local_430 = local_88;
      local_444 = local_80;
      if (local_90 == (int *)&DAT_00000003 && local_8c == (int **)0x0) {
        piVar4 = local_88;
        local_428 = local_420;
        local_424 = local_444;
        local_420 = local_84;
        goto LAB_010c8b44;
      }
      local_424 = local_78;
      local_428 = ppiStack_74;
      local_41c = local_90;
      local_418 = local_8c;
      local_d0 = local_70;
      ppiStack_cc = ppiStack_6c;
      piStack_c8 = piStack_68;
      ppiStack_c4 = local_64;
      piStack_c0 = piStack_60;
      local_bc = local_5c;
      piStack_b8 = piStack_58;
      ppiStack_b4 = ppiStack_54;
      piStack_b0 = local_50;
      ppiStack_ac = ppiStack_4c;
      local_a8 = local_48;
      ppiStack_a4 = ppiStack_44;
      piStack_a0 = piStack_40;
      ppiStack_9c = ppiStack_3c;
      piStack_98 = local_38;
      ppiStack_94 = local_34;
      ppiVar10 = local_2c;
      local_440 = local_84;
      piVar4 = local_30;
LAB_010c8e34:
      *(undefined1 *)(param_2 + 0x3fb) = 0;
      FUN_005f1224(param_2 + 0x308);
      *(undefined1 *)(param_2 + 0x3fc) = 0;
      if (*(char *)(param_2 + 0x3f9) != '\0') {
        FUN_01839f10(param_2 + 0x408);
      }
      *(undefined1 *)(param_2 + 0x3f9) = 0;
    }
    else {
      local_418 = local_294;
      local_41c = local_298;
      local_430 = local_290;
      local_444 = local_288;
      local_420 = local_284;
      local_424 = local_280;
      local_428 = local_27c;
      local_d0 = local_278;
      ppiStack_cc = local_274;
      piStack_c8 = local_270;
      ppiStack_c4 = local_26c;
      piStack_c0 = piStack_268;
      local_bc = local_264;
      piStack_b8 = piStack_260;
      ppiStack_b4 = local_25c;
      piStack_b0 = local_258;
      ppiStack_ac = local_254;
      local_a8 = local_250;
      ppiStack_a4 = local_24c;
      piStack_a0 = local_248;
      ppiStack_9c = local_244;
      piStack_98 = piStack_240;
      ppiStack_94 = ppiStack_23c;
      ppiVar10 = local_234;
      local_440 = local_28c;
      piVar4 = local_238;
    }
    if (*(char *)(param_2 + 0x3fa) != '\0') {
      FUN_00eca9c4(param_2 + 0x278);
    }
    *(undefined1 *)(param_2 + 0x3fa) = 0;
    *(undefined1 *)(param_2 + 0x3f8) = 1;
    if (local_41c == (int *)&SUB_00000004 && local_418 == (int **)0x0) {
LAB_010c8ec0:
      uVar2 = 3;
      goto LAB_010c9028;
    }
LAB_010c8ed0:
    local_434 = param_2 + 0x1e8;
    local_2d8 = local_d0;
    ppiStack_2d4 = ppiStack_cc;
    piStack_2d0 = piStack_c8;
    ppiStack_2cc = ppiStack_c4;
    piStack_2c8 = piStack_c0;
    local_2c4 = local_bc;
    piStack_2c0 = piStack_b8;
    ppiStack_2bc = ppiStack_b4;
    piStack_2b8 = piStack_b0;
    ppiStack_2b4 = ppiStack_ac;
    local_2b0 = local_a8;
    ppiStack_2ac = ppiStack_a4;
    piStack_2a8 = piStack_a0;
    ppiStack_2a4 = ppiStack_9c;
    piStack_2a0 = piStack_98;
    ppiStack_29c = ppiStack_94;
    local_318 = local_d0;
    ppiStack_314 = ppiStack_cc;
    piStack_310 = piStack_c8;
    ppiStack_30c = ppiStack_c4;
    piStack_308 = piStack_c0;
    local_304 = local_bc;
    piStack_300 = piStack_b8;
    ppiStack_2fc = ppiStack_b4;
    piStack_2f8 = piStack_b0;
    ppiStack_2f4 = ppiStack_ac;
    local_2f0 = local_a8;
    ppiStack_2ec = ppiStack_a4;
    piStack_2e8 = piStack_a0;
    ppiStack_2e4 = ppiStack_9c;
    piStack_2e0 = piStack_98;
    ppiStack_2dc = ppiStack_94;
    FUN_010bee10(local_434);
    if (local_41c == (int *)&DAT_00000003 && local_418 == (int **)0x0) {
      local_358 = local_2d8;
      ppiStack_354 = ppiStack_2d4;
      piStack_350 = piStack_2d0;
      ppiStack_34c = ppiStack_2cc;
      piStack_348 = piStack_2c8;
      local_344 = local_2c4;
      piStack_340 = piStack_2c0;
      ppiStack_33c = ppiStack_2bc;
      piStack_338 = piStack_2b8;
      ppiStack_334 = ppiStack_2b4;
      local_330 = local_2b0;
      ppiStack_32c = ppiStack_2ac;
      piStack_328 = piStack_2a8;
      ppiStack_324 = ppiStack_2a4;
      piStack_320 = piStack_2a0;
      ppiStack_31c = ppiStack_29c;
      local_364 = local_420;
      local_360 = local_424;
      local_368 = local_444;
      local_35c = local_428;
      local_370 = local_430;
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      local_30 = *(int **)(param_2 + 0x1dc);
      do {
        iVar6 = *local_30;
        bVar11 = (bool)hasExclusiveAccess(local_30);
      } while (!bVar11);
      *local_30 = iVar6 + 1;
      local_36c = local_440;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x10c93ec);
        (*pcVar1)();
      }
      FUN_01bed4e2(&local_90,&local_370,0x58);
      local_2c = (int **)((uint)local_2c & 0xffffff00);
      iVar6 = thunk_FUN_01be5118(0x68);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x68);
      }
      FUN_01bed4e2(iVar6,&local_90,0x68);
      *(int *)(param_2 + 0x1e8) = iVar6;
      puVar3 = &DAT_01c1f774;
      *(undefined **)(param_2 + 0x1ec) = &DAT_01c1f774;
      goto LAB_010c8ff8;
    }
    local_270 = local_2d8;
    local_26c = ppiStack_2d4;
    piStack_268 = piStack_2d0;
    local_264 = ppiStack_2cc;
    piStack_260 = piStack_2c8;
    local_25c = local_2c4;
    local_258 = piStack_2c0;
    local_254 = ppiStack_2bc;
    local_250 = piStack_2b8;
    local_24c = ppiStack_2b4;
    local_248 = local_2b0;
    local_244 = ppiStack_2ac;
    piStack_240 = piStack_2a8;
    ppiStack_23c = ppiStack_2a4;
    local_238 = piStack_2a0;
    local_234 = ppiStack_29c;
    local_288 = local_430;
    local_27c = local_420;
    local_278 = local_424;
    local_280 = local_444;
    local_274 = local_428;
    local_294 = (int **)0x0;
    local_298 = (int *)&DAT_00000003;
    local_290 = local_41c;
    local_28c = local_418;
    local_284 = local_440;
    local_230 = piVar4;
    local_22c = ppiVar10;
    FUN_00d61434(&local_1a0,&local_298,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                 *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    piVar4 = *(int **)(param_2 + 0x1dc);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar6 + -1;
LAB_010c92b4:
    local_40c = param_2 + 0xb0;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_2 + 0x1dc));
    }
    FUN_01bed4e2(auStack_400,auStack_198,0x48);
    *(undefined1 *)(param_2 + 0x1e0) = 1;
    if (local_1a0 != 3 || local_19c != 0) {
      FUN_01bed4e2(auStack_3b8,auStack_400,0x48);
      FUN_010becf4(local_40c);
      FUN_01bed4e2(param_1 + 2,auStack_3b8,0x48);
      *(undefined1 *)(param_2 + 0x495) = 0;
      uVar2 = 1;
      goto LAB_010c9038;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f48c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f48c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar9 = *(undefined4 **)(param_2 + 0x1d0);
      uVar7 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_010c88dc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22498);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22498);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x3f8)) {
      case 0:
        puVar9 = *(undefined4 **)(param_2 + 0x3f0);
        goto LAB_010c8924;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        iVar6 = **(int **)(param_2 + 0x400);
        goto LAB_010c89c8;
      }
switchD_010c8bc4_caseD_4:
      FUN_010c9664(&local_298,param_2 + 0x458,param_3);
      ppiVar10 = local_234;
      piVar4 = local_238;
      if (local_298 == (int *)&SUB_00000004 && local_294 == (int **)0x0) {
        uVar2 = 4;
LAB_010c8c28:
        *(undefined1 *)(param_2 + 0x3f8) = uVar2;
        goto LAB_010c8ec0;
      }
      local_418 = local_294;
      local_444 = local_288;
      local_420 = local_284;
      local_424 = local_280;
      local_428 = local_27c;
      local_41c = local_298;
      local_430 = local_290;
      local_440 = local_28c;
      local_f8 = local_278;
      ppiStack_f4 = local_274;
      piStack_f0 = local_270;
      ppiStack_ec = local_26c;
      piStack_e8 = piStack_268;
      local_e4 = local_264;
      piStack_e0 = piStack_260;
      ppiStack_dc = local_25c;
      piStack_d8 = local_258;
      ppiStack_d4 = local_254;
      local_110 = local_250;
      ppiStack_10c = local_24c;
      piStack_108 = local_248;
      ppiStack_104 = local_244;
      piStack_100 = piStack_240;
      ppiStack_fc = ppiStack_23c;
      if (local_298 != (int *)&DAT_00000003 || local_294 != (int **)0x0) {
        local_a8 = local_250;
        ppiStack_a4 = local_24c;
        piStack_a0 = local_248;
        ppiStack_9c = local_244;
        piStack_98 = piStack_240;
        ppiStack_94 = ppiStack_23c;
        local_d0 = local_278;
        ppiStack_cc = local_274;
        piStack_c8 = local_270;
        ppiStack_c4 = local_26c;
        piStack_c0 = piStack_268;
        local_bc = local_264;
        piStack_b8 = piStack_260;
        ppiStack_b4 = local_25c;
        piStack_b0 = local_258;
        ppiStack_ac = local_254;
        FUN_00e48938(puVar8);
LAB_010c8e30:
        goto LAB_010c8e34;
      }
      if (local_290 != (int *)&DAT_00000003 || local_28c != (int **)0x0) {
        local_280 = local_278;
        local_27c = local_274;
        local_278 = local_270;
        local_274 = local_26c;
        local_270 = piStack_268;
        local_26c = local_264;
        piStack_268 = piStack_260;
        local_264 = local_25c;
        piStack_260 = local_258;
        local_25c = local_254;
        FUN_00713444(puVar8);
      }
      local_430 = (int *)*puVar8;
      local_444 = *(int **)(param_2 + 0x408);
      local_420 = *(int ***)(param_2 + 0x40c);
      local_424 = *(int **)(param_2 + 0x410);
      local_428 = *(int ***)(param_2 + 0x414);
      local_440 = *(int ***)(param_2 + 0x404);
      local_d0 = *(int **)(param_2 + 0x418);
      ppiStack_cc = *(int ***)(param_2 + 0x41c);
      piStack_c8 = *(int **)(param_2 + 0x420);
      ppiStack_c4 = *(int ***)(param_2 + 0x424);
      piStack_c0 = *(int **)(param_2 + 0x428);
      local_bc = *(int ***)(param_2 + 0x42c);
      piStack_b8 = *(int **)(param_2 + 0x430);
      ppiStack_b4 = *(int ***)(param_2 + 0x434);
      piStack_b0 = *(int **)(param_2 + 0x438);
      ppiStack_ac = *(int ***)(param_2 + 0x43c);
      local_a8 = *(int **)(param_2 + 0x440);
      ppiStack_a4 = *(int ***)(param_2 + 0x444);
      piStack_a0 = *(int **)(param_2 + 0x448);
      ppiStack_9c = *(int ***)(param_2 + 0x44c);
      piStack_98 = *(int **)(param_2 + 0x450);
      ppiStack_94 = *(int ***)(param_2 + 0x454);
      *(undefined1 *)(param_2 + 0x3fb) = 0;
      FUN_005f1224(param_2 + 0x308);
      *(undefined2 *)(param_2 + 0x3f9) = 0;
      *(undefined1 *)(param_2 + 0x3fc) = 0;
      ppiVar10 = &local_a8;
      local_418 = (int **)0x0;
      local_41c = (int *)&DAT_00000003;
      *(undefined1 *)(param_2 + 0x3f8) = 1;
      piVar4 = local_290;
      goto LAB_010c8ed0;
    case 4:
      puVar3 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_010c8ff8:
    (**(code **)(puVar3 + 0xc))(&local_90,*(undefined4 *)(param_2 + 0x1e8),param_3);
    ppiVar10 = local_2c;
    piVar4 = local_30;
    local_24c = local_84;
    local_250 = local_88;
    local_28c = local_8c;
    if (local_90 != (int *)&SUB_00000004 || local_8c != (int **)0x0) {
      local_1e0 = local_78;
      ppiStack_1dc = ppiStack_74;
      piStack_1d8 = local_70;
      ppiStack_1d4 = ppiStack_6c;
      piStack_1d0 = piStack_68;
      local_1cc = local_64;
      piStack_1c8 = piStack_60;
      ppiStack_1c4 = local_5c;
      piStack_1c0 = piStack_58;
      ppiStack_1bc = ppiStack_54;
      local_1b8 = local_50;
      ppiStack_1b4 = ppiStack_4c;
      piStack_1b0 = local_48;
      ppiStack_1ac = ppiStack_44;
      piStack_1a8 = piStack_40;
      ppiStack_1a4 = ppiStack_3c;
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
      if (local_90 == (int *)&DAT_00000003 && local_28c == (int **)0x0) {
        local_298 = local_1e0;
        local_294 = ppiStack_1dc;
        local_290 = piStack_1d8;
        local_28c = ppiStack_1d4;
        local_288 = piStack_1d0;
        local_284 = local_1cc;
        local_280 = piStack_1c8;
        local_27c = ppiStack_1c4;
        local_278 = piStack_1c0;
        local_274 = ppiStack_1bc;
        local_270 = local_1b8;
        local_26c = ppiStack_1b4;
        piStack_268 = piStack_1b0;
        local_264 = ppiStack_1ac;
        piStack_260 = piStack_1a8;
        local_25c = ppiStack_1a4;
        local_258 = (int *)&DAT_00000003;
        local_248 = local_80;
        local_254 = (int **)0x0;
        local_244 = local_7c;
        local_1e8 = local_38;
        local_1f0 = 0;
        if (local_1e0 != (int *)&DAT_00000003 || ppiStack_1dc != (int **)0x0) {
          FUN_011de050(local_38);
        }
      }
      else {
        local_290 = local_90;
        local_288 = local_250;
        local_284 = local_24c;
        local_280 = local_80;
        local_27c = local_7c;
        local_278 = local_1e0;
        local_274 = ppiStack_1dc;
        local_270 = piStack_1d8;
        local_26c = ppiStack_1d4;
        piStack_268 = piStack_1d0;
        local_264 = local_1cc;
        piStack_260 = piStack_1c8;
        local_25c = ppiStack_1c4;
        local_258 = piStack_1c0;
        local_254 = ppiStack_1bc;
        local_250 = local_1b8;
        local_24c = ppiStack_1b4;
        local_248 = piStack_1b0;
        local_244 = ppiStack_1ac;
        piStack_240 = piStack_1a8;
        ppiStack_23c = ppiStack_1a4;
        local_294 = (int **)0x0;
        local_230 = piVar4;
        local_22c = ppiVar10;
        local_298 = (int *)&DAT_00000003;
        local_234 = local_34;
        local_238 = local_38;
      }
      FUN_00d61434(&local_1a0,&local_298,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      piVar4 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar11 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar11);
      *piVar4 = iVar6 + -1;
      goto LAB_010c92b4;
    }
    uVar2 = 4;
LAB_010c9028:
    *(undefined1 *)(param_2 + 0x1e0) = uVar2;
  }
  local_19c = 0;
  local_1a0 = 3;
  uVar2 = 3;
LAB_010c9038:
  *(undefined1 *)(param_2 + 0x494) = uVar2;
  *param_1 = local_1a0;
  param_1[1] = local_19c;
  return;
}

