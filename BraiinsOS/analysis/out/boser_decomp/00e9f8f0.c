// FUN_00e9f8f0 @ 00e9f8f0 size=3108 calls_out=23 calls_in=0
// strings: Missing request message.

void FUN_00e9f8f0(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 *local_524;
  undefined1 *local_520;
  uint local_51c;
  uint local_518;
  undefined1 auStack_510 [72];
  undefined1 auStack_4c8 [72];
  uint local_480;
  uint local_47c;
  uint local_478;
  uint uStack_474;
  uint uStack_470;
  uint uStack_46c;
  uint uStack_468;
  uint local_464;
  uint uStack_460;
  uint uStack_45c;
  uint uStack_458;
  uint uStack_454;
  uint local_450;
  uint uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  uint local_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  uint uStack_428;
  uint local_424;
  uint uStack_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  uint local_410;
  uint uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  int *local_3f8;
  uint uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  int *local_3e0;
  uint uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  uint local_3c8;
  uint uStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  uint uStack_3b8;
  uint local_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  uint local_3a0;
  uint uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 auStack_388 [104];
  int local_320;
  int local_31c;
  undefined1 auStack_318 [72];
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  undefined1 auStack_2c0 [88];
  undefined1 auStack_268 [88];
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint uStack_1fc;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint local_1ec;
  uint uStack_1e8;
  uint local_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  uint uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int *local_1c0;
  uint local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  uint local_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint local_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [88];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [92];
  
  puVar3 = (undefined4 *)(param_2 + 0x308);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar6 = 0x101;
    bVar18 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    *(uint *)(param_2 + 0xa0) = (uint)bVar18;
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    if (bVar18) {
      uVar6 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined2 *)(param_2 + 0x495) = 0;
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar14 = (undefined4 *)(param_2 + 0xa0);
    uVar13 = *(undefined4 *)(param_2 + 0x490);
    *(undefined4 *)(param_2 + 0xa4) = uVar6;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(undefined4 **)(param_2 + 0x1d0) = puVar14;
    *(undefined4 *)(param_2 + 0x1d4) = uVar13;
LAB_00e9f9e8:
    *(undefined4 **)(param_2 + 0x1d8) = puVar14;
    *(undefined4 *)(param_2 + 0x1dc) = uVar13;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(undefined4 **)(param_2 + 0x3f0) = puVar14;
LAB_00e9fa34:
    iVar10 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar10,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_210,iVar10);
    uVar16 = local_20c;
    uVar15 = local_210;
    if (local_210 == 3 && local_20c == 0) {
      *(undefined2 *)(param_2 + 0x3f9) = 1;
      iVar9 = *(int *)(param_2 + 0x300);
      iVar7 = *(int *)(param_2 + 0x304);
      FUN_01bed4e2(param_2 + 0x408,iVar10,0x88);
      *(undefined1 *)(param_2 + 0x3fc) = 0;
      uVar6 = *puVar14;
      uVar13 = puVar14[1];
      puVar14 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar14 = 0x2000;
      puVar14[1] = 0x8000;
      if ((iVar9 == 0) || (iVar10 = (**(code **)(iVar7 + 0x10))(iVar9), iVar10 != 0)) {
        piVar11 = (int *)0x0;
        FUN_005f6438(iVar9,iVar7);
      }
      else {
        piVar11 = (int *)thunk_FUN_01be5118(8);
        if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *piVar11 = iVar9;
        piVar11[1] = iVar7;
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
      *(undefined4 **)(param_2 + 1000) = puVar14;
      *(undefined **)(param_2 + 0x3ec) = &DAT_01c1b854;
      *(undefined **)(param_2 + 0x3dc) = &DAT_01c15580;
      *(int *)(param_2 + 0x3b8) = iVar10;
      *(undefined4 *)(param_2 + 0x3b4) = uVar13;
      *(undefined4 *)(param_2 + 0x3c0) = 0x2000;
      *(undefined4 *)(param_2 + 0x3c4) = 0x11;
      *(undefined4 *)(param_2 + 0x3c8) = 1;
      *(undefined4 *)(param_2 + 0x3d4) = 1;
      *(undefined4 *)(param_2 + 0x3d0) = 0;
      *(int **)(param_2 + 0x3d8) = piVar11;
      *(undefined4 *)(param_2 + 0x3b0) = uVar6;
      *(undefined4 *)(param_2 + 0x3bc) = 0;
      *(undefined4 *)(param_2 + 0x3cc) = 0;
      *(undefined4 **)(param_2 + 0x400) = (undefined4 *)(param_2 + 0x3f4);
LAB_00e9fc6c:
      FUN_00fd9830(&local_210,puVar3,param_3);
      uVar16 = local_20c;
      uVar15 = local_210;
      if (local_210 != 5 || local_20c != 0) {
        if ((local_210 & 7) == 4) {
          local_518 = 0;
LAB_00e9fcd0:
          FUN_01bed4e2(auStack_130,auStack_80,0x58);
          FUN_01bed4e2(auStack_268,auStack_130,0x58);
LAB_00e9fcf8:
          if ((local_518 & 1) == 0) {
            FUN_01a71aac(&local_2d0,0xd,"Missing request message.",0x18);
            if (local_2d0 != 3 || local_2cc != 0) {
              puVar8 = auStack_2c0;
              local_518 = local_2c8;
              local_51c = local_2c4;
              uVar15 = local_2d0;
              uVar16 = local_2cc;
              goto LAB_00e9fe74;
            }
            local_51c = local_2c8;
          }
          *(undefined1 *)(param_2 + 0x3f9) = 0;
          FUN_01bed4e2(&local_210,param_2 + 0x408,0x88);
          *(undefined1 *)(param_2 + 0x3fb) = 0;
          FUN_00f07d3c(param_2 + 0x400,&local_210,local_51c);
          *(undefined1 *)(param_2 + 0x45c) = 0;
          puVar4 = *(uint **)(param_2 + 0x3f4);
          *(uint **)(param_2 + 0x448) = puVar4;
          goto LAB_00e9fd90;
        }
        if (local_210 == 3) {
          local_51c = local_208;
          local_518 = 1;
          goto LAB_00e9fcd0;
        }
        local_518 = local_208;
        local_51c = local_204;
        FUN_01bed4e2(auStack_80,&local_200,0x58);
        FUN_01bed4e2(auStack_130,auStack_80,0x58);
        if (uVar15 == 4 && uVar16 == 0) goto LAB_00e9fc90;
        puVar8 = auStack_268;
        FUN_01bed4e2(puVar8,auStack_130,0x58);
        if (uVar15 == 3 && uVar16 == 0) goto LAB_00e9fcf8;
LAB_00e9fe74:
        FUN_01bed4e2(&local_188,puVar8,0x58);
LAB_00e9fe88:
        *(undefined1 *)(param_2 + 0x3fb) = 0;
        FUN_005f1224(param_2 + 0x308);
        *(undefined1 *)(param_2 + 0x3fc) = 0;
        if (*(char *)(param_2 + 0x3f9) != '\0') {
          FUN_0096a6b0(param_2 + 0x408);
        }
        *(undefined1 *)(param_2 + 0x3f9) = 0;
        goto LAB_00e9fb40;
      }
LAB_00e9fc90:
      uVar2 = 3;
LAB_00e9fc94:
      local_524 = (undefined1 *)(param_2 + 0x3f8);
      *local_524 = uVar2;
    }
    else {
      local_518 = local_208;
      local_51c = local_204;
      FUN_01bed4e2(&local_188,&local_200,0x58);
LAB_00e9fb40:
      if (*(char *)(param_2 + 0x3fa) != '\0') {
        FUN_005f9b88(param_2 + 0x278);
      }
      *(undefined1 *)(param_2 + 0x3fa) = 0;
LAB_00ea0168:
      local_524 = (undefined1 *)(param_2 + 0x3f8);
      FUN_01bed4e2(&local_438,&local_188,0x58);
      *local_524 = 1;
      if (uVar15 != 4 || uVar16 != 0) {
        local_3c8 = local_438;
        uStack_3c4 = uStack_434;
        uStack_3c0 = uStack_430;
        uStack_3bc = uStack_42c;
        uStack_3b8 = uStack_428;
        local_3b4 = local_424;
        uStack_3b0 = uStack_420;
        uStack_3ac = uStack_41c;
        uStack_3a8 = uStack_418;
        uStack_3a4 = uStack_414;
        local_3a0 = local_410;
        uStack_39c = uStack_40c;
        uStack_398 = uStack_408;
        uStack_394 = uStack_404;
        uStack_390 = uStack_400;
        uStack_38c = uStack_3fc;
        local_3e0 = local_3f8;
        uStack_3dc = uStack_3f4;
        uStack_3d8 = uStack_3f0;
        uStack_3d4 = uStack_3ec;
        uStack_3d0 = uStack_3e8;
        uStack_3cc = uStack_3e4;
        FUN_00e9f828(param_2 + 0x1e8);
        if (uVar15 == 3 && uVar16 == 0) {
          local_478 = local_3c8;
          uStack_474 = uStack_3c4;
          uStack_470 = uStack_3c0;
          uStack_46c = uStack_3bc;
          uStack_468 = uStack_3b8;
          local_464 = local_3b4;
          uStack_460 = uStack_3b0;
          uStack_45c = uStack_3ac;
          uStack_458 = uStack_3a8;
          uStack_454 = uStack_3a4;
          local_450 = local_3a0;
          uStack_44c = uStack_39c;
          uStack_448 = uStack_398;
          uStack_444 = uStack_394;
          uStack_440 = uStack_390;
          uStack_43c = uStack_38c;
          local_47c = local_51c;
          *(undefined1 *)(param_2 + 0x1e1) = 0;
          local_480 = local_518;
          local_1c0 = *(int **)(param_2 + 0x1dc);
          do {
            iVar10 = *local_1c0;
            bVar18 = (bool)hasExclusiveAccess(local_1c0);
          } while (!bVar18);
          *local_1c0 = iVar10 + 1;
          if (iVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xea0488);
            (*pcVar1)();
          }
          FUN_01bed4e2(&local_210,&local_480,0x48);
          local_1bc = local_1bc & 0xffffff00;
          iVar10 = thunk_FUN_01be5118(0x58);
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x58);
          }
          FUN_01bed4e2(iVar10,&local_210,0x58);
          *(int *)(param_2 + 0x1e8) = iVar10;
          puVar5 = &DAT_01c17fe4;
          *(undefined **)(param_2 + 0x1ec) = &DAT_01c17fe4;
          goto LAB_00ea02ac;
        }
        local_200 = local_3c8;
        uStack_1fc = uStack_3c4;
        local_1f8 = uStack_3c0;
        uStack_1f4 = uStack_3bc;
        uStack_1f0 = uStack_3b8;
        local_1ec = local_3b4;
        uStack_1e8 = uStack_3b0;
        local_1e4 = uStack_3ac;
        uStack_1e0 = uStack_3a8;
        uStack_1dc = uStack_3a4;
        local_1d8 = local_3a0;
        uStack_1d4 = uStack_39c;
        uStack_1d0 = uStack_398;
        uStack_1cc = uStack_394;
        uStack_1c8 = uStack_390;
        uStack_1c4 = uStack_38c;
        local_1c0 = local_3e0;
        local_1bc = uStack_3dc;
        uStack_1b8 = uStack_3d8;
        uStack_1b4 = uStack_3d4;
        uStack_1b0 = uStack_3d0;
        uStack_1ac = uStack_3cc;
        local_204 = local_51c;
        local_208 = local_518;
        local_210 = uVar15;
        local_20c = uVar16;
        FUN_00d68954(&local_320,&local_210,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                     *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
        piVar11 = *(int **)(param_2 + 0x1dc);
        *(undefined1 *)(param_2 + 0x1e1) = 0;
        *(undefined1 *)(param_2 + 0x1e2) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar11;
          bVar18 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar18);
        *piVar11 = iVar10 + -1;
        goto joined_r0x00ea036c;
      }
    }
    uVar2 = 3;
LAB_00ea02d8:
    *(undefined1 *)(param_2 + 0x1e0) = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17e84);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17e84);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar14 = *(undefined4 **)(param_2 + 0x1d0);
      uVar13 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_00e9f9e8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1e138);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1e138);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x3f8)) {
      case 0:
        puVar14 = *(undefined4 **)(param_2 + 0x3f0);
        goto LAB_00e9fa34;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        puVar3 = (undefined4 *)**(undefined4 **)(param_2 + 0x400);
        goto LAB_00e9fc6c;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x45c)) {
        case 0:
          puVar4 = *(uint **)(param_2 + 0x448);
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
          switch(*(undefined1 *)(param_2 + 0x458)) {
          case 0:
            uVar13 = *(undefined4 *)(param_2 + 0x450);
            goto LAB_00ea0614;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22468);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22468);
          case 3:
            uVar13 = *(undefined4 *)(param_2 + 0x454);
            goto LAB_00ea0618;
          }
        }
      }
LAB_00e9fd90:
      *(uint **)(param_2 + 0x44c) = puVar4;
      uVar15 = *puVar4;
      uVar16 = puVar4[1];
      *puVar4 = 3;
      puVar4[1] = 0;
      if (uVar15 == 3 && uVar16 == 0) {
        do {
          *(undefined1 *)(param_2 + 0x458) = 0;
          uVar13 = *(undefined4 *)(param_2 + 0x44c);
          *(undefined4 *)(param_2 + 0x450) = uVar13;
LAB_00ea0614:
          *(undefined4 *)(param_2 + 0x454) = uVar13;
LAB_00ea0618:
          local_520 = (undefined1 *)(param_2 + 0x45c);
          puVar8 = (undefined1 *)(param_2 + 0x458);
          FUN_00fd9830(&local_210,uVar13,param_3);
          uVar12 = local_208;
          uVar16 = local_20c;
          uVar15 = local_210;
          if (local_210 == 5 && local_20c == 0) {
            *puVar8 = 3;
LAB_00ea07f4:
            *local_520 = 3;
            uVar2 = 4;
            goto LAB_00e9fc94;
          }
          local_518 = local_208;
          local_51c = local_204;
          FUN_01bed4e2(&local_2d0,&local_200,0x58);
          uVar17 = 0;
          if ((uVar15 & 7) == 4) {
LAB_00ea0678:
            uVar12 = uVar17;
            *puVar8 = 1;
            FUN_01bed4e2(auStack_80,auStack_130,0x58);
          }
          else {
            if (uVar15 == 3) {
              uVar17 = 1;
              goto LAB_00ea0678;
            }
            FUN_01bed4e2(auStack_130,&local_2d0,0x58);
            *puVar8 = 1;
            if (uVar15 == 4 && uVar16 == 0) goto LAB_00ea07f4;
            FUN_01bed4e2(auStack_80,auStack_130,0x58);
            if (uVar15 != 3 || uVar16 != 0) {
              FUN_01bed4e2(&local_d8,auStack_80,0x58);
              *(undefined1 *)(param_2 + 0x45c) = 1;
              local_150 = local_a0;
              uStack_14c = uStack_9c;
              uStack_148 = uStack_98;
              uStack_144 = uStack_94;
              local_140 = local_90;
              uStack_13c = uStack_8c;
              uStack_138 = uStack_88;
              uStack_134 = uStack_84;
              local_188 = local_d8;
              uStack_184 = uStack_d4;
              uStack_180 = uStack_d0;
              uStack_17c = uStack_cc;
              local_178 = local_c8;
              local_174 = uStack_c4;
              uStack_170 = uStack_c0;
              uStack_16c = uStack_bc;
              uStack_168 = uStack_b8;
              local_164 = local_b4;
              local_160 = uStack_b0;
              uStack_15c = uStack_ac;
              uStack_158 = uStack_a8;
              uStack_154 = uStack_a4;
              FUN_00e46934(param_2 + 0x400);
              goto LAB_00e9fe88;
            }
          }
        } while (uVar12 != 0);
        puVar4 = *(uint **)(param_2 + 0x44c);
        uVar15 = *puVar4;
        uVar16 = puVar4[1];
        *puVar4 = 3;
        puVar4[1] = 0;
        uVar12 = 3;
        uVar17 = 0;
        if (uVar15 != 3 || uVar16 != 0) goto LAB_00ea070c;
      }
      else {
LAB_00ea070c:
        local_d8 = puVar4[2];
        uStack_d4 = puVar4[3];
        uStack_d0 = puVar4[4];
        uStack_cc = puVar4[5];
        local_c8 = puVar4[6];
        uStack_c4 = puVar4[7];
        uStack_c0 = puVar4[8];
        uStack_bc = puVar4[9];
        uStack_b8 = puVar4[10];
        local_b4 = puVar4[0xb];
        uStack_b0 = puVar4[0xc];
        uStack_ac = puVar4[0xd];
        uStack_a8 = puVar4[0xe];
        uStack_a4 = puVar4[0xf];
        uVar12 = uVar15;
        uVar17 = uVar16;
      }
      local_520 = (undefined1 *)(param_2 + 0x45c);
      *local_520 = 1;
      if (uVar12 != 3 || uVar17 != 0) {
        local_208 = local_d8;
        local_204 = uStack_d4;
        local_200 = uStack_d0;
        uStack_1fc = uStack_cc;
        local_1f8 = local_c8;
        uStack_1f4 = uStack_c4;
        uStack_1f0 = uStack_c0;
        local_1ec = uStack_bc;
        uStack_1e8 = uStack_b8;
        local_1e4 = local_b4;
        uStack_1e0 = uStack_b0;
        uStack_1dc = uStack_ac;
        local_1d8 = uStack_a8;
        uStack_1d4 = uStack_a4;
        local_210 = uVar12;
        local_20c = uVar17;
        FUN_00713444(param_2 + 0x400);
      }
      uVar16 = 0;
      local_518 = *(uint *)(param_2 + 0x400);
      local_51c = *(uint *)(param_2 + 0x404);
      local_188 = *(uint *)(param_2 + 0x408);
      uStack_184 = *(uint *)(param_2 + 0x40c);
      uStack_180 = *(uint *)(param_2 + 0x410);
      uStack_17c = *(uint *)(param_2 + 0x414);
      local_178 = *(uint *)(param_2 + 0x418);
      local_174 = *(uint *)(param_2 + 0x41c);
      uStack_170 = *(uint *)(param_2 + 0x420);
      uStack_16c = *(uint *)(param_2 + 0x424);
      uStack_168 = *(uint *)(param_2 + 0x428);
      local_164 = *(uint *)(param_2 + 0x42c);
      local_160 = *(uint *)(param_2 + 0x430);
      uStack_15c = *(uint *)(param_2 + 0x434);
      uStack_158 = *(uint *)(param_2 + 0x438);
      uStack_154 = *(uint *)(param_2 + 0x43c);
      local_150 = *(undefined4 *)(param_2 + 0x440);
      uStack_14c = *(undefined4 *)(param_2 + 0x444);
      *(undefined1 *)(param_2 + 0x3fb) = 0;
      FUN_005f1224();
      *(undefined2 *)(param_2 + 0x3f9) = 0;
      uVar15 = 3;
      *(undefined1 *)(param_2 + 0x3fc) = 0;
      goto LAB_00ea0168;
    case 4:
      puVar5 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_00ea02ac:
    (**(code **)(puVar5 + 0xc))(&local_210,*(undefined4 *)(param_2 + 0x1e8),param_3);
    if (local_210 == 4 && local_20c == 0) {
      uVar2 = 4;
      goto LAB_00ea02d8;
    }
    FUN_01bed4e2(auStack_388,&local_210,0x68);
    FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
    FUN_00d68954(&local_320,auStack_388,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                 *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
    piVar11 = *(int **)(param_2 + 0x1dc);
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar11;
      bVar18 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar18);
    *piVar11 = iVar10 + -1;
joined_r0x00ea036c:
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01181614(*(undefined4 *)(param_2 + 0x1dc));
    }
    FUN_01bed4e2(auStack_510,auStack_318,0x48);
    *(undefined1 *)(param_2 + 0x1e0) = 1;
    if (local_320 != 3 || local_31c != 0) {
      FUN_01bed4e2(auStack_4c8,auStack_510,0x48);
      FUN_00e9f70c(param_2 + 0xb0);
      FUN_01bed4e2(param_1 + 2,auStack_4c8,0x48);
      *(undefined1 *)(param_2 + 0x495) = 0;
      uVar2 = 1;
      goto LAB_00ea02e8;
    }
  }
  local_31c = 0;
  local_320 = 3;
  uVar2 = 3;
LAB_00ea02e8:
  *(undefined1 *)(param_2 + 0x494) = uVar2;
  *param_1 = local_320;
  param_1[1] = local_31c;
  return;
}

