// FUN_00e28fe8 @ 00e28fe8 size=368 calls_out=2 calls_in=1
// strings: 

void FUN_00e28fe8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,uint param_7)

{
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 local_58 [8];
  undefined4 *local_50;
  undefined2 *local_4c;
  undefined1 *local_48;
  code *local_44;
  undefined1 *local_40;
  code *local_3c;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_50 = &local_70;
  local_4c = &DAT_0132b6a0;
  local_70 = param_2;
  uStack_6c = param_3;
  FUN_00664898(&local_68,&DAT_00580688,&local_50);
  local_50 = &local_68;
  if ((param_5 & 1) == 0) {
    if ((param_7 & 1) == 0) {
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = uStack_60;
      return;
    }
    local_44 = FUN_013025ec;
    local_48 = local_38;
    local_4c = (undefined2 *)&LAB_00632348;
    FUN_00664898(&local_30,&DAT_00579472,&local_50);
  }
  else if ((param_7 & 1) == 0) {
    local_44 = FUN_013025ec;
    local_48 = local_38;
    local_4c = (undefined2 *)&LAB_00632348;
    FUN_00664898(&local_30,&DAT_005850ff,&local_50);
  }
  else {
    local_40 = local_38;
    local_3c = FUN_013025ec;
    local_44 = FUN_013025ec;
    local_48 = local_58;
    local_4c = (undefined2 *)&LAB_00632348;
    FUN_00664898(&local_30,&DAT_005bba8c,&local_50);
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  FUN_019bb7e0(local_68,local_64);
  return;
}

