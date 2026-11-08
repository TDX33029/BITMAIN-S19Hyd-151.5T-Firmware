// FUN_016cf30c @ 016cf30c size=252 calls_out=1 calls_in=1
// strings: 

byte FUN_016cf30c(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041948b,0x12);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_00569b58,8,param_1 + 0xc,FUN_01574ba4);
  FUN_00fb2258(uVar2,&DAT_0041949d,9,&local_1c,FUN_016d0c70);
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

