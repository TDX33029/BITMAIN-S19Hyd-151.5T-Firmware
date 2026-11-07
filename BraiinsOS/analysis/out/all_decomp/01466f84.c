// FUN_01466f84 @ 01466f84 size=256 calls_out=1 calls_in=0
// strings: IgnoreHostname | signature_algorithmsKeepAlive

byte FUN_01466f84(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 0xc;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"IgnoreHostname",0xe);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_0040c6ab,5,param_1,FUN_0155dde4);
  FUN_00fb2258(uVar2,"signature_algorithmsKeepAlive",0x14,&local_1c,FUN_014cdcf4);
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

