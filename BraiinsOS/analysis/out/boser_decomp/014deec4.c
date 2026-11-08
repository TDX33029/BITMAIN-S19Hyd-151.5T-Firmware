// FUN_014deec4 @ 014deec4 size=3300 calls_out=28 calls_in=1
// strings: unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014deec4(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 ***pppuVar5;
  undefined4 **ppuVar6;
  undefined4 **ppuVar7;
  undefined4 ****ppppuVar8;
  uint *puVar9;
  uint *puVar10;
  uint *extraout_r1;
  uint *puVar11;
  undefined4 **ppuVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined4 ****ppppuVar20;
  undefined4 ***pppuVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 **local_734;
  int local_6e4;
  undefined4 **local_6e0;
  uint *local_6d4;
  uint *local_6d0;
  undefined4 local_6cc;
  uint *local_6c8;
  int local_6c4;
  uint local_6c0;
  uint uStack_6bc;
  uint uStack_6b8;
  undefined4 ****local_6b0;
  uint local_6ac;
  undefined4 ****local_6a8;
  undefined4 ****local_6a0;
  undefined4 **ppuStack_69c;
  undefined1 local_698;
  undefined1 auStack_690 [176];
  undefined4 ****local_5e0;
  undefined4 **local_5dc;
  undefined1 auStack_5d8 [171];
  undefined4 **local_52d;
  undefined1 auStack_529 [9];
  undefined4 ****local_520;
  undefined4 **ppuStack_51c;
  undefined1 local_518;
  undefined1 auStack_510 [176];
  undefined4 ****local_460;
  int local_45c;
  int local_458;
  undefined4 **local_450;
  undefined4 **local_44c;
  undefined4 **local_448;
  undefined4 **local_444;
  int local_440;
  int local_43c;
  undefined4 ****local_438;
  int local_434;
  undefined4 local_430;
  undefined4 ****local_428;
  undefined4 **local_424;
  undefined1 auStack_420 [171];
  undefined4 **local_375;
  undefined1 auStack_371 [9];
  undefined4 ****local_368;
  undefined4 **ppuStack_364;
  undefined1 local_360;
  undefined2 local_358;
  undefined1 local_356;
  int local_354;
  undefined4 ***local_350;
  int local_34c;
  undefined4 ****local_348;
  undefined4 **ppuStack_344;
  undefined1 local_340;
  undefined2 local_33c;
  undefined1 local_33a;
  undefined4 ****local_338;
  undefined4 **local_334;
  undefined1 auStack_330 [168];
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 ***local_278;
  undefined4 ***local_274;
  undefined *local_270;
  undefined4 local_26c;
  undefined *local_268;
  undefined4 local_264;
  undefined *local_260;
  undefined4 local_25c;
  undefined4 ***local_258;
  undefined4 ***local_254;
  int local_250;
  undefined4 ***local_24c;
  undefined4 ***local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 ****local_1a0;
  undefined4 **local_19c;
  undefined4 ****local_198;
  undefined4 **local_194;
  undefined4 **local_190;
  undefined4 **ppuStack_18c;
  undefined4 **ppuStack_188;
  undefined4 **ppuStack_184;
  undefined4 ***local_f0 [4];
  undefined4 local_e0;
  undefined4 **local_dc;
  undefined4 ****local_d8;
  undefined4 **local_d4;
  undefined4 **local_d0;
  undefined4 **local_cc;
  undefined4 **local_c8;
  undefined4 **local_c4;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 auStack_29 [5];
  
  if ((undefined1 *)*param_2 != &DAT_80000014) {
    uVar14 = FUN_014c8278(param_2,auStack_29,&DAT_01cf9ca4);
    *param_1 = 0x80000000;
    param_1[1] = uVar14;
    return;
  }
  local_6cc = param_2[1];
  puVar13 = (uint *)param_2[2];
  ppppuVar8 = (undefined4 ****)param_2[3];
  local_6e4 = 0;
  local_6c4 = 0;
  puVar16 = puVar13 + (int)ppppuVar8 * 4;
  ppppuVar20 = (undefined4 ****)0x1555;
  if (ppppuVar8 < (undefined4 ****)0x1555) {
    ppppuVar20 = ppppuVar8;
  }
  local_6d4 = puVar13;
  local_6d0 = puVar13;
  local_6c8 = puVar16;
  if (ppppuVar8 == (undefined4 ****)0x0) {
    local_6ac = 4;
    ppppuVar20 = (undefined4 ****)0x0;
  }
  else {
    local_6ac = FUN_01298504((int)ppppuVar20 * 0xc0,4);
    if (local_6ac == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,(int)ppppuVar20 * 0xc0);
    }
  }
  puVar9 = &local_e0;
  puVar2 = (undefined4 *)((uint)local_f0 | 4);
  puVar3 = (undefined4 *)((uint)&local_288 | 4);
  puVar4 = (undefined2 *)((uint)puVar9 | 1);
  puVar11 = (uint *)((uint)&local_460 | 4);
  local_6a8 = (undefined4 ****)0x0;
  ppppuVar8 = &local_6b0;
  local_6b0 = ppppuVar20;
  while( true ) {
    puVar10 = puVar9;
    if (puVar13 != puVar16) {
      puVar10 = puVar13 + 4;
      ppppuVar8 = (undefined4 ****)*puVar13;
      local_6d0 = puVar10;
    }
    if (puVar13 == puVar16 || ppppuVar8 == (undefined4 ****)0x80000015) {
      *param_1 = (uint)local_6b0;
      param_1[1] = local_6ac;
      param_1[2] = (uint)local_6a8;
      if (*param_1 != 0x80000000) {
        local_6c0 = *param_1;
        uStack_6bc = param_1[1];
        uStack_6b8 = param_1[2];
        uVar14 = FUN_014ca838(&local_6d4);
        if (uVar14 == 0) {
          return;
        }
        *param_1 = 0x80000000;
        param_1[1] = uVar14;
        FUN_014caa18(&local_6c0);
        return;
      }
      goto LAB_014df9a8;
    }
    uVar14 = puVar13[2];
    uVar17 = puVar13[3];
    *puVar11 = puVar13[1];
    puVar11[1] = uVar14;
    puVar11[2] = uVar17;
    local_6e4 = local_6e4 + 1;
    local_6c4 = local_6e4;
    local_460 = ppppuVar8;
    if ((int)ppppuVar8 < 0) {
      ppuVar7 = (undefined4 **)FUN_014c8278(&local_460,auStack_29,&DAT_01cf9c24);
      goto LAB_014df994;
    }
    pppuVar21 = (undefined4 ***)0x8;
    local_450 = (undefined4 **)0x80000015;
    local_434 = local_45c + local_458 * 0x20;
    bVar23 = false;
    bVar19 = false;
    local_43c = local_45c;
    local_440 = local_45c;
    local_430 = 0;
    local_34c = 0;
    local_350 = (undefined4 ***)0x8;
    local_354 = 0;
    local_438 = ppppuVar8;
    while( true ) {
      iVar1 = local_34c;
      while( true ) {
        FUN_014c96ec(&local_e0,&local_450);
        ppuVar6 = local_450;
        ppuVar7 = local_dc;
        if (local_e0 == (undefined4 ****)0x80000017) goto LAB_014df984;
        if (local_e0 != (undefined4 ****)0x80000015) break;
        if (bVar23) {
          local_19c = (undefined4 **)0x4;
          local_1a0 = (undefined4 ****)&DAT_0056d618;
          local_dc = (undefined4 **)&DAT_0132b6a0;
          local_e0 = &local_1a0;
          ppuVar7 = (undefined4 **)FUN_019676ac(&DAT_005ab34f,&local_e0);
          goto LAB_014df984;
        }
        FUN_014c9a5c(&local_e0,&local_450);
        if (((uint)local_e0 & 1) != 0) {
          ppuVar7 = local_dc;
          goto LAB_014df984;
        }
        bVar23 = true;
        bVar19 = true;
        local_6e0 = local_dc;
        local_356 = *(undefined1 *)(puVar4 + 1);
        local_358 = *puVar4;
        local_368 = local_d8;
        ppuStack_364 = local_d4;
        local_360 = local_d0._0_1_;
        local_198 = (undefined4 ****)CONCAT31(local_198._1_3_,local_d0._0_1_);
        local_1a0 = local_368;
        local_19c = ppuStack_364;
      }
      if (local_e0 == (undefined4 ****)&DAT_80000016) break;
      local_19c = local_dc;
      local_198 = local_d8;
      local_194 = local_d4;
      bVar22 = local_450 == (undefined4 **)0x80000015;
      local_450 = (undefined4 **)0x80000015;
      local_1a0 = local_e0;
      if (bVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                     ,0x2c,&DAT_01cfa02c);
      }
      local_c8 = local_448;
      local_c4 = local_444;
      local_cc = local_44c;
      local_d0 = ppuVar6;
      if (iVar1 == local_354) {
        FUN_00a20ed0(&local_354);
        pppuVar21 = local_350;
      }
      pppuVar5 = pppuVar21 + iVar1 * 8;
      local_34c = iVar1 + 1;
      *pppuVar5 = local_e0;
      pppuVar5[1] = local_dc;
      pppuVar5[2] = local_d8;
      pppuVar5[3] = local_d4;
      pppuVar5[4] = local_d0;
      pppuVar5[5] = local_cc;
      pppuVar5[6] = local_c8;
      pppuVar5[7] = local_c4;
    }
    if (!bVar19) break;
    local_33a = local_356;
    local_33c = local_358;
    local_348 = local_368;
    ppuStack_344 = ppuStack_364;
    local_340 = local_360;
    local_274 = pppuVar21 + iVar1 * 8;
    local_26c = 2;
    local_270 = &DAT_01cfa50c;
    local_288._0_4_ = (undefined4 ***)0x80000015;
    local_25c = 8;
    local_260 = &DAT_0056fe10;
    local_264 = 0x10;
    local_268 = &DAT_00567828;
    local_278 = pppuVar21;
    FUN_014dc6c8(&local_e0,&local_288,&local_268);
    pppuVar21 = (undefined4 ***)local_288;
    if ((char)local_e0 == '\x01') {
LAB_014df2cc:
      ppuVar6 = local_dc;
      goto LAB_014df404;
    }
    if (local_e0._1_1_ == '\x02') {
      local_19c = (undefined4 **)0x10;
      local_1a0 = (undefined4 ****)&DAT_00567828;
      local_dc = (undefined4 **)&DAT_0132b6a0;
      local_e0 = &local_1a0;
      ppuVar6 = (undefined4 **)FUN_019676ac(&DAT_0057cd64,&local_e0);
      goto LAB_014df384;
    }
    if (((uint)local_e0 & 0x100) == 0) {
      ppuVar6 = (undefined4 **)FUN_014dd544(&local_288);
      if (ppuVar6 != (undefined4 **)0x0) goto LAB_014df404;
      FUN_014dc6c8(&local_e0,&local_288,&local_268);
      pppuVar21 = (undefined4 ***)local_288;
      if ((char)local_e0 == '\x01') goto LAB_014df2cc;
      if (local_e0._1_1_ == '\x02') {
        local_19c = (undefined4 **)0x8;
        local_1a0 = (undefined4 ****)&DAT_0056fe10;
        local_dc = (undefined4 **)&DAT_0132b6a0;
        local_e0 = &local_1a0;
        ppuVar6 = (undefined4 **)FUN_019676ac(&DAT_0057cd64,&local_e0);
      }
      else {
        if (((uint)local_e0 & 0x100) != 0) {
          local_288._0_4_ = (undefined4 ***)0x80000015;
          if (pppuVar21 == (undefined4 ***)0x80000015) {
            ppuVar6 = (undefined4 **)FUN_019678c0(&DAT_0056ad38,0x10);
          }
          else {
            uVar15 = puVar3[1];
            uVar18 = puVar3[2];
            *puVar2 = *puVar3;
            puVar2[1] = uVar15;
            puVar2[2] = uVar18;
            local_f0[0] = pppuVar21;
            FUN_014f281c(&local_e0,local_f0);
            ppuVar6 = local_dc;
            ppppuVar20 = local_e0;
            if (local_e0 != (undefined4 ****)&SUB_00000004) {
              FUN_01bed4e2(&local_258,&local_d8,0xa8);
              FUN_01bed4e2(&local_198,&local_258,0xa8);
              local_19c = ppuVar6;
              local_1a0 = ppppuVar20;
              FUN_014dc6c8(&local_e0,&local_288,&local_268);
              if ((char)local_e0 != '\0') goto LAB_014df58c;
              if (local_e0._1_1_ != '\x02') {
                bVar23 = ((uint)local_e0 & 0x100) != 0;
                local_254 = (undefined4 ***)0x10;
                if (bVar23) {
                  local_254 = (undefined4 ***)0x8;
                }
                local_258 = (undefined4 ***)&DAT_00567828;
                if (bVar23) {
                  local_258 = (undefined4 ***)&DAT_0056fe10;
                }
                local_dc = (undefined4 **)&DAT_0132b6a0;
                local_e0 = &local_258;
                ppuVar6 = (undefined4 **)FUN_019676ac(&DAT_005ab34f,&local_e0);
                goto LAB_014df960;
              }
LAB_014df5a8:
              FUN_01bed4e2(&local_e0,&local_198,0xa8);
              goto LAB_014df5b8;
            }
          }
          goto LAB_014df404;
        }
        local_19c = (undefined4 **)0x10;
        local_1a0 = (undefined4 ****)&DAT_00567828;
        local_dc = (undefined4 **)&DAT_0132b6a0;
        local_e0 = &local_1a0;
        ppuVar6 = (undefined4 **)FUN_019676ac(&DAT_005ab34f,&local_e0);
      }
LAB_014df384:
      ppppuVar20 = (undefined4 ****)&SUB_00000004;
LAB_014df5b8:
      if ((undefined4 ***)local_288 != (undefined4 ***)0x80000015) {
LAB_014df5c4:
        FUN_014f888c(&local_288);
      }
      bVar23 = ppppuVar20 == (undefined4 ****)&SUB_00000004;
      if (ppppuVar20 == (undefined4 ****)&SUB_00000004) goto LAB_014df5e0;
      FUN_01bed4e2(&local_1a0,&local_e0,0xa8);
    }
    else {
      local_288._0_4_ = (undefined4 ***)0x80000015;
      if (pppuVar21 != (undefined4 ***)0x80000015) {
        local_1ac = local_288._4_4_;
        local_1a8 = local_280;
        uStack_1a4 = uStack_27c;
        local_1b0 = pppuVar21;
        FUN_014dc6c8(&local_e0,&local_288,&local_268);
        if ((char)local_e0 != '\x01') {
          if (local_e0._1_1_ == '\x02') {
            local_19c = (undefined4 **)0x10;
            local_1a0 = (undefined4 ****)&DAT_00567828;
            local_dc = (undefined4 **)&DAT_0132b6a0;
            local_e0 = &local_1a0;
            ppuVar6 = (undefined4 **)FUN_019676ac(&DAT_0057cd64,&local_e0);
          }
          else {
            if (((uint)local_e0 & 0x100) == 0) {
              ppuVar6 = (undefined4 **)FUN_014dd544(&local_288);
              if (ppuVar6 == (undefined4 **)0x0) {
                FUN_014f281c(&local_e0,&local_1b0);
                ppuVar6 = local_dc;
                ppppuVar20 = local_e0;
                if (local_e0 != (undefined4 ****)&SUB_00000004) {
                  FUN_01bed4e2(&local_198,&local_d8,0xa8);
                  local_19c = ppuVar6;
                  local_1a0 = ppppuVar20;
                  FUN_014dc6c8(&local_e0,&local_288,&local_268);
                  if ((char)local_e0 == '\0') {
                    if (local_e0._1_1_ == '\x02') goto LAB_014df5a8;
                    bVar23 = ((uint)local_e0 & 0x100) != 0;
                    local_254 = (undefined4 ***)0x10;
                    if (bVar23) {
                      local_254 = (undefined4 ***)0x8;
                    }
                    local_258 = (undefined4 ***)&DAT_00567828;
                    if (bVar23) {
                      local_258 = (undefined4 ***)&DAT_0056fe10;
                    }
                    local_dc = (undefined4 **)&DAT_0132b6a0;
                    local_e0 = &local_258;
                    ppuVar6 = (undefined4 **)FUN_019676ac(&DAT_005ab34f,&local_e0);
LAB_014df960:
                    FUN_014f8a14(&local_1a0);
                    ppppuVar20 = (undefined4 ****)&SUB_00000004;
                    goto LAB_014df5b8;
                  }
LAB_014df58c:
                  ppuVar6 = local_dc;
                  FUN_014f8a14(&local_1a0);
                }
                goto LAB_014df404;
              }
              goto LAB_014df3f8;
            }
            local_19c = (undefined4 **)0x8;
            local_1a0 = (undefined4 ****)&DAT_0056fe10;
            local_dc = (undefined4 **)&DAT_0132b6a0;
            local_e0 = &local_1a0;
            ppuVar6 = (undefined4 **)FUN_019676ac(&DAT_005ab34f,&local_e0);
          }
          ppppuVar20 = (undefined4 ****)&SUB_00000004;
          FUN_014f888c(&local_1b0);
          goto LAB_014df5b8;
        }
        ppuVar6 = local_dc;
LAB_014df3f8:
        FUN_014f888c(&local_1b0);
LAB_014df404:
        ppppuVar20 = (undefined4 ****)&SUB_00000004;
        if ((undefined4 ***)local_288 == (undefined4 ***)0x80000015) goto LAB_014df414;
        goto LAB_014df5c4;
      }
      ppuVar6 = (undefined4 **)FUN_019678c0(&DAT_0056ad38,0x10);
LAB_014df414:
      ppppuVar20 = (undefined4 ****)&SUB_00000004;
      bVar23 = true;
LAB_014df5e0:
      FUN_00d47b64(ppuVar6);
      ppuVar6 = local_734;
    }
    FUN_01bed4e2(&local_e0,&local_1a0,0xa8);
    FUN_01bed4e2(auStack_330,&local_e0,0xa8);
    local_24c = local_350 + local_34c * 8;
    local_254 = local_350;
    local_258 = local_350;
    local_250 = local_354;
    local_338 = ppppuVar20;
    local_334 = ppuVar6;
    FUN_014ddf5c(&local_e0,&local_258);
    if (local_e0 != (undefined4 ****)&DAT_80000016) {
      local_1a0 = local_e0;
      local_19c = local_dc;
      local_198 = local_d8;
      local_194 = local_d4;
      local_190 = local_d0;
      ppuStack_18c = local_cc;
      ppuStack_188 = local_c8;
      ppuStack_184 = local_c4;
      if ((undefined1 *)0x1 < (undefined1 *)((int)local_e0 + 0x7fffffeb)) {
        uVar24 = FUN_01962cb0(&local_1a0);
        if ((int)uVar24 == 0) {
          ppuVar7 = (undefined4 **)
                    FUN_019676ac("unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements"
                                 ,0x25);
        }
        else {
          local_f0[0] = (undefined4 ***)&local_288;
          local_e0 = local_f0;
          local_dc = (undefined4 **)&LAB_01963050;
          local_288 = uVar24;
          ppuVar7 = (undefined4 **)FUN_019676ac(&DAT_005bc768,&local_e0);
        }
        FUN_014c81b0(&local_1a0);
        FUN_014c81b0(&local_190);
        FUN_014debf8(&local_258);
        if (!bVar23) {
          FUN_014c9bb4(&local_338);
        }
        goto LAB_014df98c;
      }
    }
    FUN_014debf8(&local_258);
    FUN_01bed4e2(&local_e0,auStack_330,0xa8);
    local_36 = local_33a;
    local_38 = local_33c;
    local_520 = local_348;
    ppuStack_51c = ppuStack_344;
    local_518 = local_340;
    FUN_01bed4e2(auStack_510,&local_e0,0xab);
    local_428 = ppppuVar20;
    local_424 = ppuVar6;
    FUN_01bed4e2(auStack_420,auStack_510,0xab);
    local_375 = local_6e0;
    FUN_01bed4e2(auStack_371,&local_520,9);
    ppuVar7 = (undefined4 **)FUN_014c9cac(&local_450);
    if (ppuVar7 == (undefined4 **)0x0) {
      ppuVar12 = ppuVar6;
    }
    else {
      ppppuVar20 = (undefined4 ****)&DAT_00000005;
      ppuVar12 = ppuVar7;
    }
    if (ppuVar7 != (undefined4 **)0x0 && !bVar23) {
      FUN_014c9bb4(&local_428);
      goto LAB_014df994;
    }
    if (ppppuVar20 == (undefined4 ****)&DAT_00000005) {
      ppuVar7 = ppuVar12;
LAB_014df994:
      *param_1 = 0x80000000;
      param_1[1] = (uint)ppuVar7;
      FUN_014caa18(&local_6b0);
LAB_014df9a8:
      FUN_014deb6c(&local_6d4);
      return;
    }
    FUN_01bed4e2(auStack_690,auStack_510,0xab);
    local_6a0 = local_520;
    ppuStack_69c = ppuStack_51c;
    local_698 = local_518;
    local_5e0 = ppppuVar20;
    local_5dc = ppuVar12;
    FUN_01bed4e2(auStack_5d8,auStack_690,0xab);
    local_52d = local_6e0;
    FUN_01bed4e2(auStack_529,&local_6a0,9);
    ppppuVar8 = local_6a8;
    if (local_6a8 == local_6b0) {
      FUN_014f8a9c(&local_6b0);
    }
    FUN_01bed4e2(local_6ac + (int)ppppuVar8 * 0xc0,&local_5e0,0xc0);
    ppppuVar8 = (undefined4 ****)((int)ppppuVar8 + 1);
    puVar9 = extraout_r1;
    puVar13 = puVar10;
    local_734 = ppuVar6;
    local_6a8 = ppppuVar8;
  }
  local_19c = (undefined4 **)0x4;
  local_1a0 = (undefined4 ****)&DAT_0056d618;
  local_dc = (undefined4 **)&DAT_0132b6a0;
  local_e0 = &local_1a0;
  ppuVar7 = (undefined4 **)FUN_019676ac(&DAT_0057cd64,&local_e0);
LAB_014df984:
  FUN_014c9bdc(&local_354);
LAB_014df98c:
  FUN_014c9c60(&local_450);
  goto LAB_014df994;
}

