// FUN_012c0fd4 @ 012c0fd4 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_012c0fd4(undefined4 *param_1)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_012c1060(&local_30,in_stack_00000000,in_stack_00000004);
  if (local_30 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = local_2c;
  }
  else {
    local_20 = local_30;
    uStack_1c = local_2c;
    uStack_18 = uStack_28;
    FUN_012b1f38(param_1);
  }
  return;
}

