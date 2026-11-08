// FUN_0148945c @ 0148945c size=52 calls_out=2 calls_in=1
// strings: 

void FUN_0148945c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 8) {
    FUN_01488d4c(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

