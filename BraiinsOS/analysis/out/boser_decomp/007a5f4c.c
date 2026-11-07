// FUN_007a5f4c @ 007a5f4c size=544 calls_out=7 calls_in=1
// strings: 

void FUN_007a5f4c(undefined4 *param_1,undefined *param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined *local_78;
  int local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined *local_60;
  undefined **local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined **local_34;
  undefined2 *local_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  
  if (param_3 == 0) {
    param_3 = 7;
    param_2 = &DAT_003e1d07;
  }
  local_78 = param_2;
  local_74 = param_3;
  if (param_5 == 0) {
    FUN_007a61f4(param_1,param_2,param_3);
    return;
  }
  FUN_007a6398(&local_6c,param_4);
  local_30 = &DAT_0132b6a0;
  local_34 = &local_78;
  local_28 = &LAB_0193a90c;
  local_70 = &local_6c;
  local_2c = &local_70;
  FUN_00664898(&local_40,&DAT_005a02f4,&local_34);
  uVar5 = local_38;
  uVar3 = local_3c;
  uVar1 = local_40;
  iVar6 = FUN_007a66fc(local_3c,local_38);
  if (iVar6 == 0) {
    FUN_007a6398(&local_60,param_2,param_3);
    local_30 = (undefined2 *)&LAB_00632348;
    local_28 = &LAB_0193a90c;
    local_34 = &local_60;
    local_2c = &local_70;
    FUN_00664898(&local_40,&DAT_005a02f4,&local_34);
    uVar4 = local_3c;
    uVar2 = local_40;
    if (local_38 < 0x40) {
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = local_38;
    }
    else {
      local_34 = local_5c;
      local_30 = (undefined2 *)((int)local_5c + local_58);
      local_2c = (undefined4 **)(0x3f - (local_64 + 1U));
      if (0x3f < local_64 + 1U) {
        local_2c = (undefined4 **)0x0;
      }
      FUN_007a67e4(&local_54,&local_34);
      local_48 = FUN_007a8164(local_50,local_4c);
      if ((int)((ulonglong)local_48 >> 0x20) == 0) {
        FUN_007a61f4(param_1,local_68,local_64);
      }
      else {
        local_28 = &LAB_0193a90c;
        local_30 = &DAT_0132b6a0;
        local_34 = (undefined **)&local_48;
        local_2c = &local_70;
        FUN_00664898(&local_40,&DAT_005a02f4,&local_34);
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
      }
      FUN_019bb7e0(local_54,local_50);
      FUN_019bb7e0(uVar2,uVar4);
    }
    FUN_019bb7e0(local_60,local_5c);
    FUN_019bb7e0(uVar1,uVar3);
  }
  else {
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
  }
  FUN_019bb7e0(local_6c,local_68);
  return;
}

