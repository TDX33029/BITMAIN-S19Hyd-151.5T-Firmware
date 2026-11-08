// FUN_0132021c @ 0132021c size=108 calls_out=3 calls_in=0
// strings: 

void FUN_0132021c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_013204d4(&local_20);
  if (local_20 == 4) {
    FUN_0130ca20(param_2);
    FUN_0130ddec(&local_20,param_2,param_3);
    if (local_20 == 4) {
      *param_1 = 4;
      return;
    }
  }
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}

