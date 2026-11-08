// FUN_013d9d8c @ 013d9d8c size=256 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_013d9d8c(byte param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  code *local_1c;
  
  uVar3 = (uint)param_1;
  iVar1 = FUN_013d992c(uVar3,param_4,1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x013d9dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_3 + 0x10))(param_2,uVar3);
    return uVar2;
  }
  if (uVar3 - 0x21 < 0x5e) {
    local_1c = FUN_012fbb84;
    local_20 = &local_24;
    local_24 = uVar3;
    FUN_00664898(&local_30,&DAT_0057edd8,&local_20);
    uVar2 = (**(code **)(param_3 + 0xc))(param_2,local_2c,local_28);
  }
  else {
    local_24 = CONCAT31(local_24._1_3_,param_1);
    local_1c = FUN_012fd54c;
    local_20 = &local_24;
    FUN_00664898(&local_30,&DAT_00474377,&local_20);
    uVar2 = (**(code **)(param_3 + 0xc))(param_2,local_2c,local_28);
  }
  FUN_019bb7e0(local_30,local_2c);
  return uVar2;
}

