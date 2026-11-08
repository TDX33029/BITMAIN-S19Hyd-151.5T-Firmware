// FUN_0102ced8 @ 0102ced8 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_0102ced8(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  if (param_3 <= *param_1 - param_2) {
    return;
  }
  if (CARRY4(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  FUN_006bc77c(&local_24,*param_1,param_1[1],param_3 + param_2,4,param_4);
  if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_20,local_1c);
  }
  *param_1 = param_3 + param_2;
  param_1[1] = local_20;
  return;
}

