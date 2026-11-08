// FUN_00789850 @ 00789850 size=288 calls_out=1 calls_in=1
// strings: 

byte FUN_00789850(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 3;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056883c,4);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_005672ac,4,param_1,FUN_00786d00);
  uVar2 = FUN_00fb2258(uVar2,&DAT_004147fb,5,param_1 + 2,FUN_0078955c);
  FUN_00fb2258(uVar2,&DAT_00414800,3,&local_1c,FUN_01135a50);
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

