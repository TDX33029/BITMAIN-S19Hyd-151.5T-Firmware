// FUN_01075824 @ 01075824 size=3116 calls_out=24 calls_in=0
// strings: Missing request message.

void FUN_01075824(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  uint unaff_r10;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 *local_5f0;
  undefined1 *local_5e8;
  undefined1 *local_5e4;
  int local_5d8;
  int local_5d4;
  undefined1 auStack_5d0 [72];
  undefined1 auStack_588 [72];
  uint local_540;
  uint local_53c;
  uint local_538;
  undefined1 auStack_534 [68];
  undefined1 auStack_4f0 [68];
  int *local_4ac;
  uint uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  int *local_498;
  uint uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 auStack_488 [72];
  undefined1 auStack_440 [104];
  int local_3d8;
  int local_3d4;
  undefined1 auStack_3d0 [72];
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  undefined1 auStack_374 [84];
  undefined1 auStack_320 [88];
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 local_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  int *local_270;
  uint local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_240 [88];
  uint local_1e8;
  uint uStack_1e4;
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
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint local_190;
  uint uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 auStack_138 [88];
  undefined1 auStack_e0 [88];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  puVar5 = (undefined4 *)(param_2 + 0x308);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x494)) {
  case 0:
    uVar9 = 0x101;
    *(undefined2 *)(param_2 + 0x495) = 0x101;
    bVar20 = *(int *)(param_2 + 0x90) == 1;
    *(undefined2 *)(param_2 + 0x495) = 0;
    if (bVar20) {
      uVar9 = *(undefined4 *)(param_2 + 0x94);
    }
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar16 = (uint *)(param_2 + 0xa0);
    uVar10 = *(undefined4 *)(param_2 + 0x490);
    *(uint *)(param_2 + 0xa0) = (uint)bVar20;
    *(undefined4 *)(param_2 + 0xa4) = uVar9;
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
    *(uint **)(param_2 + 0x1d0) = puVar16;
    *(undefined4 *)(param_2 + 0x1d4) = uVar10;
LAB_0107590c:
    *(uint **)(param_2 + 0x1d8) = puVar16;
    *(undefined4 *)(param_2 + 0x1dc) = uVar10;
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1e2) = 0;
    FUN_01bed4e2(param_2 + 0x1e8,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x3f8) = 0;
    *(uint **)(param_2 + 0x3f0) = puVar16;
LAB_01075954:
    iVar13 = param_2 + 0x278;
    *(undefined4 *)(param_2 + 0x3f9) = 0x100;
    FUN_01bed4e2(iVar13,param_2 + 0x1e8,0x90);
    FUN_01a6812c(&local_2c8,iVar13);
    uVar18 = local_2bc;
    uVar19 = local_2c0;
    uVar17 = local_2c4;
    uVar15 = local_2c8;
    if (local_2c8 != 3 || local_2c4 != 0) {
      local_5f0 = (undefined1 *)local_2b8;
      FUN_01bed4e2(&local_190,&uStack_2b4,0x54);
LAB_01075a54:
      if (*(char *)(param_2 + 0x3fa) != '\0') {
        FUN_005f9b88(param_2 + 0x278);
      }
      *(undefined1 *)(param_2 + 0x3fa) = 0;
      goto LAB_010760e8;
    }
    *(undefined2 *)(param_2 + 0x3f9) = 1;
    iVar12 = *(int *)(param_2 + 0x300);
    iVar11 = *(int *)(param_2 + 0x304);
    FUN_01bed4e2(param_2 + 0x408,iVar13,0x88);
    *(undefined1 *)(param_2 + 0x3fc) = 0;
    uVar15 = puVar16[1];
    unaff_r10 = *puVar16;
    puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar6 = 0x2000;
    puVar6[1] = 0x8000;
    if ((iVar12 == 0) || (iVar13 = (**(code **)(iVar11 + 0x10))(iVar12), iVar13 != 0)) {
      piVar14 = (int *)0x0;
      FUN_005f6438(iVar12,iVar11);
    }
    else {
      piVar14 = (int *)thunk_FUN_01be5118(8);
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar14 = iVar12;
      piVar14[1] = iVar11;
    }
    iVar13 = FUN_01298504(0x2000,1);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x2000);
    }
    *(undefined4 *)(param_2 + 0x348) = 4;
    *(undefined4 *)(param_2 + 0x34c) = 0;
    *puVar5 = 3;
    *(undefined4 *)(param_2 + 0x30c) = 0;
    *(undefined4 *)(param_2 + 0x3f4) = puVar5;
    *(undefined2 *)(param_2 + 0x3e0) = 0;
    *(int *)(param_2 + 0x3b8) = iVar13;
    *(undefined4 **)(param_2 + 1000) = puVar6;
    *(undefined **)(param_2 + 0x3ec) = &DAT_01c1b994;
    *(undefined4 *)(param_2 + 0x3d0) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 1;
    *(int **)(param_2 + 0x3d8) = piVar14;
    *(undefined **)(param_2 + 0x3dc) = &DAT_01c15b98;
    *(uint *)(param_2 + 0x3b0) = unaff_r10;
    *(uint *)(param_2 + 0x3b4) = uVar15;
    *(undefined4 *)(param_2 + 0x3bc) = 0;
    *(undefined4 *)(param_2 + 0x3c0) = 0x2000;
    *(undefined4 *)(param_2 + 0x3c4) = 0x11;
    *(undefined4 *)(param_2 + 0x3c8) = 1;
    *(undefined4 *)(param_2 + 0x3cc) = 0;
    *(undefined4 **)(param_2 + 0x400) = (undefined4 *)(param_2 + 0x3f4);
    puVar6 = puVar5;
LAB_01075b5c:
    FUN_00fda3fc(&local_2c8,puVar6,param_3);
    uVar18 = local_2bc;
    uVar19 = local_2c0;
    uVar17 = local_2c4;
    uVar15 = local_2c8;
    if (local_2c8 != 5 || local_2c4 != 0) {
      if ((local_2c8 & 7) == 4) {
        uVar19 = 0x80000000;
        local_5f0 = (undefined1 *)0x0;
LAB_01075c24:
        FUN_01bed4e2(auStack_e0,&local_78,0x54);
        FUN_01bed4e2(auStack_320,auStack_e0,0x54);
LAB_01075c4c:
        if (uVar19 == 0x80000000) {
          FUN_01a71aac(&local_388,0xd,"Missing request message.",0x18);
          if (local_388 != 3 || local_384 != 0) {
            local_5f0 = (undefined1 *)local_378;
            puVar8 = auStack_374;
            uVar19 = local_380;
            uVar17 = local_384;
            uVar18 = local_37c;
            uVar15 = local_388;
            goto LAB_01075d90;
          }
          local_5f0 = (undefined1 *)local_378;
          unaff_r10 = local_37c;
        }
        else {
          local_380 = uVar19;
        }
        uVar15 = local_380;
        *(undefined1 *)(param_2 + 0x3f9) = 0;
        FUN_01bed4e2(&local_2c8,param_2 + 0x408,0x88);
        local_380 = (uint)local_5f0;
        *(undefined1 *)(param_2 + 0x3fb) = 0;
        local_388 = uVar15;
        local_384 = unaff_r10;
        FUN_00f07b24(param_2 + 0x418,&local_2c8,&local_388);
        *(undefined1 *)(param_2 + 0x414) = 0;
        puVar16 = *(uint **)(param_2 + 0x3f4);
        *(uint **)(param_2 + 0x400) = puVar16;
        goto LAB_01075d00;
      }
      local_5f0 = (undefined1 *)local_2b8;
      unaff_r10 = local_2bc;
      if (local_2c8 == 3) goto LAB_01075c24;
      FUN_01bed4e2(&local_78,&uStack_2b4,0x54);
      FUN_01bed4e2(auStack_e0,&local_78,0x54);
      if (uVar15 == 4 && uVar17 == 0) goto LAB_01075b80;
      FUN_01bed4e2(auStack_320,auStack_e0,0x54);
      unaff_r10 = uVar18;
      if (uVar15 == 3 && uVar17 == 0) goto LAB_01075c4c;
      puVar8 = auStack_320;
LAB_01075d90:
      FUN_01bed4e2(&local_190,puVar8,0x54);
LAB_01075d98:
      *(undefined1 *)(param_2 + 0x3fb) = 0;
      FUN_01071a3c(param_2 + 0x308);
      *(undefined1 *)(param_2 + 0x3fc) = 0;
      if (*(char *)(param_2 + 0x3f9) != '\0') {
        FUN_0096a6b0(param_2 + 0x408);
      }
      *(undefined1 *)(param_2 + 0x3f9) = 0;
      goto LAB_01075a54;
    }
LAB_01075b80:
    uVar4 = 3;
LAB_01075b84:
    local_5e8 = (undefined1 *)(param_2 + 0x3f8);
    *local_5e8 = uVar4;
    goto LAB_01076118;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d994);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d994);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e0)) {
    case 0:
      puVar16 = *(uint **)(param_2 + 0x1d0);
      uVar10 = *(undefined4 *)(param_2 + 0x1d4);
      goto LAB_0107590c;
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
        puVar16 = *(uint **)(param_2 + 0x3f0);
        goto LAB_01075954;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22488);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22488);
      case 3:
        puVar6 = (undefined4 *)**(undefined4 **)(param_2 + 0x400);
        goto LAB_01075b5c;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x414)) {
        case 0:
          puVar16 = *(uint **)(param_2 + 0x400);
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
            uVar10 = *(undefined4 *)(param_2 + 0x408);
            goto LAB_010765dc;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22468);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c22468);
          case 3:
            uVar10 = *(undefined4 *)(param_2 + 0x40c);
            goto LAB_010765e0;
          }
        }
      }
LAB_01075d00:
      *(uint **)(param_2 + 0x404) = puVar16;
      uVar17 = *puVar16;
      uVar19 = puVar16[1];
      uVar15 = puVar16[2];
      *puVar16 = 3;
      puVar16[1] = 0;
      if (uVar17 == 3 && uVar19 == 0) {
        do {
          *(undefined1 *)(param_2 + 0x410) = 0;
          uVar10 = *(undefined4 *)(param_2 + 0x404);
          *(undefined4 *)(param_2 + 0x408) = uVar10;
LAB_010765dc:
          *(undefined4 *)(param_2 + 0x40c) = uVar10;
LAB_010765e0:
          local_5f0 = (undefined1 *)(param_2 + 0x414);
          puVar8 = (undefined1 *)(param_2 + 0x410);
          FUN_00fda3fc(&local_2c8,uVar10,param_3);
          uVar2 = local_2b8;
          uVar18 = local_2bc;
          uVar19 = local_2c0;
          uVar17 = local_2c4;
          uVar15 = local_2c8;
          if (local_2c8 == 5 && local_2c4 == 0) {
            *puVar8 = 3;
LAB_010766e8:
            *local_5f0 = 3;
            uVar4 = 4;
            goto LAB_01075b84;
          }
          FUN_01bed4e2(&local_388,&uStack_2b4,0x54);
          uVar3 = 0x80000000;
          if ((uVar15 & 7) == 4) {
LAB_01076644:
            uVar19 = uVar3;
            *puVar8 = 1;
            FUN_01bed4e2(auStack_e0,auStack_138,0x54);
          }
          else {
            if (uVar15 == 3) {
              uVar3 = uVar19;
              goto LAB_01076644;
            }
            FUN_01bed4e2(auStack_138,&local_388,0x54);
            *puVar8 = 1;
            if (uVar15 == 4 && uVar17 == 0) goto LAB_010766e8;
            FUN_01bed4e2(auStack_e0,auStack_138,0x54);
            if (uVar15 != 3 || uVar17 != 0) {
              local_84 = uVar18;
              local_88 = uVar19;
              local_5f0 = (undefined1 *)uVar2;
              local_80 = uVar2;
              FUN_01bed4e2(auStack_240,auStack_e0,0x54);
              *(undefined1 *)(param_2 + 0x414) = 1;
              FUN_01bed4e2(&local_1e8,auStack_240,0x54);
              local_190 = local_1e8;
              uStack_18c = uStack_1e4;
              uStack_188 = uStack_1e0;
              uStack_184 = uStack_1dc;
              local_180 = local_1d8;
              uStack_17c = uStack_1d4;
              uStack_178 = uStack_1d0;
              uStack_174 = uStack_1cc;
              local_170 = local_1c8;
              uStack_16c = uStack_1c4;
              uStack_168 = uStack_1c0;
              uStack_164 = uStack_1bc;
              uStack_160 = uStack_1b8;
              local_15c = local_1b4;
              uStack_158 = uStack_1b0;
              uStack_154 = uStack_1ac;
              uStack_150 = uStack_1a8;
              local_14c = local_1a4;
              uStack_148 = uStack_1a0;
              uStack_144 = uStack_19c;
              uStack_140 = uStack_198;
              FUN_01073b40(param_2 + 0x418);
              goto LAB_01075d98;
            }
          }
          if (uVar19 == 0x80000000) goto LAB_010766fc;
          FUN_019bb7e0(uVar19,uVar18);
        } while( true );
      }
      goto LAB_010764e8;
    case 4:
      puVar7 = *(undefined **)(param_2 + 0x1ec);
    }
LAB_010761f8:
    (**(code **)(puVar7 + 0xc))(&local_2c8,*(undefined4 *)(param_2 + 0x1e8),param_3);
    if (local_2c8 != 4 || local_2c4 != 0) {
      FUN_01bed4e2(auStack_440,&local_2c8,0x68);
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec));
      FUN_00d6fc14(&local_3d8,auStack_440,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
      piVar14 = *(int **)(param_2 + 0x1dc);
      *(undefined1 *)(param_2 + 0x1e1) = 0;
      *(undefined1 *)(param_2 + 0x1e2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar14;
        bVar20 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar20);
      *piVar14 = iVar13 + -1;
      goto LAB_0107632c;
    }
    uVar4 = 4;
  }
LAB_01076224:
  local_5e4 = (undefined1 *)(param_2 + 0x1e0);
  *local_5e4 = uVar4;
  goto LAB_0107622c;
LAB_010766fc:
  puVar16 = *(uint **)(param_2 + 0x404);
  uVar17 = *puVar16;
  uVar19 = puVar16[1];
  uVar15 = puVar16[2];
  *puVar16 = 3;
  puVar16[1] = 0;
  if (uVar17 == 3 && uVar19 == 0) {
    FUN_01bed4e2(auStack_240,&local_78,0x54);
    *local_5f0 = 1;
    FUN_01bed4e2(&local_1e8,auStack_240,0x54);
  }
  else {
LAB_010764e8:
    local_78 = puVar16[3];
    uStack_74 = puVar16[4];
    uStack_70 = puVar16[5];
    uStack_6c = puVar16[6];
    local_68 = puVar16[7];
    uStack_64 = puVar16[8];
    uStack_60 = puVar16[9];
    uStack_5c = puVar16[10];
    local_58 = puVar16[0xb];
    uStack_54 = puVar16[0xc];
    uStack_50 = puVar16[0xd];
    uStack_4c = puVar16[0xe];
    uStack_48 = puVar16[0xf];
    FUN_01bed4e2(auStack_240,&local_78,0x54);
    *(undefined1 *)(param_2 + 0x414) = 1;
    FUN_01bed4e2(&local_1e8,auStack_240,0x54);
    local_2bc = local_1e8;
    local_2b8 = uStack_1e4;
    uStack_2b4 = uStack_1e0;
    uStack_2b0 = uStack_1dc;
    local_2ac = local_1d8;
    uStack_2a8 = uStack_1d4;
    uStack_2a4 = uStack_1d0;
    uStack_2a0 = uStack_1cc;
    local_29c = local_1c8;
    uStack_298 = uStack_1c4;
    uStack_294 = uStack_1c0;
    uStack_290 = uStack_1bc;
    uStack_28c = uStack_1b8;
    local_2c8 = uVar17;
    local_2c4 = uVar19;
    local_2c0 = uVar15;
    FUN_00713444(param_2 + 0x418);
  }
  local_5f0 = *(undefined1 **)(param_2 + 0x420);
  uVar19 = *(uint *)(param_2 + 0x418);
  uVar18 = *(uint *)(param_2 + 0x41c);
  FUN_01bed4e2(&local_190,param_2 + 0x424,0x44);
  uVar17 = 0;
  *(undefined1 *)(param_2 + 0x3fb) = 0;
  FUN_01071a3c(puVar5);
  *(undefined1 *)(param_2 + 0x3fc) = 0;
  *(undefined2 *)(param_2 + 0x3f9) = 0;
  uVar15 = 3;
LAB_010760e8:
  local_5d8 = param_2 + 0x1e8;
  local_5e8 = (undefined1 *)(param_2 + 0x3f8);
  FUN_01bed4e2(auStack_4f0,&local_190,0x54);
  *local_5e8 = 1;
  if (uVar15 == 4 && uVar17 == 0) {
LAB_01076118:
    uVar4 = 3;
    goto LAB_01076224;
  }
  FUN_01bed4e2(auStack_488,auStack_4f0,0x44);
  local_498 = local_4ac;
  uStack_494 = uStack_4a8;
  uStack_490 = uStack_4a4;
  uStack_48c = uStack_4a0;
  FUN_01073a78(local_5d8);
  if (uVar15 == 3 && uVar17 == 0) {
    FUN_01bed4e2(auStack_534,auStack_488,0x44);
    *(undefined1 *)(param_2 + 0x1e1) = 0;
    local_538 = (uint)local_5f0;
    local_270 = *(int **)(param_2 + 0x1dc);
    do {
      iVar13 = *local_270;
      bVar20 = (bool)hasExclusiveAccess(local_270);
    } while (!bVar20);
    *local_270 = iVar13 + 1;
    local_540 = uVar19;
    local_53c = uVar18;
    if (iVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10760e4);
      (*pcVar1)();
    }
    FUN_01bed4e2(&local_2c8,&local_540,0x50);
    local_26c = local_26c & 0xffffff00;
    iVar13 = thunk_FUN_01be5118(0x60);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x60);
    }
    FUN_01bed4e2(iVar13,&local_2c8,0x60);
    *(int *)(param_2 + 0x1e8) = iVar13;
    puVar7 = &DAT_01c1dc88;
    *(undefined **)(param_2 + 0x1ec) = &DAT_01c1dc88;
    goto LAB_010761f8;
  }
  FUN_01bed4e2(&uStack_2b4,auStack_488,0x44);
  local_270 = local_498;
  local_26c = uStack_494;
  uStack_268 = uStack_490;
  uStack_264 = uStack_48c;
  local_2b8 = (uint)local_5f0;
  local_2c8 = uVar15;
  local_2c4 = uVar17;
  local_2c0 = uVar19;
  local_2bc = uVar18;
  FUN_00d6fc14(&local_3d8,&local_2c8,*(undefined4 *)(*(int *)(param_2 + 0x1d8) + 8),
               *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xc));
  piVar14 = *(int **)(param_2 + 0x1dc);
  *(undefined1 *)(param_2 + 0x1e1) = 0;
  *(undefined1 *)(param_2 + 0x1e2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar14;
    bVar20 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar20);
  *piVar14 = iVar13 + -1;
LAB_0107632c:
  local_5d4 = param_2 + 0xb0;
  local_5e4 = (undefined1 *)(param_2 + 0x1e0);
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180ed4(*(undefined4 *)(param_2 + 0x1dc));
  }
  FUN_01bed4e2(auStack_5d0,auStack_3d0,0x48);
  *local_5e4 = 1;
  if (local_3d8 != 3 || local_3d4 != 0) {
    FUN_01bed4e2(auStack_588,auStack_5d0,0x48);
    FUN_0107395c(local_5d4);
    FUN_01bed4e2(param_1 + 2,auStack_588,0x48);
    *(undefined1 *)(param_2 + 0x495) = 0;
    uVar4 = 1;
    goto LAB_01076238;
  }
LAB_0107622c:
  local_3d4 = 0;
  local_3d8 = 3;
  uVar4 = 3;
LAB_01076238:
  *(undefined1 *)(param_2 + 0x494) = uVar4;
  *param_1 = local_3d8;
  param_1[1] = local_3d4;
  return;
}

