// FUN_00fb321c @ 00fb321c size=196 calls_out=1 calls_in=1
// strings: 

byte FUN_00fb321c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_14 = (**(code **)(param_1[1] + 0xc))(*param_1);
  local_13 = 0;
  local_18 = param_1;
  FUN_00fb2258(&local_18,param_4,param_5,param_6,param_7);
  if (local_13 != 1 || (local_14 & 1) != 0) {
    return (local_13 | local_14) & 1;
  }
  if ((*(byte *)((int)local_18 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18,"}",1);
  return bVar1 & 1;
}

