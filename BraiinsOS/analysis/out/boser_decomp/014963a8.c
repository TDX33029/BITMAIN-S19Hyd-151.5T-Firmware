// FUN_014963a8 @ 014963a8 size=140 calls_out=2 calls_in=42
// strings: 

void FUN_014963a8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 *local_20;
  undefined1 *local_1c;
  
  local_20 = &local_30;
  local_30 = *param_3;
  local_2c = param_3[1];
  uStack_28 = param_3[2];
  local_1c = &LAB_00632348;
  FUN_00664898(&local_40,&DAT_005a5d80,&local_20);
  FUN_019bb7e0(local_30,local_2c);
  local_30 = local_40;
  local_2c = uStack_3c;
  uStack_28 = uStack_38;
  FUN_019bb7e0(*param_2,param_2[1]);
  *param_2 = local_30;
  param_2[1] = local_2c;
  param_2[2] = uStack_28;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  return;
}

