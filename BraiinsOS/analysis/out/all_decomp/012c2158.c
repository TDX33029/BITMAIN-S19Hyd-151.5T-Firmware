// FUN_012c2158 @ 012c2158 size=564 calls_out=7 calls_in=1
// strings: 

void FUN_012c2158(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_110;
  int local_10c;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  undefined4 local_7c;
  int iStack_78;
  undefined1 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  FUN_012cd8c4(&local_d0);
  local_2c = local_c4;
  local_30 = local_c8;
  if (local_9c == -0x80000000) {
    local_110 = local_c8;
    local_10c = local_c4;
    uVar2 = local_d0;
  }
  else {
    local_60 = local_c0;
    local_5c = uStack_bc;
    uStack_58 = uStack_b8;
    uStack_54 = uStack_b4;
    local_50 = local_b0;
    uStack_4c = local_ac;
    local_48 = uStack_a8;
    local_44 = uStack_a4;
    local_40 = iStack_a0;
    local_38 = local_98;
    local_68 = local_c8;
    iStack_64 = local_c4;
    local_34 = local_94;
    local_6c = local_cc;
    local_70 = local_d0;
    local_3c = local_9c;
    if (local_94 == 0) {
      if (iStack_a0 == 0) {
        local_80 = 0;
        local_c4 = 0;
        local_c8 = 4;
      }
      else {
        FUN_012b7bd8(&local_cc,uStack_a4);
        local_80 = local_cc;
      }
      uVar2 = 0;
      local_cc = 0;
      local_110 = local_70;
      local_10c = local_6c;
      if (local_80 != -0x80000000) {
        local_7c = local_c8;
        iStack_78 = local_c4;
        local_c8 = 0;
        local_74 = 1;
        local_c4 = 0;
        iStack_90 = local_40;
        iStack_8c = local_3c;
        uStack_88 = local_38;
        iStack_84 = local_34;
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
        FUN_012c00e0(param_2);
        return;
      }
    }
    else {
      uVar2 = 1;
      local_10c = local_c4;
      local_110 = 0;
      FUN_012ba6a4(&local_70);
      local_cc = local_94;
    }
  }
  *param_1 = uVar2;
  param_1[1] = local_cc;
  param_1[2] = local_110;
  param_1[3] = local_10c;
  FUN_012c00e0(param_2);
  return;
}

