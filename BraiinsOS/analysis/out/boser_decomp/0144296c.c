// FUN_0144296c @ 0144296c size=468 calls_out=7 calls_in=1
// strings: slash is a valid path | scheme is valid

void FUN_0144296c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  *(undefined2 *)(param_1 + 10) = 0xffff;
  param_1[2] = (uint)&PTR_FUN_01cf4330;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (uint)&PTR_FUN_01cf426c;
  param_1[7] = (uint)&DAT_005327c4;
  param_1[8] = 1;
  param_1[9] = 0;
  *param_1 = 0;
  FUN_014157b8(&local_b0);
  uVar1 = local_b0 & 0xff;
  local_b0 = *param_2;
  uVar2 = param_2[1];
  if (uVar1 != 3) {
    FUN_01aa78c0(uVar1,local_ac);
  }
  local_ac = uVar2;
  FUN_012834b0(&local_80,&DAT_005327c4,1);
  FUN_014134f0(&local_50,&local_80);
  if (local_50 == 0) {
    local_80 = CONCAT31(local_80._1_3_,(undefined1)local_4c);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("slash is a valid path",0x15,&local_80,&DAT_01cf8954,&DAT_01cf839c);
  }
  local_80 = local_50;
  uStack_7c = local_4c;
  uStack_78 = uStack_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  if (local_98 != 0) {
    (**(code **)(local_98 + 0x10))(&uStack_8c,local_94,local_90);
  }
  local_98 = local_80;
  local_94 = uStack_7c;
  local_90 = uStack_78;
  uStack_8c = uStack_74;
  uStack_88 = uStack_70;
  local_50 = local_b0;
  local_4c = local_ac;
  uStack_48 = uStack_a8;
  uStack_44 = uStack_a4;
  uStack_40 = uStack_a0;
  local_3c = local_9c;
  uStack_38 = local_80;
  uStack_34 = uStack_7c;
  uStack_30 = uStack_78;
  uStack_2c = uStack_74;
  uStack_28 = uStack_70;
  FUN_01414ce8(&local_80,&local_50);
  if ((char)local_80 == '\x03') {
    local_50 = CONCAT31(local_50._1_3_,local_80._1_1_);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("scheme is valid",0xf,&local_50,&DAT_01cf8964,&DAT_01cf83ac);
  }
  local_50 = local_80;
  local_4c = uStack_7c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  local_3c = local_6c;
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  FUN_01435814(param_1);
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = local_3c;
  param_1[6] = uStack_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  return;
}

