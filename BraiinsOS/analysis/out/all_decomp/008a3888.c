// FUN_008a3888 @ 008a3888 size=104 calls_out=0 calls_in=0
// strings: 

void FUN_008a3888(int param_1,int *param_2)

{
  if ((*param_2 == -0x2934a293 && param_2[2] == 0x57a64178) &&
      (param_2[1] == 0x63eb502c && param_2[3] == -0x4674e48f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008a38ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 0x10))();
  return;
}

