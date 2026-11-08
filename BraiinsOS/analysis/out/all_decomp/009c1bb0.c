// FUN_009c1bb0 @ 009c1bb0 size=492 calls_out=6 calls_in=2
// strings: 

void FUN_009c1bb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_110;
  int local_10c;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  int iStack_78;
  undefined1 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  FUN_012cd8c4(&local_d0);
  local_2c = local_c4;
  local_30 = local_c8;
  if (local_9c == -0x80000000) {
    local_110 = local_c8;
    local_10c = local_c4;
    iVar1 = local_cc;
  }
  else {
    local_60 = local_c0;
    local_5c = iStack_bc;
    uStack_58 = iStack_b8;
    uStack_54 = iStack_b4;
    local_50 = local_b0;
    uStack_4c = local_ac;
    local_48 = uStack_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    local_38 = local_98;
    local_68 = local_c8;
    iStack_64 = local_c4;
    local_34 = local_94;
    local_6c = local_cc;
    local_70 = local_d0;
    local_3c = local_9c;
    FUN_012be0e4(&local_d0,&local_70,param_3,param_4);
    if (local_d0 == 5) {
      local_d0 = 0;
      local_110 = local_70;
      local_10c = local_6c;
      iVar1 = 0;
      if (local_cc != -0x80000000) {
        local_74 = 1;
        local_7c = local_c8;
        iStack_78 = local_c4;
        local_c8 = 0;
        local_c4 = 0;
        local_c0 = local_70;
        iStack_bc = local_6c;
        iStack_b8 = local_68;
        iStack_b4 = iStack_64;
        local_b0 = local_60;
        local_ac = local_5c;
        uStack_a8 = uStack_58;
        uStack_a4 = uStack_54;
        uStack_a0 = local_50;
        local_9c = uStack_4c;
        local_98 = local_48;
        local_94 = uStack_44;
        uStack_90 = uStack_40;
        iStack_8c = local_3c;
        uStack_88 = local_38;
        uStack_84 = local_34;
        local_80 = local_cc;
        local_cc = 1;
        local_d0 = 1;
        iVar1 = thunk_FUN_016d4a50(0x60);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(iVar1,&local_d0,0x60);
        *param_1 = 5;
        param_1[1] = iVar1;
        return;
      }
    }
    else {
      local_10c = local_c4;
      local_110 = local_c8;
      FUN_011014e8(&local_70);
      iVar1 = local_cc;
    }
  }
  *param_1 = local_d0;
  param_1[1] = iVar1;
  param_1[2] = local_110;
  param_1[3] = local_10c;
  return;
}

