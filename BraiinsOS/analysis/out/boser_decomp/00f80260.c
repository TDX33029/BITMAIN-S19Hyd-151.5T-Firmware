// FUN_00f80260 @ 00f80260 size=72 calls_out=3 calls_in=20
// strings: 

void FUN_00f80260(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    FUN_0183a528(piVar1 + 1);
  }
  else if ((*piVar1 == 0) && (piVar1[2] != 0)) {
    thunk_FUN_01be4678(piVar1[1]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

