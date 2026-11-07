// FUN_00d59db4 @ 00d59db4 size=320 calls_out=3 calls_in=0
// strings: 

void FUN_00d59db4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint local_f8 [2];
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined *local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((*param_2 == 1) && (param_2[1] != 0)) {
    (**(code **)(param_2[2] + 0xc))(local_f8,param_2[1]);
    if ((local_f8[0] & 7) == 3) {
      local_90 = local_e0;
      uStack_8c = uStack_dc;
      uStack_88 = uStack_d8;
      uStack_84 = uStack_d4;
      uStack_80 = uStack_d0;
      uStack_7c = uStack_cc;
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      uStack_68 = uStack_b8;
      uStack_64 = uStack_b4;
      if (local_f0 == 4 && local_ec == 0) {
LAB_00d59ee8:
        FUN_01a7467c(param_1,local_e8,local_e4);
        return;
      }
      if (local_f0 == 5 && local_ec == 0) goto LAB_00d59e2c;
      if (local_f0 != 6 || local_ec != 0) {
        param_1[6] = local_e0;
        param_1[7] = uStack_dc;
        param_1[8] = uStack_d8;
        param_1[9] = uStack_d4;
        param_1[10] = uStack_d0;
        param_1[0xb] = uStack_cc;
        param_1[0xc] = local_c8;
        param_1[0xd] = uStack_c4;
        param_1[0xe] = uStack_c0;
        param_1[0xf] = uStack_bc;
        param_1[0x10] = uStack_b8;
        param_1[0x11] = uStack_b4;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_f0;
        param_1[3] = local_ec;
        param_1[4] = local_e8;
        param_1[5] = local_e4;
        return;
      }
    }
    else {
      if (local_f8[0] == 4) goto LAB_00d59e2c;
      if (local_f8[0] != 5) {
        FUN_01bed4e2(&local_90,local_f8,0x68);
        local_e8 = FUN_01a65494(&local_90);
        local_e4 = &DAT_01d2cc7c;
        goto LAB_00d59ee8;
      }
    }
    uVar1 = 5;
  }
  else {
LAB_00d59e2c:
    uVar1 = 4;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

