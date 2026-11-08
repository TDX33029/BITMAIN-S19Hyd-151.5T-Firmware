// FUN_0067aa80 @ 0067aa80 size=280 calls_out=1 calls_in=0
// strings: OutOfBoundsError | length | min_length | max_lengthMaxLineLengthExceeded

byte FUN_0067aa80(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 8;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"OutOfBoundsError",0x10);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,"length",6,param_1,FUN_007883b8);
  uVar2 = FUN_00fb2258(uVar2,"min_length",10,param_1 + 4,FUN_007883b8);
  FUN_00fb2258(uVar2,"max_lengthMaxLineLengthExceeded",10,&local_1c,FUN_00d47d08);
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

