// FUN_00b5c3c8 @ 00b5c3c8 size=264 calls_out=1 calls_in=0
// strings: Manual | fan_speed | is_indefiniteTarpc phaseBOSminer paused. BOSminer resumed. Cannot detect mining hardwareCannot list supported models

byte FUN_00b5c3c8(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"Manual",6);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,"fan_speed",9,param_1 + 4,FUN_009afea8);
  FUN_00fb2258(uVar2,
               "is_indefiniteTarpc phaseBOSminer paused.\nBOSminer resumed.\nCannot detect mining hardwareCannot list supported models"
               ,0xd,&local_1c,&LAB_010b9d64);
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

