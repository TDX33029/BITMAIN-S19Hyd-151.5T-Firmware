// FUN_00de7320 @ 00de7320 size=3616 calls_out=25 calls_in=0
// strings: Missing request message.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00de7320(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  bool bVar21;
  uint local_5b0;
  undefined1 *local_5ac;
  uint local_5a8;
  int *local_5a4;
  uint *local_594;
  uint *local_590;
  undefined1 *local_580;
  undefined1 *local_578;
  uint *local_574;
  uint local_570;
  int local_564;
  undefined1 auStack_560 [72];
  undefined1 auStack_518 [72];
  uint local_4d0;
  uint *local_4cc;
  uint local_4c8;
  uint *local_4c4;
  undefined1 auStack_4c0 [72];
  undefined1 auStack_478 [72];
  undefined1 auStack_430 [72];
  uint local_3e8;
  uint *local_3e4;
  uint local_3e0;
  uint *local_3dc;
  uint local_3d8;
  uint *local_3d4;
  uint local_3d0;
  uint *local_3cc;
  uint uStack_3c8;
  uint *local_3c4;
  uint local_3c0;
  uint *puStack_3bc;
  uint uStack_3b8;
  uint *puStack_3b4;
  uint local_3b0;
  uint *puStack_3ac;
  uint local_3a8;
  uint *local_3a4;
  uint uStack_3a0;
  uint *puStack_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  int *local_388;
  uint local_384;
  int *local_380;
  uint local_37c;
  undefined4 local_340;
  undefined4 local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  int *piStack_328;
  uint uStack_324;
  int *piStack_320;
  uint uStack_31c;
  uint local_318;
  uint *puStack_314;
  uint uStack_310;
  uint *puStack_30c;
  uint uStack_308;
  uint *local_304;
  uint uStack_300;
  uint *puStack_2fc;
  uint uStack_2f8;
  uint *puStack_2f4;
  uint local_2f0;
  uint *puStack_2ec;
  uint uStack_2e8;
  uint *puStack_2e4;
  uint uStack_2e0;
  uint *puStack_2dc;
  int local_2d8;
  int local_2d4;
  undefined1 auStack_2d0 [72];
  undefined1 auStack_288 [72];
  undefined1 auStack_240 [72];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  uint *puStack_1e4;
  uint local_1e0;
  uint *puStack_1dc;
  uint uStack_1d8;
  uint *puStack_1d4;
  uint uStack_1d0;
  uint *puStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  uint *puStack_19c;
  uint local_198;
  uint *puStack_194;
  uint uStack_190;
  uint *puStack_18c;
  uint uStack_188;
  uint *puStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [72];
  undefined1 auStack_120 [72];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_90;
  uint *local_8c;
  uint local_88;
  uint *local_84;
  uint local_80;
  uint *local_7c;
  uint uStack_78;
  uint *local_74;
  uint uStack_70;
  uint *puStack_6c;
  uint uStack_68;
  uint *puStack_64;
  uint local_60;
  uint *puStack_5c;
  uint uStack_58;
  uint *puStack_54;
  uint uStack_50;
  uint *puStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int *local_30;
  uint local_2c;
  
  puVar5 = (undefined4 *)(param_2 + 0x308);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar7 = 0x101;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    bVar21 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0;
    if (bVar21) {
      uVar7 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar19 = (undefined4 *)(param_2 + 0xa0);
    uVar11 = *(undefined4 *)(param_2 + 0x490);
    *(uint *)(param_2 + 0xa0) = (uint)bVar21;
    *(undefined4 *)(param_2 + 0xa4) = uVar7;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(undefined4 **)(param_2 + 0x1d0) = puVar19;
    *(undefined4 *)(param_2 + 0x1d4) = uVar11;
LAB_00de7430:
    *(undefined4 **)(param_2 + 0x1d8) = puVar19;
    *(undefined4 *)(param_2 + 0x1dc) = uVar11;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(undefined4 **)(param_2 + 0x3f0) = puVar19;
LAB_00de747c:
    iVar12 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar12,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_3e8,iVar12);
    local_570 = local_3e0;
    puVar18 = local_3e4;
    uVar8 = local_3e8;
    if (local_3e8 != 3 || local_3e4 != (uint *)0x0) {
      local_590 = local_3dc;
      local_594 = local_3d4;
      FUN_01bed4e2(&local_1b0,&local_3d0,0x48);
      local_5a4 = local_388;
      local_5a8 = local_384;
      uVar9 = local_3d8;
      goto LAB_00de7bbc;
    }
    iVar6 = *(int *)(param_2 + 0x304);
    *(undefined2 *)(param_2 + 0x3f9) = 1;
    iVar14 = *(int *)(param_2 + 0x300);
    FUN_01bed4e2(param_2 + 0x408,iVar12,0x88);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    unaff_r5 = puVar19[1];
    uVar11 = *puVar19;
    puVar19 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar19 = 0x2000;
    puVar19[1] = 0x8000;
    if ((iVar14 == 0) || (iVar12 = (**(code **)(iVar6 + 0x10))(iVar14), iVar12 != 0)) {
      piVar13 = (int *)0x0;
      FUN_005f6438(iVar14,iVar6);
    }
    else {
      piVar13 = (int *)thunk_FUN_01be5118(8);
      if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar13 = iVar14;
      piVar13[1] = iVar6;
    }
    iVar12 = FUN_01298504(0x2000,1);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    *(undefined4 *)(param_2 + 0x348) = 4;
    *(undefined4 *)(param_2 + 0x34c) = 0;
    *puVar5 = 3;
    *(undefined4 *)(param_2 + 0x30c) = 0;
    *(undefined4 *)(param_2 + 0x3f4) = puVar5;
    *(undefined2 *)(param_2 + 0x3e0) = 0;
    *(int *)(param_2 + 0x3b8) = iVar12;
    *(undefined4 **)(param_2 + 1000) = puVar19;
    *(undefined **)(param_2 + 0x3ec) = &DAT_01c1b7dc;
    *(undefined4 *)(param_2 + 0x3d0) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 1;
    *(int **)(param_2 + 0x3d8) = piVar13;
    *(undefined **)(param_2 + 0x3dc) = &DAT_01c153d0;
    *(undefined4 *)(param_2 + 0x3b0) = uVar11;
    *(uint *)(param_2 + 0x3b4) = unaff_r5;
    *(undefined4 *)(param_2 + 0x3bc) = 0;
    *(undefined4 *)(param_2 + 0x3c0) = 0x2000;
    *(undefined4 *)(param_2 + 0x3c4) = 0x11;
    *(undefined4 *)(param_2 + 0x3c8) = 1;
    *(undefined4 *)(param_2 + 0x3cc) = 0;
    *(undefined4 **)(param_2 + 0x400) = (undefined4 *)(param_2 + 0x3f4);
    puVar19 = puVar5;
LAB_00de7698:
    FUN_00fd9af8(&local_3e8,puVar19,param_3);
    puVar16 = local_3d4;
    uVar9 = local_3d8;
    local_590 = local_3dc;
    local_570 = local_3e0;
    puVar18 = local_3e4;
    uVar8 = local_3e8;
    if (local_3e8 != 5 || local_3e4 != (uint *)0x0) {
      if ((local_3e8 & 7) == 4) {
        local_570 = 0x80000000;
        uVar9 = unaff_r5;
        local_590 = &local_3e8;
        puVar16 = local_3e4;
LAB_00de76f8:
        FUN_01bed4e2(auStack_288,&local_d8,0x48);
LAB_00de7708:
        if (local_570 == 0x80000000) {
          FUN_01a71aac(&local_90,0xd,"Missing request message.",0x18);
          uVar9 = local_80;
          local_570 = local_88;
          puVar18 = local_8c;
          uVar8 = local_90;
          if (local_90 != 3 || local_8c != (uint *)0x0) {
            local_590 = local_84;
            local_594 = local_7c;
            FUN_01bed4e2(&local_1b0,&uStack_78,0x48);
            local_5a4 = local_30;
            local_5a8 = local_2c;
            goto LAB_00de8164;
          }
          local_590 = local_84;
          puVar16 = local_7c;
        }
        else {
          local_88 = local_570;
        }
        uVar8 = local_88;
        *(undefined1 *)(param_2 + 0x3f9) = 0;
        FUN_01bed4e2(&local_3e8,param_2 + 0x408,0x88);
        *(undefined1 *)(param_2 + 0x3fb) = 0;
        local_8c = local_590;
        local_90 = uVar8;
        local_88 = uVar9;
        local_84 = puVar16;
        FUN_00f07cd4(param_2 + 0x400,&local_3e8,&local_90);
        *(undefined1 *)(param_2 + 0x46c) = 0;
        puVar3 = *(uint **)(param_2 + 0x3f4);
        *(uint **)(param_2 + 0x458) = puVar3;
        goto LAB_00de77d0;
      }
      if (local_3e8 == 3) goto LAB_00de76f8;
      local_594 = local_3d4;
      FUN_01bed4e2(&local_d8,&local_3d0,0x48);
      if (uVar8 == 4 && puVar18 == (uint *)0x0) goto LAB_00de76bc;
      local_5a4 = local_388;
      local_5a8 = local_384;
      FUN_01bed4e2(auStack_288,&local_d8,0x48);
      if (uVar8 == 3 && puVar18 == (uint *)0x0) goto LAB_00de7708;
      FUN_01bed4e2(&local_1b0,auStack_288,0x48);
      goto LAB_00de8164;
    }
LAB_00de76bc:
    uVar2 = 3;
LAB_00de76c0:
    local_580 = (undefined1 *)(param_2 + 0x3f8);
    *local_580 = uVar2;
    goto LAB_00de7c04;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c165ec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c165ec);
  case 3:
    puVar16 = (uint *)(param_2 + 0xb0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar19 = *(undefined4 **)(param_2 + 0x1d0);
      uVar11 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_00de7430;
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
        puVar19 = *(undefined4 **)(param_2 + 0x3f0);
        goto LAB_00de747c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        puVar19 = (undefined4 *)**(undefined4 **)(param_2 + 0x400);
        goto LAB_00de7698;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x46c)) {
        case 0:
          puVar3 = *(uint **)(param_2 + 0x458);
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c22478);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c22478);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(param_2 + 0x468)) {
          case 0:
            uVar11 = *(undefined4 *)(param_2 + 0x460);
            goto LAB_00de82f0;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22468);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22468);
          case 3:
            uVar11 = *(undefined4 *)(param_2 + 0x464);
            puVar3 = puVar16;
            goto LAB_00de82f4;
          }
        }
      }
LAB_00de77d0:
      puVar16 = (uint *)(param_2 + 0xb0);
      *(uint **)(param_2 + 0x45c) = puVar3;
      uVar8 = 3;
      local_570 = *puVar3;
      puVar18 = (uint *)0x0;
      local_574 = (uint *)puVar3[1];
      *puVar3 = 3;
      puVar3[1] = 0;
      if (local_570 == 3 && local_574 == (uint *)0x0) {
        do {
          *(undefined1 *)(param_2 + 0x468) = 0;
          uVar11 = *(undefined4 *)(param_2 + 0x45c);
          *(undefined4 *)(param_2 + 0x460) = uVar11;
LAB_00de82f0:
          *(undefined4 *)(param_2 + 0x464) = uVar11;
          puVar3 = puVar16;
LAB_00de82f4:
          local_5ac = (undefined1 *)(param_2 + 0x46c);
          puVar20 = (undefined1 *)(param_2 + 0x468);
          FUN_00fd9af8(&local_3e8,uVar11,param_3);
          puVar16 = local_3dc;
          uVar9 = local_3e0;
          puVar18 = local_3e4;
          uVar8 = local_3e8;
          if (local_3e8 == 5 && local_3e4 == (uint *)0x0) {
            *puVar20 = 3;
LAB_00de841c:
            *local_5ac = 3;
            uVar2 = 4;
            goto LAB_00de76c0;
          }
          local_570 = local_3e0;
          local_574 = local_3dc;
          uVar10 = local_3d8;
          puVar15 = local_3d4;
          FUN_01bed4e2(&local_90,&local_3d0,0x48);
          uVar17 = 0x80000000;
          if ((uVar8 & 7) == 4) {
LAB_00de8368:
            puVar16 = puVar3;
            uVar9 = uVar17;
            *puVar20 = 1;
            FUN_01bed4e2(auStack_120,auStack_168,0x48);
          }
          else {
            if (uVar8 == 3) {
              uVar17 = uVar9;
              puVar3 = puVar16;
              goto LAB_00de8368;
            }
            piVar13 = local_388;
            uVar17 = local_384;
            FUN_01bed4e2(auStack_168,&local_90,0x48);
            *puVar20 = 1;
            if (uVar8 == 4 && puVar18 == (uint *)0x0) goto LAB_00de841c;
            FUN_01bed4e2(auStack_120,auStack_168,0x48);
            if (uVar8 != 3 || puVar18 != (uint *)0x0) {
              FUN_01bed4e2(&local_d8,auStack_120,0x48);
              local_5b0 = uVar10;
              local_5a8 = uVar17;
              local_5a4 = piVar13;
              local_594 = puVar15;
              goto LAB_00de81a4;
            }
          }
          if (uVar9 == 0x80000000) goto LAB_00de8430;
          FUN_019bb7e0(uVar9,puVar16);
        } while( true );
      }
      local_d8 = puVar3[4];
      uStack_d4 = puVar3[5];
      uStack_d0 = puVar3[6];
      uStack_cc = puVar3[7];
      uStack_c8 = puVar3[8];
      uStack_c4 = puVar3[9];
      local_c0 = puVar3[10];
      uStack_bc = puVar3[0xb];
      uStack_b8 = puVar3[0xc];
      uStack_b4 = puVar3[0xd];
      uStack_b0 = puVar3[0xe];
      uStack_ac = puVar3[0xf];
      local_5b0 = puVar3[2];
      local_594 = (uint *)puVar3[3];
      goto LAB_00de81a4;
    case 4:
      puVar4 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_00de7cdc:
    (**(code **)(puVar4 + 0xc))(&local_90,*(undefined4 *)(param_2 + 0x1e8),param_3);
    puVar16 = local_8c;
    uVar8 = local_90;
    if (local_90 != 4 || local_8c != (uint *)0x0) {
      local_318 = local_88;
      puStack_314 = local_84;
      uStack_310 = local_80;
      puStack_30c = local_7c;
      uStack_308 = uStack_78;
      local_304 = local_74;
      uStack_300 = uStack_70;
      puStack_2fc = puStack_6c;
      uStack_2f8 = uStack_68;
      puStack_2f4 = puStack_64;
      local_2f0 = local_60;
      puStack_2ec = puStack_5c;
      uStack_2e8 = uStack_58;
      puStack_2e4 = puStack_54;
      uStack_2e0 = uStack_50;
      puStack_2dc = puStack_4c;
      local_330 = local_40;
      uStack_32c = uStack_3c;
      piStack_328 = piStack_38;
      uStack_324 = uStack_34;
      piStack_320 = local_30;
      uStack_31c = local_2c;
      FUN_00fe4378(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
      if (uVar8 == 3 && puVar16 == (uint *)0x0) {
        local_3e8 = local_318;
        local_3e4 = puStack_314;
        local_3e0 = uStack_310;
        local_3dc = puStack_30c;
        local_3d8 = uStack_308;
        local_3d4 = local_304;
        local_3d0 = uStack_300;
        local_3cc = puStack_2fc;
        uStack_3c8 = uStack_2f8;
        local_3c4 = puStack_2f4;
        local_3c0 = local_2f0;
        puStack_3bc = puStack_2ec;
        uStack_3b8 = uStack_2e8;
        puStack_3b4 = puStack_2e4;
        local_3b0 = uStack_2e0;
        puStack_3ac = puStack_2dc;
        local_3a8 = 3;
        local_3a4 = (uint *)0x0;
        local_340 = 0;
        local_338 = local_48;
        if (local_318 != 3 || puStack_314 != (uint *)0x0) {
          FUN_011de050();
        }
      }
      else {
        local_3e0 = uVar8;
        local_3dc = puVar16;
        local_3d8 = local_318;
        local_3d4 = puStack_314;
        local_3d0 = uStack_310;
        local_3cc = puStack_30c;
        uStack_3c8 = uStack_308;
        local_3c4 = local_304;
        local_3c0 = uStack_300;
        puStack_3bc = puStack_2fc;
        uStack_3b8 = uStack_2f8;
        puStack_3b4 = puStack_2f4;
        local_3b0 = local_2f0;
        puStack_3ac = puStack_2ec;
        local_3a8 = uStack_2e8;
        local_3a4 = puStack_2e4;
        uStack_3a0 = uStack_2e0;
        puStack_39c = puStack_2dc;
        local_394 = local_44;
        local_398 = local_48;
        local_390 = local_330;
        uStack_38c = uStack_32c;
        local_388 = piStack_328;
        local_384 = uStack_324;
        local_380 = piStack_320;
        local_37c = uStack_31c;
        local_3e4 = (uint *)0x0;
        local_3e8 = 3;
      }
      FUN_00d620b4(&local_2d8,&local_3e8,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      piVar13 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar13;
        bVar21 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar21);
      *piVar13 = iVar12 + -1;
      goto LAB_00de7f2c;
    }
    uVar2 = 4;
  }
LAB_00de7d18:
  *(undefined1 *)(param_2 + 0x1e0) = uVar2;
  goto LAB_00de7d1c;
LAB_00de8430:
  puVar16 = *(uint **)(param_2 + 0x45c);
  uVar8 = 3;
  puVar18 = (uint *)0x0;
  local_570 = *puVar16;
  local_574 = (uint *)puVar16[1];
  *puVar16 = 3;
  puVar16[1] = 0;
  if (local_570 == 3 && local_574 == (uint *)0x0) {
    local_570 = 3;
    local_574 = (uint *)0x0;
  }
  else {
    local_d8 = puVar16[4];
    uStack_d4 = puVar16[5];
    uStack_d0 = puVar16[6];
    uStack_cc = puVar16[7];
    uStack_c8 = puVar16[8];
    uStack_c4 = puVar16[9];
    local_c0 = puVar16[10];
    uStack_bc = puVar16[0xb];
    uStack_b8 = puVar16[0xc];
    uStack_b4 = puVar16[0xd];
    uStack_b0 = puVar16[0xe];
    uStack_ac = puVar16[0xf];
    uVar8 = 3;
    local_5b0 = puVar16[2];
    local_594 = (uint *)puVar16[3];
  }
LAB_00de81a4:
  local_5ac = (undefined1 *)(param_2 + 0x46c);
  FUN_01bed4e2(auStack_240,&local_d8,0x48);
  *local_5ac = 1;
  FUN_01bed4e2(&local_1f8,auStack_240,0x48);
  if (uVar8 == 3 && puVar18 == (uint *)0x0) {
    if (local_570 != 3 || local_574 != (uint *)0x0) {
      uStack_3c8 = uStack_1e8;
      local_3c4 = puStack_1e4;
      local_3c0 = local_1e0;
      puStack_3bc = puStack_1dc;
      uStack_3b8 = uStack_1d8;
      puStack_3b4 = puStack_1d4;
      local_3b0 = uStack_1d0;
      puStack_3ac = puStack_1cc;
      local_3dc = local_594;
      local_3e0 = local_5b0;
      local_3e4 = local_574;
      local_3e8 = local_570;
      FUN_00713444(param_2 + 0x400,&local_3e8);
    }
    local_590 = *(uint **)(param_2 + 0x404);
    local_594 = *(uint **)(param_2 + 0x40c);
    local_570 = *(uint *)(param_2 + 0x400);
    uVar9 = *(uint *)(param_2 + 0x408);
    FUN_01bed4e2(&local_1b0,param_2 + 0x410,0x48);
    puVar18 = (uint *)0x0;
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_005f1224(puVar5);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    *(undefined2 *)(param_2 + 0x3f9) = 0;
    uVar8 = 3;
  }
  else {
    local_180 = local_1c8;
    uStack_17c = uStack_1c4;
    uStack_178 = uStack_1c0;
    uStack_174 = uStack_1bc;
    uStack_170 = uStack_1b8;
    uStack_16c = uStack_1b4;
    local_1b0 = local_1f8;
    uStack_1ac = uStack_1f4;
    uStack_1a8 = uStack_1f0;
    uStack_1a4 = uStack_1ec;
    uStack_1a0 = uStack_1e8;
    puStack_19c = puStack_1e4;
    local_198 = local_1e0;
    puStack_194 = puStack_1dc;
    uStack_190 = uStack_1d8;
    puStack_18c = puStack_1d4;
    uStack_188 = uStack_1d0;
    puStack_184 = puStack_1cc;
    FUN_00e16da0(param_2 + 0x400);
    local_590 = local_574;
    uVar9 = local_5b0;
LAB_00de8164:
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_005f1224(param_2 + 0x308);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    if (*(char *)(param_2 + 0x3f9) != '\0') {
      FUN_0096a6b0(param_2 + 0x408);
    }
    *(undefined1 *)(param_2 + 0x3f9) = 0;
LAB_00de7bbc:
    if (*(char *)(param_2 + 0x3fa) != '\0') {
      FUN_005f9b88(param_2 + 0x278);
    }
    *(undefined1 *)(param_2 + 0x3fa) = 0;
  }
  local_564 = param_2 + 0x1e8;
  local_580 = (undefined1 *)(param_2 + 0x3f8);
  FUN_01bed4e2(auStack_478,&local_1b0,0x48);
  *local_580 = 1;
  if (uVar8 == 4 && puVar18 == (uint *)0x0) {
LAB_00de7c04:
    uVar2 = 3;
    goto LAB_00de7d18;
  }
  FUN_01bed4e2(auStack_430,auStack_478,0x48);
  FUN_00de2b04(local_564);
  if (uVar8 == 3 && puVar18 == (uint *)0x0) {
    FUN_01bed4e2(auStack_4c0,auStack_430,0x48);
    local_4c4 = local_594;
    local_4cc = local_590;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    local_30 = *(int **)(param_2 + 0x1dc);
    do {
      iVar12 = *local_30;
      bVar21 = (bool)hasExclusiveAccess(local_30);
    } while (!bVar21);
    *local_30 = iVar12 + 1;
    local_4d0 = local_570;
    local_4c8 = uVar9;
    if (iVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xde7bb8);
      (*pcVar1)();
    }
    FUN_01bed4e2(&local_90,&local_4d0,0x58);
    local_2c = local_2c & 0xffffff00;
    iVar12 = thunk_FUN_01be5118(0x68);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x68);
    }
    FUN_01bed4e2(iVar12,&local_90,0x68);
    *(int *)(param_2 + 0x1e8) = iVar12;
    puVar4 = &DAT_01c168ec;
    *(undefined **)(param_2 + 0x1ec) = &DAT_01c168ec;
    goto LAB_00de7cdc;
  }
  FUN_01bed4e2(&uStack_3c8,auStack_430,0x48);
  local_380 = local_5a4;
  local_37c = local_5a8;
  local_3d4 = local_590;
  local_3cc = local_594;
  local_3e4 = (uint *)0x0;
  local_3e8 = 3;
  local_3e0 = uVar8;
  local_3dc = puVar18;
  local_3d8 = local_570;
  local_3d0 = uVar9;
  FUN_00d620b4(&local_2d8,&local_3e8,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
               *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
  *(undefined1 *)(param_2 + 0x1e1) = 0;
  piVar13 = *(int **)(param_2 + 0x1dc);
  *(undefined1 *)(param_2 + 0x1e2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar13;
    bVar21 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar21);
  *piVar13 = iVar12 + -1;
LAB_00de7f2c:
  local_578 = (undefined1 *)(param_2 + 0x1e0);
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_2 + 0x1dc));
  }
  FUN_01bed4e2(auStack_560,auStack_2d0,0x48);
  *local_578 = 1;
  if (local_2d8 != 3 || local_2d4 != 0) {
    FUN_01bed4e2(auStack_518,auStack_560,0x48);
    FUN_00de29e8(param_2 + 0xb0);
    FUN_01bed4e2(param_1 + 2,auStack_518,0x48);
    *(undefined1 *)(param_2 + 0x495) = 0;
    uVar2 = 1;
    goto LAB_00de7d2c;
  }
LAB_00de7d1c:
  local_2d4 = 0;
  local_2d8 = 3;
  uVar2 = 3;
LAB_00de7d2c:
  *(undefined1 *)(param_2 + 0x494) = uVar2;
  *param_1 = local_2d8;
  param_1[1] = local_2d4;
  return;
}

