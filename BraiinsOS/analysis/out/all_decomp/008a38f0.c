// FUN_008a38f0 @ 008a38f0 size=104 calls_out=0 calls_in=0
// strings: 

void FUN_008a38f0(int param_1,int *param_2)

{
  if ((*param_2 == 0x6bf5d1b4 && param_2[2] == -0x52269b3d) &&
      (param_2[1] == 0x3723649 && param_2[3] == -0x24aea333)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008a3954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
  return;
}

