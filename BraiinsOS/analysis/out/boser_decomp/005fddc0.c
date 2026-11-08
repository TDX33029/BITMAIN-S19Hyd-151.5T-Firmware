// FUN_005fddc0 @ 005fddc0 size=540 calls_out=9 calls_in=1
// strings: 

void FUN_005fddc0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint local_358;
  int local_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 auStack_338 [128];
  int local_2b8 [19];
  int local_26c;
  undefined4 local_268;
  uint local_260;
  int local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 auStack_240 [216];
  undefined1 auStack_168 [40];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x15)) {
  case 0:
    *(undefined1 *)(param_2 + 5) = 0;
    local_258 = 0;
    local_25c = 4;
    local_260 = 0;
    uVar4 = FUN_00a12740(param_2[4],param_2[2],param_2[3],&local_260);
    puVar5 = &DAT_01c0d460;
    *param_2 = uVar4;
    param_2[1] = &DAT_01c0d460;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c02768);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c02768);
  case 3:
    uVar4 = *param_2;
    puVar5 = (undefined *)param_2[1];
  }
  (**(code **)(puVar5 + 0xc))(&local_260,uVar4,param_3);
  iVar2 = local_25c;
  uVar1 = local_260;
  if (local_260 == 6 && local_25c == 0) {
    *param_1 = 6;
    param_1[1] = 0;
    uVar3 = 3;
  }
  else {
    local_90 = local_258;
    uStack_8c = uStack_254;
    uStack_88 = uStack_250;
    uStack_84 = uStack_24c;
    uStack_80 = uStack_248;
    uStack_7c = uStack_244;
    FUN_01bed4e2(auStack_168,auStack_240,0xd8);
    FUN_01139b38(*param_2,param_2[1]);
    if (uVar1 == 5 && iVar2 == 0) {
      local_40 = local_90;
      uStack_3c = uStack_8c;
      uStack_38 = uStack_88;
      uStack_34 = uStack_84;
      uStack_30 = uStack_80;
      uStack_2c = uStack_7c;
      local_140 = 5;
      local_13c = 0;
      if (*(char *)(param_2 + 5) == '\x01') {
        FUN_01139b38(param_2[2],param_2[3]);
      }
    }
    else {
      FUN_01bed4e2(auStack_338,auStack_168,0xd8);
      local_350 = local_90;
      uStack_34c = uStack_8c;
      uStack_348 = uStack_88;
      uStack_344 = uStack_84;
      uStack_340 = uStack_80;
      uStack_33c = uStack_7c;
      local_354 = iVar2;
      local_358 = uVar1;
      if (local_2b8[0] != -0x80000000) {
        FUN_005f9800(local_2b8);
      }
      if ((uint)-iVar2 < (uint)(uVar1 < 2)) {
        FUN_005f8158(&local_358);
      }
      if (-1 < local_26c) {
        FUN_019bb7e0(local_26c,local_268);
      }
      local_40 = local_138;
      uStack_3c = uStack_134;
      uStack_38 = uStack_130;
      uStack_34 = uStack_12c;
      uStack_30 = uStack_128;
      uStack_2c = uStack_124;
      local_78 = local_120;
      uStack_74 = uStack_11c;
      uStack_70 = uStack_118;
      uStack_6c = uStack_114;
      local_68 = local_110;
      uStack_64 = uStack_10c;
      uStack_60 = uStack_108;
      uStack_5c = uStack_104;
      uStack_58 = uStack_100;
      local_54 = local_fc;
      uStack_50 = uStack_f8;
      uStack_4c = uStack_f4;
      uStack_48 = uStack_f0;
      uStack_44 = uStack_ec;
    }
    *param_1 = local_140;
    param_1[1] = local_13c;
    param_1[2] = local_40;
    param_1[3] = uStack_3c;
    param_1[4] = uStack_38;
    param_1[5] = uStack_34;
    param_1[6] = uStack_30;
    param_1[7] = uStack_2c;
    param_1[8] = local_78;
    param_1[9] = uStack_74;
    param_1[10] = uStack_70;
    param_1[0xb] = uStack_6c;
    param_1[0xc] = local_68;
    param_1[0xd] = uStack_64;
    param_1[0xe] = uStack_60;
    param_1[0xf] = uStack_5c;
    param_1[0x10] = uStack_58;
    param_1[0x11] = local_54;
    param_1[0x12] = uStack_50;
    param_1[0x13] = uStack_4c;
    param_1[0x14] = uStack_48;
    param_1[0x15] = uStack_44;
    uVar3 = 1;
  }
  *(undefined1 *)((int)param_2 + 0x15) = uVar3;
  return;
}

