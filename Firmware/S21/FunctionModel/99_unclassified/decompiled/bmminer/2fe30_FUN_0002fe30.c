// FUN_0002fe30 @ 0002fe30  size=76  callers=0
// program: bmminer


void FUN_0002fe30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  FUN_0001d2f0(param_2,local_14);
  uVar1 = FUN_00080784(local_14[0],0);
  FUN_0007ec50(param_1,"eeprom_bin",uVar1);
  return;
}

