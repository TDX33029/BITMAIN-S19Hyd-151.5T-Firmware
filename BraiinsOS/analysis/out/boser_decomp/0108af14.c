// FUN_0108af14 @ 0108af14 size=3532 calls_out=25 calls_in=0
// strings: Missing request message.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0108af14(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_r4;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  int *piVar21;
  int *piVar22;
  bool bVar23;
  int *local_5ec;
  uint local_5e0;
  undefined1 *local_5d8;
  undefined1 *local_5cc;
  undefined1 *local_5c4;
  int local_5c0;
  int *local_5b4;
  int *local_5a8;
  int *local_5a4;
  undefined1 auStack_5a0 [72];
  undefined1 auStack_558 [72];
  int *local_510;
  int *local_50c;
  int *local_508;
  int *local_504;
  undefined1 auStack_500 [72];
  undefined1 auStack_4b8 [72];
  undefined1 auStack_470 [72];
  int *local_428;
  int *local_424;
  int *local_420;
  int *local_41c;
  int *local_418;
  int *local_414;
  int *local_410;
  int *local_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  int *piStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  int *local_3c8;
  uint local_3c4;
  int *local_3c0;
  uint local_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_380;
  undefined4 local_378;
  int *local_370;
  int *local_36c;
  int *local_368;
  int *local_364;
  int *local_360;
  int *local_35c;
  undefined1 auStack_358 [72];
  int *local_310;
  uint local_30c;
  undefined4 local_300;
  int *local_2f8;
  int *piStack_2f4;
  int *piStack_2f0;
  int *piStack_2ec;
  int *local_2e8;
  int *piStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  int *piStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  int *local_2a8;
  uint uStack_2a4;
  int *piStack_2a0;
  uint uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  int local_290;
  int local_28c;
  undefined1 auStack_288 [72];
  int *local_240;
  int *piStack_23c;
  int *piStack_238;
  undefined1 auStack_230 [72];
  int aiStack_1e8 [18];
  int *local_1a0;
  int *piStack_19c;
  int *piStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int *piStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *local_158;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [72];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar4 = (undefined4 *)(param_2 + 0x308);
  piVar6 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar7 = 0x101;
    bVar23 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    *(uint *)(param_2 + 0xa0) = (uint)bVar23;
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    if (bVar23) {
      uVar7 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined2 *)(param_2 + 0x495) = 0;
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar20 = (undefined4 *)(param_2 + 0xa0);
    uVar8 = *(undefined4 *)(param_2 + 0x490);
    *(undefined4 *)(param_2 + 0xa4) = uVar7;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(undefined4 **)(param_2 + 0x1d0) = puVar20;
    *(undefined4 *)(param_2 + 0x1d4) = uVar8;
LAB_0108b024:
    *(undefined4 **)(param_2 + 0x1d8) = puVar20;
    *(undefined4 *)(param_2 + 0x1dc) = uVar8;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(undefined4 **)(param_2 + 0x3f0) = puVar20;
LAB_0108b06c:
    iVar16 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar16,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_428,iVar16);
    piVar15 = local_418;
    piVar22 = local_420;
    piVar19 = local_424;
    piVar18 = local_428;
    if (!(local_428 == (int *)&DAT_00000003 && local_424 == (int *)0x0)) {
      local_5a8 = local_41c;
      local_5a4 = local_414;
      FUN_01bed4e2(&local_158,&local_410,0x48);
      local_5e0 = local_3c4;
      piVar13 = local_3c8;
      goto LAB_0108b6dc;
    }
    *(undefined2 *)(param_2 + 0x3f9) = 1;
    iVar12 = *(int *)(param_2 + 0x300);
    iVar10 = *(int *)(param_2 + 0x304);
    FUN_01bed4e2(param_2 + 0x408,iVar16,0x88);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    unaff_r4 = (int *)*puVar20;
    uVar8 = puVar20[1];
    puVar20 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar20 = 0x2000;
    puVar20[1] = 0x8000;
    if ((iVar12 == 0) || (iVar16 = (**(code **)(iVar10 + 0x10))(iVar12), iVar16 != 0)) {
      piVar15 = (int *)0x0;
      FUN_005f6438(iVar12,iVar10);
    }
    else {
      piVar15 = (int *)thunk_FUN_01be5118(8);
      if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar15 = iVar12;
      piVar15[1] = iVar10;
    }
    iVar16 = FUN_01298504(0x2000,1);
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    *(undefined4 *)(param_2 + 0x3f4) = puVar4;
    *(undefined4 *)(param_2 + 0x348) = 4;
    *(undefined4 *)(param_2 + 0x3d0) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 1;
    *(int **)(param_2 + 0x3d8) = piVar15;
    *(undefined **)(param_2 + 0x3dc) = &DAT_01c151a8;
    *(int *)(param_2 + 0x3b8) = iVar16;
    *puVar4 = 3;
    *(undefined4 **)(param_2 + 1000) = puVar20;
    *(undefined **)(param_2 + 0x3ec) = &DAT_01c1b818;
    *(undefined4 *)(param_2 + 0x3b4) = uVar8;
    *(undefined4 *)(param_2 + 0x3c0) = 0x2000;
    *(undefined4 *)(param_2 + 0x3c4) = 0x11;
    *(undefined4 *)(param_2 + 0x3c8) = 1;
    *(undefined4 *)(param_2 + 0x34c) = 0;
    *(undefined4 *)(param_2 + 0x30c) = 0;
    *(undefined2 *)(param_2 + 0x3e0) = 0;
    *(int **)(param_2 + 0x3b0) = unaff_r4;
    *(undefined4 *)(param_2 + 0x3bc) = 0;
    *(undefined4 *)(param_2 + 0x3cc) = 0;
    *(undefined4 **)(param_2 + 0x400) = (undefined4 *)(param_2 + 0x3f4);
    puVar20 = puVar4;
LAB_0108b284:
    FUN_00fda6f0(&local_428,puVar20,param_3);
    piVar15 = local_418;
    piVar11 = local_41c;
    piVar22 = local_420;
    piVar19 = local_424;
    piVar18 = local_428;
    if (local_428 != (int *)&DAT_00000005 || local_424 != (int *)0x0) {
      if (((uint)local_428 & 7) == 4) {
        piVar22 = (int *)0x2;
        piVar11 = unaff_r4;
LAB_0108b2f4:
        FUN_01bed4e2(auStack_230,&local_70,0x48);
LAB_0108b308:
        if (piVar22 == (int *)0x2) {
          FUN_01a71aac(&local_370,0xd,"Missing request message.",0x18);
          piVar22 = local_368;
          piVar19 = local_36c;
          piVar18 = local_370;
          if (local_370 != (int *)&DAT_00000003 || local_36c != (int *)0x0) {
            local_5a8 = local_364;
            local_5a4 = local_35c;
            FUN_01bed4e2(&local_158,auStack_358,0x48);
            local_5e0 = local_30c;
            piVar13 = local_310;
            piVar15 = local_360;
            goto LAB_0108b6a8;
          }
          local_5b4 = local_360;
        }
        else {
          local_368 = piVar22;
          local_364 = piVar11;
        }
        local_240 = local_368;
        piStack_23c = local_364;
        piStack_238 = local_5b4;
        *(undefined1 *)(param_2 + 0x3f9) = 0;
        FUN_01bed4e2(&local_428,param_2 + 0x408,0x88);
        *(undefined1 *)(param_2 + 0x3fb) = 0;
        FUN_00f07cd4(param_2 + 0x400,&local_428,&local_240);
        *(undefined1 *)(param_2 + 0x46c) = 0;
        puVar20 = *(undefined4 **)(param_2 + 0x3f4);
        *(undefined4 **)(param_2 + 0x458) = puVar20;
        goto LAB_0108b3cc;
      }
      if (local_428 == (int *)&DAT_00000003) {
        local_5b4 = local_418;
        goto LAB_0108b2f4;
      }
      local_5a8 = local_41c;
      local_5b4 = local_418;
      local_5a4 = local_414;
      FUN_01bed4e2(&local_70,&local_410,0x48);
      piVar13 = local_3c8;
      if (piVar18 == (int *)&SUB_00000004 && piVar19 == (int *)0x0) goto LAB_0108b2ac;
      local_5e0 = local_3c4;
      FUN_01bed4e2(auStack_230,&local_70,0x48);
      if (piVar18 == (int *)&DAT_00000003 && piVar19 == (int *)0x0) goto LAB_0108b308;
      FUN_01bed4e2(&local_158,auStack_230,0x48);
      goto LAB_0108b6a8;
    }
LAB_0108b2ac:
    uVar3 = 3;
LAB_0108c014:
    *(undefined1 *)(param_2 + 0x3f8) = uVar3;
    goto LAB_0108c018;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1da44);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1da44);
  case 3:
    piVar15 = (int *)(param_2 + 0xb0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar20 = *(undefined4 **)(param_2 + 0x1d0);
      uVar8 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_0108b024;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22498);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22498);
    case 3:
      piVar13 = (int *)(param_2 + 0x1e8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x3f8)) {
      case 0:
        puVar20 = *(undefined4 **)(param_2 + 0x3f0);
        goto LAB_0108b06c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        puVar20 = (undefined4 *)**(undefined4 **)(param_2 + 0x400);
        goto LAB_0108b284;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x46c)) {
        case 0:
          puVar20 = *(undefined4 **)(param_2 + 0x458);
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
            uVar8 = *(undefined4 *)(param_2 + 0x460);
            goto LAB_0108bebc;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22468);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22468);
          case 3:
            uVar8 = *(undefined4 *)(param_2 + 0x464);
            piVar11 = piVar13;
            piVar17 = piVar15;
            piVar21 = param_1;
            goto LAB_0108bec0;
          }
        }
      }
LAB_0108b3cc:
      piVar13 = (int *)(param_2 + 0x1e8);
      *(undefined4 **)(param_2 + 0x45c) = puVar20;
      piVar22 = (int *)*puVar20;
      local_5b4 = (int *)puVar20[2];
      piVar15 = (int *)puVar20[3];
      local_5a8 = (int *)puVar20[1];
      *puVar20 = 3;
      puVar20[1] = 0;
      if (piVar22 == (int *)&DAT_00000003 && local_5a8 == (int *)0x0) {
LAB_0108bea8:
        *(undefined1 *)(param_2 + 0x468) = 0;
        uVar8 = *(undefined4 *)(param_2 + 0x45c);
        *(undefined4 *)(param_2 + 0x460) = uVar8;
LAB_0108bebc:
        *(undefined4 *)(param_2 + 0x464) = uVar8;
        piVar11 = piVar13;
        piVar17 = piVar15;
        piVar21 = piVar6;
LAB_0108bec0:
        puVar9 = (undefined1 *)(param_2 + 0x468);
        local_5d8 = (undefined1 *)(param_2 + 0x46c);
        FUN_00fda6f0(&local_428,uVar8,param_3);
        piVar13 = local_414;
        piVar15 = local_418;
        piVar6 = local_41c;
        piVar22 = local_420;
        piVar19 = local_424;
        piVar18 = local_428;
        if (local_428 == (int *)&DAT_00000005 && local_424 == (int *)0x0) {
          *puVar9 = 3;
LAB_0108bff4:
          *local_5d8 = 3;
          uVar3 = 4;
          goto LAB_0108c014;
        }
        local_5a8 = local_41c;
        local_5b4 = local_418;
        local_5a4 = local_414;
        FUN_01bed4e2(&local_370,&local_410,0x48);
        piVar2 = (int *)0x2;
        if (((uint)piVar18 & 7) == 4) {
LAB_0108bf38:
          piVar6 = piVar21;
          piVar15 = piVar17;
          piVar13 = piVar11;
          piVar22 = piVar2;
          *puVar9 = 1;
          FUN_01bed4e2(auStack_b8,auStack_100,0x48);
        }
        else {
          if (piVar18 == (int *)&DAT_00000003) {
            piVar2 = piVar22;
            piVar11 = piVar13;
            piVar17 = piVar15;
            piVar21 = piVar6;
            goto LAB_0108bf38;
          }
          piVar11 = local_3c8;
          uVar14 = local_3c4;
          FUN_01bed4e2(auStack_100,&local_370,0x48);
          *puVar9 = 1;
          if (piVar18 == (int *)&SUB_00000004 && piVar19 == (int *)0x0) goto LAB_0108bff4;
          FUN_01bed4e2(auStack_b8,auStack_100,0x48);
          if (piVar18 != (int *)&DAT_00000003 || piVar19 != (int *)0x0) goto LAB_0108c080;
        }
        local_110 = piVar22;
        local_10c = piVar6;
        local_108 = piVar15;
        local_104 = piVar13;
        if (piVar22 != (int *)0x0) {
          if (piVar22 == (int *)0x2) {
            puVar20 = *(undefined4 **)(param_2 + 0x45c);
            piVar18 = (int *)&DAT_00000003;
            piVar19 = (int *)0x0;
            piVar22 = (int *)*puVar20;
            local_5a8 = (int *)puVar20[1];
            *puVar20 = 3;
            puVar20[1] = 0;
            if (!(piVar22 != (int *)&DAT_00000003 || local_5a8 != (int *)0x0)) {
              local_5a8 = (int *)0x0;
              piVar22 = (int *)&DAT_00000003;
              goto LAB_0108b430;
            }
            local_5b4 = (int *)puVar20[2];
            local_5a4 = (int *)puVar20[3];
            goto LAB_0108b418;
          }
          FUN_0165d624(&local_10c);
        }
        goto LAB_0108bea8;
      }
      local_5a4 = piVar15;
LAB_0108b418:
      piVar19 = (int *)0x0;
      piVar18 = (int *)&DAT_00000003;
      local_70 = puVar20[4];
      uStack_6c = puVar20[5];
      uStack_68 = puVar20[6];
      uStack_64 = puVar20[7];
      uStack_60 = puVar20[8];
      uStack_5c = puVar20[9];
      local_58 = puVar20[10];
      uStack_54 = puVar20[0xb];
      uStack_50 = puVar20[0xc];
      uStack_4c = puVar20[0xd];
      uStack_48 = puVar20[0xe];
      uStack_44 = puVar20[0xf];
      goto LAB_0108b430;
    case 4:
      puVar5 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_0108b7fc:
    (**(code **)(puVar5 + 0xc))(&local_370,*(undefined4 *)(param_2 + 0x1e8),param_3);
    if (!(local_370 == (int *)&SUB_00000004 && local_36c == (int *)0x0)) {
      FUN_01bed4e2(&local_2f8,&local_368,0x68);
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
      if (local_370 == (int *)&DAT_00000003 && local_36c == (int *)0x0) {
        FUN_01bed4e2(&local_420,&local_2f8,0x68);
        local_424 = (int *)0x0;
        local_428 = (int *)&DAT_00000003;
      }
      else {
        local_428 = local_370;
        local_424 = local_36c;
        local_420 = local_2f8;
        local_41c = piStack_2f4;
        local_418 = piStack_2f0;
        local_414 = piStack_2ec;
        local_410 = local_2e8;
        local_40c = piStack_2e4;
        uStack_408 = uStack_2e0;
        uStack_404 = uStack_2dc;
        local_400 = uStack_2d8;
        local_3fc = local_2d4;
        uStack_3f8 = uStack_2d0;
        uStack_3f4 = uStack_2cc;
        piStack_3f0 = piStack_2c8;
        uStack_3ec = uStack_2c4;
        local_3e8 = 3;
        local_3e4 = 0;
        local_3e0 = local_2c0;
        uStack_3dc = uStack_2bc;
        uStack_3d8 = uStack_2b8;
        uStack_3d4 = uStack_2b4;
        uStack_3d0 = uStack_2b0;
        uStack_3cc = uStack_2ac;
        local_3c8 = local_2a8;
        local_3c4 = uStack_2a4;
        local_3c0 = piStack_2a0;
        local_3bc = uStack_29c;
        uStack_3b8 = uStack_298;
        uStack_3b4 = uStack_294;
        local_378 = local_300;
        local_380 = 0;
        FUN_011de050(local_300);
      }
      FUN_00d73f2c(&local_290,&local_428,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      piVar6 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar6;
        bVar23 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar23);
      *piVar6 = iVar16 + -1;
      goto LAB_0108b9d8;
    }
    uVar3 = 4;
  }
LAB_0108c01c:
  *(undefined1 *)(param_2 + 0x1e0) = uVar3;
  goto LAB_0108c020;
LAB_0108c080:
  FUN_01bed4e2(&local_70,auStack_b8,0x48);
  local_5ec = piVar11;
  local_5e0 = uVar14;
LAB_0108b430:
  local_5d8 = (undefined1 *)(param_2 + 0x46c);
  FUN_01bed4e2(aiStack_1e8,&local_70,0x48);
  *local_5d8 = 1;
  FUN_01bed4e2(&local_1a0,aiStack_1e8,0x48);
  if (piVar18 == (int *)&DAT_00000003 && piVar19 == (int *)0x0) {
    piVar13 = aiStack_1e8;
    if (piVar22 != (int *)&DAT_00000003 || local_5a8 != (int *)0x0) {
      local_418 = local_1a0;
      local_414 = piStack_19c;
      local_410 = piStack_198;
      local_40c = piStack_194;
      uStack_408 = uStack_190;
      uStack_404 = uStack_18c;
      local_400 = local_188;
      local_3fc = uStack_184;
      uStack_3f8 = uStack_180;
      uStack_3f4 = uStack_17c;
      piStack_3f0 = piStack_178;
      uStack_3ec = uStack_174;
      local_41c = local_5a4;
      local_420 = local_5b4;
      local_424 = local_5a8;
      local_428 = piVar22;
      FUN_00713444(param_2 + 0x400,&local_428);
      piVar13 = piStack_178;
    }
    local_5a8 = *(int **)(param_2 + 0x404);
    local_5a4 = *(int **)(param_2 + 0x40c);
    piVar22 = *(int **)(param_2 + 0x400);
    piVar15 = *(int **)(param_2 + 0x408);
    FUN_01bed4e2(&local_158,param_2 + 0x410,0x48);
    piVar19 = (int *)0x0;
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_01071a3c(puVar4);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    *(undefined2 *)(param_2 + 0x3f9) = 0;
    piVar18 = (int *)&DAT_00000003;
  }
  else {
    local_128 = local_170;
    uStack_124 = uStack_16c;
    uStack_120 = uStack_168;
    uStack_11c = uStack_164;
    uStack_118 = uStack_160;
    uStack_114 = uStack_15c;
    local_158 = local_1a0;
    piStack_154 = piStack_19c;
    piStack_150 = piStack_198;
    piStack_14c = piStack_194;
    uStack_148 = uStack_190;
    uStack_144 = uStack_18c;
    local_140 = local_188;
    uStack_13c = uStack_184;
    uStack_138 = uStack_180;
    uStack_134 = uStack_17c;
    piStack_130 = piStack_178;
    uStack_12c = uStack_174;
    FUN_00971f58(param_2 + 0x400);
    piVar13 = local_5ec;
    piVar15 = local_5b4;
LAB_0108b6a8:
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_01071a3c(param_2 + 0x308);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    if (*(char *)(param_2 + 0x3f9) != '\0') {
      FUN_0096a6b0(param_2 + 0x408);
    }
    *(undefined1 *)(param_2 + 0x3f9) = 0;
LAB_0108b6dc:
    if (*(char *)(param_2 + 0x3fa) != '\0') {
      FUN_005f9b88(param_2 + 0x278);
    }
    *(undefined1 *)(param_2 + 0x3fa) = 0;
  }
  local_5c0 = param_2 + 0x1e8;
  local_5cc = (undefined1 *)(param_2 + 0x3f8);
  FUN_01bed4e2(auStack_4b8,&local_158,0x48);
  *local_5cc = 1;
  if (!(piVar18 != (int *)&SUB_00000004 || piVar19 != (int *)0x0)) {
LAB_0108c018:
    uVar3 = 3;
    goto LAB_0108c01c;
  }
  FUN_01bed4e2(auStack_470,auStack_4b8,0x48);
  FUN_01089be8(local_5c0);
  if (piVar18 == (int *)&DAT_00000003 && piVar19 == (int *)0x0) {
    FUN_01bed4e2(auStack_500,auStack_470,0x48);
    local_504 = local_5a4;
    local_50c = local_5a8;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    local_310 = *(int **)(param_2 + 0x1dc);
    do {
      iVar16 = *local_310;
      bVar23 = (bool)hasExclusiveAccess(local_310);
    } while (!bVar23);
    *local_310 = iVar16 + 1;
    local_510 = piVar22;
    local_508 = piVar15;
    if (iVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x108bb5c);
      (*pcVar1)();
    }
    FUN_01bed4e2(&local_370,&local_510,0x58);
    local_30c = local_30c & 0xffffff00;
    iVar16 = thunk_FUN_01be5118(0x68);
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x68);
    }
    FUN_01bed4e2(iVar16,&local_370,0x68);
    *(int *)(param_2 + 0x1e8) = iVar16;
    puVar5 = &DAT_01c1dc68;
    *(undefined **)(param_2 + 0x1ec) = &DAT_01c1dc68;
    goto LAB_0108b7fc;
  }
  FUN_01bed4e2(&uStack_408,auStack_470,0x48);
  local_3bc = local_5e0;
  local_414 = local_5a8;
  local_40c = local_5a4;
  local_424 = (int *)0x0;
  local_428 = (int *)&DAT_00000003;
  local_420 = piVar18;
  local_41c = piVar19;
  local_3c0 = piVar13;
  local_418 = piVar22;
  local_410 = piVar15;
  FUN_00d73f2c(&local_290,&local_428,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
               *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
  *(undefined1 *)(param_2 + 0x1e1) = 0;
  piVar6 = *(int **)(param_2 + 0x1dc);
  *(undefined1 *)(param_2 + 0x1e2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar16 = *piVar6;
    bVar23 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar23);
  *piVar6 = iVar16 + -1;
LAB_0108b9d8:
  local_5c4 = (undefined1 *)(param_2 + 0x1e0);
  if (iVar16 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a939e0(*(undefined4 *)(param_2 + 0x1dc));
  }
  FUN_01bed4e2(auStack_5a0,auStack_288,0x48);
  *local_5c4 = 1;
  if (local_290 != 3 || local_28c != 0) {
    FUN_01bed4e2(auStack_558,auStack_5a0,0x48);
    FUN_01089acc(param_2 + 0xb0);
    FUN_01bed4e2(param_1 + 2,auStack_558,0x48);
    *(undefined1 *)(param_2 + 0x495) = 0;
    uVar3 = 1;
    goto LAB_0108c02c;
  }
LAB_0108c020:
  local_28c = 0;
  local_290 = 3;
  uVar3 = 3;
LAB_0108c02c:
  *(undefined1 *)(param_2 + 0x494) = uVar3;
  *param_1 = local_290;
  param_1[1] = local_28c;
  return;
}

