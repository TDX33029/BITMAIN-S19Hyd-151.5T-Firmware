// FUN_01b271d0 @ 01b271d0 size=184 calls_out=4 calls_in=0
// strings: 

void FUN_01b271d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  
  local_24 = DAT_01d53560;
  uVar3 = FUN_01b27094(param_1 + 8,param_2,&PTR_01d3b2b0,0);
  local_30 = FUN_01b27094(param_1);
  local_38 = uVar3;
  FUN_01b1e9b8(&local_38,param_2);
  uVar2 = local_38._4_4_;
  uVar1 = (undefined4)local_38;
  FUN_01b26e08(param_1,extraout_r1,(undefined4)local_30,local_30._4_4_);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  FUN_01b26e08(param_1 + 8,extraout_r1_00,uVar1,uVar2);
  return;
}

