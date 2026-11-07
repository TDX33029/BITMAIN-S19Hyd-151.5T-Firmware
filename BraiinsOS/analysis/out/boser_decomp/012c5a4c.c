// FUN_012c5a4c @ 012c5a4c size=152 calls_out=4 calls_in=0
// strings: 

void FUN_012c5a4c(int param_1,int *param_2)

{
  if ((*param_2 == 0x50f052f7 && param_2[2] == -0x20684cdb) &&
      (param_2[1] == -0x66f64d5b && param_2[3] == -0x4aa34df2)) {
    if (*(int *)(param_1 + 4) == 2) {
      FUN_006676f8(param_1 + 8);
    }
    FUN_012c5718(param_1 + 0x28);
  }
  else {
    if (*(int *)(param_1 + 4) == 2) {
      FUN_006676f8(param_1 + 8);
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  }
  thunk_FUN_01be4678(param_1);
  return;
}

