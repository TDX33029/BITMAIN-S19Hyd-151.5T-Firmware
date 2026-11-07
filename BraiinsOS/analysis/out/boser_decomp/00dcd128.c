// FUN_00dcd128 @ 00dcd128 size=56 calls_out=1 calls_in=3
// strings: 

void FUN_00dcd128(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 8);
  do {
    if (*piVar1 != 0) {
      FUN_019bb7e0(piVar1[1],piVar1[2]);
    }
    piVar1 = piVar1 + 8;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

