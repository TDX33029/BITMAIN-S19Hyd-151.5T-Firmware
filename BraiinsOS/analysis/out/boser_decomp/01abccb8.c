// FUN_01abccb8 @ 01abccb8 size=544 calls_out=3 calls_in=0
// strings: 

void FUN_01abccb8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 local_f8;
  int local_f4;
  undefined *local_f0;
  undefined4 ***local_ec;
  undefined **local_e8;
  undefined *local_e4;
  undefined1 **local_e0;
  undefined1 *local_dc;
  undefined1 *local_d8;
  undefined *local_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined4 local_b9;
  undefined2 local_b5;
  undefined4 local_b3;
  undefined4 local_af;
  undefined1 *local_a8;
  undefined *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_90;
  undefined1 local_8e;
  undefined4 local_8d;
  undefined2 local_89;
  undefined4 local_87;
  undefined4 local_83;
  undefined4 **local_7c;
  code *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_62;
  undefined3 uStack_5e;
  undefined4 local_5b;
  undefined4 local_57;
  undefined8 local_50;
  undefined4 **local_48;
  undefined4 ***local_44;
  undefined **local_40;
  code *local_3c;
  undefined1 **local_38;
  code *local_34;
  undefined4 ***local_30;
  code *local_2c;
  undefined8 *local_28;
  code *local_24;
  
  local_f8 = param_3;
  local_f4 = param_4;
  uVar2 = (**(code **)(param_4 + 0x18))(param_3);
  if ((int)uVar2 == 0) {
    local_50._0_4_ = &local_d4;
    local_a4 = &LAB_012c1d70;
    local_44 = &local_7c;
    local_7c = (undefined4 **)&local_50;
    local_d4 = &DAT_00590e5f;
    local_48 = (undefined4 **)&DAT_00590e5f;
    local_78 = FUN_01abadc8;
    local_d0._0_4_ = &local_a8;
    local_a8 = (undefined1 *)&local_f8;
    FUN_01abb084(param_1,param_2,&local_48,&DAT_01d2f140);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 8);
    local_e8 = &local_e4;
    local_d8 = &LAB_012c1d70;
    local_e0 = &local_dc;
    local_e4 = &DAT_00590e5f;
    local_dc = (undefined1 *)&local_f8;
    local_d0 = FUN_01aa9a6c(param_2);
    uStack_c8 = 0x80000002;
    local_b9 = 0;
    local_bc = 0;
    local_b5 = 0;
    local_af = 0x15;
    local_b3 = 0x15;
    local_d4 = (undefined *)0x80000000;
    local_a0 = 8;
    local_a4 = &DAT_005703d8;
    local_8d = 0;
    local_90 = 0;
    local_89 = 0;
    local_83 = 0x15;
    local_87 = 0x15;
    local_9c = 0x80000002;
    local_a8 = (undefined1 *)0x80000000;
    local_64 = 0;
    local_62 = 0;
    uStack_5e = 0;
    local_57 = 0x15;
    local_5b = 0x15;
    local_70 = 0x80000002;
    local_74 = 1;
    local_78 = (code *)&DAT_00531a0c;
    local_7c = (undefined4 **)0x80000000;
    local_28 = &local_50;
    local_30 = &local_7c;
    local_38 = &local_a8;
    local_40 = &local_d4;
    local_48 = &local_e8;
    local_ec = &local_48;
    local_24 = FUN_01abae18;
    local_2c = FUN_01645800;
    local_34 = FUN_01645800;
    local_3c = FUN_01645800;
    local_44 = (undefined4 ***)FUN_01abadc8;
    local_f0 = &DAT_005a7af2;
    local_ba = uVar1;
    local_8e = uVar1;
    local_63 = uVar1;
    local_50 = uVar2;
    FUN_01abb084(param_1,param_2,&local_f0,&DAT_01d2f140);
    FUN_01abb3d0(&local_7c);
    FUN_01abb3d0(&local_a8);
    FUN_01abb3d0(&local_d4);
  }
  return;
}

