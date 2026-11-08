// FUN_013e5844 @ 013e5844 size=256 calls_out=1 calls_in=1
// strings: 

byte FUN_013e5844(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *local_1c;
  byte local_18;
  byte local_17;
  undefined1 local_12;
  undefined1 local_11;
  
  local_18 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003cf211,0xf);
  local_17 = 0;
  local_12 = *param_1;
  local_1c = param_2;
  uVar2 = FUN_00fb2258(&local_1c,&DAT_003cf220,5,&local_12,FUN_013f8900);
  local_11 = param_1[1];
  FUN_00fb2258(uVar2,&DAT_003cf225,3,&local_11,FUN_013f8900);
  if (local_17 != 1 || (local_18 & 1) != 0) {
    return (local_17 | local_18) & 1;
  }
  if ((*(byte *)((int)local_1c + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_1c[1] + 0xc))(*local_1c," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_1c[1] + 0xc))(*local_1c,"}",1);
  return bVar1 & 1;
}

