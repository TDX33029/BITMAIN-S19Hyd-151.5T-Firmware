// FUN_012399e0 @ 012399e0 size=1836 calls_out=16 calls_in=0
// strings: generatorstruct BosminerModelstruct FormatHeaderstruct BosminerConfig | model | model | generatorstruct BosminerModelstruct FormatHeaderstruct BosminerConfig

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012399e0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r11;
  bool bVar12;
  int local_370;
  uint local_36c;
  uint local_368;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_340;
  uint local_334;
  uint local_330;
  uint local_324;
  uint local_320;
  undefined1 auStack_318 [72];
  uint local_2d0;
  undefined1 auStack_2cc [112];
  uint *local_25c;
  uint *local_254;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  undefined1 auStack_218 [112];
  undefined1 auStack_1a8 [4];
  undefined4 local_1a4;
  int local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_118;
  uint local_114;
  uint local_110;
  undefined1 auStack_10c [4];
  undefined4 local_108;
  int local_104;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_01a5c7c0(auStack_318);
  local_334 = 2;
  local_330 = 0x80000001;
  uVar10 = 0x80000001;
  uVar11 = 0x80000001;
LAB_01239e9c:
  puVar1 = local_25c;
  bVar12 = local_25c != local_254;
  if (bVar12) {
    unaff_r11 = *local_25c;
    local_25c = local_25c + 0x30;
  }
  if (!bVar12 || unaff_r11 == 4) {
    if (uVar10 == 0x80000001) {
      uVar10 = 0x80000000;
    }
    param_1[8] = local_358;
    if (uVar11 == 0x80000001) {
      uVar11 = 0x80000000;
    }
    if (local_330 == 0x80000001) {
      local_330 = 0x80000000;
    }
    param_1[10] = local_340;
    param_1[0xb] = local_350;
    uVar6 = 0;
    if (local_334 != 2) {
      uVar6 = local_334;
    }
    *param_1 = 2;
    param_1[1] = uVar6;
    param_1[2] = local_35c;
    param_1[4] = local_348;
    param_1[5] = local_354;
    param_1[9] = uVar10;
    param_1[3] = local_330;
    param_1[6] = uVar11;
    param_1[7] = local_34c;
    goto LAB_01239f34;
  }
  FUN_01bed4e2(auStack_1a8,puVar1 + 0x1c,0x48);
  FUN_01bed4e2(auStack_218,puVar1 + 1,0x6c);
  uVar5 = local_194;
  uVar3 = local_198;
  uVar6 = local_19c;
  local_a8 = unaff_r11;
  FUN_01bed4e2((uint)&local_a8 | 4,auStack_218,0x6c);
  uVar7 = 0;
  if ((uVar6 != 0x80000003) && (uVar7 = (uint)(0x80000001 < uVar6), 0x80000001 < uVar6)) {
    local_320 = uVar3;
    local_324 = uVar5;
  }
  FUN_01a60910(&local_160,auStack_1a8);
  local_110 = local_324;
  local_114 = local_320;
  local_118 = uVar7;
  FUN_01bed4e2(auStack_10c,&local_160,0x48);
  uVar8 = local_108;
  if (local_104 == 5) {
    iVar4 = thunk_FUN_01bed842(local_108,"model",5);
    if (iVar4 == 0) {
      uVar8 = 1;
    }
    else {
LAB_01239b94:
      uVar8 = 4;
    }
  }
  else if (local_104 == 9) {
    iVar4 = thunk_FUN_01bed842(local_108,
                               "generatorstruct BosminerModelstruct FormatHeaderstruct BosminerConfig"
                               ,9);
    if (iVar4 == 0) {
      uVar8 = 2;
    }
    else {
      iVar4 = thunk_FUN_01bed842(uVar8,&DAT_004c1920,9);
      if (iVar4 != 0) goto LAB_01239b94;
      uVar8 = 3;
    }
  }
  else {
    if ((local_104 != 7) || (iVar4 = thunk_FUN_01bed842(local_108,&DAT_00520eda,7), iVar4 != 0))
    goto LAB_01239b94;
    uVar8 = 0;
  }
  FUN_01272af8(auStack_10c);
  FUN_01237bd0(auStack_318);
  FUN_01bed4e2(auStack_318,auStack_1a8,0x48);
  local_2d0 = unaff_r11;
  FUN_01bed4e2(auStack_2cc,auStack_218,0x6c);
  uVar5 = local_194;
  uVar3 = local_198;
  uVar6 = local_19c;
  iVar4 = local_1a0;
  uVar2 = local_1a4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar8) {
  case 0:
    if (local_330 == 0x80000001) {
      FUN_01238d1c(&local_a8,auStack_318);
      local_330 = local_a4;
      if (local_a8 != 2) {
        param_1[4] = local_98;
        param_1[5] = uStack_94;
        param_1[6] = local_90;
        param_1[7] = local_8c;
        param_1[8] = local_88;
        param_1[9] = uStack_84;
        param_1[10] = uStack_80;
        param_1[0xb] = uStack_7c;
        local_330 = 0x80000001;
        *param_1 = local_a8;
        param_1[3] = local_9c;
        param_1[1] = local_a4;
        param_1[2] = local_a0;
        goto LAB_01239f6c;
      }
      local_354 = local_9c;
      local_348 = local_a0;
      goto LAB_01239e9c;
    }
    FUN_0123c090(&local_a8,&DAT_00520eda,7);
    break;
  case 1:
    if (uVar11 == 0x80000001) {
      FUN_01238d1c(&local_a8,auStack_318);
      if (local_a8 != 2) {
        param_1[4] = local_98;
        param_1[5] = uStack_94;
        param_1[6] = local_90;
        param_1[7] = local_8c;
        param_1[8] = local_88;
        param_1[9] = uStack_84;
        param_1[10] = uStack_80;
        param_1[0xb] = uStack_7c;
        *param_1 = local_a8;
        param_1[1] = local_a4;
        param_1[2] = local_a0;
        uVar11 = 0x80000001;
        param_1[3] = local_9c;
        goto LAB_01239f6c;
      }
      local_358 = local_9c;
      local_34c = local_a0;
      uVar11 = local_a4;
      goto LAB_01239e9c;
    }
    FUN_0123c090(&local_a8,"model",5);
    break;
  case 2:
    if (uVar10 == 0x80000001) {
      FUN_01238d1c(&local_a8,auStack_318);
      local_340 = local_a0;
      local_350 = local_9c;
      uVar10 = local_a4;
      if (local_a8 != 2) {
        param_1[4] = local_98;
        param_1[5] = uStack_94;
        param_1[6] = local_90;
        param_1[7] = local_8c;
        param_1[8] = local_88;
        param_1[9] = uStack_84;
        param_1[10] = uStack_80;
        param_1[0xb] = uStack_7c;
        *param_1 = local_a8;
        param_1[1] = local_a4;
        param_1[2] = local_a0;
        param_1[3] = local_9c;
        goto LAB_01239f80;
      }
      goto LAB_01239e9c;
    }
    FUN_0123c090(&local_a8,"generatorstruct BosminerModelstruct FormatHeaderstruct BosminerConfig",9
                );
    break;
  case 3:
    if (local_334 == 2) {
      local_2d0 = 4;
      local_118 = unaff_r11;
      FUN_01bed4e2((uint)&local_118 | 4,auStack_218,0x6c);
      FUN_01a56a10(&local_a8,&local_118);
      if (local_a8 == 1) {
        local_368 = local_a4;
        uVar5 = local_a0;
LAB_01239d08:
        unaff_r11 = 1;
        local_36c = uVar5;
      }
      else {
        unaff_r11 = 0;
        if ((uVar6 != 0x80000003) && (0x80000001 < uVar6)) {
          local_368 = uVar3;
          goto LAB_01239d08;
        }
      }
      FUN_01bed4e2(&local_a8,&local_118,0x70);
      local_38 = 0;
      FUN_0123e608(&local_160,&local_a8);
      if (local_160 == 2) {
        local_334 = local_15c;
        local_35c = local_158;
        uVar6 = 2;
      }
      else {
        local_a8 = local_160;
        local_a4 = local_15c;
        local_9c = uStack_154;
        local_98 = uStack_150;
        uStack_94 = uStack_14c;
        local_90 = local_148;
        local_8c = uStack_144;
        local_88 = uStack_140;
        uStack_84 = uStack_13c;
        uStack_80 = uStack_138;
        uStack_7c = uStack_134;
        iVar9 = 0;
        local_a0 = local_158;
        if ((local_160 & 1) == 0) {
          local_a4 = local_368;
          local_a8 = unaff_r11;
          local_a0 = local_36c;
        }
        if (iVar4 < 0) {
LAB_0123a114:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(iVar9,local_370);
        }
        if (iVar4 == 0) {
          local_370 = 1;
        }
        else {
          iVar9 = 1;
          local_370 = FUN_01298504(iVar4,1);
          if (local_370 == 0) {
            local_370 = iVar4;
            goto LAB_0123a114;
          }
          iVar9 = iVar4;
        }
        FUN_01bed4e2(local_370,uVar2,iVar4);
        iStack_28 = iVar4;
        local_30 = iVar9;
        iStack_2c = local_370;
        FUN_01a4c560(&local_a8,&local_30);
        local_334 = local_a4;
        local_35c = local_a0;
        local_240 = local_9c;
        uStack_23c = local_98;
        uStack_238 = uStack_94;
        uStack_234 = local_90;
        local_230 = local_8c;
        uStack_22c = local_88;
        uStack_228 = uStack_84;
        uStack_224 = uStack_80;
        uStack_220 = uStack_7c;
        uVar6 = local_a8;
      }
      FUN_01272af8(auStack_318);
      if (uVar6 != 2) {
        param_1[3] = local_240;
        param_1[4] = uStack_23c;
        param_1[5] = uStack_238;
        param_1[6] = uStack_234;
        param_1[7] = local_230;
        param_1[8] = uStack_22c;
        param_1[9] = uStack_228;
        param_1[10] = uStack_224;
        param_1[0xb] = uStack_220;
        param_1[1] = local_334;
        *param_1 = uVar6;
        param_1[2] = local_35c;
        goto LAB_01239f6c;
      }
      goto LAB_01239e9c;
    }
    FUN_0123c090(&local_a8,&DAT_004c1920,9);
    break;
  default:
    goto switchD_01239bf8_default;
  }
  *param_1 = local_a8;
  param_1[1] = local_a4;
  param_1[2] = local_a0;
  param_1[3] = local_9c;
  param_1[4] = local_98;
  param_1[5] = uStack_94;
  param_1[6] = local_90;
  param_1[7] = local_8c;
  param_1[8] = local_88;
  param_1[9] = uStack_84;
  param_1[10] = uStack_80;
  param_1[0xb] = uStack_7c;
  goto LAB_01239f6c;
switchD_01239bf8_default:
  FUN_012383e4(&local_a8,auStack_318);
  if (local_a8 != 2) {
    param_1[1] = local_a4;
    param_1[2] = local_a0;
    param_1[3] = local_9c;
    param_1[4] = local_98;
    param_1[5] = uStack_94;
    param_1[6] = local_90;
    param_1[7] = local_8c;
    param_1[8] = local_88;
    param_1[9] = uStack_84;
    param_1[10] = uStack_80;
    param_1[0xb] = uStack_7c;
    *param_1 = local_a8;
LAB_01239f6c:
    if (-0x7fffffff < (int)uVar10) {
      FUN_019bb7e0(uVar10,local_340);
    }
LAB_01239f80:
    if (-0x7fffffff < (int)uVar11) {
      FUN_019bb7e0(uVar11,local_34c);
    }
    if (-0x7fffffff < (int)local_330) {
      FUN_019bb7e0(local_330,local_348);
    }
LAB_01239f34:
    FUN_01238f18(auStack_318);
    return;
  }
  goto LAB_01239e9c;
}

