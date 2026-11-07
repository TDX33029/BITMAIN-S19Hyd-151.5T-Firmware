// FUN_00fd70d0 @ 00fd70d0 size=920 calls_out=15 calls_in=0
// strings: data did not match any variant of untagged enum BatchRequesta non-empty sequence

void FUN_00fd70d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 **ppuVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *local_370;
  int local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined1 local_34c;
  undefined1 *local_348;
  int local_344;
  int iStack_340;
  uint uStack_33c;
  undefined1 *local_338;
  undefined1 *local_334;
  undefined1 *local_330;
  undefined4 local_28c;
  undefined1 *local_278;
  undefined1 *local_274;
  undefined1 *local_270;
  undefined1 *local_26c;
  undefined1 *local_268;
  undefined1 *local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 auStack_250 [168];
  undefined1 *local_1a8 [43];
  int local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  
  local_34c = 0x80;
  local_350 = 0;
  local_354 = 0;
  local_360 = 0;
  local_364 = 1;
  local_368 = 0;
  local_35c = param_2;
  local_358 = param_3;
  FUN_0127fefc(&local_e8,&local_368);
  puVar6 = local_e8;
  if (local_e8 == (undefined1 *)0x80000015) {
    *param_1 = local_e4;
    param_1[0x2b] = -0x7fffffff;
    goto LAB_00fd740c;
  }
  local_344 = local_e4;
  iStack_340 = local_e0;
  uStack_33c = local_dc;
  local_348 = local_e8;
  FUN_00db03ec(&local_e8,&local_348);
  if (local_3c == -0x80000000) {
    local_fc = -0x7fffffff;
    local_1a8[0] = local_e8;
LAB_00fd7190:
    FUN_00ddc2fc(local_1a8);
    if (puVar6 == &DAT_80000014) {
      puVar6 = (undefined1 *)0x1555;
      if ((undefined1 *)(local_dc & 0xfffffff) < (undefined1 *)0x1555) {
        puVar6 = (undefined1 *)(local_dc & 0xfffffff);
      }
      if (local_dc == 0) {
        puVar6 = (undefined1 *)0x0;
        local_370 = (undefined1 *)0x8;
      }
      else {
        local_370 = (undefined1 *)FUN_01298504((int)puVar6 * 0xc0,8);
        if (local_370 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,(int)puVar6 * 0xc0);
        }
      }
      local_36c = 0;
      local_268 = local_370;
      local_264 = (undefined1 *)0x0;
      iVar5 = local_e0;
      local_26c = puVar6;
      for (iVar4 = local_dc << 4; puVar6 = local_264, iVar4 != 0; iVar4 = iVar4 + -0x10) {
        FUN_00db03ec(&local_e8,iVar5);
        iVar2 = local_3c;
        puVar1 = local_e8;
        if (local_3c == -0x80000000) {
          FUN_00ddc31c(&local_26c);
          local_370 = local_e8;
          goto LAB_00fd733c;
        }
        FUN_01bed4e2(auStack_250,(uint)&local_e8 | 4,0xa8);
        local_260 = local_38;
        uStack_25c = uStack_34;
        uStack_258 = uStack_30;
        uStack_254 = uStack_2c;
        local_1a8[0] = puVar1;
        FUN_01bed4e2((uint)local_1a8 | 4,auStack_250,0xa8);
        local_fc = iVar2;
        local_f8 = local_260;
        uStack_f4 = uStack_25c;
        uStack_f0 = uStack_258;
        uStack_ec = uStack_254;
        if (puVar6 == local_26c) {
          FUN_006e4e68(&local_26c);
          local_370 = local_268;
        }
        iVar5 = iVar5 + 0x10;
        FUN_01bed4e2(local_370 + local_36c,local_1a8,0xc0);
        local_36c = local_36c + 0xc0;
        local_264 = puVar6 + 1;
      }
      if (local_26c == (undefined1 *)0x80000000) {
      }
      else {
        local_274 = local_370;
        local_278 = local_26c;
        local_270 = local_264;
        if (local_264 != (undefined1 *)0x0) {
          local_28c = 0x80000000;
          local_334 = local_370;
          ppuVar3 = &local_338;
          local_338 = local_26c;
          local_330 = local_264;
          goto LAB_00fd73b8;
        }
        local_370 = (undefined1 *)FUN_012cc2c0(0,&DAT_01c16448,&DAT_01d064b8);
        FUN_00ddc31c(&local_278);
      }
    }
    else {
      local_370 = (undefined1 *)FUN_014c82dc(&local_348,&uStack_25,&DAT_01c1cb18);
    }
LAB_00fd733c:
    local_28c = 0x80000001;
    local_338 = local_370;
    FUN_00ddc2fc(&local_338);
    iVar4 = FUN_019678c0("data did not match any variant of untagged enum BatchRequesta non-empty sequence"
                         ,0x3c);
    *param_1 = iVar4;
    param_1[0x2b] = -0x7fffffff;
    FUN_00db3970(&local_348);
  }
  else {
    FUN_01bed4e2(local_1a8,&local_e8,0xc0);
    if (local_fc == -0x7fffffff) goto LAB_00fd7190;
    ppuVar3 = local_1a8;
LAB_00fd73b8:
    FUN_01bed4e2(param_1,ppuVar3,0xc0);
    FUN_00db3970(&local_348);
    if (param_1[0x2b] != -0x7fffffff) {
      FUN_01bed4e2(&local_e8,param_1,0xc0);
      iVar4 = FUN_012c6abc(&local_368);
      if (iVar4 != 0) {
        *param_1 = iVar4;
        param_1[0x2b] = -0x7fffffff;
        FUN_00fd6bbc(&local_e8);
      }
    }
  }
LAB_00fd740c:
  FUN_019bb7e0(local_368,local_364);
  return;
}

