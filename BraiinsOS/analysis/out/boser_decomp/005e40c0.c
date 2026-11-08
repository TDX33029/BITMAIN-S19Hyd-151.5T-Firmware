// FUN_005e40c0 @ 005e40c0 size=3560 calls_out=25 calls_in=0
// strings: Missing request message.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005e40c0(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 *local_63c;
  uint local_62c;
  uint local_628;
  uint local_61c;
  undefined1 *local_614;
  int local_610;
  uint local_60c;
  undefined1 auStack_600 [72];
  undefined1 auStack_5b8 [72];
  uint local_570;
  uint local_56c;
  uint local_568;
  undefined1 auStack_564 [68];
  undefined1 auStack_520 [68];
  int *local_4dc;
  uint uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  int *local_4c8;
  uint uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 auStack_4b8 [72];
  uint local_470;
  uint local_46c;
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  uint uStack_450;
  uint local_44c;
  uint local_448;
  uint local_444;
  uint uStack_440;
  uint uStack_43c;
  uint local_438;
  uint uStack_434;
  uint local_430;
  uint local_42c;
  uint local_428;
  uint uStack_424;
  undefined4 local_420;
  undefined1 local_41c;
  undefined2 local_41b;
  undefined1 local_419;
  undefined4 local_418;
  undefined4 uStack_414;
  int *local_410;
  uint uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  int *piStack_3b0;
  uint uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined2 local_39c;
  undefined1 local_39a;
  uint local_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  uint uStack_388;
  uint local_384;
  uint uStack_380;
  uint uStack_37c;
  uint uStack_378;
  uint uStack_374;
  uint local_370;
  uint uStack_36c;
  uint uStack_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  int local_358;
  int local_354;
  undefined1 auStack_350 [72];
  uint local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint local_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  uint local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined2 local_2bb;
  undefined1 local_2b9;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  int *local_2b0;
  uint local_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 auStack_2a0 [88];
  undefined1 auStack_248 [88];
  uint local_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined1 auStack_140 [88];
  undefined1 auStack_e8 [88];
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  
  puVar3 = (undefined4 *)(param_2 + 0x308);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar6 = 0x101;
    bVar19 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    *(uint *)(param_2 + 0xa0) = (uint)bVar19;
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    if (bVar19) {
      uVar6 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined2 *)(param_2 + 0x495) = 0;
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar7 = (undefined4 *)(param_2 + 0xa0);
    uVar12 = *(undefined4 *)(param_2 + 0x490);
    *(undefined4 *)(param_2 + 0xa4) = uVar6;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(undefined4 **)(param_2 + 0x1d0) = puVar7;
    *(undefined4 *)(param_2 + 0x1d4) = uVar12;
LAB_005e41c4:
    *(undefined4 **)(param_2 + 0x1d8) = puVar7;
    *(undefined4 *)(param_2 + 0x1dc) = uVar12;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(undefined4 **)(param_2 + 0x3f0) = puVar7;
LAB_005e4210:
    iVar10 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar10,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_470,iVar10);
    uVar17 = local_46c;
    uVar15 = local_470;
    if (!(local_470 == 3 && local_46c == 0)) {
      local_628 = local_468;
      local_62c = local_464;
      local_60c = local_460;
      FUN_01bed4e2(&local_198,&local_45c,0x54);
      goto LAB_005e431c;
    }
    *(undefined2 *)(param_2 + 0x3f9) = 1;
    iVar13 = *(int *)(param_2 + 0x300);
    iVar9 = *(int *)(param_2 + 0x304);
    FUN_01bed4e2(param_2 + 0x408,iVar10,0x88);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    uVar6 = *puVar7;
    uVar12 = puVar7[1];
    puVar7 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar7 = 0x2000;
    puVar7[1] = 0x8000;
    if ((iVar13 == 0) || (iVar10 = (**(code **)(iVar9 + 0x10))(iVar13), iVar10 != 0)) {
      piVar11 = (int *)0x0;
      FUN_005f6438(iVar13,iVar9);
    }
    else {
      piVar11 = (int *)thunk_FUN_01be5118(8);
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar11 = iVar13;
      piVar11[1] = iVar9;
    }
    iVar10 = FUN_01298504(0x2000,1);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    *(undefined4 *)(param_2 + 0x348) = 4;
    *(undefined4 *)(param_2 + 0x34c) = 0;
    *puVar3 = 3;
    *(undefined4 *)(param_2 + 0x30c) = 0;
    *(undefined4 *)(param_2 + 0x3f4) = puVar3;
    *(undefined2 *)(param_2 + 0x3e0) = 0;
    *(undefined4 **)(param_2 + 1000) = puVar7;
    *(undefined **)(param_2 + 0x3ec) = &DAT_01c1b908;
    *(undefined4 *)(param_2 + 0x3d0) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 1;
    *(int **)(param_2 + 0x3d8) = piVar11;
    *(undefined **)(param_2 + 0x3dc) = &DAT_01c15070;
    *(undefined4 *)(param_2 + 0x3b0) = uVar6;
    *(undefined4 *)(param_2 + 0x3b4) = uVar12;
    *(int *)(param_2 + 0x3b8) = iVar10;
    *(undefined4 *)(param_2 + 0x3bc) = 0;
    *(undefined4 *)(param_2 + 0x3c0) = 0x2000;
    *(undefined4 *)(param_2 + 0x3c4) = 0x11;
    *(undefined4 *)(param_2 + 0x3c8) = 1;
    *(undefined4 *)(param_2 + 0x3cc) = 0;
    *(undefined4 **)(param_2 + 0x400) = (undefined4 *)(param_2 + 0x3f4);
    puVar7 = puVar3;
LAB_005e46d4:
    local_61c = param_2 + 0x3f8;
    FUN_00fdbf50(&local_470,puVar7,param_3);
    uVar16 = local_460;
    uVar14 = local_464;
    uVar18 = local_468;
    uVar17 = local_46c;
    uVar15 = local_470;
    if (local_470 != 5 || local_46c != 0) {
      if ((local_470 & 7) == 4) {
        uVar18 = 0x80000001;
        uVar16 = 0;
        uVar14 = local_61c;
LAB_005e4880:
        FUN_01bed4e2(auStack_e8,&local_80,0x54);
        FUN_01bed4e2(auStack_2a0,auStack_e8,0x54);
      }
      else {
        local_628 = local_468;
        local_62c = local_464;
        local_60c = local_460;
        if (local_470 == 3) goto LAB_005e4880;
        FUN_01bed4e2(&local_80,&local_45c,0x54);
        FUN_01bed4e2(auStack_e8,&local_80,0x54);
        if (uVar15 == 4 && uVar17 == 0) goto LAB_005e46fc;
        FUN_01bed4e2(auStack_2a0,auStack_e8,0x54);
        if (!(uVar15 == 3 && uVar17 == 0)) {
          FUN_01bed4e2(&local_198,auStack_2a0,0x54);
          goto LAB_005e4fcc;
        }
      }
      if (uVar18 == 0x80000001) {
        FUN_01a71aac(&local_308,0xd,"Missing request message.",0x18);
        uVar17 = local_304;
        uVar15 = local_308;
        if (local_308 != 3 || local_304 != 0) {
          local_628 = local_300;
          local_62c = local_2fc;
          local_60c = local_2f8;
          FUN_01bed4e2(&local_198,&uStack_2f4,0x54);
          goto LAB_005e4fcc;
        }
        uVar14 = local_2fc;
        uVar16 = local_2f8;
      }
      else {
        local_300 = uVar18;
      }
      uVar15 = local_300;
      *(undefined1 *)(param_2 + 0x3f9) = 0;
      FUN_01bed4e2(&local_470,param_2 + 0x408,0x88);
      *(undefined1 *)(param_2 + 0x3fb) = 0;
      local_308 = uVar15;
      local_304 = uVar14;
      local_300 = uVar16;
      FUN_00f07b24(param_2 + 0x418,&local_470,&local_308);
      *(undefined1 *)(param_2 + 0x414) = 0;
      puVar5 = *(uint **)(param_2 + 0x3f4);
      *(uint **)(param_2 + 0x400) = puVar5;
      goto LAB_005e4954;
    }
LAB_005e46fc:
    uVar2 = 3;
LAB_005e5144:
    *(undefined1 *)(param_2 + 0x3f8) = uVar2;
    goto LAB_005e4f3c;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c023d4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c023d4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar7 = *(undefined4 **)(param_2 + 0x1d0);
      uVar12 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_005e41c4;
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
        puVar7 = *(undefined4 **)(param_2 + 0x3f0);
        goto LAB_005e4210;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        puVar7 = (undefined4 *)**(undefined4 **)(param_2 + 0x400);
        goto LAB_005e46d4;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x414)) {
        case 0:
          puVar5 = *(uint **)(param_2 + 0x400);
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
          switch(*(undefined1 *)(param_2 + 0x410)) {
          case 0:
            uVar12 = *(undefined4 *)(param_2 + 0x408);
            goto LAB_005e503c;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22468);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22468);
          case 3:
            uVar12 = *(undefined4 *)(param_2 + 0x40c);
            goto LAB_005e5040;
          }
        }
      }
LAB_005e4954:
      *(uint **)(param_2 + 0x404) = puVar5;
      uVar17 = *puVar5;
      uVar18 = puVar5[1];
      uVar15 = puVar5[2];
      *puVar5 = 3;
      puVar5[1] = 0;
      if (uVar17 == 3 && uVar18 == 0) {
LAB_005e5024:
        *(undefined1 *)(param_2 + 0x410) = 0;
        uVar12 = *(undefined4 *)(param_2 + 0x404);
        *(undefined4 *)(param_2 + 0x408) = uVar12;
LAB_005e503c:
        *(undefined4 *)(param_2 + 0x40c) = uVar12;
LAB_005e5040:
        local_63c = (undefined1 *)(param_2 + 0x414);
        puVar8 = (undefined1 *)(param_2 + 0x410);
        FUN_00fdbf50(&local_470,uVar12,param_3);
        uVar18 = local_460;
        local_62c = local_464;
        local_628 = local_468;
        uVar17 = local_46c;
        uVar15 = local_470;
        if (local_470 == 5 && local_46c == 0) {
          *puVar8 = 3;
LAB_005e5134:
          *local_63c = 3;
          uVar2 = 4;
          goto LAB_005e5144;
        }
        local_60c = local_460;
        FUN_01bed4e2(&local_308,&local_45c,0x54);
        uVar14 = 0x80000001;
        if ((uVar15 & 7) == 4) {
LAB_005e50a4:
          local_628 = uVar14;
          *puVar8 = 1;
          FUN_01bed4e2(auStack_e8,auStack_140,0x54);
        }
        else {
          if (uVar15 == 3) {
            uVar14 = local_628;
            goto LAB_005e50a4;
          }
          FUN_01bed4e2(auStack_140,&local_308,0x54);
          *puVar8 = 1;
          if (uVar15 == 4 && uVar17 == 0) goto LAB_005e5134;
          FUN_01bed4e2(auStack_e8,auStack_140,0x54);
          if (uVar15 != 3 || uVar17 != 0) goto LAB_005e51ac;
        }
        if (local_628 != 0x80000000) {
          if (local_628 == 0x80000001) {
            puVar5 = *(uint **)(param_2 + 0x404);
            uVar17 = *puVar5;
            uVar18 = puVar5[1];
            uVar15 = puVar5[2];
            *puVar5 = 3;
            puVar5[1] = 0;
            if (uVar17 != 3 || uVar18 != 0) goto LAB_005e4978;
            FUN_01bed4e2(auStack_248,&local_80,0x54);
            *local_63c = 1;
            FUN_01bed4e2(&local_1f0,auStack_248,0x54);
            goto LAB_005e4a10;
          }
          FUN_019bb7e0(local_628,local_62c);
        }
        goto LAB_005e5024;
      }
LAB_005e4978:
      local_80 = puVar5[3];
      uStack_7c = puVar5[4];
      uStack_78 = puVar5[5];
      uStack_74 = puVar5[6];
      local_70 = puVar5[7];
      uStack_6c = puVar5[8];
      uStack_68 = puVar5[9];
      uStack_64 = puVar5[10];
      local_60 = puVar5[0xb];
      uStack_5c = puVar5[0xc];
      uStack_58 = puVar5[0xd];
      uStack_54 = puVar5[0xe];
      uStack_50 = puVar5[0xf];
      FUN_01bed4e2(auStack_248,&local_80,0x54);
      *(undefined1 *)(param_2 + 0x414) = 1;
      FUN_01bed4e2(&local_1f0,auStack_248,0x54);
      local_464 = local_1f0;
      local_460 = uStack_1ec;
      local_45c = uStack_1e8;
      local_458 = uStack_1e4;
      local_454 = local_1e0;
      uStack_450 = uStack_1dc;
      local_44c = uStack_1d8;
      local_448 = uStack_1d4;
      local_444 = local_1d0;
      uStack_440 = uStack_1cc;
      uStack_43c = uStack_1c8;
      local_438 = uStack_1c4;
      uStack_434 = uStack_1c0;
      local_470 = uVar17;
      local_46c = uVar18;
      local_468 = uVar15;
      FUN_00713444(param_2 + 0x418);
LAB_005e4a10:
      local_628 = *(uint *)(param_2 + 0x418);
      local_62c = *(uint *)(param_2 + 0x41c);
      local_60c = *(uint *)(param_2 + 0x420);
      FUN_01bed4e2(&local_198,param_2 + 0x424,0x44);
      uVar17 = 0;
      *(undefined1 *)(param_2 + 0x3fb) = 0;
      FUN_005f1224(puVar3);
      *(undefined1 *)(param_2 + 0x3fc) = 0;
      *(undefined2 *)(param_2 + 0x3f9) = 0;
      uVar15 = 3;
      goto LAB_005e4338;
    case 4:
      puVar4 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_005e4488:
    (**(code **)(puVar4 + 0xc))(&local_308,*(undefined4 *)(param_2 + 0x1e8),param_3);
    uVar17 = local_304;
    uVar15 = local_308;
    if (!(local_308 == 4 && local_304 == 0)) {
      local_398 = local_300;
      uStack_394 = local_2fc;
      uStack_390 = local_2f8;
      uStack_38c = uStack_2f4;
      uStack_388 = uStack_2f0;
      local_384 = local_2ec;
      uStack_380 = uStack_2e8;
      uStack_37c = uStack_2e4;
      uStack_378 = uStack_2e0;
      uStack_374 = uStack_2dc;
      local_370 = local_2d8;
      uStack_36c = uStack_2d4;
      uStack_368 = uStack_2d0;
      uStack_364 = uStack_2cc;
      uStack_360 = uStack_2c8;
      uStack_35c = uStack_2c4;
      local_39a = local_2b9;
      local_39c = local_2bb;
      local_3b8 = local_2b8;
      uStack_3b4 = uStack_2b4;
      piStack_3b0 = local_2b0;
      uStack_3ac = local_2ac;
      uStack_3a8 = uStack_2a8;
      uStack_3a4 = uStack_2a4;
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
      if (uVar15 == 3 && uVar17 == 0) {
        local_470 = local_398;
        local_46c = uStack_394;
        local_468 = uStack_390;
        local_464 = uStack_38c;
        local_460 = uStack_388;
        local_45c = local_384;
        local_458 = uStack_380;
        local_454 = uStack_37c;
        uStack_450 = uStack_378;
        local_44c = uStack_374;
        local_448 = local_370;
        local_444 = uStack_36c;
        uStack_440 = uStack_368;
        uStack_43c = uStack_364;
        local_438 = uStack_360;
        uStack_434 = uStack_35c;
        local_430 = 3;
        local_42c = 0;
        local_3c8 = 0;
        local_428 = CONCAT31(local_428._1_3_,local_2bc);
        local_3c0 = local_2c0;
        if (local_398 != 3 || uStack_394 != 0) {
          FUN_011de050();
        }
      }
      else {
        local_468 = uVar15;
        local_464 = uVar17;
        local_460 = local_398;
        local_45c = uStack_394;
        local_458 = uStack_390;
        local_454 = uStack_38c;
        uStack_450 = uStack_388;
        local_44c = local_384;
        local_448 = uStack_380;
        local_444 = uStack_37c;
        uStack_440 = uStack_378;
        uStack_43c = uStack_374;
        local_438 = local_370;
        uStack_434 = uStack_36c;
        local_430 = uStack_368;
        local_42c = uStack_364;
        local_428 = uStack_360;
        uStack_424 = uStack_35c;
        local_419 = local_39a;
        local_41c = local_2bc;
        local_420 = local_2c0;
        local_41b = local_39c;
        local_418 = local_3b8;
        uStack_414 = uStack_3b4;
        local_410 = piStack_3b0;
        uStack_40c = uStack_3ac;
        uStack_408 = uStack_3a8;
        uStack_404 = uStack_3a4;
        local_46c = 0;
        local_470 = 3;
      }
      FUN_00d737c8(&local_358,&local_470,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      piVar11 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar11;
        bVar19 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar19);
      *piVar11 = iVar10 + -1;
      goto LAB_005e47f4;
    }
    uVar2 = 4;
  }
LAB_005e4f44:
  local_614 = (undefined1 *)(param_2 + 0x1e0);
  *local_614 = uVar2;
  goto LAB_005e4f4c;
LAB_005e51ac:
  local_88 = uVar18;
  local_8c = local_62c;
  local_90 = local_628;
  FUN_01bed4e2(auStack_248,auStack_e8,0x54);
  *(undefined1 *)(param_2 + 0x414) = 1;
  FUN_01bed4e2(&local_1f0,auStack_248,0x54);
  local_198 = local_1f0;
  uStack_194 = uStack_1ec;
  uStack_190 = uStack_1e8;
  uStack_18c = uStack_1e4;
  local_188 = local_1e0;
  uStack_184 = uStack_1dc;
  uStack_180 = uStack_1d8;
  uStack_17c = uStack_1d4;
  local_178 = local_1d0;
  uStack_174 = uStack_1cc;
  uStack_170 = uStack_1c8;
  uStack_16c = uStack_1c4;
  uStack_168 = uStack_1c0;
  local_164 = local_1bc;
  uStack_160 = uStack_1b8;
  uStack_15c = uStack_1b4;
  uStack_158 = uStack_1b0;
  local_154 = local_1ac;
  uStack_150 = uStack_1a8;
  uStack_14c = uStack_1a4;
  uStack_148 = uStack_1a0;
  FUN_005f11d4(param_2 + 0x418);
LAB_005e4fcc:
  *(undefined1 *)(param_2 + 0x3fb) = 0;
  FUN_005f1224(param_2 + 0x308);
  *(undefined1 *)(param_2 + 0x3fc) = 0;
  if (*(char *)(param_2 + 0x3f9) != '\0') {
    FUN_0096a6b0(param_2 + 0x408);
  }
  *(undefined1 *)(param_2 + 0x3f9) = 0;
LAB_005e431c:
  if (*(char *)(param_2 + 0x3fa) != '\0') {
    FUN_005f9b88(param_2 + 0x278);
  }
  *(undefined1 *)(param_2 + 0x3fa) = 0;
LAB_005e4338:
  FUN_01bed4e2(auStack_520,&local_198,0x54);
  *(undefined1 *)(param_2 + 0x3f8) = 1;
  if (!(uVar15 != 4 || uVar17 != 0)) {
LAB_005e4f3c:
    uVar2 = 3;
    goto LAB_005e4f44;
  }
  FUN_01bed4e2(auStack_4b8,auStack_520,0x44);
  local_4c8 = local_4dc;
  uStack_4c4 = uStack_4d8;
  uStack_4c0 = uStack_4d4;
  uStack_4bc = uStack_4d0;
  FUN_005f60f4(param_2 + 0x1e8);
  if (uVar15 == 3 && uVar17 == 0) {
    FUN_01bed4e2(auStack_564,auStack_4b8,0x44);
    local_56c = local_62c;
    local_570 = local_628;
    local_568 = local_60c;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    local_2b0 = *(int **)(param_2 + 0x1dc);
    do {
      iVar10 = *local_2b0;
      bVar19 = (bool)hasExclusiveAccess(local_2b0);
    } while (!bVar19);
    *local_2b0 = iVar10 + 1;
    if (iVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x5e4c88);
      (*pcVar1)();
    }
    FUN_01bed4e2(&local_308,&local_570,0x50);
    local_2ac = local_2ac & 0xffffff00;
    iVar10 = thunk_FUN_01be5118(0x60);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x60);
    }
    FUN_01bed4e2(iVar10,&local_308,0x60);
    *(int *)(param_2 + 0x1e8) = iVar10;
    puVar4 = &DAT_01c025ac;
    *(undefined **)(param_2 + 0x1ec) = &DAT_01c025ac;
    goto LAB_005e4488;
  }
  FUN_01bed4e2(&local_454,auStack_4b8,0x44);
  local_410 = local_4c8;
  uStack_40c = uStack_4c4;
  uStack_408 = uStack_4c0;
  uStack_404 = uStack_4bc;
  local_460 = local_628;
  local_45c = local_62c;
  local_46c = 0;
  local_470 = 3;
  local_458 = local_60c;
  local_468 = uVar15;
  local_464 = uVar17;
  FUN_00d737c8(&local_358,&local_470,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
               *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
  *(undefined1 *)(param_2 + 0x1e1) = 0;
  piVar11 = *(int **)(param_2 + 0x1dc);
  *(undefined1 *)(param_2 + 0x1e2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar11;
    bVar19 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar19);
  *piVar11 = iVar10 + -1;
LAB_005e47f4:
  local_610 = param_2 + 0xb0;
  local_614 = (undefined1 *)(param_2 + 0x1e0);
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180cc4(*(undefined4 *)(param_2 + 0x1dc));
  }
  FUN_01bed4e2(auStack_600,auStack_350,0x48);
  *local_614 = 1;
  if (local_358 != 3 || local_354 != 0) {
    FUN_01bed4e2(auStack_5b8,auStack_600,0x48);
    FUN_005f8ddc(local_610);
    FUN_01bed4e2(param_1 + 2,auStack_5b8,0x48);
    *(undefined1 *)(param_2 + 0x495) = 0;
    uVar2 = 1;
    goto LAB_005e4f58;
  }
LAB_005e4f4c:
  local_354 = 0;
  local_358 = 3;
  uVar2 = 3;
LAB_005e4f58:
  *(undefined1 *)(param_2 + 0x494) = uVar2;
  *param_1 = local_358;
  param_1[1] = local_354;
  return;
}

