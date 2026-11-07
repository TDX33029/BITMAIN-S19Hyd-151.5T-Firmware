// FUN_018e1d14 @ 018e1d14 size=804 calls_out=10 calls_in=3
// strings: chunk size must be non-zero

void FUN_018e1d14(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *local_3ec;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 local_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  int local_300 [17];
  int local_2bc;
  undefined1 auStack_2b8 [64];
  undefined1 auStack_278 [192];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  local_148 = 0;
  local_150 = 0;
  local_14c = 1;
  FUN_01ac6d2c(&local_150,param_6,param_6 + param_7);
  FUN_01ac6d2c(&local_150,param_8,param_8 + param_9);
  uVar4 = local_148;
  uVar3 = local_14c;
  uVar2 = local_150;
  FUN_0188fc54(&local_3a0,param_3,param_4,param_5);
  FUN_018908c4(local_300,&local_3a0,uVar3,uVar4);
  uVar5 = *(uint *)(param_3 + 0x48);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("chunk size must be non-zero",0x37,&DAT_01d232a0);
  }
  if (param_2 != 0) {
    local_3ec = &DAT_01d2571c;
    do {
      iVar1 = local_300[0];
      uVar6 = 0x40;
      uVar7 = *(uint *)(local_300[0] + 0x48);
      uVar8 = param_2;
      if (uVar5 < param_2) {
        uVar8 = uVar5;
      }
      if (0x40 < uVar7) goto LAB_018e2010;
      FUN_01bed93e(&local_150,0,0x80);
      local_d0 = local_3a0;
      uStack_cc = uStack_39c;
      uStack_c8 = uStack_398;
      uStack_c4 = uStack_394;
      uStack_c0 = uStack_390;
      local_bc = local_38c;
      uStack_b8 = uStack_388;
      uStack_b4 = uStack_384;
      uStack_b0 = uStack_380;
      uStack_ac = uStack_37c;
      local_a8 = local_378;
      uStack_a4 = uStack_374;
      uStack_a0 = uStack_370;
      uStack_9c = uStack_36c;
      uStack_98 = uStack_368;
      uStack_94 = uStack_364;
      local_1a0 = local_350;
      uStack_19c = uStack_34c;
      uStack_198 = uStack_348;
      uStack_194 = uStack_344;
      uStack_190 = uStack_340;
      local_18c = local_33c;
      uStack_188 = uStack_338;
      uStack_184 = uStack_334;
      uStack_180 = uStack_330;
      uStack_17c = uStack_32c;
      local_178 = local_328;
      uStack_174 = uStack_324;
      uStack_170 = uStack_320;
      uStack_16c = uStack_31c;
      uStack_168 = uStack_318;
      uStack_164 = uStack_314;
      FUN_01bed4e2(auStack_278,&local_150,0xc0);
      local_1b8 = local_360;
      uStack_1b4 = uStack_35c;
      local_160 = local_310;
      uStack_15c = local_30c;
      local_1a8 = 0;
      local_1b0 = local_358;
      local_158 = local_308;
      FUN_018900dc(auStack_278,(uint)local_300 | 4,uVar7);
      FUN_018900dc(auStack_278,uVar3,uVar4);
      FUN_01bed4e2(&local_150,auStack_278,0x128);
      FUN_018909c8(&local_2bc,&local_150);
      uVar6 = *(uint *)(local_2bc + 0x48);
      if (0x40 < uVar6) {
        uVar7 = uVar6;
LAB_018e1ff4:
        uVar6 = 0x40;
LAB_018e2010:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar7,uVar6,local_3ec);
      }
      if (uVar6 < uVar8) {
        local_3ec = &DAT_01d232b0;
        uVar7 = uVar8;
        goto LAB_018e2010;
      }
      FUN_01bed4e2(param_1,auStack_2b8,uVar8);
      uVar7 = *(uint *)(iVar1 + 0x48);
      if (0x40 < uVar7) goto LAB_018e1ff4;
      FUN_018908c4(&local_150,&local_3a0,(uint)local_300 | 4,uVar7);
      param_2 = param_2 - uVar8;
      param_1 = param_1 + uVar8;
      FUN_01bed4e2(local_300,&local_150,0x44);
    } while (param_2 != 0);
  }
  FUN_0134bd64(uVar2,uVar3);
  return;
}

