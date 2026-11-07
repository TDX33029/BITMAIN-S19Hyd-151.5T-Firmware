// FUN_013b80d0 @ 013b80d0 size=180 calls_out=2 calls_in=0
// strings: END_STREAM | PADDED

undefined4 FUN_013b80d0(byte *param_1,undefined4 *param_2)

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
  uVar1 = FUN_013b12ec(&local_2c,uVar2 & 1,"END_STREAM",10);
  FUN_013b12ec(uVar1,(uVar2 & 0xf) >> 3,"PADDED",6);
  uVar1 = 1;
  if (local_28 == '\0') {
    uVar1 = (**(code **)(local_2c[1] + 0xc))(*local_2c,&DAT_0053341b,1);
  }
  return uVar1;
}

