// FUN_00abbbdc @ 00abbbdc size=72 calls_out=3 calls_in=3
// strings: 

void FUN_00abbbdc(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    FUN_00abbc74(piVar1 + 1);
  }
  else if ((*piVar1 == 0) && (piVar1[2] != 0)) {
    thunk_FUN_01be4678(piVar1[1]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

