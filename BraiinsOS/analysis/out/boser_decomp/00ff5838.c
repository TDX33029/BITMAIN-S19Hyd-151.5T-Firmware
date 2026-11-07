// FUN_00ff5838 @ 00ff5838 size=4000 calls_out=26 calls_in=2
// strings: /{*__private__axum_nest_tail_param} | /{*__private__axum_nest_tail_param} | no route for id. This is a bug in axum. Please file an issue | no route for id. This is a bug in axum. Please file an issue

void FUN_00ff5838(undefined4 param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong *puVar10;
  uint extraout_r1;
  int **ppiVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  int local_528;
  int local_518;
  int *local_4e0;
  undefined2 *local_4dc;
  undefined4 **ppuStack_4d8;
  undefined1 *puStack_4d4;
  undefined4 uStack_4d0;
  undefined4 local_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 local_458;
  uint local_454;
  undefined4 local_450;
  uint local_44c;
  int *local_420;
  int *local_41c;
  undefined2 *puStack_418;
  undefined4 **ppuStack_414;
  undefined1 *puStack_410;
  undefined4 local_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 local_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 auStack_3e0 [64];
  undefined4 local_3a0 [2];
  undefined4 local_398;
  uint local_394;
  undefined1 auStack_390 [64];
  byte local_350;
  undefined1 *local_334;
  uint local_330;
  ushort local_328;
  int *local_310 [2];
  int *local_308;
  int *local_304;
  undefined2 *local_300;
  undefined4 **local_2fc;
  undefined1 *puStack_2f8;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int local_2d0;
  uint local_2cc;
  byte local_290;
  undefined1 *local_274;
  uint local_270;
  ushort local_268;
  undefined1 auStack_250 [8];
  undefined4 local_248;
  uint local_244;
  undefined4 *local_23c;
  int *local_238;
  undefined2 *local_234;
  undefined4 **local_230;
  undefined1 *puStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined1 auStack_1f8 [64];
  undefined4 local_1b8 [2];
  undefined4 local_1b0;
  uint local_1ac;
  int *local_1a8;
  undefined2 *local_1a4;
  undefined4 **local_1a0;
  undefined1 *local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_ec;
  int *local_e8;
  int local_e4;
  undefined1 auStack_e0 [136];
  undefined4 local_58;
  uint local_54;
  undefined1 local_2c;
  
  FUN_01bed4e2(&local_420,param_3,0x90);
  iVar6 = FUN_011ddeb0(local_3a0[0]);
  if (iVar6 == 0) {
    FUN_017970c4(&local_238,auStack_3e0);
    local_1a8 = local_238;
    local_1a4 = local_234;
    local_1a0 = local_230;
    local_19c = puStack_22c;
    local_198 = uStack_228;
    local_194 = local_224;
    uStack_190 = uStack_220;
    uStack_18c = uStack_21c;
    local_188 = uStack_218;
    uStack_184 = uStack_214;
    uStack_180 = uStack_210;
    FUN_011de530(&local_238,local_3a0);
    if ((char)local_238 != '\x03') {
      FUN_01435814(&local_238);
    }
  }
  FUN_01bed4e2(auStack_390,&local_420,0x88);
  iVar6 = *(int *)(param_2 + 0x28);
  uVar7 = local_394;
  if (local_330 == 0) {
    uVar7 = (uint)local_350;
  }
  if (local_330 == 0 && uVar7 == 0) {
    local_334 = (undefined1 *)0x1;
    local_330 = 0;
  }
  else {
    uVar7 = (uint)local_328;
    if (uVar7 != 0xffff) {
      if (uVar7 == 0) {
        local_330 = 1;
        local_334 = &DAT_005327c4;
        goto LAB_00ff5968;
      }
      if (uVar7 < local_330) {
        if ((char)local_334[uVar7] < -0x40) goto LAB_00ff67a4;
        local_330 = uVar7;
      }
      else if (local_330 != uVar7) {
LAB_00ff67a4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(local_334,local_330,0,uVar7,&DAT_01d2e584);
      }
    }
    if (local_330 == 0) {
      local_334 = &DAT_005327c4;
    }
    if (local_330 < 2) {
      local_330 = 1;
    }
  }
LAB_00ff5968:
  FUN_0070d58c(&local_308,iVar6 + 8,local_334,local_330);
  if (local_308 != (int *)0x0) {
    iVar8 = *local_308;
    if (*(int *)(iVar6 + 0x14) != 0) {
      uVar9 = FUN_01656218(*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x1c),
                           *(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x24),iVar8);
      uVar7 = uVar9 >> 0x19;
      iVar12 = *(int *)(iVar6 + 8);
      iVar20 = 0;
      while( true ) {
        uVar9 = *(uint *)(iVar6 + 0xc) & uVar9;
        uVar14 = *(uint *)(iVar12 + uVar9);
        uVar16 = uVar14 ^ uVar7 * 0x1010101;
        uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff;
        while (uVar16 != 0) {
          uVar17 = uVar16 >> 8;
          uVar15 = uVar16 >> 0x10;
          uVar2 = uVar16 >> 0x18;
          uVar3 = uVar16 << 0x18;
          uVar16 = uVar16 - 1 & uVar16;
          uVar17 = uVar9 + ((uint)LZCOUNT(uVar3 | (uVar17 & 0xff) << 0x10 | (uVar15 & 0xff) << 8 |
                                          uVar2) >> 3) & *(uint *)(iVar6 + 0xc);
          if (iVar8 == *(int *)(iVar12 + -0xc + uVar17 * -0xc)) {
            iVar12 = iVar12 + uVar17 * -0xc;
            puVar13 = (undefined4 *)(iVar12 + -8);
            local_23c = puVar13;
            if (local_310[0] == (int *)0x0) goto LAB_00ff5eb0;
            if (local_310[0][3] == 0) goto LAB_00ff5c60;
            iVar6 = *local_310[0];
            uVar7 = local_310[0][1];
            local_528 = 0;
            uVar9 = uVar7 & 0x4e51366;
            goto LAB_00ff5ad0;
          }
        }
        if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
        iVar20 = iVar20 + 4;
        uVar9 = uVar9 + iVar20;
      }
    }
LAB_00ff61e0:
    local_1a8 = local_304;
    local_1a4 = local_300;
    local_1a0 = local_2fc;
    local_19c = puStack_2f8;
    local_198 = local_2f4;
    local_194 = uStack_2f0;
    uStack_190 = uStack_2ec;
    uStack_18c = uStack_2e8;
    local_188 = local_2e4;
    uStack_184 = uStack_2e0;
    uStack_180 = uStack_2dc;
    uStack_17c = uStack_2d8;
    uStack_178 = uStack_2d4;
    FUN_0070c6bc(local_310);
    if (*(int *)(param_2 + 0x14) != 0) {
      uVar9 = FUN_01656218(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                           *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),iVar8);
      uVar7 = uVar9 >> 0x19;
      iVar6 = *(int *)(param_2 + 8);
      iVar12 = 0;
      while( true ) {
        uVar9 = *(uint *)(param_2 + 0xc) & uVar9;
        uVar16 = *(uint *)(iVar6 + uVar9);
        uVar14 = uVar16 ^ uVar7 * 0x1010101;
        uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
        while (uVar14 != 0) {
          uVar17 = uVar14 >> 8;
          uVar15 = uVar14 >> 0x10;
          uVar2 = uVar14 >> 0x18;
          uVar3 = uVar14 << 0x18;
          uVar14 = uVar14 - 1 & uVar14;
          uVar17 = uVar9 + ((uint)LZCOUNT(uVar3 | (uVar17 & 0xff) << 0x10 | (uVar15 & 0xff) << 8 |
                                          uVar2) >> 3) & *(uint *)(param_2 + 0xc);
          if (iVar8 == *(int *)(iVar6 + -0x90 + uVar17 * -0x90)) {
            FUN_01bed4e2(&local_2d0,auStack_390,0x88);
            local_244 = local_394;
            iVar6 = iVar6 + uVar17 * -0x90;
            local_248 = local_398;
            if (*(int *)(iVar6 + -0x8c) == 3) {
              uVar21 = (**(code **)(*(int *)(iVar6 + -0x84) + 0x14))(*(undefined4 *)(iVar6 + -0x88))
              ;
              FUN_01bed4e2(&local_238,&local_2d0,0x88);
              local_1ac = local_394;
              local_1b0 = local_398;
              FUN_011ddc04(&local_1a8,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),&local_238);
              local_ec = 0;
              FUN_01bed4e2(&local_4e0,&local_1a8,0xc0);
            }
            else {
              FUN_01bed4e2(&local_1a8,&local_2d0,0x90);
              FUN_00ff6a64(&local_4e0,(int *)(iVar6 + -0x8c),&local_1a8);
            }
            if (local_4e0 == (int *)&DAT_00000006 && local_4dc == (undefined2 *)0x0)
            goto LAB_00ff63b4;
            ppiVar11 = &local_4e0;
            goto LAB_00ff6734;
          }
        }
        if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar9 = uVar9 + iVar12;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no route for id. This is a bug in axum. Please file an issue",0x3c,&DAT_01c1d1ac);
  }
  FUN_01bed4e2(&ppuStack_4d8,auStack_390,0x88);
  local_44c = local_394;
  local_450 = local_398;
LAB_00ff63b4:
  FUN_01bed4e2(&local_238,&ppuStack_4d8,0x90);
  iVar6 = FUN_011ddeb0(local_1b8[0]);
  if (iVar6 == 0) {
    FUN_017970c4(&local_4e0,auStack_1f8);
    local_1a8 = local_4e0;
    local_1a4 = local_4dc;
    local_1a0 = ppuStack_4d8;
    local_19c = puStack_4d4;
    local_198 = uStack_4d0;
    local_194 = local_4cc;
    uStack_190 = uStack_4c8;
    uStack_18c = uStack_4c4;
    local_188 = uStack_4c0;
    uStack_184 = uStack_4bc;
    uStack_180 = uStack_4b8;
    FUN_011de530(&local_4e0,local_1b8);
    if ((char)local_4e0 != '\x03') {
      FUN_01435814(&local_4e0);
    }
  }
  FUN_01bed4e2(&local_2d0,&local_238,0x88);
  uVar9 = local_1ac;
  uVar18 = local_1b0;
  uVar7 = extraout_r1;
  if (local_270 == 0) {
    uVar7 = (uint)local_290;
  }
  if (local_270 == 0 && uVar7 == 0) {
    local_274 = (undefined1 *)0x1;
    local_270 = 0;
  }
  else {
    uVar7 = (uint)local_268;
    if (uVar7 != 0xffff) {
      if (uVar7 == 0) {
        local_270 = 1;
        local_274 = &DAT_005327c4;
        goto LAB_00ff64dc;
      }
      if (uVar7 < local_270) {
        if ((char)local_274[uVar7] < -0x40) goto LAB_00ff67c8;
        local_270 = uVar7;
      }
      else if (local_270 != uVar7) {
LAB_00ff67c8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(local_274,local_270,0,uVar7,&DAT_01d2e584);
      }
    }
    if (local_270 == 0) {
      local_274 = &DAT_005327c4;
    }
    if (local_270 < 2) {
      local_270 = 1;
    }
  }
LAB_00ff64dc:
  FUN_0070d58c(&local_420,*(int *)(param_2 + 0x58) + 8,local_274,local_270);
  if (local_420 == (int *)0x0) {
    FUN_01bed4e2(auStack_e0,&local_2d0,0x88);
    local_54 = uVar9;
    local_58 = uVar18;
LAB_00ff66dc:
    FUN_01bed4e2(&local_4e0,auStack_e0,0x90);
    FUN_00711b60(&local_238,param_2 + 0x68);
    FUN_01bed4e2(&local_1a8,auStack_e0,0x90);
    FUN_00ff6f2c(param_1,&local_238,&local_1a8);
    return;
  }
  local_1a8 = local_41c;
  local_1a4 = puStack_418;
  local_1a0 = ppuStack_414;
  local_19c = puStack_410;
  local_198 = local_40c;
  local_194 = uStack_408;
  uStack_190 = uStack_404;
  uStack_18c = uStack_400;
  local_188 = local_3fc;
  uStack_184 = uStack_3f8;
  uStack_180 = uStack_3f4;
  uStack_17c = uStack_3f0;
  uStack_178 = uStack_3ec;
  iVar6 = *local_420;
  FUN_0070c6bc(auStack_250);
  if (*(int *)(param_2 + 0x44) == 0) {
LAB_00ff6768:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no route for id. This is a bug in axum. Please file an issue",0x3c,&DAT_01c1d1ac);
  }
  uVar14 = FUN_01656218(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c),
                        *(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),iVar6);
  uVar7 = uVar14 >> 0x19;
  iVar8 = *(int *)(param_2 + 0x38);
  iVar12 = 0;
  do {
    uVar14 = *(uint *)(param_2 + 0x3c) & uVar14;
    uVar17 = *(uint *)(iVar8 + uVar14);
    uVar16 = uVar17 ^ uVar7 * 0x1010101;
    uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff;
    while (uVar16 != 0) {
      uVar15 = uVar16 >> 8;
      uVar2 = uVar16 >> 0x10;
      uVar3 = uVar16 >> 0x18;
      uVar4 = uVar16 << 0x18;
      uVar16 = uVar16 - 1 & uVar16;
      uVar15 = uVar14 + ((uint)LZCOUNT(uVar4 | (uVar15 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3
                                      ) >> 3) & *(uint *)(param_2 + 0x3c);
      if (iVar6 == *(int *)(iVar8 + -0x90 + uVar15 * -0x90)) {
        FUN_01bed4e2(&local_4e0,&local_2d0,0x88);
        iVar8 = iVar8 + uVar15 * -0x90;
        local_454 = uVar9;
        local_458 = uVar18;
        if (*(int *)(iVar8 + -0x8c) == 3) {
          uVar21 = (**(code **)(*(int *)(iVar8 + -0x84) + 0x14))(*(undefined4 *)(iVar8 + -0x88));
          FUN_01bed4e2(&local_1a8,&local_4e0,0x88);
          local_11c = uVar9;
          local_120 = uVar18;
          FUN_011ddc04(&local_e8,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),&local_1a8);
          local_2c = 0;
        }
        else {
          FUN_01bed4e2(&local_1a8,&local_4e0,0x90);
          FUN_00ff6a64(&local_e8,(int *)(iVar8 + -0x8c),&local_1a8);
        }
        if (local_e8 != (int *)0x6 || local_e4 != 0) {
          ppiVar11 = &local_e8;
LAB_00ff6734:
          FUN_01bed4e2(param_1,ppiVar11,0xc0);
          return;
        }
        goto LAB_00ff66dc;
      }
    }
    if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) goto LAB_00ff6768;
    iVar12 = iVar12 + 4;
    uVar14 = uVar14 + iVar12;
  } while( true );
LAB_00ff5ad0:
  uVar14 = *(uint *)(iVar6 + uVar9);
  uVar16 = (uVar14 & 0x80808080 ^ 0x80808080) & (uVar14 ^ 0x2020202) + 0xfefefeff;
  while (uVar16 != 0) {
    uVar17 = uVar9 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                    (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) & uVar7;
    piVar19 = (int *)(iVar6 + -0x18 + uVar17 * -0x18);
    uVar16 = uVar16 - 1 & uVar16;
    if ((*piVar19 == 0x12468913 && piVar19[2] == 0x4e51366) &&
        (piVar19[1] == -0x652bf494 && piVar19[3] == 0x280f6bef)) {
      iVar6 = iVar6 + uVar17 * -0x18;
      uVar21 = (**(code **)(*(int *)(iVar6 + -4) + 0x14))(*(undefined4 *)(iVar6 + -8));
      piVar19 = (int *)uVar21;
      (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0xc))(&local_1a8,piVar19);
      if (!((local_1a8 == (int *)0x12468913 && local_1a0 == (undefined4 **)0x4e51366) &&
           (local_1a4 == (undefined2 *)0x9ad40b6c && local_19c == (undefined1 *)0x280f6bef)))
      goto LAB_00ff5c50;
      goto LAB_00ff5df0;
    }
  }
  if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) goto LAB_00ff5c50;
  local_528 = local_528 + 4;
  uVar9 = uVar9 + local_528 & uVar7;
  goto LAB_00ff5ad0;
LAB_00ff5c50:
  if (local_310[0] != (int *)0x0) {
LAB_00ff5c60:
    if (local_310[0][3] != 0) {
      iVar6 = *local_310[0];
      uVar7 = local_310[0][1];
      local_518 = 0;
      uVar9 = uVar7 & 0xb7d5b4fd;
LAB_00ff5ca4:
      uVar14 = *(uint *)(iVar6 + uVar9);
      uVar16 = (uVar14 & 0x80808080 ^ 0x80808080) & (uVar14 ^ 0x5b5b5b5b) + 0xfefefeff;
      do {
        if (uVar16 == 0) goto LAB_00ff5d54;
        uVar17 = uVar9 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                        (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) & uVar7
        ;
        piVar19 = (int *)(iVar6 + -0x18 + uVar17 * -0x18);
        uVar16 = uVar16 - 1 & uVar16;
      } while (!((*piVar19 == -0x50310d81 && piVar19[2] == -0x482a4b03) &&
                (piVar19[1] == 0x278394d5 && piVar19[3] == 0x310cc736)));
      iVar6 = iVar6 + uVar17 * -0x18;
      uVar21 = (**(code **)(*(int *)(iVar6 + -4) + 0x14))(*(undefined4 *)(iVar6 + -8));
      piVar19 = (int *)uVar21;
      (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0xc))(&local_1a8,piVar19);
      if (!((local_1a8 == (int *)0xafcef27f && local_1a0 == (undefined4 **)0xb7d5b4fd) &&
           (local_1a4 == (undefined2 *)0x278394d5 && local_19c == (undefined1 *)0x310cc736)))
      goto LAB_00ff5eb0;
LAB_00ff5df0:
      uVar7 = piVar19[1];
      iVar12 = *piVar19 + 8;
      iVar6 = 0;
      if (0x22 < uVar7) {
        iVar20 = thunk_FUN_01bed842("/{*__private__axum_nest_tail_param}",iVar12 + uVar7 + -0x23,
                                    0x23);
        iVar6 = iVar12;
        if (iVar20 != 0) {
          iVar6 = 0;
        }
      }
      local_2d0 = iVar12;
      if (iVar6 != 0) {
        uVar7 = uVar7 - 0x23;
        local_2d0 = iVar6;
      }
      local_1a0 = &local_23c;
      local_1a8 = &local_2d0;
      local_19c = &LAB_0155c98c;
      local_1a4 = &DAT_0132b6a0;
      local_2cc = uVar7;
      FUN_00664898(&local_238,&DAT_0059d815,&local_1a8);
      uVar22 = FUN_0071155c(local_230);
      FUN_01bed4e2((int)uVar22 + 8,local_234,local_230);
      FUN_019bb7e0(local_238,local_234);
      goto LAB_00ff5ed8;
    }
  }
LAB_00ff5eb0:
  piVar19 = (int *)*puVar13;
  do {
    iVar6 = *piVar19;
    bVar5 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar5);
  *piVar19 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xff67e8);
    (*pcVar1)();
  }
  uVar22 = CONCAT44(*(undefined4 *)(iVar12 + -4),piVar19);
LAB_00ff5ed8:
  if ((uVar22 < 0x2300000000) ||
     (iVar6 = thunk_FUN_01bed842("/{*__private__axum_nest_tail_param}",
                                 (int)uVar22 + (int)(uVar22 >> 0x20) + -0x1b,0x23), iVar6 != 0)) {
    if (local_310[0] == (int *)0x0) {
      local_310[0] = (int *)FUN_014333b0();
      *local_310[0] = (int)&DAT_0056d238;
      local_310[0][1] = 0;
      local_310[0][2] = 0;
      local_310[0][3] = 0;
    }
    piVar19 = local_310[0];
    puVar10 = (ulonglong *)thunk_FUN_01be5118(8);
    if (puVar10 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar10 = uVar22;
    uVar21 = FUN_01415d14(piVar19,&DAT_0056a068,puVar10,&DAT_01c06eac);
    if ((int)uVar21 != 0) {
      uVar21 = (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0x1c))();
      iVar6 = (int)((ulonglong)uVar21 >> 0x20);
      puVar13 = (undefined4 *)uVar21;
      (**(code **)(iVar6 + 0xc))(&local_1a8,puVar13);
      if ((local_1a8 == (int *)0x12468913 && local_1a0 == (undefined4 **)0x4e51366) &&
          (local_1a4 == (undefined2 *)0x9ad40b6c && local_19c == (undefined1 *)0x280f6bef)) {
        piVar19 = (int *)*puVar13;
        uVar18 = puVar13[1];
        thunk_FUN_01be4678(puVar13);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar19;
          bVar5 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar5);
        *piVar19 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar19,uVar18);
        }
      }
      else {
        FUN_01443048(puVar13,iVar6);
      }
    }
    if (local_310[0] == (int *)0x0) goto LAB_00ff61e0;
    uVar21 = FUN_0070bdb8(local_310[0],&DAT_00568238);
    if ((int)uVar21 == 0) goto LAB_00ff61e0;
    uVar21 = (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0x1c))();
    puVar13 = (undefined4 *)uVar21;
    (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0xc))(&local_1a8,puVar13);
    if ((local_1a8 != (int *)0xafcef27f || local_1a0 != (undefined4 **)0xb7d5b4fd) ||
        (local_1a4 != (undefined2 *)0x278394d5 || local_19c != (undefined1 *)0x310cc736))
    goto LAB_00ff61d4;
    piVar19 = (int *)*puVar13;
    uVar18 = puVar13[1];
    thunk_FUN_01be4678(puVar13);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar19;
      bVar5 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar5);
    *piVar19 = iVar6 + -1;
  }
  else {
    if (local_310[0] == (int *)0x0) {
      local_310[0] = (int *)FUN_014333b0();
      *local_310[0] = (int)&DAT_0056d238;
      local_310[0][1] = 0;
      local_310[0][2] = 0;
      local_310[0][3] = 0;
    }
    piVar19 = local_310[0];
    puVar10 = (ulonglong *)thunk_FUN_01be5118(8);
    if (puVar10 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar10 = uVar22;
    uVar21 = FUN_01415d14(piVar19,&DAT_00568238,puVar10,&DAT_01c06eec);
    if ((int)uVar21 == 0) goto LAB_00ff61e0;
    uVar21 = (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0x1c))();
    puVar13 = (undefined4 *)uVar21;
    (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0xc))(&local_1a8,puVar13);
    if ((local_1a8 != (int *)0xafcef27f || local_1a0 != (undefined4 **)0xb7d5b4fd) ||
        (local_1a4 != (undefined2 *)0x278394d5 || local_19c != (undefined1 *)0x310cc736)) {
LAB_00ff61d4:
      FUN_01443048((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      goto LAB_00ff61e0;
    }
    piVar19 = (int *)*puVar13;
    uVar18 = puVar13[1];
    thunk_FUN_01be4678(puVar13);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar19;
      bVar5 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar5);
    *piVar19 = iVar6 + -1;
  }
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar19,uVar18);
  }
  goto LAB_00ff61e0;
LAB_00ff5d54:
  if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) goto LAB_00ff5eb0;
  local_518 = local_518 + 4;
  uVar9 = uVar9 + local_518 & uVar7;
  goto LAB_00ff5ca4;
}

