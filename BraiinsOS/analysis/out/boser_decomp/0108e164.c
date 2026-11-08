// FUN_0108e164 @ 0108e164 size=3588 calls_out=25 calls_in=0
// strings: Missing request message.

void FUN_0108e164(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint unaff_r10;
  bool bVar20;
  undefined1 *local_5cc;
  uint local_5c0;
  uint local_5bc;
  int local_5b8;
  undefined1 *local_5ac;
  uint local_5a8;
  undefined1 *local_5a0;
  uint local_59c;
  uint local_598;
  uint local_594;
  uint local_58c;
  uint local_588;
  undefined1 auStack_580 [72];
  undefined1 auStack_538 [72];
  uint local_4f0;
  uint local_4ec;
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
  uint local_3e0;
  uint local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
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
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_358;
  undefined4 local_350;
  uint local_348;
  int iStack_344;
  uint uStack_340;
  uint uStack_33c;
  uint uStack_338;
  uint local_334;
  uint uStack_330;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
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
  uint local_294;
  undefined1 auStack_290 [72];
  undefined1 auStack_248 [72];
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [72];
  undefined1 auStack_128 [72];
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [56];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined1 local_2c;
  
  puVar6 = (undefined4 *)(param_2 + 0x308);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar8 = 0x101;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    bVar20 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0;
    if (bVar20) {
      uVar8 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar17 = (uint *)(param_2 + 0xa0);
    uVar19 = *(undefined4 *)(param_2 + 0x490);
    *(uint *)(param_2 + 0xa0) = (uint)bVar20;
    *(undefined4 *)(param_2 + 0xa4) = uVar8;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(uint **)(param_2 + 0x1d0) = puVar17;
    *(undefined4 *)(param_2 + 0x1d4) = uVar19;
LAB_0108e254:
    *(uint **)(param_2 + 0x1d8) = puVar17;
    *(undefined4 *)(param_2 + 0x1dc) = uVar19;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(uint **)(param_2 + 0x3f0) = puVar17;
LAB_0108e2a0:
    iVar14 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar14,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_400,iVar14);
    local_59c = local_3f4;
    uVar18 = local_3f8;
    uVar12 = local_3fc;
    uVar9 = local_400;
    if (local_400 != 3 || local_3fc != 0) {
      local_598 = local_3f0;
      local_588 = local_3ec;
      local_594 = local_3e4;
      local_58c = local_3e8;
      FUN_01bed4e2(&local_1b8,&local_3e0,0x48);
      goto LAB_0108ea1c;
    }
    *(undefined2 *)(param_2 + 0x3f9) = 1;
    iVar11 = *(int *)(param_2 + 0x300);
    iVar16 = *(int *)(param_2 + 0x304);
    FUN_01bed4e2(param_2 + 0x408,iVar14,0x88);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    unaff_r10 = *puVar17;
    uVar9 = puVar17[1];
    puVar4 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar4 = 0x2000;
    puVar4[1] = 0x8000;
    if ((iVar11 == 0) || (iVar14 = (**(code **)(iVar16 + 0x10))(iVar11), iVar14 != 0)) {
      piVar15 = (int *)0x0;
      FUN_005f6438(iVar11,iVar16);
    }
    else {
      piVar15 = (int *)thunk_FUN_01be5118(8);
      if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar15 = iVar11;
      piVar15[1] = iVar16;
    }
    iVar14 = FUN_01298504(0x2000,1);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    *(undefined4 *)(param_2 + 0x348) = 4;
    *(undefined4 *)(param_2 + 0x34c) = 0;
    *puVar6 = 3;
    *(undefined4 *)(param_2 + 0x30c) = 0;
    *(undefined4 *)(param_2 + 0x3f4) = puVar6;
    *(undefined2 *)(param_2 + 0x3e0) = 0;
    *(undefined **)(param_2 + 0x3dc) = &DAT_01c157c0;
    *(int *)(param_2 + 0x3b8) = iVar14;
    *(undefined4 **)(param_2 + 1000) = puVar4;
    *(undefined **)(param_2 + 0x3ec) = &DAT_01c1bbb0;
    *(int **)(param_2 + 0x3d8) = piVar15;
    *(undefined4 *)(param_2 + 0x3d0) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 1;
    *(uint *)(param_2 + 0x3b0) = unaff_r10;
    *(uint *)(param_2 + 0x3b4) = uVar9;
    *(undefined4 *)(param_2 + 0x3bc) = 0;
    *(undefined4 *)(param_2 + 0x3c0) = 0x2000;
    *(undefined4 *)(param_2 + 0x3c4) = 0x11;
    *(undefined4 *)(param_2 + 0x3c8) = 1;
    *(undefined4 *)(param_2 + 0x3cc) = 0;
    *(undefined4 **)(param_2 + 0x400) = (undefined4 *)(param_2 + 0x3f4);
    puVar4 = puVar6;
LAB_0108e4a0:
    FUN_00fd9484(&local_400,puVar4,param_3);
    local_59c = local_3f4;
    uVar18 = local_3f8;
    uVar12 = local_3fc;
    uVar9 = local_400;
    if (local_400 != 5 || local_3fc != 0) {
      if ((local_400 & 7) == 4) {
        uVar18 = 0x80000000;
        local_59c = unaff_r10;
LAB_0108e510:
        FUN_01bed4e2(auStack_290,&local_e0,0x48);
LAB_0108e520:
        if (uVar18 == 0x80000000) {
          FUN_01a71aac(&local_98,0xd,"Missing request message.",0x18);
          if (local_98 != 3 || local_94 != 0) {
            local_598 = local_88;
            puVar7 = auStack_78;
            local_588 = local_84;
            local_594 = local_7c;
            local_58c = local_80;
            uVar9 = local_98;
            uVar12 = local_94;
            uVar18 = local_90;
            local_59c = local_8c;
            goto LAB_0108e784;
          }
        }
        else {
          local_7c = local_594;
          local_88 = local_598;
          local_90 = uVar18;
          local_8c = local_59c;
        }
        local_2a8 = local_90;
        uStack_2a4 = local_8c;
        *(undefined1 *)(param_2 + 0x3f9) = 0;
        uStack_2a0 = local_88;
        local_294 = local_7c;
        FUN_01bed4e2(&local_400,param_2 + 0x408,0x88);
        *(undefined1 *)(param_2 + 0x3fb) = 0;
        FUN_00f07da0(param_2 + 0x418,&local_400,&local_2a8);
        *(undefined1 *)(param_2 + 0x414) = 0;
        puVar17 = *(uint **)(param_2 + 0x3f4);
        *(uint **)(param_2 + 0x400) = puVar17;
        goto LAB_0108e5f4;
      }
      if (local_400 == 3) {
        local_598 = local_3f0;
        local_594 = local_3e4;
        goto LAB_0108e510;
      }
      local_598 = local_3f0;
      local_588 = local_3ec;
      local_58c = local_3e8;
      local_594 = local_3e4;
      FUN_01bed4e2(&local_e0,&local_3e0,0x48);
      if (uVar9 == 4 && uVar12 == 0) goto LAB_0108e4c4;
      FUN_01bed4e2(auStack_290,&local_e0,0x48);
      if (uVar9 == 3 && uVar12 == 0) goto LAB_0108e520;
      puVar7 = auStack_290;
LAB_0108e784:
      FUN_01bed4e2(&local_1b8,puVar7,0x48);
      goto LAB_0108ef50;
    }
LAB_0108e4c4:
    uVar3 = 3;
LAB_0108e4c8:
    local_5ac = (undefined1 *)(param_2 + 0x3f8);
    *local_5ac = uVar3;
    goto LAB_0108ea68;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1da84);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1da84);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar17 = *(uint **)(param_2 + 0x1d0);
      uVar19 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_0108e254;
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
        puVar17 = *(uint **)(param_2 + 0x3f0);
        goto LAB_0108e2a0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        puVar4 = (undefined4 *)**(undefined4 **)(param_2 + 0x400);
        goto LAB_0108e4a0;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x414)) {
        case 0:
          puVar17 = *(uint **)(param_2 + 0x400);
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
            uVar19 = *(undefined4 *)(param_2 + 0x408);
            goto LAB_0108ef90;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22468);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22468);
          case 3:
            uVar19 = *(undefined4 *)(param_2 + 0x40c);
            goto LAB_0108ef94;
          }
        }
      }
LAB_0108e5f4:
      *(uint **)(param_2 + 0x404) = puVar17;
      uVar9 = 3;
      uVar18 = *puVar17;
      uVar12 = 0;
      local_59c = puVar17[1];
      *puVar17 = 3;
      puVar17[1] = 0;
      if (uVar18 == 3 && local_59c == 0) {
        do {
          *(undefined1 *)(param_2 + 0x410) = 0;
          uVar19 = *(undefined4 *)(param_2 + 0x404);
          *(undefined4 *)(param_2 + 0x408) = uVar19;
LAB_0108ef90:
          *(undefined4 *)(param_2 + 0x40c) = uVar19;
LAB_0108ef94:
          local_5cc = (undefined1 *)(param_2 + 0x414);
          puVar7 = (undefined1 *)(param_2 + 0x410);
          FUN_00fd9484(&local_400,uVar19,param_3);
          uVar13 = local_3e8;
          uVar10 = local_3ec;
          uVar2 = local_3f4;
          uVar18 = local_3f8;
          uVar12 = local_3fc;
          uVar9 = local_400;
          if (local_400 == 5 && local_3fc == 0) {
            *puVar7 = 3;
LAB_0108f0f4:
            *local_5cc = 3;
            uVar3 = 4;
            goto LAB_0108e4c8;
          }
          local_59c = local_3f4;
          local_598 = local_3f0;
          local_588 = local_3ec;
          local_594 = local_3e4;
          local_58c = local_3e8;
          FUN_01bed4e2(&local_98,&local_3e0,0x48);
          if ((uVar9 & 7) == 4) {
            uVar18 = 0x80000000;
LAB_0108f038:
            *puVar7 = 1;
            FUN_01bed4e2(auStack_128,auStack_170,0x48);
            uVar10 = local_5bc;
            uVar13 = local_5c0;
          }
          else {
            if (uVar9 == 3) {
              local_5bc = uVar10;
              local_5a8 = uVar2;
              local_5c0 = uVar13;
              goto LAB_0108f038;
            }
            FUN_01bed4e2(auStack_170,&local_98,0x48);
            *puVar7 = 1;
            if (uVar9 == 4 && uVar12 == 0) goto LAB_0108f0f4;
            FUN_01bed4e2(auStack_128,auStack_170,0x48);
            if (uVar9 != 3 || uVar12 != 0) {
              FUN_01bed4e2(&local_e0,auStack_128,0x48);
              goto LAB_0108f198;
            }
            local_5a8 = uVar2;
          }
          if (uVar18 == 0x80000000) goto LAB_0108f108;
          FUN_019bb7e0(uVar18,local_5a8);
          FUN_019bb7e0(uVar10,uVar13);
        } while( true );
      }
      local_598 = puVar17[2];
      local_588 = puVar17[3];
      local_58c = puVar17[4];
      local_594 = puVar17[5];
      local_e0 = puVar17[6];
      uStack_dc = puVar17[7];
      uStack_d8 = puVar17[8];
      uStack_d4 = puVar17[9];
      uStack_d0 = puVar17[10];
      local_cc = puVar17[0xb];
      uStack_c8 = puVar17[0xc];
      uStack_c4 = puVar17[0xd];
      uStack_c0 = puVar17[0xe];
      uStack_bc = puVar17[0xf];
      goto LAB_0108f198;
    case 4:
      puVar5 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_0108eb50:
    (**(code **)(puVar5 + 0xc))(&local_98,*(undefined4 *)(param_2 + 0x1e8),param_3);
    if (local_98 != 4 || local_94 != 0) {
      FUN_01bed4e2(&local_348,&local_90,0x50);
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
      if (local_98 == 3 && local_94 == 0) {
        local_400 = local_348;
        local_3fc = iStack_344;
        local_3f8 = uStack_340;
        local_3f4 = uStack_33c;
        local_3f0 = uStack_338;
        local_3ec = local_334;
        local_3e8 = uStack_330;
        local_3e4 = uStack_32c;
        local_3e0 = uStack_328;
        local_3dc = uStack_324;
        local_3d8 = local_320;
        local_3d4 = uStack_31c;
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
        local_350 = local_40;
        local_358 = 0;
        if (local_348 != 3 || iStack_344 != 0) {
          FUN_011de050(local_40);
        }
      }
      else {
        local_3f8 = local_98;
        local_3f4 = local_94;
        FUN_01bed4e2(&local_3f0,&local_348,0x50);
        local_398 = local_38;
        local_3fc = 0;
        local_400 = 3;
        local_394 = local_34;
        local_39c = local_3c;
        local_3a0 = local_40;
      }
      FUN_00d61064(&local_2f8,&local_400,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      piVar15 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar15;
        bVar20 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar20);
      *piVar15 = iVar14 + -1;
      goto LAB_0108ed68;
    }
    uVar3 = 4;
  }
LAB_0108eb88:
  *(undefined1 *)(param_2 + 0x1e0) = uVar3;
  goto LAB_0108eb8c;
LAB_0108f108:
  puVar17 = *(uint **)(param_2 + 0x404);
  uVar9 = 3;
  uVar12 = 0;
  uVar18 = *puVar17;
  local_59c = puVar17[1];
  *puVar17 = 3;
  puVar17[1] = 0;
  if (uVar18 == 3 && local_59c == 0) {
    uVar18 = 3;
    local_59c = 0;
  }
  else {
    local_598 = puVar17[2];
    local_588 = puVar17[3];
    local_58c = puVar17[4];
    local_594 = puVar17[5];
    local_e0 = puVar17[6];
    uStack_dc = puVar17[7];
    uStack_d8 = puVar17[8];
    uStack_d4 = puVar17[9];
    uStack_d0 = puVar17[10];
    local_cc = puVar17[0xb];
    uStack_c8 = puVar17[0xc];
    uStack_c4 = puVar17[0xd];
    uStack_c0 = puVar17[0xe];
    uStack_bc = puVar17[0xf];
    uVar12 = 0;
  }
LAB_0108f198:
  local_5cc = (undefined1 *)(param_2 + 0x414);
  FUN_01bed4e2(auStack_248,&local_e0,0x48);
  *local_5cc = 1;
  FUN_01bed4e2(&local_200,auStack_248,0x48);
  if (uVar9 == 3 && uVar12 == 0) {
    if (uVar18 != 3 || local_59c != 0) {
      local_3ec = local_594;
      local_3f0 = local_58c;
      local_3f4 = local_588;
      local_3f8 = local_598;
      local_3e8 = local_200;
      local_3e4 = uStack_1fc;
      local_3e0 = uStack_1f8;
      local_3dc = uStack_1f4;
      local_3d8 = uStack_1f0;
      local_3d4 = local_1ec;
      uStack_3d0 = uStack_1e8;
      uStack_3cc = uStack_1e4;
      uStack_3c8 = uStack_1e0;
      uStack_3c4 = uStack_1dc;
      local_3fc = local_59c;
      local_400 = uVar18;
      FUN_00713444(param_2 + 0x418);
    }
    local_598 = *(uint *)(param_2 + 0x420);
    local_588 = *(uint *)(param_2 + 0x424);
    local_58c = *(uint *)(param_2 + 0x428);
    local_594 = *(uint *)(param_2 + 0x42c);
    uVar18 = *(uint *)(param_2 + 0x418);
    local_59c = *(uint *)(param_2 + 0x41c);
    FUN_01bed4e2(&local_1b8,param_2 + 0x430,0x48);
    uVar12 = 0;
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_01071a3c(puVar6);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    *(undefined2 *)(param_2 + 0x3f9) = 0;
    uVar9 = 3;
  }
  else {
    local_190 = local_1d8;
    uStack_18c = uStack_1d4;
    uStack_188 = uStack_1d0;
    uStack_184 = uStack_1cc;
    local_180 = local_1c8;
    uStack_17c = uStack_1c4;
    uStack_178 = uStack_1c0;
    uStack_174 = uStack_1bc;
    local_1b8 = local_200;
    uStack_1b4 = uStack_1fc;
    uStack_1b0 = uStack_1f8;
    uStack_1ac = uStack_1f4;
    uStack_1a8 = uStack_1f0;
    local_1a4 = local_1ec;
    uStack_1a0 = uStack_1e8;
    uStack_19c = uStack_1e4;
    uStack_198 = uStack_1e0;
    uStack_194 = uStack_1dc;
    FUN_0108e100(param_2 + 0x418);
LAB_0108ef50:
    *(undefined1 *)(param_2 + 0x3fb) = 0;
    FUN_01071a3c(param_2 + 0x308);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    if (*(char *)(param_2 + 0x3f9) != '\0') {
      FUN_0096a6b0(param_2 + 0x408);
    }
    *(undefined1 *)(param_2 + 0x3f9) = 0;
LAB_0108ea1c:
    if (*(char *)(param_2 + 0x3fa) != '\0') {
      FUN_005f9b88(param_2 + 0x278);
    }
    *(undefined1 *)(param_2 + 0x3fa) = 0;
  }
  local_5ac = (undefined1 *)(param_2 + 0x3f8);
  local_5b8 = param_2 + 0x1e8;
  FUN_01bed4e2(auStack_490,&local_1b8,0x48);
  *local_5ac = 1;
  if (uVar9 == 4 && uVar12 == 0) {
LAB_0108ea68:
    uVar3 = 3;
    goto LAB_0108eb88;
  }
  FUN_01bed4e2(auStack_448,auStack_490,0x48);
  FUN_0108e038(local_5b8);
  if (uVar9 == 3 && uVar12 == 0) {
    local_4dc = local_594;
    local_4e0 = local_58c;
    local_4e4 = local_588;
    local_4e8 = local_598;
    FUN_01bed4e2(auStack_4d8,auStack_448,0x48);
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    local_30 = *(int **)(param_2 + 0x1dc);
    do {
      iVar14 = *local_30;
      bVar20 = (bool)hasExclusiveAccess(local_30);
    } while (!bVar20);
    *local_30 = iVar14 + 1;
    local_4f0 = uVar18;
    local_4ec = local_59c;
    if (iVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x108ea18);
      (*pcVar1)();
    }
    FUN_01bed4e2(&local_98,&local_4f0,0x60);
    local_2c = 0;
    iVar14 = thunk_FUN_01be5118(0x70);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x70);
    }
    FUN_01bed4e2(iVar14,&local_98,0x70);
    *(int *)(param_2 + 0x1e8) = iVar14;
    puVar5 = &DAT_01c1dc48;
    *(undefined **)(param_2 + 0x1ec) = &DAT_01c1dc48;
    goto LAB_0108eb50;
  }
  local_3dc = local_594;
  local_3e0 = local_58c;
  local_3e4 = local_588;
  local_3e8 = local_598;
  FUN_01bed4e2(&local_3d8,auStack_448,0x48);
  local_3fc = 0;
  local_400 = 3;
  local_3f8 = uVar9;
  local_3f4 = uVar12;
  local_3f0 = uVar18;
  local_3ec = local_59c;
  FUN_00d61064(&local_2f8,&local_400,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
               *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
  *(undefined1 *)(param_2 + 0x1e1) = 0;
  piVar15 = *(int **)(param_2 + 0x1dc);
  *(undefined1 *)(param_2 + 0x1e2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar15;
    bVar20 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar20);
  *piVar15 = iVar14 + -1;
LAB_0108ed68:
  local_5a0 = (undefined1 *)(param_2 + 0x1e0);
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182648(*(undefined4 *)(param_2 + 0x1dc));
  }
  FUN_01bed4e2(auStack_580,auStack_2f0,0x48);
  *local_5a0 = 1;
  if (local_2f8 != 3 || local_2f4 != 0) {
    FUN_01bed4e2(auStack_538,auStack_580,0x48);
    FUN_0108df1c(param_2 + 0xb0);
    FUN_01bed4e2(param_1 + 2,auStack_538,0x48);
    *(undefined1 *)(param_2 + 0x495) = 0;
    uVar3 = 1;
    goto LAB_0108eb9c;
  }
LAB_0108eb8c:
  local_2f4 = 0;
  local_2f8 = 3;
  uVar3 = 3;
LAB_0108eb9c:
  *(undefined1 *)(param_2 + 0x494) = uVar3;
  *param_1 = local_2f8;
  param_1[1] = local_2f4;
  return;
}

