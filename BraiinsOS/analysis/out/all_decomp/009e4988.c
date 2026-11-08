// FUN_009e4988 @ 009e4988 size=252 calls_out=1 calls_in=0
// strings: IterF | fields

byte FUN_009e4988(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"IterF",4);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_00567b5c,4,param_1 + 0x10,FUN_009f4d98);
  FUN_00fb2258(uVar2,"fields",6,&local_1c,FUN_00a06d7c);
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

