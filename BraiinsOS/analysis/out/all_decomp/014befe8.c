// FUN_014befe8 @ 014befe8 size=280 calls_out=1 calls_in=0
// strings: 

byte FUN_014befe8(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 0x10;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004193cc,10);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_00569478,4,param_1,&LAB_016b18a0);
  uVar2 = FUN_00fb2258(uVar2,&DAT_0040c6f9,9,param_1 + 8,&LAB_016b18a0);
  FUN_00fb2258(uVar2,&DAT_00409137,9,&local_1c,&LAB_014b3c00);
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

