// FUN_007419d4 @ 007419d4 size=3748 calls_out=21 calls_in=1
// strings: 

void FUN_007419d4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  int *piVar16;
  int iVar17;
  undefined1 *puVar18;
  bool bVar19;
  int local_40c;
  int local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  undefined1 *local_3f0;
  undefined1 *local_3ec;
  undefined1 *local_3e4;
  int *local_3dc;
  undefined1 auStack_3d8 [80];
  undefined1 auStack_388 [80];
  undefined1 *local_338;
  int *local_334;
  undefined1 *local_330;
  undefined1 *local_32c;
  int *local_328;
  undefined1 *local_324;
  undefined1 auStack_320 [164];
  int local_27c;
  undefined2 local_278;
  undefined2 local_276;
  int local_274;
  int local_270;
  int local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined2 local_254;
  undefined2 local_252;
  int local_250;
  int local_24c;
  int local_248;
  undefined4 local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238;
  undefined2 local_234;
  undefined2 local_230;
  undefined1 local_22b;
  undefined1 auStack_228 [104];
  undefined1 auStack_1c0 [80];
  undefined1 *local_170;
  int *local_16c;
  undefined1 *local_168;
  undefined1 *local_164;
  int *local_160;
  undefined1 *local_15c;
  undefined1 auStack_158 [80];
  undefined1 *local_108;
  int *local_104;
  undefined1 *local_100;
  undefined1 *local_fc;
  int *local_f8;
  undefined1 *local_f4;
  undefined1 auStack_f0 [80];
  undefined1 auStack_a0 [80];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2a;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1f5)) {
  case 0:
    iVar17 = param_2 + 0xd8;
    FUN_016dd1aa(iVar17,param_2,0xd8);
    iVar7 = param_2 + 0x1b0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 500)) {
    case 0:
      *(int *)(param_2 + 0x308) = iVar17;
      FUN_016dd1aa(param_2 + 0x30c,iVar7,0x44);
      *(undefined1 *)(param_2 + 0x350) = 0;
LAB_00741b64:
      *(int *)(param_2 + 0x2b4) = iVar17;
      FUN_016dd1aa(param_2 + 0x2b8,param_2 + 0x30c,0x44);
      *(undefined2 *)(param_2 + 0x300) = 0;
      *(undefined2 *)(param_2 + 0x2fc) = 0;
      *(undefined1 *)(param_2 + 0x305) = 0;
      break;
    case 1:
      *(int *)(param_2 + 0x308) = iVar17;
      FUN_016dd1aa(param_2 + 0x30c,iVar7,0x44);
      *(undefined1 *)(param_2 + 0x350) = 0;
LAB_00741f38:
      *(int *)(param_2 + 0x2b4) = iVar17;
      FUN_016dd1aa(param_2 + 0x2b8,param_2 + 0x30c,0x44);
      *(undefined2 *)(param_2 + 0x300) = 1;
      *(undefined2 *)(param_2 + 0x2fc) = 0;
      *(undefined1 *)(param_2 + 0x305) = 0;
      goto switchD_00741b14_caseD_3;
    case 2:
      *(int *)(param_2 + 0x2b4) = iVar17;
      FUN_016dd1aa(param_2 + 0x2b8,iVar7,0x44);
      *(undefined1 *)(param_2 + 0x2fe) = 0;
LAB_00741d74:
      *(undefined2 *)(param_2 + 0x2fc) = 0x100;
      FUN_016dd1aa(param_2 + 0x270,param_2 + 0x2b8,0x44);
      uVar1 = *(undefined1 *)(param_2 + 0x2b0);
      if (*(short *)(param_2 + 0x270) == 1) {
        local_3fc = *(int *)(param_2 + 0x27c);
        uVar10 = 0;
        if (local_3fc < 0) {
LAB_00741db8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar10,local_3fc);
        }
        uVar10 = *(undefined4 *)(param_2 + 0x278);
        uVar2 = 1;
        if (local_3fc == 0) {
          local_3f8 = 0;
          local_3f4 = 1;
        }
        else {
          local_3f4 = thunk_FUN_016d4a50(local_3fc,uVar10);
          local_3f8 = local_3fc;
          if (local_3f4 == 0) {
            uVar10 = 1;
            goto LAB_00741db8;
          }
        }
        FUN_016dd1aa(local_3f4,uVar10,local_3fc);
        if (*(short *)(param_2 + 0x294) != 1) goto LAB_0074217c;
LAB_00741e14:
        local_40c = *(int *)(param_2 + 0x2a0);
        uVar10 = 0;
        if (local_40c < 0) {
LAB_00741e24:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar10,local_40c);
        }
        uVar10 = *(undefined4 *)(param_2 + 0x29c);
        if (local_40c == 0) {
          local_404 = 0;
          local_400 = 1;
        }
        else {
          local_400 = thunk_FUN_016d4a50(local_40c);
          local_404 = local_40c;
          if (local_400 == 0) {
            uVar10 = 1;
            goto LAB_00741e24;
          }
        }
        FUN_016dd1aa(local_400,uVar10,local_40c);
        local_254 = 1;
        local_278 = uVar2;
      }
      else {
        local_3f8 = *(int *)(param_2 + 700);
        local_3f4 = *(int *)(param_2 + 0x2c0);
        local_3a = *(undefined2 *)(param_2 + 0x2ba);
        local_3fc = *(int *)(param_2 + 0x2c4);
        uVar2 = *(undefined2 *)(param_2 + 0x2b8);
        local_50 = *(undefined4 *)(param_2 + 0x2c8);
        uStack_4c = *(undefined4 *)(param_2 + 0x2cc);
        uStack_48 = *(undefined4 *)(param_2 + 0x2d0);
        uStack_44 = *(undefined4 *)(param_2 + 0x2d4);
        uStack_40 = *(undefined4 *)(param_2 + 0x2d8);
        if (*(short *)(param_2 + 0x294) == 1) goto LAB_00741e14;
LAB_0074217c:
        local_404 = *(int *)(param_2 + 0x298);
        local_400 = *(int *)(param_2 + 0x29c);
        local_40c = *(int *)(param_2 + 0x2a0);
        local_38 = *(undefined4 *)(param_2 + 0x2a4);
        uStack_34 = *(undefined4 *)(param_2 + 0x2a8);
        uStack_30 = *(undefined4 *)(param_2 + 0x2ac);
        local_2a = *(undefined2 *)(param_2 + 0x296);
        local_254 = 0;
        local_278 = uVar2;
      }
      local_26c = local_3fc;
      local_270 = local_3f4;
      local_274 = local_3f8;
      local_276 = local_3a;
      local_268 = local_50;
      uStack_264 = uStack_4c;
      uStack_260 = uStack_48;
      uStack_25c = uStack_44;
      uStack_258 = uStack_40;
      local_248 = local_40c;
      local_24c = local_400;
      local_252 = local_2a;
      local_244 = local_38;
      uStack_240 = uStack_34;
      uStack_23c = uStack_30;
      local_250 = local_404;
      local_230 = 0;
      local_234 = 0;
      local_22b = 0;
      local_27c = iVar17;
      local_238 = uVar1;
      iVar7 = thunk_FUN_016d4a50(0x110);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x110);
      }
      FUN_016dd1aa(iVar7,&local_338,0x110);
      *(undefined1 *)(param_2 + 0x2fd) = 0;
      FUN_016dd1aa(&local_278,param_2 + 0x270,0x44);
      local_234 = 0;
      local_230 = 1;
      local_22b = 0;
      local_27c = iVar17;
      iVar17 = thunk_FUN_016d4a50(0x110);
      if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x110);
      }
      FUN_016dd1aa(iVar17,&local_338,0x110);
      *(int *)(param_2 + 0x300) = iVar7;
      *(undefined **)(param_2 + 0x304) = &DAT_0185a3c8;
      *(int *)(param_2 + 0x308) = iVar17;
      *(undefined **)(param_2 + 0x30c) = &DAT_0185a3c8;
LAB_00742304:
      local_3e4 = (undefined1 *)(param_2 + 0x2fe);
      (**(code **)(*(int *)(param_2 + 0x304) + 0xc))(&local_338,iVar7);
      if (local_330 == (undefined1 *)0x3b9aca01) {
        (**(code **)(*(int *)(param_2 + 0x30c) + 0xc))
                  (&local_338,*(undefined4 *)(param_2 + 0x308),param_3);
        if (local_330 == (undefined1 *)0x3b9aca01) {
          *local_3e4 = 3;
          goto LAB_007427bc;
        }
        iVar7 = *(int *)(param_2 + 0x300);
        uVar10 = *(undefined4 *)(param_2 + 0x304);
        uVar12 = *(undefined4 *)(param_2 + 0x308);
        puVar13 = *(undefined4 **)(param_2 + 0x30c);
        *(undefined4 *)(param_2 + 0x300) = 0;
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a4d64);
        }
        FUN_016dd1aa(auStack_228,&local_338,0x68);
        pcVar8 = (code *)*puVar13;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(uVar12);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
        uVar12 = 1;
      }
      else {
        uVar10 = *(undefined4 *)(param_2 + 0x30c);
        iVar17 = *(int *)(param_2 + 0x300);
        puVar13 = *(undefined4 **)(param_2 + 0x304);
        iVar7 = *(int *)(param_2 + 0x308);
        *(undefined4 *)(param_2 + 0x300) = 0;
        if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a4d64);
        }
        FUN_016dd1aa(auStack_228,&local_338,0x68);
        pcVar8 = (code *)*puVar13;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(iVar17);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(iVar17);
        }
        uVar12 = 0;
      }
      *(undefined4 *)(param_2 + 0x1f8) = uVar12;
      *(undefined4 *)(param_2 + 0x1fc) = 0;
      FUN_016dd1aa(param_2 + 0x200,auStack_228,0x68);
      *(int *)(param_2 + 0x268) = iVar7;
      *(undefined4 *)(param_2 + 0x26c) = uVar10;
      FUN_00745144(param_2 + 0x300);
      piVar16 = *(int **)(param_2 + 0x268);
      iVar17 = *(int *)(param_2 + 0x26c);
      FUN_016dd1aa(param_2 + 0x300,param_2 + 0x200,0x68);
      *(int **)(param_2 + 0x368) = piVar16;
      *(int *)(param_2 + 0x36c) = iVar17;
      *(undefined1 *)(param_2 + 0x2fc) = 0;
      goto LAB_00742490;
    case 3:
      *(int *)(param_2 + 0x478) = iVar17;
      FUN_016dd1aa(param_2 + 0x47c,iVar7,0x44);
      *(undefined1 *)(param_2 + 0x4c0) = 0;
LAB_00741e54:
      FUN_016dd1aa((uint)&local_108 | 2,param_2 + 0x47c,0x44);
      *(undefined2 *)(param_2 + 0x2b0) = 1;
      *(int *)(param_2 + 0x2ac) = iVar17;
      *(undefined2 *)(param_2 + 0x2b4) = 0;
      FUN_016dd1aa(param_2 + 0x2b6,&local_108,0x46);
      *(undefined1 *)(param_2 + 0x2fd) = 0;
      goto switchD_00741ae0_caseD_3;
    case 4:
      *(int *)(param_2 + 0x478) = iVar17;
      FUN_016dd1aa(param_2 + 0x47c,iVar7,0x44);
      *(undefined1 *)(param_2 + 0x4c0) = 0;
LAB_00741cbc:
      FUN_016dd1aa((uint)&local_108 | 2,param_2 + 0x47c,0x44);
      *(undefined2 *)(param_2 + 0x2b4) = 1;
      *(undefined2 *)(param_2 + 0x2b0) = 0;
      *(int *)(param_2 + 0x2ac) = iVar17;
      FUN_016dd1aa(param_2 + 0x2b6,&local_108,0x46);
      *(undefined1 *)(param_2 + 0x2fd) = 0;
      goto switchD_00741aac_caseD_3;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185a468);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185a468);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x350)) {
    case 0:
      iVar17 = *(int *)(param_2 + 0x308);
      goto LAB_00741b64;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185a478);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185a478);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x350)) {
    case 0:
      iVar17 = *(int *)(param_2 + 0x308);
      goto LAB_00741f38;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185a488);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185a488);
    }
switchD_00741b14_caseD_3:
    FUN_00742c9c(&local_338,param_2 + 0x1f8,param_3);
    puVar18 = local_330;
    if (local_330 == (undefined1 *)0x3b9aca01) {
      *(undefined1 *)(param_2 + 0x350) = 3;
      param_1[2] = 0x3b9aca01;
      *(undefined1 *)(param_2 + 0x1f5) = 4;
      return;
    }
    if (*(char *)(param_2 + 0x305) == '\x03') {
      puVar13 = *(undefined4 **)(param_2 + 0x264);
      uVar10 = *(undefined4 *)(param_2 + 0x260);
      pcVar8 = (code *)*puVar13;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar10);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
      *(undefined1 *)(param_2 + 0x304) = 0;
    }
    else if (*(char *)(param_2 + 0x305) == '\0') {
      bVar19 = *(short *)(param_2 + 0x2b8) != 0;
      iVar17 = 0;
      if (bVar19) {
        iVar17 = *(int *)(param_2 + 700);
      }
      if (bVar19 && iVar17 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x2c0));
      }
      bVar19 = *(short *)(param_2 + 0x2dc) != 0;
      iVar17 = 0;
      if (bVar19) {
        iVar17 = *(int *)(param_2 + 0x2e0);
      }
      if (bVar19 && iVar17 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x2e4));
      }
    }
    local_3f0 = local_324;
    piVar14 = local_328;
    puVar11 = local_32c;
    piVar16 = local_334;
    local_3ec = local_338;
    *(undefined1 *)(param_2 + 0x350) = 1;
    FUN_016dd1aa(auStack_388,auStack_320,0x50);
    FUN_00744f98(param_2 + 0x1f8);
    goto LAB_007427f0;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2fe)) {
    case 0:
      iVar17 = *(int *)(param_2 + 0x2b4);
      goto LAB_00741d74;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185a438);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185a438);
    case 3:
      iVar7 = *(int *)(param_2 + 0x300);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00408976,0x18,&DAT_018a4d54);
      }
      goto LAB_00742304;
    case 4:
      piVar16 = *(int **)(param_2 + 0x368);
      iVar17 = *(int *)(param_2 + 0x36c);
    }
LAB_00742490:
    (**(code **)(iVar17 + 0xc))(&local_338,piVar16,param_3);
    puVar5 = local_324;
    piVar14 = local_328;
    puVar15 = local_32c;
    puVar4 = local_330;
    piVar3 = local_334;
    puVar11 = local_338;
    if (local_330 == (undefined1 *)0x3b9aca01) {
      *(undefined1 *)(param_2 + 0x2fe) = 4;
      goto LAB_007427bc;
    }
    local_3dc = local_328;
    local_3ec = local_324;
    FUN_016dd1aa(auStack_1c0,auStack_320,0x50);
    puVar13 = *(undefined4 **)(param_2 + 0x36c);
    uVar10 = *(undefined4 *)(param_2 + 0x368);
    pcVar8 = (code *)*puVar13;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar10);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    puVar18 = *(undefined1 **)(param_2 + 0x308);
    if (puVar18 == &DAT_3b9aca00) {
      puVar18 = *(undefined1 **)(param_2 + 0x30c);
      local_3dc = *(int **)(param_2 + 0x310);
      if (puVar4 != &DAT_3b9aca00) {
        local_3f0 = puVar5;
        puVar9 = auStack_1c0;
        local_3ec = puVar11;
        puVar11 = puVar15;
        puVar15 = puVar18;
        piVar16 = piVar3;
        puVar18 = puVar4;
LAB_00742630:
        FUN_016dd1aa(auStack_a0,puVar9,0x50);
        uVar6 = 1;
        if ((int)puVar15 < 0) {
          uVar6 = (uint)puVar15 ^ 0x80000000;
        }
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            if (puVar15 == (undefined1 *)0x0) goto LAB_00742790;
          }
          else {
            FUN_01047d98(local_3dc,DAT_018dd947);
          }
          thunk_FUN_016d3fb4(local_3dc);
        }
        goto LAB_00742790;
      }
      local_3f0 = *(undefined1 **)(param_2 + 0x314);
      local_330 = puVar5;
      local_334 = piVar14;
      local_338 = puVar15;
      FUN_007299e8(&local_338);
      *(undefined2 *)(param_2 + 0x2fc) = 0;
      FUN_016dd1aa(auStack_3d8,auStack_a0,0x50);
      *(undefined1 *)(param_2 + 0x2fe) = 1;
      puVar11 = puVar18;
      piVar14 = local_3dc;
      puVar18 = &DAT_3b9aca00;
    }
    else {
      local_3ec = *(undefined1 **)(param_2 + 0x300);
      puVar9 = (undefined1 *)(param_2 + 0x318);
      piVar16 = *(int **)(param_2 + 0x304);
      if (puVar4 == &DAT_3b9aca00) {
        puVar11 = *(undefined1 **)(param_2 + 0x30c);
        piVar14 = *(int **)(param_2 + 0x310);
        local_3f0 = *(undefined1 **)(param_2 + 0x314);
        goto LAB_00742630;
      }
      local_32c = *(undefined1 **)(param_2 + 0x30c);
      local_328 = *(int **)(param_2 + 0x310);
      local_324 = *(undefined1 **)(param_2 + 0x314);
      local_338 = local_3ec;
      local_334 = piVar16;
      local_330 = puVar18;
      FUN_016dd1aa(auStack_320,puVar9,0x50);
      local_16c = piVar3;
      local_170 = puVar11;
      local_15c = puVar5;
      local_160 = piVar14;
      local_164 = puVar15;
      local_168 = puVar4;
      FUN_016dd1aa(auStack_158,auStack_1c0,0x50);
      FUN_01093af0(&local_108,&local_338,&local_170);
      local_3ec = local_108;
      local_3f0 = local_f4;
      FUN_016dd1aa(auStack_a0,auStack_f0,0x50);
      FUN_0104b118(auStack_320);
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *local_328;
        bVar19 = (bool)hasExclusiveAccess(local_328);
      } while (!bVar19);
      *local_328 = iVar17 + -1;
      puVar11 = local_fc;
      piVar14 = local_f8;
      piVar16 = local_104;
      puVar18 = local_100;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01059b88(local_328,local_324);
      }
LAB_00742790:
      *(undefined2 *)(param_2 + 0x2fc) = 0;
      FUN_016dd1aa(auStack_3d8,auStack_a0,0x50);
      *(undefined1 *)(param_2 + 0x2fe) = 1;
      if (puVar18 == (undefined1 *)0x3b9aca01) {
LAB_007427bc:
        param_1[2] = 0x3b9aca01;
        *(undefined1 *)(param_2 + 0x1f5) = 5;
        return;
      }
    }
    FUN_016dd1aa(auStack_388,auStack_3d8,0x50);
    FUN_007452f4((undefined4 *)(param_2 + 0x1f8));
    goto LAB_007427f0;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x4c0)) {
    case 0:
      iVar17 = *(int *)(param_2 + 0x478);
      goto LAB_00741e54;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185a458);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185a458);
    }
switchD_00741ae0_caseD_3:
    FUN_007454e0(&local_338,param_2 + 0x1f8,param_3);
    puVar18 = local_330;
    if (local_330 == (undefined1 *)0x3b9aca01) {
      *(undefined1 *)(param_2 + 0x4c0) = 3;
      param_1[2] = 0x3b9aca01;
      *(undefined1 *)(param_2 + 0x1f5) = 6;
      return;
    }
    FUN_00746208(param_2 + 0x1f8);
    goto LAB_00741ee4;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x4c0)) {
    case 0:
      iVar17 = *(int *)(param_2 + 0x478);
      goto LAB_00741cbc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185a448);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185a448);
    }
switchD_00741aac_caseD_3:
    FUN_007454e0(&local_338,param_2 + 0x1f8,param_3);
    puVar18 = local_330;
    if (local_330 == (undefined1 *)0x3b9aca01) {
      *(undefined1 *)(param_2 + 0x4c0) = 3;
      param_1[2] = 0x3b9aca01;
      *(undefined1 *)(param_2 + 0x1f5) = 7;
      return;
    }
    FUN_00746208(param_2 + 0x1f8);
LAB_00741ee4:
    local_3f0 = local_324;
    piVar14 = local_328;
    puVar11 = local_32c;
    piVar16 = local_334;
    local_3ec = local_338;
    *(undefined1 *)(param_2 + 0x4c0) = 1;
    FUN_016dd1aa(auStack_388,auStack_320,0x50);
    goto LAB_007427f0;
  }
  FUN_00742c9c(&local_338,param_2 + 0x1f8,param_3);
  puVar18 = local_330;
  if (local_330 == (undefined1 *)0x3b9aca01) {
    *(undefined1 *)(param_2 + 0x350) = 3;
    param_1[2] = 0x3b9aca01;
    *(undefined1 *)(param_2 + 0x1f5) = 3;
    return;
  }
  if (*(char *)(param_2 + 0x305) == '\x03') {
    puVar13 = *(undefined4 **)(param_2 + 0x264);
    uVar10 = *(undefined4 *)(param_2 + 0x260);
    pcVar8 = (code *)*puVar13;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar10);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    *(undefined1 *)(param_2 + 0x304) = 0;
  }
  else if (*(char *)(param_2 + 0x305) == '\0') {
    bVar19 = *(short *)(param_2 + 0x2b8) != 0;
    iVar17 = 0;
    if (bVar19) {
      iVar17 = *(int *)(param_2 + 700);
    }
    if (bVar19 && iVar17 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x2c0));
    }
    bVar19 = *(short *)(param_2 + 0x2dc) != 0;
    iVar17 = 0;
    if (bVar19) {
      iVar17 = *(int *)(param_2 + 0x2e0);
    }
    if (bVar19 && iVar17 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x2e4));
    }
  }
  local_3f0 = local_324;
  piVar14 = local_328;
  puVar11 = local_32c;
  piVar16 = local_334;
  local_3ec = local_338;
  *(undefined1 *)(param_2 + 0x350) = 1;
  FUN_016dd1aa(auStack_388,auStack_320,0x50);
  FUN_00744f98(param_2 + 0x1f8);
LAB_007427f0:
  FUN_007450a8(param_2 + 0xd8);
  param_1[3] = puVar11;
  param_1[4] = piVar14;
  param_1[5] = local_3f0;
  *param_1 = local_3ec;
  param_1[1] = piVar16;
  param_1[2] = puVar18;
  FUN_016dd1aa(param_1 + 6,auStack_388,0x50);
  *(undefined1 *)(param_2 + 0x1f5) = 1;
  return;
}

