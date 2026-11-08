// FUN_01962300 @ 01962300 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_01962300(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  FUN_01962348(&local_20,param_2,param_3,4);
  if (local_20 == 0) {
    *param_1 = 0;
    param_1[1] = uStack_1c;
    param_1[2] = uStack_18;
  }
  else {
    FUN_0196191c(param_1);
    param_1[2] = uStack_18;
    param_1[3] = local_14;
  }
  return;
}

