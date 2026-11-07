// FUN_00bc8d40 @ 00bc8d40 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_00bc8d40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    FUN_00b9391c((char)piVar1[1],piVar1[2]);
  }
  else if ((*piVar1 == 0) && (piVar1[2] != 0)) {
    thunk_FUN_01be4678(piVar1[1]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

