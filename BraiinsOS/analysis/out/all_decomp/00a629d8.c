// FUN_00a629d8 @ 00a629d8 size=432 calls_out=6 calls_in=2
// strings: 

void FUN_00a629d8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int iStack_70;
  undefined1 local_6c;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_012cd8c4(&local_c8);
  iVar1 = local_c4;
  iVar2 = local_c8;
  if (local_94 != -0x80000000) {
    local_58 = local_b8;
    uStack_54 = local_b4;
    local_50 = local_b0;
    uStack_4c = iStack_ac;
    local_48 = local_a8;
    uStack_44 = uStack_a4;
    uStack_40 = local_a0;
    local_3c = uStack_9c;
    uStack_38 = uStack_98;
    local_30 = local_90;
    local_60 = local_c0;
    iStack_5c = local_bc;
    local_2c = local_8c;
    local_64 = local_c4;
    local_68 = local_c8;
    local_34 = local_94;
    FUN_012be0e4(&local_c8,&local_68,param_3,param_4);
    local_78 = local_c4;
    if (local_c8 == 5) {
      if (local_c4 != -0x80000000) {
        local_b0 = local_60;
        iStack_ac = iStack_5c;
        local_a8 = local_58;
        uStack_a4 = uStack_54;
        local_a0 = local_50;
        uStack_9c = uStack_4c;
        uStack_98 = local_48;
        local_94 = uStack_44;
        local_90 = uStack_40;
        local_8c = local_3c;
        uStack_88 = uStack_38;
        iStack_84 = local_34;
        uStack_80 = local_30;
        uStack_7c = local_2c;
        local_6c = 0;
        local_74 = local_c0;
        iStack_70 = local_bc;
        local_c4 = 1;
        local_c8 = 1;
        iVar2 = thunk_FUN_016d4a50(0x60);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(iVar2,&local_c8,0x60);
        *param_1 = 5;
        param_1[1] = iVar2;
        return;
      }
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = iVar2;
      local_bc = iVar1;
    }
    else {
      FUN_012ba6a4(&local_68);
    }
  }
  *param_1 = local_c8;
  param_1[1] = local_c4;
  param_1[2] = local_c0;
  param_1[3] = local_bc;
  return;
}

