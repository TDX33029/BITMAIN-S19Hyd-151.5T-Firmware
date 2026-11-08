// FUN_00d55350 @ 00d55350 size=2488 calls_out=20 calls_in=0
// strings: application/grpc

/* WARNING: Removing unreachable block (ram,0x00d55a60) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d55350(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  int local_858;
  undefined1 auStack_848 [72];
  undefined1 auStack_800 [72];
  undefined1 auStack_7b8 [304];
  int local_688;
  int local_684;
  uint local_680;
  int local_67c;
  undefined1 auStack_678 [80];
  undefined1 auStack_628 [208];
  undefined1 auStack_558 [104];
  uint local_4f0;
  int local_4ec;
  undefined **local_4e8;
  int iStack_4e4;
  uint local_4e0;
  int local_4dc;
  undefined **local_4d8;
  int iStack_4d4;
  uint uStack_4d0;
  int local_4cc;
  undefined **local_4c8;
  int local_4c4;
  uint uStack_4c0;
  int iStack_4bc;
  undefined **local_4b8;
  int iStack_4b4;
  uint local_4b0;
  int iStack_4ac;
  undefined **local_4a8;
  int iStack_4a4;
  undefined **local_4a0;
  undefined1 local_49c;
  undefined2 local_49b;
  undefined1 local_499;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 local_448;
  undefined **local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined2 local_41c;
  undefined1 local_41a;
  uint local_418;
  int iStack_414;
  undefined **ppuStack_410;
  int iStack_40c;
  uint uStack_408;
  int local_404;
  undefined **ppuStack_400;
  int iStack_3fc;
  uint uStack_3f8;
  int iStack_3f4;
  undefined **local_3f0;
  int iStack_3ec;
  uint uStack_3e8;
  int iStack_3e4;
  undefined **ppuStack_3e0;
  int iStack_3dc;
  int local_3d8;
  int local_3d4;
  undefined1 auStack_3d0 [64];
  int local_390;
  undefined *local_38c;
  undefined1 auStack_388 [104];
  undefined1 auStack_320 [72];
  undefined **local_2d8;
  undefined4 uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  int local_2c4;
  uint uStack_2c0;
  int iStack_2bc;
  undefined **ppuStack_2b8;
  int iStack_2b4;
  uint local_2b0;
  int iStack_2ac;
  undefined **ppuStack_2a8;
  int iStack_2a4;
  uint uStack_2a0;
  int iStack_29c;
  uint local_268;
  int local_264;
  undefined **local_260;
  int iStack_25c;
  uint local_258;
  int iStack_254;
  undefined **local_250;
  int iStack_24c;
  uint uStack_248;
  int iStack_244;
  undefined **ppuStack_240;
  int local_23c;
  uint uStack_238;
  int iStack_234;
  undefined **ppuStack_230;
  int iStack_22c;
  undefined1 auStack_220 [64];
  int local_1e0;
  int local_1dc;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined **local_1a0;
  char *local_19c;
  uint local_198;
  int iStack_194;
  undefined **ppuStack_190;
  int local_18c;
  uint local_188;
  int local_184;
  undefined **local_180;
  int local_17c;
  uint local_178;
  int local_174;
  undefined **local_170;
  int local_16c;
  uint local_168;
  int iStack_164;
  undefined **local_160;
  int local_15c;
  undefined **local_158;
  undefined1 local_154;
  undefined2 local_153;
  undefined1 local_151;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  undefined *local_44;
  undefined2 local_40;
  undefined4 *local_38;
  undefined *local_34;
  undefined2 uStack_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 500)) {
  case 0:
    *(undefined2 *)(param_2 + 0x1f5) = 0;
    *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x9c);
    puVar9 = (undefined4 *)(param_2 + 0xa0);
    *puVar9 = *(undefined4 *)(param_2 + 0x90);
    uVar10 = *(undefined4 *)(param_2 + 0x1f0);
    FUN_01bed4e2(param_2 + 0xb0,param_2,0x90);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
    *(undefined4 **)(param_2 + 0x1d8) = puVar9;
    *(undefined4 *)(param_2 + 0x1dc) = uVar10;
LAB_00d55428:
    *(undefined4 *)(param_2 + 0x1e4) = uVar10;
    *(undefined4 **)(param_2 + 0x1e0) = puVar9;
    *(undefined1 *)(param_2 + 0x1e9) = 0;
    FUN_01bed4e2(param_2 + 0x140,param_2 + 0xb0,0x90);
    *(undefined1 *)(param_2 + 0x1ea) = 0;
    FUN_01bed4e2(&local_4f0,param_2 + 0xb0,0x90);
    FUN_01a6812c(&local_268,&local_4f0);
    iVar5 = local_264;
    uVar3 = local_268;
    if (local_268 == 3 && local_264 == 0) {
      FUN_01bed4e2(&local_268,&local_4f0,0x90);
      uVar11 = *puVar9;
      uVar10 = puVar9[1];
      puVar9 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar9 = 0x2000;
      puVar9[1] = 0x8000;
      if ((local_1e0 == 0) || (iVar5 = (**(code **)(local_1dc + 0x10))(local_1e0), iVar5 != 0)) {
        piVar8 = (int *)0x0;
        FUN_005f6438(local_1e0,local_1dc);
      }
      else {
        piVar8 = (int *)thunk_FUN_01be5118(8);
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *piVar8 = local_1e0;
        piVar8[1] = local_1dc;
      }
      piVar6 = (int *)thunk_FUN_01be5118(0x2000);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x2000);
      }
      FUN_01bed4e2(&local_1a0,&local_268,0x88);
      local_44 = &DAT_01c151f0;
      local_4c = 1;
      local_58 = 1;
      local_5c = 0x11;
      local_d8 = 4;
      uStack_d4 = 0;
      local_118 = 3;
      uStack_114 = 0;
      local_40 = 0;
      local_50 = 0;
      local_54 = 0;
      local_60 = 0x2000;
      local_64 = 0;
      local_34 = &DAT_01c1bca0;
      local_70 = uVar11;
      local_6c = uVar10;
      local_68 = piVar6;
      local_48 = piVar8;
      local_38 = puVar9;
      FUN_00f080d0(&local_688,&local_1a0);
      if (local_688 != 3 || local_684 != 0) {
        FUN_01bed4e2(auStack_7b8,&local_688,0x130);
        *(undefined1 *)(param_2 + 0x1e9) = 0;
        piVar8 = *(int **)(param_2 + 0x1e4);
        do {
          iVar5 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar5 + 1;
        if (iVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xd55d40);
          (*pcVar1)();
        }
        local_68 = piVar8;
        FUN_01bed4e2(&local_1a0,auStack_7b8,0x130);
        local_64 = local_64 & 0xffffff00;
        iVar5 = thunk_FUN_01be5118(0x140);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x140);
        }
        FUN_01bed4e2(iVar5,&local_1a0,0x140);
        *(int *)(param_2 + 0x1d0) = iVar5;
        puVar7 = &DAT_01c15cf4;
        *(undefined **)(param_2 + 0x1d4) = &DAT_01c15cf4;
        goto LAB_00d55714;
      }
    }
    else {
      FUN_01bed4e2(auStack_678,&local_260,0x60);
      local_67c = iVar5;
      local_680 = uVar3;
      FUN_005f9b88(&local_4f0);
    }
    FUN_01bed4e2(auStack_558,&local_680,0x68);
    FUN_010a5cf0(&local_3d8,auStack_558);
    *(undefined1 *)(param_2 + 0x1e9) = 0;
    *(undefined1 *)(param_2 + 0x1ea) = 0;
    piVar8 = *(int **)(param_2 + 0x1e4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + -1;
LAB_00d55c0c:
    local_858 = param_2 + 0xb0;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ed4(*(undefined4 *)(param_2 + 0x1e4));
    }
    FUN_01bed4e2(auStack_848,auStack_3d0,0x48);
    *(undefined1 *)(param_2 + 0x1e8) = 1;
    if (local_3d8 != 3 || local_3d4 != 0) {
      FUN_01bed4e2(auStack_800,auStack_848,0x48);
      FUN_00d50174(local_858);
      FUN_01bed4e2(param_1 + 2,auStack_800,0x48);
      *(undefined1 *)(param_2 + 0x1f5) = 0;
      uVar4 = 1;
      goto LAB_00d55c98;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c15c48);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c15c48);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e8)) {
    case 0:
      puVar9 = *(undefined4 **)(param_2 + 0x1d8);
      uVar10 = *(undefined4 *)(param_2 + 0x1dc);
      goto LAB_00d55428;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c15f5c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c15f5c);
    case 3:
      iVar5 = *(int *)(param_2 + 0x1d0);
      puVar7 = *(undefined **)(param_2 + 0x1d4);
    }
LAB_00d55714:
    (**(code **)(puVar7 + 0xc))(&local_1a0,iVar5,param_3);
    iStack_4e4 = (int)local_19c;
    local_4e8 = local_1a0;
    if (local_1a0 != (undefined **)0x4 || local_19c != (char *)0x0) {
      local_418 = local_198;
      iStack_414 = iStack_194;
      ppuStack_410 = ppuStack_190;
      iStack_40c = local_18c;
      uStack_408 = local_188;
      local_404 = local_184;
      ppuStack_400 = local_180;
      iStack_3fc = local_17c;
      uStack_3f8 = local_178;
      iStack_3f4 = local_174;
      local_3f0 = local_170;
      iStack_3ec = local_16c;
      uStack_3e8 = local_168;
      iStack_3e4 = iStack_164;
      ppuStack_3e0 = local_160;
      iStack_3dc = local_15c;
      local_41a = local_151;
      local_41c = local_153;
      local_438 = local_150;
      uStack_434 = uStack_14c;
      uStack_430 = uStack_148;
      uStack_42c = uStack_144;
      uStack_428 = uStack_140;
      uStack_424 = uStack_13c;
      FUN_01139b38(*(undefined4 *)(param_2 + 0x1d0),*(undefined4 *)(param_2 + 0x1d4));
      iVar5 = iStack_414;
      uVar3 = local_418;
      if (local_4e8 == (undefined **)0x3 && iStack_4e4 == 0) {
        local_4f0 = local_418;
        local_4ec = iStack_414;
        local_4e8 = ppuStack_410;
        iStack_4e4 = iStack_40c;
        local_4e0 = uStack_408;
        local_4dc = local_404;
        local_4d8 = ppuStack_400;
        iStack_4d4 = iStack_3fc;
        uStack_4d0 = uStack_3f8;
        local_4cc = iStack_3f4;
        local_4c8 = local_3f0;
        local_4c4 = iStack_3ec;
        uStack_4c0 = uStack_3e8;
        iStack_4bc = iStack_3e4;
        local_4b8 = ppuStack_3e0;
        iStack_4b4 = iStack_3dc;
        local_4b0 = 3;
        iStack_4ac = 0;
        local_448 = 0;
        local_4a8 = (undefined **)CONCAT31(local_4a8._1_3_,local_154);
        local_440 = local_158;
        if (local_418 == 3 && iStack_414 == 0) goto LAB_00d55bb0;
        FUN_011de050();
        ppuVar12 = local_440;
        uVar11 = *(undefined4 *)(*(int *)(param_2 + 0x1e0) + 8);
        uVar10 = *(undefined4 *)(*(int *)(param_2 + 0x1e0) + 0xc);
        FUN_01bed4e2(&local_158,&local_4b0,0x70);
        local_15c = CONCAT13(local_15c._3_1_,0x30000);
        local_15c = CONCAT22(local_15c._2_2_,200);
        local_19c = (char *)0x0;
        local_1a0 = (undefined **)0x0;
        local_160 = (undefined **)0x0;
        local_168 = local_168 & 0xffff0000;
        local_16c = 0;
        local_174 = 0;
        local_178 = 0;
        local_180 = (undefined **)0x0;
        local_184 = 0;
        local_268 = uVar3;
        local_188 = 2;
        local_170 = (undefined **)0x4;
        local_17c = 4;
        local_264 = iVar5;
        local_260 = local_4e8;
        iStack_25c = iStack_4e4;
        local_258 = local_4e0;
        iStack_254 = local_4dc;
        local_250 = local_4d8;
        iStack_24c = iStack_4d4;
        uStack_248 = uStack_4d0;
        iStack_244 = local_4cc;
        ppuStack_240 = local_4c8;
        local_23c = local_4c4;
        uStack_238 = uStack_4c0;
        iStack_234 = iStack_4bc;
        ppuStack_230 = local_4b8;
        iStack_22c = iStack_4b4;
        FUN_01a68e2c(&local_2d8,&local_268);
        FUN_0142e6dc(&local_1a0);
        local_1a0 = local_2d8;
        local_19c = (char *)uStack_2d4;
        local_198 = uStack_2d0;
        iStack_194 = uStack_2cc;
        ppuStack_190 = (undefined **)uStack_2c8;
        local_18c = local_2c4;
        local_188 = uStack_2c0;
        local_184 = iStack_2bc;
        local_180 = ppuStack_2b8;
        local_17c = iStack_2b4;
        local_178 = local_2b0;
        local_174 = iStack_2ac;
        local_170 = ppuStack_2a8;
        local_16c = iStack_2a4;
        local_168 = uStack_2a0;
        iStack_164 = iStack_29c;
        FUN_0178e884(0);
        local_160 = ppuVar12;
        FUN_01bed4e2(&local_268,&local_1a0,0xb8);
        FUN_01bed4e2(&local_158,auStack_220,0x70);
        FUN_01bed4e2(&local_1a0,&local_268,0x48);
        FUN_01bed4e2(auStack_320,&local_1a0,0x48);
        FUN_01bed4e2(&local_2d8,&local_158,0x70);
        local_1b0 = 0;
        local_1ac = 0x1d;
        local_1a8 = 0;
        local_1a4 = 0;
        local_1a0 = &PTR_FUN_01c15c88;
        local_19c = "application/grpc";
        local_198 = 0x10;
        iStack_194 = 0;
        ppuStack_190 = (undefined **)0x0;
        FUN_00714c58(&local_268,auStack_320,&local_1b0,&local_1a0);
        if ((char)local_258 != '\x02') {
          (**(code **)(local_268 + 0x10))(&iStack_25c,local_264,local_260);
        }
        FUN_01bed4e2(&local_268,&local_2d8,0x70);
        iVar5 = thunk_FUN_01be5118(0x2000);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620();
        }
        local_1a8 = 0x2000;
        local_1a4 = 0x11;
        local_1ac = 0;
        local_1b0 = iVar5;
        FUN_01bed4e2(auStack_628,&local_2d8,0x70);
        local_c0 = local_1b0;
        uStack_bc = local_1ac;
        uStack_b8 = local_1a8;
        uStack_b4 = local_1a4;
        local_a4 = 1;
        local_a8 = 0;
        local_ac = 0;
        local_b0 = 1;
        FUN_01bed4e2(&local_198,&local_688,0xd0);
        local_94 = 0;
        uStack_30 = 1;
        local_98 = 3;
        local_1a0 = (undefined **)0x3;
        local_9c = 0x8000;
        local_19c = (char *)0x0;
        local_a0 = 0x2000;
        local_c8 = uVar11;
        local_c4 = uVar10;
        iVar5 = thunk_FUN_01be5118(0x178);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x178);
        }
        FUN_01bed4e2(iVar5,&local_1a0,0x178);
        FUN_01bed4e2(&local_3d8,auStack_320,0x48);
        local_38c = &DAT_01c15370;
        local_390 = iVar5;
      }
      else {
        local_4e0 = local_418;
        local_4dc = iStack_414;
        local_4d8 = ppuStack_410;
        iStack_4d4 = iStack_40c;
        uStack_4d0 = uStack_408;
        local_4cc = local_404;
        local_4c8 = ppuStack_400;
        local_4c4 = iStack_3fc;
        uStack_4c0 = uStack_3f8;
        iStack_4bc = iStack_3f4;
        local_4b8 = local_3f0;
        iStack_4b4 = iStack_3ec;
        local_4b0 = uStack_3e8;
        iStack_4ac = iStack_3e4;
        local_4a8 = ppuStack_3e0;
        iStack_4a4 = iStack_3dc;
        local_49c = local_154;
        local_499 = local_41a;
        local_4a0 = local_158;
        local_49b = local_41c;
        local_498 = local_438;
        uStack_494 = uStack_434;
        uStack_490 = uStack_430;
        uStack_48c = uStack_42c;
        uStack_488 = uStack_428;
        uStack_484 = uStack_424;
        local_4ec = 0;
        local_4f0 = 3;
LAB_00d55bb0:
        FUN_01bed4e2(auStack_388,&local_4e8,0x68);
        FUN_010a5cf0(&local_3d8,auStack_388);
      }
      *(undefined1 *)(param_2 + 0x1e9) = 0;
      piVar8 = *(int **)(param_2 + 0x1e4);
      *(undefined1 *)(param_2 + 0x1ea) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + -1;
      goto LAB_00d55c0c;
    }
    *(undefined1 *)(param_2 + 0x1e8) = 3;
  }
  local_3d4 = 0;
  local_3d8 = 3;
  uVar4 = 3;
LAB_00d55c98:
  *(undefined1 *)(param_2 + 500) = uVar4;
  *param_1 = local_3d8;
  param_1[1] = local_3d4;
  return;
}

