// FUN_014f8c34 @ 014f8c34 size=252 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_014f8c34(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined1 local_18;
  undefined4 local_10;
  int local_c;
  
  local_18 = 7;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_20 = 0;
  FUN_012867b0(&local_10,&local_c0,param_1,param_2,&DAT_01c264a0,&DAT_01c26500);
  if ((local_10 == 0) || (local_c != 0)) {
    uVar2 = 5;
    if (local_c == 0) {
      uVar2 = 8;
    }
    if (local_10 != 0) {
      local_c._0_1_ = uVar2;
    }
    local_10._0_2_ = CONCAT11((undefined1)local_c,(char)local_10);
  }
  else {
    FUN_0128adb8(&local_10,&local_c0);
    if ((char)local_10 != '\x01') {
      uVar1 = 0;
      goto LAB_014f8cfc;
    }
  }
  local_c = FUN_014e63a4(local_10._1_1_);
  uVar1 = 1;
LAB_014f8cfc:
  return CONCAT44(local_c,uVar1);
}

