// FUN_014a6c58 @ 014a6c58 size=444 calls_out=4 calls_in=4
// strings: 

void FUN_014a6c58(uint *param_1,int *param_2)

{
  uint uVar1;
  uint extraout_r12;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined *local_88;
  uint local_84;
  uint local_80;
  uint local_7c [15];
  undefined2 local_40;
  uint local_2c;
  uint local_28;
  
  if (*param_2 == 0) {
    (**(code **)(param_2[2] + 0xc))(&local_f8,param_2[1]);
    if (local_f8 == 6 && local_f4 == 0) {
      *param_1 = 6;
      param_1[1] = 0;
      return;
    }
    if ((local_f8 & 7) == 4) {
      local_28 = local_ec;
      local_40 = 4;
      local_88 = (undefined *)0x2;
      local_2c = local_f0;
      uVar1 = thunk_FUN_016d4a50(100);
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,100);
      }
      FUN_016dd1aa(uVar1,&local_88,100);
      local_ec = extraout_r12;
    }
    else {
      uVar1 = local_f0;
      if (local_f8 != 5) {
        local_b8 = local_e8;
        uStack_b4 = uStack_e4;
        uStack_b0 = uStack_e0;
        uStack_ac = uStack_dc;
        uStack_a8 = uStack_d8;
        uStack_a4 = uStack_d4;
        local_a0 = local_d0;
        uStack_9c = uStack_cc;
        uStack_98 = uStack_c8;
        uStack_94 = uStack_c4;
        uStack_90 = uStack_c0;
        uStack_8c = uStack_bc;
      }
    }
    *param_1 = local_f8;
    param_1[1] = local_f4;
    param_1[2] = uVar1;
    param_1[3] = local_ec;
    param_1[4] = local_b8;
    param_1[5] = uStack_b4;
    param_1[6] = uStack_b0;
    param_1[7] = uStack_ac;
    param_1[8] = uStack_a8;
    param_1[9] = uStack_a4;
    param_1[10] = local_a0;
    param_1[0xb] = uStack_9c;
    param_1[0xc] = uStack_98;
    param_1[0xd] = uStack_94;
    param_1[0xe] = uStack_90;
    param_1[0xf] = uStack_8c;
    return;
  }
  local_84 = param_2[1];
  if (param_2[2] == 0) {
    local_7c[0] = 0;
    local_80 = 0;
    local_88 = &DAT_0187f9a4;
  }
  else {
    local_80 = param_2[2];
    local_7c[0] = param_2[3];
    local_88 = (undefined *)*param_2;
    uVar1 = param_2[1];
    *param_2 = (int)&DAT_0187f9a4;
    param_2[1] = local_84;
    param_2[2] = 0;
    param_2[3] = 0;
    local_84 = uVar1;
    if (local_80 != 0) {
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = (uint)local_88;
      param_1[3] = uVar1;
      param_1[4] = local_80;
      param_1[5] = local_7c[0];
      return;
    }
  }
  *param_1 = 5;
  param_1[1] = 0;
  (**(code **)(local_88 + 0x10))(local_7c,local_84,0);
  return;
}

