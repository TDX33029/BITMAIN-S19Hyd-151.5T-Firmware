// FUN_00a1f0e8 @ 00a1f0e8 size=164 calls_out=2 calls_in=1
// strings: HashChainSetter

void FUN_00a1f0e8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  int *local_18;
  undefined1 *local_14;
  
  local_14 = &LAB_012b97d8;
  local_18 = &local_2c;
  local_20 = param_2 + 4;
  local_28 = "HashChainSetter";
  local_24 = 0xf;
  local_2c = -0x80000000;
  local_1c = &LAB_00632348;
  FUN_00664898(&local_38,&DAT_005bd155,&local_20);
  if (local_2c != -0x80000000) {
    FUN_019bb7e0(local_2c,local_28);
  }
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[6] = uStack_30;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_019bb7e0(param_2[4],param_2[5]);
  return;
}

