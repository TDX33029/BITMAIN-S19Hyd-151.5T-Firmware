// FUN_014aeff4 @ 014aeff4 size=92 calls_out=1 calls_in=5
// strings: 

void FUN_014aeff4(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_019ac248(local_20,param_2,&local_30);
  puVar1 = &DAT_3b9aca00;
  if ((local_20[0] & 1) != 0) {
    puVar1 = local_10;
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = puVar1;
  return;
}

