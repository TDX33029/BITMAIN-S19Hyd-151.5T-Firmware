// FUN_01a457d8 @ 01a457d8 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_01a457d8(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_5c;
  undefined1 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 *local_28;
  
  local_78 = *(undefined4 *)(param_3 + 8);
  uStack_74 = *(undefined4 *)(param_3 + 0xc);
  local_70 = local_78;
  local_6c = uStack_74;
  FUN_01a4f7a8(&local_50,param_3);
  if (local_50 != 3) {
    if (local_50 == 1) {
      local_68 = 2;
    }
    else {
      local_68 = local_50;
    }
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    local_28 = &local_70;
    local_2c = param_3;
    FUN_01a5cbd0(&local_50,&local_68);
    if (local_50 != 3) {
      local_68 = param_2[3];
      local_64 = param_2[4];
      uStack_60 = param_2[5];
      local_5c = param_3;
      local_58 = (undefined1 *)&local_78;
      FUN_01a5cbd0(param_1,&local_50,&local_68);
      return;
    }
  }
  *param_1 = 3;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  return;
}

