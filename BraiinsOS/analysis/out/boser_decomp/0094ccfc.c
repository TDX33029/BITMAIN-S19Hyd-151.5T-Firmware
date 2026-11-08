// FUN_0094ccfc @ 0094ccfc size=76 calls_out=3 calls_in=6
// strings: 

void FUN_0094ccfc(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    FUN_0069d8a4((char)piVar1[1],piVar1[2]);
  }
  else if ((*piVar1 == 0) && (piVar1[2] != 0)) {
    thunk_FUN_01be4678(piVar1[1]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

