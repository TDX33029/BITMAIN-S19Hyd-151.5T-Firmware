// FUN_0121a444 @ 0121a444 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_0121a444(int *param_1,undefined4 *param_2)

{
  int local_20;
  undefined4 *local_1c;
  int iStack_18;
  
  FUN_0074dec8(&local_20,*param_2,param_2[1]);
  if (local_20 == -0x80000000) {
    *param_1 = -0x80000000;
    (**(code **)*local_1c)();
    return;
  }
  *param_1 = local_20;
  param_1[1] = (int)local_1c;
  param_1[2] = iStack_18;
  return;
}

