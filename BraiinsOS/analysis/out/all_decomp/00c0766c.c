// FUN_00c0766c @ 00c0766c size=288 calls_out=1 calls_in=1
// strings: paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended | measured_hashrate | origin

byte FUN_00c0766c(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 0x18;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0035b95b,0xd);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,
                       "paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended"
                       ,6,param_1 + 0x30,FUN_00c0781c);
  uVar2 = FUN_00fb2258(uVar2,"measured_hashrate",0x11,param_1,&LAB_00c06c20);
  FUN_00fb2258(uVar2,"origin",6,&local_1c,FUN_00d6371c);
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

