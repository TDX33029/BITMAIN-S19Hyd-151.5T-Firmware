// FUN_007dcc1c @ 007dcc1c size=276 calls_out=1 calls_in=0
// strings: 

byte FUN_007dcc1c(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00342a9f,7);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_00388bb6,7,param_1 + 0xc,FUN_0078955c);
  uVar2 = FUN_00fb2258(uVar2,&DAT_00410ad4,6,param_1 + 0xd,FUN_0078955c);
  FUN_00fb2258(uVar2,&DAT_00411190,7,&local_1c,FUN_007b88ec);
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

