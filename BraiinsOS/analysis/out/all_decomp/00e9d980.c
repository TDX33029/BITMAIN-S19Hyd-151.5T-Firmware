// FUN_00e9d980 @ 00e9d980 size=220 calls_out=1 calls_in=0
// strings: Error | inner

byte FUN_00e9d980(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 local_14;
  undefined4 *local_10;
  byte local_c;
  byte local_b;
  
  local_14 = *param_1;
  local_c = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
  local_b = 0;
  local_10 = param_2;
  FUN_00fb2258(&local_10,"inner",5,&local_14,FUN_00edf5c0);
  if (local_b != 1 || (local_c & 1) != 0) {
    return (local_b | local_c) & 1;
  }
  if ((*(byte *)((int)local_10 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_10[1] + 0xc))(*local_10," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_10[1] + 0xc))(*local_10,"}",1);
  return bVar1 & 1;
}

