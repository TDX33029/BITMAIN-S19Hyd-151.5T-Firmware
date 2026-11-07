// FUN_00f2d9f0 @ 00f2d9f0 size=56 calls_out=3 calls_in=1
// strings: 

void FUN_00f2d9f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (*piVar1 != 6 || piVar1[1] != 0) {
    FUN_00f27a6c(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
  FUN_00d31b70(param_1);
  return;
}

