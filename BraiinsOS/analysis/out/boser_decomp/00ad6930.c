// FUN_00ad6930 @ 00ad6930 size=192 calls_out=3 calls_in=2
// strings: hashrate_step | min_hashrate_target

void FUN_00ad6930(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_48 = 0x80000000;
  local_4c = 0;
  local_54 = 0;
  local_58 = 0;
  iVar1 = FUN_00a47f8c((int)*(undefined8 *)(param_2 + 2),&local_58,"hashrate_step",0xd,param_2[1],
                       *param_2,param_2[1]);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00a47f8c((int)*(undefined8 *)(param_2 + 6),&local_58,"min_hashrate_target",0x13,
                           param_2[5],param_2[4],param_2[5]), iVar1 == 0)) {
    local_38 = local_58;
    uStack_34 = local_54;
    uStack_30 = uStack_50;
    uStack_2c = local_4c;
    uStack_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    FUN_0196ac88(param_1);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  FUN_0127464c(&local_58);
  return;
}

