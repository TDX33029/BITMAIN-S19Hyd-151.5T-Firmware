// FUN_00b59c04 @ 00b59c04 size=116 calls_out=2 calls_in=4
// strings: Temperature

void FUN_00b59c04(undefined4 *param_1)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  char *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  
  local_14 = &LAB_012b97d8;
  local_18 = &local_24;
  local_20 = "Temperature";
  local_1c = 0xb;
  local_24 = -0x80000000;
  FUN_00664898(&local_30,&DAT_0057a667,&local_18);
  if (local_24 != -0x80000000) {
    FUN_019bb7e0(local_24,local_20);
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  return;
}

