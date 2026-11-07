// FUN_016a684c @ 016a684c size=764 calls_out=3 calls_in=0
// strings: 

void FUN_016a684c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_f8;
  int local_f4;
  undefined *local_f0;
  undefined ****local_ec;
  undefined **local_e8;
  undefined *local_e4;
  undefined1 **local_e0;
  undefined1 *local_dc;
  undefined1 *local_d8;
  undefined *local_d4;
  undefined1 **local_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 local_c4;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined4 local_b9;
  undefined2 local_b5;
  undefined4 local_b3;
  undefined4 local_af;
  undefined1 *local_a8;
  undefined *local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined4 local_8d;
  undefined2 local_89;
  undefined4 local_87;
  undefined4 local_83;
  undefined4 **local_7c;
  code *local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_62;
  undefined3 uStack_5e;
  undefined4 local_5b;
  undefined4 local_57;
  undefined8 local_50;
  undefined ***local_48;
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
  local_50 = (**(code **)(param_4 + 0x18))(param_3);
  if ((int)local_50 == 0) {
    local_50._0_4_ = &local_d4;
    local_a4 = &LAB_01656d18;
    local_44 = &local_7c;
    local_7c = (undefined4 **)&local_50;
    local_d4 = &DAT_00590e71;
    local_48 = (undefined ***)&DAT_00590e71;
    local_78 = FUN_016a5a08;
    local_d0 = &local_a8;
    local_a8 = (undefined1 *)&local_f8;
    FUN_016a6ba4(param_1,param_2,&local_48,&DAT_018ae78c);
    return;
  }
  local_ba = *(undefined1 *)(param_1 + 8);
  local_e8 = &local_e4;
  local_e0 = &local_dc;
  local_d8 = &LAB_01656d18;
  uVar2 = param_2[4];
  local_e4 = &DAT_00590e71;
  if ((uint)param_2[1] <= uVar2) {
    local_dc = (undefined1 *)&local_f8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,param_2[1],&DAT_018ae7cc);
  }
  puVar1 = (undefined4 *)(*param_2 + uVar2 * 8);
  local_d0 = (undefined1 **)*puVar1;
  uStack_cc = puVar1[1];
  local_c8 = -0x7ffffffe;
  local_b9 = 0;
  local_bc = 0;
  local_b5 = 0;
  local_af = 0x15;
  local_b3 = 0x15;
  local_d4 = (undefined *)0x80000000;
  local_a0 = 8;
  local_a4 = &DAT_00569f98;
  local_8d = 0;
  local_90 = 0;
  local_89 = 0;
  local_83 = 0x15;
  local_87 = 0x15;
  local_9c = -0x7ffffffe;
  local_a8 = (undefined1 *)0x80000000;
  local_64 = 0;
  local_62 = 0;
  uStack_5e = 0;
  local_57 = 0x15;
  local_5b = 0x15;
  local_70 = -0x7ffffffe;
  local_74 = 1;
  local_28 = &local_50;
  local_30 = &local_7c;
  local_38 = &local_a8;
  local_40 = &local_d4;
  local_48 = &local_e8;
  local_ec = &local_48;
  local_78 = (code *)0x4154a3;
  local_7c = (undefined4 **)0x80000000;
  local_24 = FUN_016a6f80;
  local_2c = FUN_01273a6c;
  local_34 = FUN_01273a6c;
  local_3c = FUN_01273a6c;
  local_44 = (undefined4 ***)FUN_016a5a08;
  local_f0 = &DAT_0057dc79;
  local_dc = (undefined1 *)&local_f8;
  local_8e = local_ba;
  local_63 = local_ba;
  FUN_016a6ba4(param_1,param_2,&local_f0,&DAT_018ae78c);
  if (((uint)local_7c & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_78);
  }
  if ((-0x7ffffffe < local_70) && (local_70 != 0)) {
    thunk_FUN_016d3fb4(local_6c);
  }
  if (((uint)local_a8 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_a4);
  }
  if ((-0x7ffffffe < local_9c) && (local_9c != 0)) {
    thunk_FUN_016d3fb4(local_98);
  }
  if (((uint)local_d4 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_d0);
  }
  if ((local_c8 < -0x7ffffffd) || (local_c8 == 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_c4);
  return;
}

