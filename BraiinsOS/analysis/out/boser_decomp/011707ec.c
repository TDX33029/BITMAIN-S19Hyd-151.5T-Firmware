// FUN_011707ec @ 011707ec size=56 calls_out=3 calls_in=1
// strings: 

void FUN_011707ec(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (*piVar1 != 6 || piVar1[1] != 0) {
    FUN_01139d78(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
  FUN_01139f38(param_1);
  return;
}

