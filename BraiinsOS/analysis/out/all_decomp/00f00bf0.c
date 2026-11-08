// FUN_00f00bf0 @ 00f00bf0 size=252 calls_out=1 calls_in=0
// strings: IntroductionFrame | version_byte | introduction_sequence

byte FUN_00f00bf0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"IntroductionFrame",0x11);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,"version_byte",0xc,param_1 + 0x20,FUN_0078955c);
  FUN_00fb2258(uVar2,"introduction_sequence",0x15,&local_1c,FUN_00ed2224);
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

