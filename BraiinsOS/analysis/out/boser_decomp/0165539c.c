// FUN_0165539c @ 0165539c size=56 calls_out=1 calls_in=2
// strings: 

void FUN_0165539c(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 4);
  do {
    if (*piVar1 != -0x80000000) {
      FUN_0134bd64(*piVar1,piVar1[1]);
    }
    piVar1 = piVar1 + 6;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

