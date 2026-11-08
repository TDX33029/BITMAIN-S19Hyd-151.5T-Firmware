// FUN_00634250 @ 00634250 size=136 calls_out=0 calls_in=0
// strings: 

int FUN_00634250(int param_1,int *param_2)

{
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if ((*param_2 == 0x50f052f7 && param_2[2] == -0x20684cdb) &&
      (param_2[1] == -0x66f64d5b && param_2[3] == -0x4aa34df2)) {
    param_1 = param_1 + 0x1c;
  }
  else {
    local_20 = *param_2;
    iStack_1c = param_2[1];
    iStack_18 = param_2[2];
    iStack_14 = param_2[3];
    param_1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),&local_20);
  }
  return param_1;
}

