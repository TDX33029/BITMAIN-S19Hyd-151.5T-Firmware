// FUN_00fe4f7c @ 00fe4f7c size=452 calls_out=7 calls_in=1
// strings: 

void FUN_00fe4f7c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int local_ac;
  undefined1 *local_a8;
  int local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int local_48;
  
  local_f0 = *param_2;
  if (local_f0 < 0) {
    uVar2 = FUN_012664e4(param_2,&local_c0,&DAT_01c1602c);
    *param_1 = 1;
    param_1[1] = uVar2;
  }
  else {
    local_f8 = param_2[1];
    local_ec = local_f8 + param_2[2] * 0x20;
    local_d4 = &local_108;
    local_e8 = 0;
    local_108 = 0x80000015;
    local_c8 = 0;
    local_d0 = 0;
    local_f4 = local_f8;
    while (FUN_00db36f0(&local_c0,&local_d4), local_a8 != (undefined1 *)0x80000007) {
      if (local_a8 == &DAT_80000008) {
        *param_1 = 1;
        param_1[1] = local_c0;
        FUN_007028c4(&local_d0);
        FUN_00db38c0(&local_108);
        return;
      }
      local_88 = local_b8;
      uStack_84 = uStack_b4;
      uStack_80 = iStack_b0;
      uStack_7c = local_ac;
      local_78 = local_a8;
      local_74 = local_a4;
      uStack_70 = uStack_a0;
      uStack_6c = uStack_9c;
      local_68 = local_98;
      uStack_64 = uStack_94;
      uStack_60 = uStack_90;
      uStack_5c = uStack_8c;
      FUN_006c3428(auStack_58,&local_d0,local_c0,local_bc,&local_88);
      if (local_48 != -0x7ffffff9) {
        FUN_00db19c4(auStack_58);
      }
    }
    param_1[1] = local_d0;
    param_1[2] = uStack_cc;
    param_1[3] = local_c8;
    *param_1 = 0;
    local_e0 = param_1[1];
    uStack_dc = param_1[2];
    uStack_d8 = param_1[3];
    local_c0 = local_108;
    local_bc = uStack_104;
    local_b8 = uStack_100;
    uStack_b4 = uStack_fc;
    iStack_b0 = local_f8;
    local_ac = local_f4;
    local_a8 = (undefined1 *)local_f0;
    local_a4 = local_ec;
    uStack_a0 = local_e8;
    uStack_9c = uStack_e4;
    iVar1 = FUN_012666d8();
    if (iVar1 == 0) {
      *param_1 = 0;
    }
    else {
      *param_1 = 1;
      param_1[1] = iVar1;
      FUN_007028c4(&local_e0);
    }
  }
  return;
}

