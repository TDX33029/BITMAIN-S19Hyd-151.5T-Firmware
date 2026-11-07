// FUN_0063fa94 @ 0063fa94 size=212 calls_out=1 calls_in=3
// strings: 

void FUN_0063fa94(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_2[2] == -0x80000000) {
    local_48 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_48,param_2[3],param_2[4]);
  }
  if (param_2[5] == -0x80000000) {
    local_38 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_38,param_2[6],param_2[7]);
  }
  if (param_2[8] == -0x80000000) {
    local_28 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_28,param_2[9],param_2[10]);
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = local_38;
  param_1[6] = uStack_34;
  param_1[7] = uStack_30;
  param_1[8] = local_28;
  param_1[9] = uStack_24;
  param_1[10] = uStack_20;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}

