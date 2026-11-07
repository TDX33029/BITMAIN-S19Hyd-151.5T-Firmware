// FUN_010e7868 @ 010e7868 size=56 calls_out=3 calls_in=1
// strings: 

void FUN_010e7868(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (*piVar1 != 6 || piVar1[1] != 0) {
    FUN_010e78c0(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
  FUN_005f5594(param_1);
  return;
}

