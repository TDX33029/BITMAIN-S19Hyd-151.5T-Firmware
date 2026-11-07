// FUN_0191df28 @ 0191df28 size=400 calls_out=5 calls_in=2
// strings: 

void FUN_0191df28(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  undefined4 local_670 [2];
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined *local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_2cc;
  undefined4 local_250;
  undefined4 local_1d4;
  undefined4 local_158;
  undefined4 local_dc;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_350 = param_5;
  local_35c = param_12;
  local_370 = 8;
  local_378 = 1;
  local_34c = param_6;
  local_360 = param_11;
  local_374 = &DAT_0056fb48;
  local_36c = *param_7;
  uStack_368 = param_7[1];
  uStack_364 = param_7[2];
  local_dc = 0x80000001;
  local_158 = 0x80000001;
  local_1d4 = 0x80000001;
  local_250 = 0x80000001;
  local_2cc = 0x80000001;
  local_348 = 0x80000001;
  local_28 = 200000;
  local_5c = 0;
  local_24 = 250000;
  local_2c = 100;
  uStack_358 = param_3;
  uStack_354 = param_4;
  local_60 = param_2;
  FUN_01aebfc0(&local_58,&local_378,&local_348,250000,param_9,param_10,0,&local_2c);
  uVar1 = local_5c;
  if (local_58 == 2 && local_54 == 0) {
    FUN_01bed4e2((uint)local_670 | 4,&local_348,0x2e8);
    local_37c = local_50;
    local_670[0] = 0;
    *param_1 = 0x80000029;
    local_384 = uVar1;
    local_380 = param_2;
    FUN_0191e0d0(local_670);
  }
  else {
    local_668 = local_50;
    uStack_664 = uStack_4c;
    uStack_660 = uStack_48;
    uStack_65c = uStack_44;
    local_658 = local_40;
    uStack_654 = uStack_3c;
    uStack_650 = uStack_38;
    uStack_64c = uStack_34;
    FUN_01aed27c(&local_348);
    local_670[0] = 1;
    FUN_01917d68(&local_348,&local_668);
    *param_1 = local_348;
    param_1[1] = uStack_344;
    param_1[2] = uStack_340;
    param_1[3] = uStack_33c;
    param_1[4] = local_338;
    param_1[5] = uStack_334;
    param_1[6] = uStack_330;
    param_1[7] = uStack_32c;
  }
  return;
}

