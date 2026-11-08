// FUN_0104b588 @ 0104b588 size=196 calls_out=4 calls_in=1
// strings: 

int FUN_0104b588(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 local_72;
  undefined1 local_70 [16];
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 local_5a;
  undefined2 uStack_58;
  undefined2 local_56;
  undefined2 uStack_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 uStack_42;
  
  local_60 = (undefined2)param_1;
  uStack_5e = (undefined2)((uint)param_1 >> 0x10);
  local_48 = &local_60;
  local_50 = &local_72;
  local_4c = 0xc370;
  uStack_4a = 0xfa;
  local_44 = 0xc484;
  uStack_42 = 0xfa;
  local_72 = param_2;
  FUN_00600d2c(local_70,&DAT_0057bc99,&local_50);
  local_50._0_2_ = 0x11;
  local_56 = local_70._8_2_;
  uStack_54 = local_70._10_2_;
  local_5a = local_70._4_2_;
  uStack_58 = local_70._6_2_;
  uStack_5e = local_70._0_2_;
  uStack_5c = local_70._2_2_;
  uStack_4a = uStack_5c;
  local_48._0_2_ = local_5a;
  local_50._2_2_ = local_60;
  local_4c = uStack_5e;
  local_48._2_2_ = uStack_58;
  local_44 = local_56;
  uStack_42 = uStack_54;
  iVar1 = thunk_FUN_016d4a50(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar1,&local_50,0x44);
  return iVar1;
}

