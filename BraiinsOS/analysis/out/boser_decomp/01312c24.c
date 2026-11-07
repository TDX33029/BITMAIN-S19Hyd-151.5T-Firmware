// FUN_01312c24 @ 01312c24 size=144 calls_out=2 calls_in=1
// strings: Seconds | Seconds

void FUN_01312c24(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  char *local_28;
  undefined4 local_24;
  int *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_18 = (undefined1 *)&local_40;
  local_14 = &LAB_018a13b8;
  local_20 = &local_2c;
  local_24 = 7;
  local_28 = "Seconds";
  local_2c = -0x80000000;
  local_1c = &LAB_012b97d8;
  local_40 = param_2;
  uStack_3c = param_3;
  FUN_00664898(&local_38,&DAT_00572831,&local_20);
  if (local_2c != -0x80000000) {
    FUN_0134bd64(local_2c,local_28);
  }
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  return;
}

