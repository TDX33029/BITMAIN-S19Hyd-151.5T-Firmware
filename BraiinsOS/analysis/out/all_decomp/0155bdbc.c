// FUN_0155bdbc @ 0155bdbc size=216 calls_out=1 calls_in=0
// strings: 

byte FUN_0155bdbc(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c6d4,0xb);
  local_13 = 0;
  local_18 = param_2;
  FUN_00fb2258(&local_18,&DAT_0040c6b9,6,param_1,FUN_01525a2c);
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

