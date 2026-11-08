// FUN_00715f4c @ 00715f4c size=380 calls_out=1 calls_in=1
// strings: 

void FUN_00715f4c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *extraout_r12;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  undefined *local_9c;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined *local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  (**(code **)(param_2[1] + 0xc))(&local_a8,*param_2);
  uVar1 = 0;
  if ((local_a8 & 7) == 4) {
    local_a0 = FUN_00715ebc(local_a0,local_9c);
    local_a8 = 4;
    local_9c = &DAT_01c07620;
  }
  else if (local_a8 == 5) {
    local_a8 = 5;
    local_a0 = 5;
    local_9c = extraout_r12;
  }
  else {
    if (local_a8 == 6) {
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    local_68 = local_a8;
    local_64 = uStack_a4;
    local_60 = local_a0;
    local_5c = local_9c;
    local_58 = local_98;
    local_54 = local_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    local_40 = local_80;
    uStack_3c = uStack_7c;
    uStack_38 = uStack_78;
    uStack_34 = uStack_74;
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    if (local_a8 == 3 && uStack_a4 == 0) {
      if ((uint)param_2[2] < local_98) {
        param_2[2] = 0;
        (**(code **)(local_a0 + 0x10))(&local_54,local_9c);
        local_a8 = 4;
        local_a0 = 1;
        local_9c = &DAT_01c075e4;
      }
      else {
        param_2[2] = param_2[2] - local_98;
        local_d8 = local_98;
        uStack_d4 = local_94;
        uStack_d0 = uStack_90;
        uStack_cc = uStack_8c;
        uStack_c8 = uStack_88;
        uStack_c4 = uStack_84;
        local_a8 = 3;
        local_c0 = local_80;
        uStack_bc = uStack_7c;
        uStack_b8 = uStack_78;
        uStack_b4 = uStack_74;
        uStack_b0 = uStack_70;
        uStack_ac = uStack_6c;
      }
    }
    else {
      local_d8 = local_98;
      uStack_d4 = local_94;
      uStack_d0 = uStack_90;
      uStack_cc = uStack_8c;
      uStack_c8 = uStack_88;
      uStack_c4 = uStack_84;
      local_c0 = local_80;
      uStack_bc = uStack_7c;
      uStack_b8 = uStack_78;
      uStack_b4 = uStack_74;
      uStack_b0 = uStack_70;
      uStack_ac = uStack_6c;
      uVar1 = uStack_a4;
    }
  }
  param_1[2] = local_a0;
  *param_1 = local_a8;
  param_1[1] = uVar1;
  param_1[3] = (uint)local_9c;
  param_1[4] = local_d8;
  param_1[5] = uStack_d4;
  param_1[6] = uStack_d0;
  param_1[7] = uStack_cc;
  param_1[8] = uStack_c8;
  param_1[9] = uStack_c4;
  param_1[10] = local_c0;
  param_1[0xb] = uStack_bc;
  param_1[0xc] = uStack_b8;
  param_1[0xd] = uStack_b4;
  param_1[0xe] = uStack_b0;
  param_1[0xf] = uStack_ac;
  return;
}

