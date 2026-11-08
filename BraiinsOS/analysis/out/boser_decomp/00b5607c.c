// FUN_00b5607c @ 00b5607c size=200 calls_out=3 calls_in=2
// strings: GroupConfig

void FUN_00b5607c(int *param_1)

{
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  char *local_2c;
  int local_28;
  int *local_20;
  undefined1 *local_1c;
  
  FUN_00b536fc(&local_30);
  FUN_019bb7e0(local_30,local_2c);
  local_28 = 0xb;
  local_2c = "GroupConfig";
  local_1c = &LAB_012b97d8;
  local_30 = -0x80000000;
  local_20 = &local_30;
  FUN_00664898(&local_40,&DAT_0057a667,&local_20);
  if (local_30 != -0x80000000) {
    FUN_019bb7e0(local_30,local_2c);
  }
  local_30 = local_40;
  local_2c = (char *)iStack_3c;
  local_28 = iStack_38;
  local_1c = &LAB_00632348;
  local_20 = &local_30;
  FUN_00664898(&local_40,&DAT_005791cb,&local_20);
  FUN_019bb7e0(local_30,local_2c);
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  param_1[2] = iStack_38;
  return;
}

