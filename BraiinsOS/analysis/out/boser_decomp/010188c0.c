// FUN_010188c0 @ 010188c0 size=3424 calls_out=26 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010188c0(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *extraout_r2;
  uint *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  uint *unaff_r11;
  int iVar23;
  undefined8 uVar24;
  uint local_4e4;
  int *local_4dc;
  undefined4 local_4d8;
  int *local_4d4;
  uint local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  int *local_4bc;
  int *local_4b8;
  int *local_4b4;
  undefined4 local_4b0;
  uint local_478;
  uint local_460;
  int *local_448;
  uint local_444;
  int *local_440;
  int *piStack_43c;
  uint *puStack_438;
  uint local_434;
  int *piStack_430;
  uint *puStack_42c;
  uint uStack_428;
  uint uStack_424;
  uint uStack_420;
  uint local_41c;
  uint uStack_418;
  uint uStack_414;
  uint uStack_410;
  uint uStack_40c;
  uint uStack_408;
  undefined1 auStack_404 [76];
  undefined1 auStack_3b8 [80];
  uint local_368;
  int *piStack_364;
  uint *puStack_360;
  uint uStack_35c;
  uint uStack_358;
  uint uStack_354;
  uint local_350;
  uint uStack_34c;
  uint uStack_348;
  uint uStack_344;
  uint uStack_340;
  uint uStack_33c;
  uint local_338;
  int *piStack_334;
  uint *puStack_330;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
  uint local_320;
  uint uStack_31c;
  uint uStack_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  int *local_2d8;
  uint local_2d4;
  int *local_2d0;
  int *local_2cc;
  uint *local_2c8;
  uint local_2c4;
  int *local_2c0;
  uint *puStack_2bc;
  uint uStack_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  undefined1 auStack_294 [76];
  int *local_248;
  uint local_244;
  int *local_240;
  int *local_23c;
  uint *puStack_238;
  uint uStack_234;
  int *local_230;
  uint *puStack_22c;
  uint uStack_228;
  uint local_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  int *local_1b8;
  int *local_1b4;
  uint *local_1b0;
  uint local_1ac;
  int *piStack_1a8;
  uint *puStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint local_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  int *piStack_f4;
  uint *puStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  int *local_d0;
  uint *puStack_cc;
  uint uStack_c8;
  int *piStack_c4;
  uint *local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  int *piStack_9c;
  uint *puStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  int *piStack_6c;
  uint *puStack_68;
  int *local_60;
  uint *puStack_5c;
  uint uStack_58;
  int *piStack_54;
  uint *puStack_50;
  uint uStack_4c;
  int *local_48;
  undefined8 local_44;
  int *local_3c;
  uint *puStack_38;
  uint uStack_34;
  int *piStack_30;
  uint *puStack_2c;
  uint uStack_28;
  
  puVar22 = param_2 + 0x192;
  uVar15 = *puVar22;
  puVar8 = param_2 + 4;
  puVar10 = (undefined4 *)((uint)&local_2d8 | 4);
  puVar12 = param_2 + 0x19c;
  piVar11 = (int *)((uint)&local_248 | 4);
  local_4b4 = piVar11;
  do {
    uVar13 = *param_3;
LAB_010189b4:
    if (uVar15 != 2) {
      if ((uVar15 & 1) == 0) {
        FUN_00f1ebb8(&local_248,param_2[0x1d3],uVar13);
        piVar3 = local_248;
        if (local_248 == (int *)0x3) break;
        if (local_248 == (int *)0x4) goto LAB_010193bc;
        uVar15 = param_2[0x1d5];
        piVar20 = (int *)param_2[0x1d6];
        piVar11 = (int *)param_2[0x1d7];
        do {
          iVar6 = *piVar11;
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_01019690;
        piVar16 = (int *)param_2[0x1d8];
        do {
          iVar6 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_01019690;
        local_478 = param_2[0x1d9];
        FUN_01194058(puVar22);
        param_2[0x192] = 1;
        param_2[0x193] = (uint)piVar3;
        param_2[0x194] = local_244;
        param_2[0x195] = (uint)local_240;
        param_2[0x196] = (uint)local_23c;
        *(undefined1 *)(param_2 + 0x1d2) = 0;
        param_2[0x197] = uVar15;
        param_2[0x198] = (uint)piVar20;
        param_2[0x199] = (uint)piVar16;
        param_2[0x19a] = local_478;
        param_2[0x19b] = (uint)piVar11;
LAB_01019238:
        iVar6 = *piVar20;
        uVar7 = *(uint *)(iVar6 + 0xd0);
        iVar23 = *(int *)(iVar6 + 0xcc);
        local_460 = *(uint *)(iVar6 + 0xd4);
        *puVar12 = param_2[0x193];
        param_2[0x19d] = param_2[0x194];
        param_2[0x19e] = param_2[0x195];
        param_2[0x19f] = param_2[0x196];
        uVar21 = iVar6 + 8;
        param_2[0x1a2] = (uint)piVar16;
        *(undefined1 *)(param_2 + 0x1d1) = 0;
        uVar15 = 0;
        if (iVar23 != -0x80000000) {
          uVar15 = uVar7;
        }
        param_2[0x1a0] = (uint)(param_2 + 0x197);
        param_2[0x1a1] = (uint)(param_2 + 0x198);
        param_2[0x1a3] = local_478;
        param_2[0x1a4] = (uint)piVar11;
        param_2[0x1a5] = uVar21;
        param_2[0x1a6] = uVar15;
        param_2[0x1a7] = local_460;
      }
      else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_2[0x1d2]) {
        case '\0':
          piVar20 = (int *)param_2[0x198];
          piVar16 = (int *)param_2[0x199];
          piVar11 = (int *)param_2[0x19b];
          local_478 = param_2[0x19a];
          goto LAB_01019238;
        case '\x01':
          goto switchD_0101920c_caseD_1;
        case '\x02':
          goto switchD_0101920c_caseD_2;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_2[0x1d1]) {
        case '\0':
          uVar21 = param_2[0x1a5];
          uVar15 = param_2[0x1a6];
          local_460 = param_2[0x1a7];
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c2197c);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c2197c);
        case '\x03':
          goto switchD_01019504_caseD_3;
        }
      }
      *(undefined1 *)((int)param_2 + 0x745) = 1;
      local_d0 = (int *)*puVar12;
      puStack_cc = (uint *)param_2[0x19d];
      uStack_c8 = param_2[0x19e];
      piStack_c4 = (int *)param_2[0x19f];
      local_c0 = (uint *)param_2[0x1a0];
      uStack_bc = param_2[0x1a1];
      local_b8 = param_2[0x1a2];
      uStack_b4 = param_2[0x1a3];
      uStack_b0 = param_2[0x1a4];
      uVar7 = *(uint *)(uVar21 + 8);
      uVar9 = *(uint *)(uVar21 + 4);
      *(undefined1 *)((int)param_2 + 0x745) = 0;
      local_a0 = *puVar12;
      piStack_9c = (int *)param_2[0x19d];
      puStack_98 = (uint *)param_2[0x19e];
      uStack_94 = param_2[0x19f];
      local_90 = param_2[0x1a0];
      uStack_8c = param_2[0x1a1];
      local_88 = param_2[0x1a2];
      uStack_84 = param_2[0x1a3];
      uStack_80 = param_2[0x1a4];
      puVar8 = (uint *)thunk_FUN_01be5118(0x24);
      if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x24);
      }
      uVar14 = param_2[0x19d];
      uVar17 = param_2[0x19e];
      uVar18 = param_2[0x19f];
      *puVar8 = *puVar12;
      puVar8[1] = uVar14;
      puVar8[2] = uVar17;
      puVar8[3] = uVar18;
      uVar14 = param_2[0x1a1];
      uVar17 = param_2[0x1a2];
      uVar18 = param_2[0x1a3];
      uVar19 = param_2[0x1a4];
      puVar8[4] = param_2[0x1a0];
      puVar8[5] = uVar14;
      puVar8[6] = uVar17;
      puVar8[7] = uVar18;
      puVar8[8] = uVar19;
      iVar6 = *(int *)(uVar21 + 0x10);
      uVar14 = *(uint *)(uVar21 + 0x14);
      param_2[0x1b3] = (uint)(param_2 + 0x1a8);
      if (uVar14 != 0) {
        uVar14 = uVar14 + 8;
      }
      param_2[0x1b5] = local_460;
      param_2[0x1a8] = uVar21 + 0xc;
      param_2[0x1a9] = iVar6 + 8;
      param_2[0x1aa] = uVar14;
      param_2[0x1ab] = uVar9;
      *(undefined1 *)(param_2 + 0x1d0) = 0;
      param_2[0x1b4] = uVar15;
      param_2[0x1ac] = uVar7;
      param_2[0x1ad] = (uint)puVar8;
      param_2[0x1ae] = (uint)&DAT_01c219ac;
      param_2[0x1af] = 0;
switchD_01019504_caseD_3:
      FUN_011957fc(&local_248,param_2 + 0x1ab,param_3);
      uVar15 = local_244;
      piVar11 = local_248;
      if (local_248 == (int *)0x3 && local_244 == 0) {
        *(undefined1 *)(param_2 + 0x1d1) = 3;
        *(undefined1 *)(param_2 + 0x1d2) = 3;
        goto LAB_010193bc;
      }
      FUN_00b9695c(param_2 + 0x1ab);
      *(undefined1 *)((int)param_2 + 0x745) = 0;
      *(undefined1 *)(param_2 + 0x1d1) = 1;
      FUN_01bed4e2(&local_1b8,&local_240,0x88);
      FUN_01194174(puVar12);
      FUN_01bed4e2(&local_2d0,&local_1b8,0x88);
      *(undefined1 *)(param_2 + 0x1d2) = 1;
      local_2d4 = uVar15;
      local_2d8 = piVar11;
      FUN_01194058(puVar22);
      local_4bc = local_2d0;
      local_4b8 = local_2cc;
      *puVar22 = 0;
      local_368 = local_2c4;
      piStack_364 = local_2c0;
      puStack_360 = puStack_2bc;
      uStack_35c = uStack_2b8;
      uStack_358 = local_2b4;
      uStack_354 = local_2b0;
      local_350 = local_2ac;
      uStack_34c = uStack_2a8;
      uStack_348 = uStack_2a4;
      uStack_344 = uStack_2a0;
      uStack_340 = uStack_29c;
      uStack_33c = uStack_298;
      FUN_01bed4e2(auStack_3b8,auStack_294,0x4c);
      goto LAB_0101946c;
    }
    local_440 = (int *)*param_2;
    if (((uint)local_440 & 1) == 0) {
      uVar15 = 0;
      piVar11 = (int *)0x4;
      local_4b8 = local_4b4;
      local_2c8 = param_2;
      goto LAB_01019474;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x645)) {
    case 0:
      *(undefined1 *)(param_2 + 0x191) = 0;
      iVar6 = 0x3c;
      if (*(int *)(*(int *)(param_2[399] + 0x10) + 0x4c) == 0) {
        iVar6 = 0x2c;
      }
      iVar6 = *(int *)(param_2[399] + 0x10) + iVar6;
      piVar16 = *(int **)(iVar6 + 0x10);
      do {
        iVar23 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar23 + 1;
      if (iVar23 < 0) {
LAB_01019690:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1019690);
        (*pcVar1)();
      }
      uVar21 = *(uint *)(iVar6 + 0x14);
      uVar15 = param_2[399];
      param_2[2] = (uint)piVar16;
      param_2[3] = uVar21;
      uVar13 = *(undefined4 *)(uVar15 + 0x10);
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      param_2[0x18e] = (uint)puVar4;
      *puVar4 = 1;
      puVar4[1] = 1;
      puVar4[2] = uVar13;
      *(undefined1 *)(param_2 + 0x18d) = 0;
      *(undefined1 *)(param_2 + 0x191) = 1;
      param_2[0x18a] = uVar15;
      param_2[0x18b] = param_2[400];
      param_2[0x18c] = (uint)(param_2 + 2);
LAB_01018af0:
      FUN_00a203b4(&local_248,uVar15,&DAT_0056c91c,4);
      local_48 = (int *)*piVar11;
      local_44._0_4_ = (uint *)piVar11[1];
      local_44._4_4_ = piVar11[2];
      local_3c = (int *)piVar11[3];
      puStack_38 = (uint *)piVar11[4];
      if (local_248 == (int *)0x2) {
        uVar15 = param_2[0x18a];
        param_2[0x184] = param_2[0x18b];
        param_2[0x185] = uVar15;
        param_2[0x186] = local_44._4_4_;
        param_2[0x187] = (uint)local_3c;
        param_2[0x188] = (uint)puStack_38;
        *(undefined1 *)((int)param_2 + 0x625) = 0;
        local_70 = local_44._4_4_;
        piStack_6c = local_3c;
        puStack_68 = puStack_38;
LAB_01018c6c:
        uVar21 = param_2[0x186];
        uVar9 = param_2[0x188];
        uVar7 = param_2[0x187];
        *(undefined1 *)(param_2 + 0x189) = 1;
        iVar6 = FUN_011b21e4(uVar15);
        if ((*(char *)(iVar6 + 0xc) != '\0') ||
           (FUN_00aba2c0(&local_248,0), piVar16 = local_248, local_248 == (int *)0x2)) {
          iVar6 = *(int *)(iVar6 + 0x2c);
          *(undefined1 *)(param_2 + 0x11) = 0;
          *(undefined1 *)(param_2 + 0x189) = 0;
          param_2[4] = uVar21;
          param_2[5] = uVar7;
          param_2[6] = uVar9;
          param_2[7] = iVar6 + 8;
          goto switchD_01018c54_caseD_3;
        }
        uVar24 = CONCAT44(local_240,local_244);
        local_48 = local_23c;
        local_44._0_4_ = puStack_238;
        local_44._4_4_ = uStack_234;
        local_3c = local_230;
        puStack_38 = puStack_22c;
        uStack_34 = uStack_228;
        FUN_019bb7e0(uVar21,uVar7);
        goto LAB_01018dd4;
      }
      *puVar10 = local_48;
      puVar10[1] = (uint *)local_44;
      puVar10[2] = local_44._4_4_;
      puVar10[3] = local_3c;
      puVar10[4] = puStack_38;
      piStack_c4 = local_230;
      local_c0 = puStack_22c;
      uStack_bc = uStack_228;
      local_b8 = local_224;
      uStack_b4 = local_220;
      uStack_b0 = uStack_21c;
      uStack_ac = uStack_218;
      uStack_a8 = uStack_214;
      uStack_a4 = uStack_210;
      *(undefined1 *)(param_2 + 0x18d) = 1;
      piVar16 = local_248;
LAB_01018be8:
      local_240 = local_2d0;
      local_244 = local_2d4;
      local_23c = local_2cc;
      puStack_238 = local_2c8;
      uStack_234 = local_2c4;
      local_230 = piStack_c4;
      puStack_22c = local_c0;
      uStack_228 = uStack_bc;
      local_224 = local_b8;
      local_220 = uStack_b4;
      uStack_21c = uStack_b0;
      uStack_218 = uStack_ac;
      uStack_214 = uStack_a8;
      uStack_210 = uStack_a4;
      local_2c0 = piStack_c4;
      puStack_2bc = local_c0;
      uStack_2b8 = uStack_bc;
      local_2b4 = local_b8;
      local_2b0 = uStack_b4;
      local_2ac = uStack_b0;
      uStack_2a8 = uStack_ac;
      uStack_2a4 = uStack_a8;
      uStack_2a0 = uStack_a4;
      local_248 = piVar16;
      piStack_f4 = piStack_c4;
      puStack_f0 = local_c0;
      uStack_ec = uStack_bc;
      local_e8 = local_b8;
      uStack_e4 = uStack_b4;
      uStack_e0 = uStack_b0;
      uStack_dc = uStack_ac;
      uStack_d8 = uStack_a8;
      uStack_d4 = uStack_a4;
      local_d0 = local_2cc;
      puStack_cc = local_2c8;
      uStack_c8 = local_2c4;
      FUN_009ed8c0(&local_1b8,param_2[399],&local_248);
      unaff_r11 = local_1b0;
      if (local_1b8 == (int *)0x2) {
        uVar24 = CONCAT44(local_1b0,local_1b4);
        goto LAB_01018e4c;
      }
      local_4bc = local_1b8;
      local_4b8 = local_1b4;
      local_a0 = local_1ac;
      piStack_9c = piStack_1a8;
      puStack_98 = puStack_1a4;
      uStack_94 = uStack_1a0;
      local_90 = uStack_19c;
      uStack_8c = uStack_198;
      local_88 = local_194;
      uStack_84 = uStack_190;
      uStack_80 = uStack_18c;
      uStack_7c = uStack_188;
      uStack_78 = uStack_184;
      uStack_74 = uStack_180;
      piVar16 = (int *)param_2[0x18e];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_2[0x18e]);
      }
      piVar16 = (int *)param_2[2];
      *(undefined1 *)(param_2 + 0x191) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar6 + -1;
      uVar15 = 2;
      if (iVar6 != 1) {
        *(undefined1 *)((int)param_2 + 0x645) = 1;
        *param_2 = 0;
        param_2[1] = 0;
        puVar5 = unaff_r11;
LAB_010195a0:
        local_2c8 = puVar5;
        piVar11 = (int *)0x3;
        local_338 = local_a0;
        piStack_334 = piStack_9c;
        puStack_330 = puStack_98;
        uStack_32c = uStack_94;
        uStack_328 = local_90;
        uStack_324 = uStack_8c;
        local_320 = local_88;
        uStack_31c = uStack_84;
        uStack_318 = uStack_80;
        uStack_314 = uStack_7c;
        uStack_310 = uStack_78;
        uStack_30c = uStack_74;
        local_368 = local_a0;
        piStack_364 = piStack_9c;
        puStack_360 = puStack_98;
        uStack_35c = uStack_94;
        uStack_358 = local_90;
        uStack_354 = uStack_8c;
        uVar15 = 0;
        local_350 = local_88;
        uStack_34c = uStack_84;
        uStack_348 = uStack_80;
        uStack_344 = uStack_7c;
        uStack_340 = uStack_78;
        uStack_33c = uStack_74;
LAB_0101946c:
        local_440 = local_4bc;
LAB_01019474:
        local_434 = local_368;
        piStack_430 = piStack_364;
        puStack_42c = puStack_360;
        uStack_428 = uStack_35c;
        uStack_424 = uStack_358;
        uStack_420 = uStack_354;
        local_41c = local_350;
        uStack_418 = uStack_34c;
        uStack_414 = uStack_348;
        uStack_410 = uStack_344;
        uStack_40c = uStack_340;
        uStack_408 = uStack_33c;
        local_448 = piVar11;
        local_444 = uVar15;
        piStack_43c = local_4b8;
        puStack_438 = local_2c8;
        FUN_01bed4e2(auStack_404,auStack_3b8,0x4c);
        if (piVar11 == (int *)0x4 && uVar15 == 0) {
          local_244 = 0;
          local_248 = (int *)0x3;
        }
        else {
          FUN_011df0b0(&local_248,&local_448);
        }
        FUN_01bed4e2(param_1,&local_248,0x90);
        return;
      }
      uVar24 = CONCAT44(local_4dc,local_4d8);
LAB_01018ec0:
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_2[2],param_2[3]);
      *(undefined1 *)((int)param_2 + 0x645) = 1;
      *param_2 = 0;
      param_2[1] = 0;
      puVar5 = unaff_r11;
      if (uVar15 == 2) goto LAB_010195a0;
      break;
    case 1:
switchD_0101920c_caseD_1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20cd4);
    case 2:
switchD_0101920c_caseD_2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20cd4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x18d]) {
      case '\0':
        uVar15 = param_2[0x18a];
        goto LAB_01018af0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20cd4);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c20cd4);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x625)) {
      case 0:
        uVar15 = param_2[0x185];
        goto LAB_01018c6c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1df58);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1df58);
      }
switchD_01018c54_caseD_3:
      uVar24 = FUN_010773d8(puVar8,param_3);
      if ((int)uVar24 == 0) {
        *(undefined1 *)((int)param_2 + 0x625) = 3;
        *(undefined1 *)(param_2 + 0x18d) = 3;
        goto LAB_01019548;
      }
      FUN_01077260(puVar8);
      piVar16 = (int *)0x2;
LAB_01018dd4:
      *(undefined1 *)(param_2 + 0x189) = 0;
      local_60 = local_48;
      puStack_5c = (uint *)local_44;
      uStack_58 = local_44._4_4_;
      piStack_54 = local_3c;
      puStack_50 = puStack_38;
      uStack_4c = uStack_34;
      *(undefined1 *)((int)param_2 + 0x625) = 1;
      FUN_01095400(puVar8);
      if (piVar16 == (int *)0x2) {
        local_d0 = local_2cc;
        puStack_cc = local_2c8;
        uStack_c8 = local_2c4;
        piStack_f4 = local_2c0;
        puStack_f0 = puStack_2bc;
        uStack_ec = uStack_2b8;
        local_e8 = local_2b4;
        uStack_e4 = local_2b0;
        uStack_e0 = local_2ac;
        uStack_dc = uStack_2a8;
        uStack_d8 = uStack_2a4;
        uStack_d4 = uStack_2a0;
        *(undefined1 *)(param_2 + 0x18d) = 1;
        piStack_c4 = piStack_f4;
        local_c0 = puStack_f0;
        uStack_bc = uStack_ec;
        local_b8 = local_e8;
        uStack_b4 = uStack_e4;
        uStack_b0 = uStack_e0;
        uStack_ac = uStack_dc;
        uStack_a8 = uStack_d8;
        uStack_a4 = uStack_d4;
      }
      else {
        unaff_r11 = (uint *)param_2[0x18c];
        local_3c = local_60;
        puStack_38 = puStack_5c;
        uStack_34 = uStack_58;
        piStack_30 = piStack_54;
        puStack_2c = puStack_50;
        uStack_28 = uStack_4c;
        local_48 = piVar16;
        local_44 = uVar24;
        FUN_006bd898(&local_248,&local_48,**(undefined4 **)(param_2[0x18a] + 0x10),
                     (*(undefined4 **)(param_2[0x18a] + 0x10))[1]);
        puVar5 = (uint *)thunk_FUN_01be5118(0xc);
        if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        uVar21 = unaff_r11[1];
        uVar15 = 0;
        if ((int)uVar21 < 0) {
LAB_01019684:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar15,local_4e4);
        }
        uVar7 = *unaff_r11;
        if (uVar21 == 0) {
          local_4e4 = 1;
        }
        else {
          uVar15 = 1;
          local_4e4 = FUN_01298504(uVar21,1);
          if (local_4e4 == 0) {
            local_4e4 = uVar21;
            goto LAB_01019684;
          }
          uVar15 = uVar21;
        }
        FUN_01bed4e2(local_4e4,uVar7 + 8,uVar21);
        *puVar5 = uVar15;
        puVar5[1] = local_4e4;
        puVar5[2] = uVar21;
        local_44._4_4_ = 1;
        local_48 = (int *)&DAT_00000001;
        local_44._0_4_ = puVar5;
        FUN_006bd824(&local_2d8,&local_248,&local_48);
        uVar24 = CONCAT44(local_2d0,local_2d4);
        local_d0 = local_2cc;
        puStack_cc = local_2c8;
        uStack_c8 = local_2c4;
        piStack_f4 = local_2c0;
        puStack_f0 = puStack_2bc;
        uStack_ec = uStack_2b8;
        local_e8 = local_2b4;
        uStack_e4 = local_2b0;
        uStack_e0 = local_2ac;
        uStack_dc = uStack_2a8;
        uStack_d8 = uStack_2a4;
        uStack_d4 = uStack_2a0;
        *(undefined1 *)(param_2 + 0x18d) = 1;
        if (local_2d8 == (int *)0x3) {
LAB_01019548:
          *(undefined1 *)((int)param_2 + 0x645) = 3;
LAB_010193bc:
          *param_1 = 4;
          param_1[1] = 0;
          return;
        }
        piVar16 = local_2d8;
        piStack_c4 = piStack_f4;
        local_c0 = puStack_f0;
        uStack_bc = uStack_ec;
        local_b8 = local_e8;
        uStack_b4 = uStack_e4;
        uStack_b0 = uStack_e0;
        uStack_ac = uStack_dc;
        uStack_a8 = uStack_d8;
        uStack_a4 = uStack_d4;
        if (local_2d8 != (int *)0x2) goto LAB_01018be8;
      }
LAB_01018e4c:
      local_4d4 = (int *)param_2[2];
      local_4c4 = *(uint *)(param_2[399] + 0x14);
      local_4c8 = *(uint *)(param_2[399] + 0x18);
      do {
        iVar6 = *local_4d4;
        bVar2 = (bool)hasExclusiveAccess(local_4d4);
      } while (!bVar2);
      *local_4d4 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01019690;
      piVar16 = (int *)param_2[2];
      local_4cc = param_2[3];
      local_4d0 = param_2[0x18e];
      *(undefined1 *)(param_2 + 0x191) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar6 + -1;
      uVar15 = 0;
      if (iVar6 == 1) goto LAB_01018ec0;
      *(undefined1 *)((int)param_2 + 0x645) = 1;
      uVar15 = 0;
      *param_2 = 0;
      param_2[1] = 0;
    }
    local_4b4 = (int *)((ulonglong)uVar24 >> 0x20);
    local_4b0 = (undefined4)uVar24;
    local_338 = local_a0;
    piStack_334 = piStack_9c;
    puStack_330 = puStack_98;
    uStack_32c = uStack_94;
    uStack_328 = local_90;
    uStack_324 = uStack_8c;
    local_320 = local_88;
    uStack_31c = uStack_84;
    uStack_318 = uStack_80;
    uStack_314 = uStack_7c;
    uStack_310 = uStack_78;
    uStack_30c = uStack_74;
    FUN_01193fe4(puVar22);
    param_2[0x193] = (uint)local_4bc;
    param_2[0x192] = uVar15;
    param_2[0x194] = (uint)local_4b8;
    param_2[0x195] = (uint)unaff_r11;
    param_2[0x196] = local_338;
    param_2[0x197] = (uint)piStack_334;
    param_2[0x198] = (uint)puStack_330;
    param_2[0x199] = uStack_32c;
    param_2[0x19a] = uStack_328;
    param_2[0x19b] = uStack_324;
    param_2[0x19c] = local_320;
    param_2[0x19d] = uStack_31c;
    param_2[0x19e] = uStack_318;
    param_2[0x19f] = uStack_314;
    param_2[0x1a0] = uStack_310;
    param_2[0x1a1] = uStack_30c;
    param_2[0x1d5] = local_4c4;
    param_2[0x1d6] = local_4c8;
    param_2[0x1d7] = local_4d0;
    param_2[0x1d8] = (uint)local_4d4;
    *(undefined8 *)(param_2 + 0x1d3) = uVar24;
    param_2[0x1d9] = local_4cc;
    local_4d8 = local_4b0;
    local_4dc = local_4b4;
  } while( true );
  FUN_01193fe4(puVar22);
  uVar15 = 2;
  *puVar22 = 2;
  unaff_r11 = (uint *)&DAT_00000003;
  local_4b4 = extraout_r2;
  goto LAB_010189b4;
}

