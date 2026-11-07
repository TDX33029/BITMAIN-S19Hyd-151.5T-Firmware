// FUN_00a422c8 @ 00a422c8 size=104 calls_out=0 calls_in=0
// strings: 

void FUN_00a422c8(int param_1,int *param_2)

{
  if ((*param_2 == 0x50f052f7 && param_2[2] == -0x20684cdb) &&
      (param_2[1] == -0x66f64d5b && param_2[3] == -0x4aa34df2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a4232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
  return;
}

