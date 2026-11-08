// FUN_00ab26c4 @ 00ab26c4 size=216 calls_out=4 calls_in=2
// strings: 

void FUN_00ab26c4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_28;
  undefined1 *local_24;
  int *local_20;
  undefined1 *local_1c;
  
  local_60 = param_3;
  local_5c = param_4;
  uVar1 = FUN_00ff7120(param_2 + 0x20);
  FUN_01a65fd0(&local_58,uVar1,param_3,param_4,param_5);
  if (local_58 == -0x7ffffffd) {
    *param_1 = 0x80000000;
  }
  else {
    local_20 = &local_48;
    local_48 = local_58;
    local_44 = uStack_54;
    uStack_40 = uStack_50;
    local_28 = &local_60;
    local_1c = &LAB_015a6eb0;
    local_24 = &LAB_01674ec4;
    FUN_00664898(&local_38,&DAT_005b5ab7,&local_28);
    local_28 = local_38;
    local_24 = (undefined1 *)uStack_34;
    local_20 = (int *)uStack_30;
    if (-1 < local_48) {
      FUN_019bb7e0(local_48,local_44);
    }
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = local_20;
  }
  return;
}

