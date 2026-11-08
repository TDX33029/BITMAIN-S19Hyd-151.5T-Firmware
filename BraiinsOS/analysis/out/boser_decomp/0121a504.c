// FUN_0121a504 @ 0121a504 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_0121a504(int *param_1)

{
  int local_20;
  undefined4 *local_1c;
  int iStack_18;
  
  FUN_0074eff0(&local_20);
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

