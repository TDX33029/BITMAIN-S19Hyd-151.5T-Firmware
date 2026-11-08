// FUN_012c11c8 @ 012c11c8 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_012c11c8(undefined4 *param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  char local_18;
  undefined1 local_17;
  undefined4 local_14;
  
  FUN_012c133c(&local_18);
  if (local_18 == '\x01') {
    *param_1 = 0;
    param_1[1] = local_14;
    return;
  }
  FUN_012b1e00(param_1,local_17,extraout_r2,extraout_r3,in_stack_00000000,in_stack_00000004);
  return;
}

