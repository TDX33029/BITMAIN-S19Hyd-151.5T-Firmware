// FUN_0170bbb4 @ 0170bbb4 size=88 calls_out=1 calls_in=7
// strings: 

void FUN_0170bbb4(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_2 == 0) {
    FUN_019ac130(&local_18,1);
    *param_1 = local_18;
    param_1[1] = uStack_14;
    param_1[2] = uStack_10;
    return;
  }
  (**(code **)(param_3 + 0x14))(param_1,param_2 + (*(int *)(param_3 + 8) - 1U & 0xfffffff8) + 8);
  return;
}

