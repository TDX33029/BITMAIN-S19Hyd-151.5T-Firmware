// FUN_01af9f80 @ 01af9f80 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_01af9f80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_20;
  code *local_1c;
  int *local_18;
  code *local_14;
  
  local_1c = (code *)0x0;
  local_20 = (int *)0x0;
  local_18 = (int *)0x0;
  FUN_0130a5b0(&local_20,param_3,param_4);
  local_20 = param_2 + 2;
  local_34 = (int)local_18;
  if ((int *)*local_20 == local_18) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_1 = 0x80000007;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  else {
    local_18 = &local_34;
    local_14 = FUN_012fdbc0;
    local_1c = FUN_012fdbc0;
    FUN_00664898(&local_30,&DAT_005342f0,&local_20);
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    if (param_2[1] != 0) {
      thunk_FUN_01be4678(*param_2);
    }
  }
  return;
}

