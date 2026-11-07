// FUN_014a4c10 @ 014a4c10 size=148 calls_out=2 calls_in=0
// strings: 

void FUN_014a4c10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_44;
  undefined4 *local_40;
  code *local_3c;
  undefined4 uStack_38;
  undefined4 *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined4 local_20;
  
  local_44 = param_2[2];
  local_40 = &local_44;
  local_3c = FUN_012fd02c;
  FUN_00664898(&local_30,&DAT_005a9b80,&local_40);
  local_40 = local_30;
  local_3c = (code *)uStack_2c;
  uStack_38 = uStack_28;
  local_30 = (undefined4 *)*param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  local_20 = 4;
  local_24 = &DAT_0056e840;
  FUN_014a4168(param_1,9,&local_40,&local_30);
  return;
}

