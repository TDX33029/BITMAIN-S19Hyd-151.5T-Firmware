// FUN_019682f8 @ 019682f8 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_019682f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c [3];
  
  FUN_012fbd94(&local_28,param_3,param_4);
  if (local_28 == 1) {
    local_1c[0] = 0xf;
    FUN_01968240(param_1,param_2,local_1c);
  }
  else {
    *param_1 = uStack_24;
    param_1[1] = uStack_20;
  }
  return;
}

