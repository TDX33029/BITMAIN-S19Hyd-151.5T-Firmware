// FUN_00eee12c @ 00eee12c size=3612 calls_out=27 calls_in=0
// strings: Missing request message.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eee12c(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  uint extraout_r1;
  uint extraout_r2;
  undefined4 uVar7;
  uint extraout_r3;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 *local_5c4;
  uint *local_5b0;
  undefined1 *local_5a0;
  undefined1 *local_594;
  uint local_590;
  uint local_580;
  uint local_57c;
  undefined1 auStack_578 [72];
  undefined1 auStack_530 [72];
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  undefined1 auStack_4d8 [72];
  undefined1 auStack_490 [72];
  undefined1 auStack_448 [72];
  uint local_400;
  uint local_3fc;
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  uint local_3ec;
  uint local_3e8;
  uint local_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  uint *local_3a0;
  undefined4 local_39c;
  uint *local_398;
  byte local_394;
  undefined4 local_390;
  int local_38c;
  undefined4 local_380;
  undefined4 local_358;
  uint *local_350;
  uint local_348;
  int iStack_344;
  uint uStack_340;
  uint uStack_33c;
  uint uStack_338;
  uint local_334;
  uint uStack_330;
  uint uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  int local_2f8;
  int local_2f4;
  undefined1 auStack_2f0 [72];
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  undefined1 auStack_298 [72];
  undefined1 auStack_250 [72];
  uint local_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint local_178;
  uint local_174;
  uint local_170;
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
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [64];
  uint *local_38;
  undefined4 local_34;
  uint *local_30;
  uint local_2c;
  
  puVar6 = (undefined4 *)(param_2 + 0x308);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar7 = 0x101;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    bVar22 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0;
    if (bVar22) {
      uVar7 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar9 = (undefined4 *)(param_2 + 0xa0);
    uVar12 = *(undefined4 *)(param_2 + 0x490);
    *(uint *)(param_2 + 0xa0) = (uint)bVar22;
    *(undefined4 *)(param_2 + 0xa4) = uVar7;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(undefined4 **)(param_2 + 0x1d0) = puVar9;
    *(undefined4 *)(param_2 + 0x1d4) = uVar12;
LAB_00eee238:
    *(undefined4 **)(param_2 + 0x1d8) = puVar9;
    *(undefined4 *)(param_2 + 0x1dc) = uVar12;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(undefined4 **)(param_2 + 0x3f0) = puVar9;
LAB_00eee280:
    iVar11 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar11,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_400,iVar11);
    local_590 = local_3f0;
    uVar21 = local_3f8;
    uVar18 = local_3fc;
    uVar16 = local_400;
    if (!(local_400 == 3 && local_3fc == 0)) {
      local_57c = local_3f4;
      local_580 = local_3ec;
      FUN_01bed4e2(&local_1c0,&local_3e8,0x48);
      local_5b0 = local_3a0;
      goto LAB_00eee910;
    }
    *(undefined2 *)(param_2 + 0x3f9) = 1;
    iVar13 = *(int *)(param_2 + 0x300);
    iVar17 = *(int *)(param_2 + 0x304);
    FUN_01bed4e2(param_2 + 0x408,iVar11,0x88);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    uVar7 = *puVar9;
    uVar12 = puVar9[1];
    puVar9 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar9 = 0x2000;
    puVar9[1] = 0x8000;
    if ((iVar13 == 0) || (iVar11 = (**(code **)(iVar17 + 0x10))(iVar13), iVar11 != 0)) {
      piVar15 = (int *)0x0;
      FUN_005f6438(iVar13,iVar17);
    }
    else {
      piVar15 = (int *)thunk_FUN_01be5118(8);
      if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar15 = iVar13;
      piVar15[1] = iVar17;
    }
    iVar11 = FUN_01298504(0x2000,1);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    *(undefined4 *)(param_2 + 0x3f4) = puVar6;
    *(undefined4 **)(param_2 + 1000) = puVar9;
    *(undefined4 *)(param_2 + 0x348) = 4;
    *(undefined4 *)(param_2 + 0x3d0) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 1;
    *(int **)(param_2 + 0x3d8) = piVar15;
    *(undefined **)(param_2 + 0x3dc) = &DAT_01c15b38;
    *(int *)(param_2 + 0x3b8) = iVar11;
    *puVar6 = 3;
    *(undefined **)(param_2 + 0x3ec) = &DAT_01c1b980;
    *(undefined4 *)(param_2 + 0x3b0) = uVar7;
    *(undefined4 *)(param_2 + 0x34c) = 0;
    *(undefined4 *)(param_2 + 0x30c) = 0;
    *(undefined2 *)(param_2 + 0x3e0) = 0;
    *(undefined4 *)(param_2 + 0x3b4) = uVar12;
    *(undefined4 *)(param_2 + 0x3bc) = 0;
    *(undefined4 *)(param_2 + 0x3c0) = 0x2000;
    *(undefined4 *)(param_2 + 0x3c4) = 0x11;
    *(undefined4 *)(param_2 + 0x3c8) = 1;
    *(undefined4 *)(param_2 + 0x3cc) = 0;
    *(undefined4 **)(param_2 + 0x400) = (undefined4 *)(param_2 + 0x3f4);
    puVar9 = puVar6;
LAB_00eee49c:
    FUN_00fda6f0(&local_400,puVar9,param_3);
    uVar8 = local_3ec;
    uVar14 = local_3f0;
    uVar19 = local_3f4;
    uVar21 = local_3f8;
    uVar18 = local_3fc;
    uVar16 = local_400;
    if (local_400 != 5 || local_3fc != 0) {
      if ((local_400 & 7) == 4) {
        uVar21 = 2;
        uVar19 = extraout_r1;
        uVar14 = extraout_r2;
        uVar8 = extraout_r3;
LAB_00eee4fc:
        if (uVar21 == 2) {
          FUN_01a71aac(&local_90,0xd,"Missing request message.",0x18);
          uVar21 = local_88;
          uVar18 = local_8c;
          uVar16 = local_90;
          if (!(local_90 == 3 && local_8c == 0)) {
            local_57c = local_84;
            local_580 = local_7c;
            FUN_01bed4e2(&local_1c0,auStack_78,0x48);
            local_5b0 = local_30;
            local_590 = local_80;
            goto LAB_00eee8dc;
          }
          uVar14 = local_80;
          uVar8 = local_7c;
        }
        else {
          local_88 = uVar21;
          local_84 = uVar19;
        }
        *(undefined1 *)(param_2 + 0x3f9) = 0;
        local_2a8 = local_88;
        uStack_2a4 = local_84;
        uStack_2a0 = uVar14;
        uStack_29c = uVar8;
        FUN_01bed4e2(&local_400,param_2 + 0x408,0x88);
        *(undefined1 *)(param_2 + 0x3fb) = 0;
        FUN_01bed864(param_2 + 0x400,param_2 + 0x408,0x40);
        *(uint *)(param_2 + 0x440) = local_2a8;
        *(uint *)(param_2 + 0x444) = uStack_2a4;
        *(uint *)(param_2 + 0x448) = uStack_2a0;
        *(uint *)(param_2 + 0x44c) = uStack_29c;
        *(undefined4 *)(param_2 + 0x450) = local_380;
        if ((9 < local_394) && (local_38c != 0)) {
          thunk_FUN_01be4678(local_390);
        }
        FUN_01a8c248(&local_3c0);
        *(undefined1 *)(param_2 + 0x46c) = 0;
        puVar4 = *(uint **)(param_2 + 0x3f4);
        *(uint **)(param_2 + 0x458) = puVar4;
        local_5b0 = &local_88;
        goto LAB_00eee5f8;
      }
      if (local_400 == 3) goto LAB_00eee4fc;
      local_57c = local_3f4;
      local_590 = local_3f0;
      local_580 = local_3ec;
      FUN_01bed4e2(&local_d8,&local_3e8,0x48);
      if (uVar16 == 4 && uVar18 == 0) goto LAB_00eee4c0;
      local_5b0 = local_3a0;
      FUN_01bed4e2(auStack_298,&local_d8,0x48);
      if (uVar16 == 3 && uVar18 == 0) goto LAB_00eee4fc;
      FUN_01bed4e2(&local_1c0,auStack_298,0x48);
      goto LAB_00eee8dc;
    }
LAB_00eee4c0:
    uVar3 = 3;
LAB_00eef2b0:
    *(undefined1 *)(param_2 + 0x3f8) = uVar3;
    goto LAB_00eef2b4;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c18aa4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c18aa4);
  case 3:
    uVar19 = param_2 + 0xb0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar9 = *(undefined4 **)(param_2 + 0x1d0);
      uVar12 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_00eee238;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22498);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22498);
    case 3:
      uVar14 = param_2 + 0x1e8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x3f8)) {
      case 0:
        puVar9 = *(undefined4 **)(param_2 + 0x3f0);
        goto LAB_00eee280;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        puVar9 = (undefined4 *)**(undefined4 **)(param_2 + 0x400);
        goto LAB_00eee49c;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x46c)) {
        case 0:
          puVar4 = *(uint **)(param_2 + 0x458);
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
            uVar12 = *(undefined4 *)(param_2 + 0x460);
            goto LAB_00eef154;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22468);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22468);
          case 3:
            uVar12 = *(undefined4 *)(param_2 + 0x464);
            uVar8 = uVar14;
            uVar20 = uVar19;
            goto LAB_00eef158;
          }
        }
      }
LAB_00eee5f8:
      uVar19 = param_2 + 0xb0;
      *(uint **)(param_2 + 0x45c) = puVar4;
      uVar21 = *puVar4;
      local_57c = puVar4[1];
      local_590 = puVar4[2];
      uVar14 = puVar4[3];
      *puVar4 = 3;
      puVar4[1] = 0;
      if (uVar21 == 3 && local_57c == 0) {
LAB_00eef140:
        *(undefined1 *)(param_2 + 0x468) = 0;
        uVar12 = *(undefined4 *)(param_2 + 0x45c);
        *(undefined4 *)(param_2 + 0x460) = uVar12;
LAB_00eef154:
        *(undefined4 *)(param_2 + 0x464) = uVar12;
        uVar8 = uVar14;
        uVar20 = uVar19;
LAB_00eef158:
        puVar10 = (undefined1 *)(param_2 + 0x468);
        local_5c4 = (undefined1 *)(param_2 + 0x46c);
        FUN_00fda6f0(&local_400,uVar12,param_3);
        uVar14 = local_3f0;
        uVar19 = local_3f4;
        uVar21 = local_3f8;
        uVar18 = local_3fc;
        uVar16 = local_400;
        if (local_400 == 5 && local_3fc == 0) {
          *puVar10 = 3;
LAB_00eef294:
          *local_5c4 = 3;
          uVar3 = 4;
          goto LAB_00eef2b0;
        }
        local_57c = local_3f4;
        local_590 = local_3f0;
        local_580 = local_3ec;
        FUN_01bed4e2(&local_90,&local_3e8,0x48);
        uVar2 = 2;
        if ((uVar16 & 7) == 4) {
LAB_00eef1d4:
          uVar19 = uVar20;
          uVar14 = uVar8;
          uVar21 = uVar2;
          *puVar10 = 1;
          FUN_01bed4e2(auStack_120,auStack_168,0x48);
        }
        else {
          if (uVar16 == 3) {
            uVar2 = uVar21;
            uVar8 = uVar14;
            uVar20 = uVar19;
            goto LAB_00eef1d4;
          }
          puVar4 = local_3a0;
          FUN_01bed4e2(auStack_168,&local_90,0x48);
          *puVar10 = 1;
          if (uVar16 == 4 && uVar18 == 0) goto LAB_00eef294;
          FUN_01bed4e2(auStack_120,auStack_168,0x48);
          if (uVar16 != 3 || uVar18 != 0) goto LAB_00eef31c;
        }
        local_178 = uVar21;
        local_174 = uVar19;
        local_170 = uVar14;
        if (uVar21 != 0) {
          if (uVar21 == 2) {
            puVar4 = *(uint **)(param_2 + 0x45c);
            uVar16 = 3;
            uVar18 = 0;
            uVar21 = *puVar4;
            local_57c = puVar4[1];
            *puVar4 = 3;
            puVar4[1] = 0;
            if (!(uVar21 != 3 || local_57c != 0)) {
              local_57c = 0;
              uVar21 = 3;
              goto LAB_00eee65c;
            }
            local_590 = puVar4[2];
            local_580 = puVar4[3];
            goto LAB_00eee644;
          }
          FUN_0165d624(&local_174);
        }
        goto LAB_00eef140;
      }
      local_580 = uVar14;
LAB_00eee644:
      uVar18 = 0;
      uVar16 = 3;
      local_d8 = puVar4[4];
      uStack_d4 = puVar4[5];
      uStack_d0 = puVar4[6];
      uStack_cc = puVar4[7];
      uStack_c8 = puVar4[8];
      uStack_c4 = puVar4[9];
      local_c0 = puVar4[10];
      uStack_bc = puVar4[0xb];
      uStack_b8 = puVar4[0xc];
      uStack_b4 = puVar4[0xd];
      uStack_b0 = puVar4[0xe];
      uStack_ac = puVar4[0xf];
      goto LAB_00eee65c;
    case 4:
      puVar5 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_00eeea2c:
    (**(code **)(puVar5 + 0xc))(&local_90,*(undefined4 *)(param_2 + 0x1e8),param_3);
    if (!(local_90 == 4 && local_8c == 0)) {
      FUN_01bed4e2(&local_348,&local_88,0x50);
      puVar4 = local_30;
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
      if (local_90 == 3 && local_8c == 0) {
        local_400 = local_348;
        local_3fc = iStack_344;
        local_3f8 = uStack_340;
        local_3f4 = uStack_33c;
        local_3f0 = uStack_338;
        local_3ec = local_334;
        local_3e8 = uStack_330;
        local_3e4 = uStack_32c;
        uStack_3e0 = uStack_328;
        uStack_3dc = uStack_324;
        local_3d8 = local_320;
        uStack_3d4 = uStack_31c;
        uStack_3d0 = uStack_318;
        uStack_3cc = uStack_314;
        uStack_3c8 = uStack_310;
        uStack_3c4 = uStack_30c;
        local_3c0 = 3;
        uStack_3bc = 0;
        local_3b8 = local_308;
        uStack_3b4 = uStack_304;
        uStack_3b0 = uStack_300;
        uStack_3ac = uStack_2fc;
        local_350 = local_38;
        local_358 = 0;
        if (local_348 != 3 || iStack_344 != 0) {
          FUN_011de050(local_38);
        }
      }
      else {
        local_3f8 = local_90;
        local_3f4 = local_8c;
        FUN_01bed4e2(&local_3f0,&local_348,0x50);
        local_398 = puVar4;
        local_3fc = 0;
        local_400 = 3;
        local_39c = local_34;
        local_3a0 = local_38;
      }
      FUN_00d70a74(&local_2f8,&local_400,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      piVar15 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar15;
        bVar22 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar22);
      *piVar15 = iVar11 + -1;
      goto LAB_00eeec30;
    }
    uVar3 = 4;
  }
LAB_00eef2b8:
  *(undefined1 *)(param_2 + 0x1e0) = uVar3;
  goto LAB_00eef2bc;
LAB_00eef31c:
  FUN_01bed4e2(&local_d8,auStack_120,0x48);
  local_5b0 = puVar4;
LAB_00eee65c:
  local_5c4 = (undefined1 *)(param_2 + 0x46c);
  FUN_01bed4e2(auStack_250,&local_d8,0x48);
  *local_5c4 = 1;
  FUN_01bed4e2(&local_208,auStack_250,0x48);
  if (uVar16 == 3 && uVar18 == 0) {
    if (uVar21 != 3 || local_57c != 0) {
      local_3f0 = local_208;
      local_3ec = uStack_204;
      local_3e8 = uStack_200;
      local_3e4 = uStack_1fc;
      uStack_3e0 = uStack_1f8;
      uStack_3dc = uStack_1f4;
      local_3d8 = local_1f0;
      uStack_3d4 = uStack_1ec;
      uStack_3d0 = uStack_1e8;
      uStack_3cc = uStack_1e4;
      uStack_3c8 = uStack_1e0;
      uStack_3c4 = uStack_1dc;
      local_3f4 = local_580;
      local_3f8 = local_590;
      local_3fc = local_57c;
      local_400 = uVar21;
      FUN_00713444(param_2 + 0x400,&local_400);
    }
    local_57c = *(uint *)(param_2 + 0x404);
    local_580 = *(uint *)(param_2 + 0x40c);
    uVar21 = *(uint *)(param_2 + 0x400);
    local_590 = *(uint *)(param_2 + 0x408);
    FUN_01bed4e2(&local_1c0,param_2 + 0x410,0x48);
    uVar18 = 0;
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_005f1224(puVar6);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    *(undefined2 *)(param_2 + 0x3f9) = 0;
    uVar16 = 3;
  }
  else {
    local_190 = local_1d8;
    uStack_18c = uStack_1d4;
    uStack_188 = uStack_1d0;
    uStack_184 = uStack_1cc;
    uStack_180 = uStack_1c8;
    uStack_17c = uStack_1c4;
    local_1c0 = local_208;
    uStack_1bc = uStack_204;
    uStack_1b8 = uStack_200;
    uStack_1b4 = uStack_1fc;
    uStack_1b0 = uStack_1f8;
    uStack_1ac = uStack_1f4;
    local_1a8 = local_1f0;
    uStack_1a4 = uStack_1ec;
    uStack_1a0 = uStack_1e8;
    uStack_19c = uStack_1e4;
    uStack_198 = uStack_1e0;
    uStack_194 = uStack_1dc;
    FUN_00971f58(param_2 + 0x400);
LAB_00eee8dc:
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_005f1224(param_2 + 0x308);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    if (*(char *)(param_2 + 0x3f9) != '\0') {
      FUN_01839f10(param_2 + 0x408);
    }
    *(undefined1 *)(param_2 + 0x3f9) = 0;
LAB_00eee910:
    if (*(char *)(param_2 + 0x3fa) != '\0') {
      FUN_00eca9c4(param_2 + 0x278);
    }
    *(undefined1 *)(param_2 + 0x3fa) = 0;
  }
  local_5a0 = (undefined1 *)(param_2 + 0x3f8);
  FUN_01bed4e2(auStack_490,&local_1c0,0x48);
  *local_5a0 = 1;
  if (!(uVar16 != 4 || uVar18 != 0)) {
LAB_00eef2b4:
    uVar3 = 3;
    goto LAB_00eef2b8;
  }
  FUN_01bed4e2(auStack_448,auStack_490,0x48);
  FUN_00eeb5d4(param_2 + 0x1e8);
  if (uVar16 == 3 && uVar18 == 0) {
    FUN_01bed4e2(auStack_4d8,auStack_448,0x48);
    local_4dc = local_580;
    local_4e4 = local_57c;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    local_30 = *(uint **)(param_2 + 0x1dc);
    do {
      uVar19 = *local_30;
      bVar22 = (bool)hasExclusiveAccess(local_30);
    } while (!bVar22);
    *local_30 = uVar19 + 1;
    local_4e8 = uVar21;
    local_4e0 = local_590;
    if ((int)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xeeedbc);
      (*pcVar1)();
    }
    FUN_01bed4e2(&local_90,&local_4e8,0x58);
    local_2c = local_2c & 0xffffff00;
    iVar11 = thunk_FUN_01be5118(0x68);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x68);
    }
    FUN_01bed4e2(iVar11,&local_90,0x68);
    *(int *)(param_2 + 0x1e8) = iVar11;
    puVar5 = &DAT_01c18c6c;
    *(undefined **)(param_2 + 0x1ec) = &DAT_01c18c6c;
    goto LAB_00eeea2c;
  }
  FUN_01bed4e2(&uStack_3e0,auStack_448,0x48);
  local_398 = local_5b0;
  local_3ec = local_57c;
  local_3e4 = local_580;
  local_3fc = 0;
  local_400 = 3;
  local_3f8 = uVar16;
  local_3f4 = uVar18;
  local_3f0 = uVar21;
  local_3e8 = local_590;
  FUN_00d70a74(&local_2f8,&local_400,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
               *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
  *(undefined1 *)(param_2 + 0x1e1) = 0;
  piVar15 = *(int **)(param_2 + 0x1dc);
  *(undefined1 *)(param_2 + 0x1e2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar15;
    bVar22 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar22);
  *piVar15 = iVar11 + -1;
LAB_00eeec30:
  local_594 = (undefined1 *)(param_2 + 0x1e0);
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a939e0(*(undefined4 *)(param_2 + 0x1dc));
  }
  FUN_01bed4e2(auStack_578,auStack_2f0,0x48);
  *local_594 = 1;
  if (local_2f8 != 3 || local_2f4 != 0) {
    FUN_01bed4e2(auStack_530,auStack_578,0x48);
    FUN_00eeb4b8(param_2 + 0xb0);
    FUN_01bed4e2(param_1 + 2,auStack_530,0x48);
    *(undefined1 *)(param_2 + 0x495) = 0;
    uVar3 = 1;
    goto LAB_00eef2cc;
  }
LAB_00eef2bc:
  local_2f4 = 0;
  local_2f8 = 3;
  uVar3 = 3;
LAB_00eef2cc:
  *(undefined1 *)(param_2 + 0x494) = uVar3;
  *param_1 = local_2f8;
  param_1[1] = local_2f4;
  return;
}

