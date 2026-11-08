// FUN_013762c4 @ 013762c4 size=180 calls_out=2 calls_in=0
// strings: END_HEADERS | PADDED

undefined4 FUN_013762c4(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *local_2c;
  char local_28;
  undefined1 local_27;
  byte local_21;
  byte *local_20;
  code *local_1c;
  
  local_21 = *param_1;
  uVar2 = (uint)local_21;
  local_1c = FUN_012fd63c;
  local_20 = &local_21;
  local_28 = FUN_012fa178(*param_2,param_2[1],&DAT_00570130,&local_20);
  local_27 = 0;
  local_2c = param_2;
  uVar1 = FUN_0138a944(&local_2c,(uVar2 & 7) >> 2,"END_HEADERS",0xb);
  FUN_0138a944(uVar1,(uVar2 & 0xf) >> 3,"PADDED",6);
  uVar1 = 1;
  if (local_28 == '\0') {
    uVar1 = (**(code **)(local_2c[1] + 0xc))(*local_2c,&DAT_0053341b,1);
  }
  return uVar1;
}

