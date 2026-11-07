// FUN_0079c500 @ 0079c500 size=780 calls_out=4 calls_in=2
// strings: 

void FUN_0079c500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,int param_7,undefined *param_8,int param_9,
                 undefined *param_10,undefined4 param_11,undefined4 param_12,undefined1 *param_13,
                 undefined4 param_14,undefined4 param_15)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 local_4e8;
  undefined1 local_4e4;
  undefined1 auStack_4e0 [272];
  undefined1 auStack_3d0 [96];
  undefined1 auStack_370 [632];
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  local_4e4 = 0;
  local_4e8 = 0;
  FUN_016dd1aa(auStack_4e0,param_2,0x110);
  FUN_00702a70(auStack_3d0);
  FUN_006f853c(auStack_370);
  local_80 = *param_6;
  local_7c = param_6[1];
  uVar2 = param_6[2];
  local_e4 = 0;
  local_e8 = 4;
  local_ec = 0;
  local_f0 = local_f0 & 0xffffff00;
  local_f4 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_bc = 0;
  local_c0 = 4;
  local_c4 = 0;
  local_c8 = local_c8 & 0xffffff00;
  local_cc = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 8;
  local_84 = 0;
  puVar3 = &UNK_0185cfb4;
  local_88 = 0;
  local_8c = 0;
  local_90 = 4;
  local_94 = 0;
  local_98 = local_98 & 0xffffff00;
  local_9c = 0;
  local_a0 = 0;
  local_64 = 0;
  local_68 = 4;
  local_6c = 0;
  local_70 = local_70 & 0xffffff00;
  local_74 = 0;
  local_78 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_38 = DAT_018cc6d8;
  local_48 = 2;
  if (param_9 == 0) {
    param_9 = 1;
  }
  else {
    puVar3 = param_10;
  }
  if (param_7 == 0) {
    param_7 = 1;
    param_8 = &UNK_0185cf9c;
  }
  if (DAT_018dd947 == '\0') {
    local_28 = DAT_018cc6d8 + 0x1c;
    local_2c = 0;
    local_30 = 4;
    FUN_01694880(&local_50,&local_30);
  }
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  FUN_016dd1aa(param_1 + 0xf4,&local_4e8,0x118);
  FUN_016dd1aa(param_1 + 0xdc,param_5,0x48);
  FUN_016dd1aa(param_1 + 0xa8,auStack_3d0,0x60);
  FUN_016dd1aa(param_1 + 8,auStack_370,0x270);
  param_1[0x150] = local_f8;
  param_1[0x151] = local_f4;
  param_1[0x152] = local_f0;
  param_1[0x153] = local_ec;
  param_1[0x154] = local_e8;
  param_1[0x155] = local_e4;
  param_1[0x156] = local_e0;
  param_1[0x157] = local_dc;
  param_1[0x158] = local_d8;
  param_1[0xc0] = local_d0;
  param_1[0xc1] = local_cc;
  param_1[0xc2] = local_c8;
  param_1[0xc3] = local_c4;
  param_1[0xc4] = local_c0;
  param_1[0xc5] = local_bc;
  param_1[0xc6] = local_b8;
  param_1[199] = local_b4;
  param_1[200] = local_b0;
  param_1[0xc9] = local_ac;
  param_1[0xca] = local_a8;
  param_1[0xcb] = local_a4;
  param_1[0x14f] = uVar2;
  param_1[0x13a] = local_a0;
  param_1[0x13b] = local_9c;
  param_1[0x13c] = local_98;
  param_1[0x13d] = local_94;
  param_1[0x13e] = local_90;
  param_1[0x13f] = local_8c;
  param_1[0x140] = local_88;
  param_1[0x141] = local_84;
  param_1[0x142] = local_80;
  param_1[0x143] = local_7c;
  param_1[0x144] = local_78;
  param_1[0x145] = local_74;
  param_1[0x146] = local_70;
  param_1[0x147] = local_6c;
  param_1[0x148] = local_68;
  param_1[0x149] = local_64;
  param_1[0x14a] = local_60;
  param_1[0x14b] = local_5c;
  param_1[0x14c] = local_58;
  param_1[0x14d] = uStack_54;
  if (param_13 == &DAT_3b9aca00) {
    param_11 = 0x96;
  }
  param_1[0xee] = param_7;
  if (param_13 == &DAT_3b9aca00) {
    param_12 = 0;
  }
  param_1[0xa4] = param_11;
  param_1[0xa5] = param_12;
  puVar1 = (undefined1 *)0x0;
  if (param_13 != &DAT_3b9aca00) {
    puVar1 = param_13;
  }
  param_1[0xef] = param_8;
  param_1[0xf0] = param_3;
  param_1[0xf1] = param_4;
  param_1[0xf3] = puVar3;
  param_1[0xa6] = puVar1;
  param_1[0x159] = param_15;
  param_1[0xd0] = 4;
  param_1[0xf2] = param_9;
  param_1[0x14e] = param_14;
  param_1[0xcf] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined2 *)(param_1 + 0xd4) = 2;
  return;
}

