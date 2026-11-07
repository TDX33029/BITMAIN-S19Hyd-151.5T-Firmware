// FUN_007167d4 @ 007167d4 size=420 calls_out=5 calls_in=12
// strings: ext/plain; charset=utf-8event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-extra-0.10.1/src/extract/form.rs:73

void FUN_007167d4(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined **ppuVar2;
  undefined **local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 auStack_ac [3];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined4 local_70;
  undefined *local_6c;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  char local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined **local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (*param_2 == -0x80000000) {
    auStack_ac[0] = 0;
    ppuVar2 = (undefined **)&DAT_01c25b04;
    local_38 = *(undefined8 *)(param_2 + 1);
    if (param_2[2] == 0) {
      ppuVar2 = (undefined **)0x0;
      local_38 = *(undefined8 *)(param_2 + 1);
    }
  }
  else {
    FUN_01283524(&local_b8);
    if (local_b0 == 0) {
      ppuVar2 = (undefined **)0x0;
      local_38 = (*(code *)local_b8[4])(auStack_ac,local_b4,0);
      auStack_ac[0] = extraout_r2;
    }
    else {
      ppuVar2 = local_b8;
      local_38 = CONCAT44(local_b0,local_b4);
    }
  }
  local_3c = ppuVar2;
  local_30 = auStack_ac[0];
  local_70 = FUN_00715df0(&local_3c);
  iVar1 = 0;
  local_6c = &DAT_01c0768c;
  local_74 = 200;
  local_b4 = 0;
  local_b8 = (undefined **)0x0;
  local_72 = 2;
  local_a0 = 2;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 4;
  local_8c = 0;
  local_90 = 0;
  local_94 = 4;
  local_98 = 0;
  local_9c = 0;
  local_50 = 0;
  uStack_4c = 0x1d;
  uStack_48 = 0;
  uStack_44 = 0;
  while (((byte)"t"[iVar1] == 9 || ((byte)"t"[iVar1] - 0x20 < 0x5f))) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x19) {
      local_2c = 0;
      local_30 = 0;
      local_38._0_4_ = "t";
      local_38._4_4_ = 0x19;
      local_3c = &PTR_FUN_01c076bc;
      FUN_00714c58(&local_64,&local_b8,&local_50,&local_3c);
      if (local_54 != '\x02') {
        (**(code **)(local_64 + 0x10))(auStack_58,uStack_60,uStack_5c);
      }
      FUN_01bed4e2(param_1,&local_b8,0x50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0,0,&DAT_01d2e4bc);
}

