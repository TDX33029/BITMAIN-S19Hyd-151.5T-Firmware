// FUN_00699f78 @ 00699f78 size=72 calls_out=3 calls_in=4
// strings: 

void FUN_00699f78(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    FUN_0069603c(piVar1 + 1);
  }
  else if ((*piVar1 == 0) && (piVar1[2] != 0)) {
    thunk_FUN_01be4678(piVar1[1]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

