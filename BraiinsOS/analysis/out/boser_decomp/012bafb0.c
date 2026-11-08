// FUN_012bafb0 @ 012bafb0 size=304 calls_out=4 calls_in=3
// strings: 

void FUN_012bafb0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined *local_24;
  undefined1 **local_20;
  code *local_1c;
  
  local_44 = param_3 + 0x2a;
  local_38 = 0;
  local_3c = 1;
  local_40 = 0;
  if (*(undefined1 **)(param_2 + 0x120) == (undefined1 *)0x0) {
    if (*(undefined1 **)(param_2 + 0x34) != &DAT_00110000) {
      local_20 = &local_30;
      local_28 = &local_44;
      local_1c = FUN_012fbb84;
      local_24 = &DAT_012b5b4c;
      local_30 = *(undefined1 **)(param_2 + 0x34);
      FUN_012fa178(&local_40,&DAT_01ce25b4,&DAT_0041fe2d,&local_28);
    }
  }
  else {
    local_2c = *(undefined4 *)(param_2 + 0x124);
    local_20 = &local_30;
    local_28 = &local_44;
    local_1c = (code *)&LAB_018a13b8;
    local_24 = &DAT_012b5b4c;
    local_30 = *(undefined1 **)(param_2 + 0x120);
    FUN_012fa178(&local_40,&DAT_01ce25b4,&DAT_0041fe20,&local_28);
  }
  FUN_012ba6b8(&local_28,param_2,param_3,param_4);
  puVar1 = local_24;
  FUN_012b255c(&local_40,local_24,local_20);
  FUN_0134bd64(local_28,puVar1);
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

