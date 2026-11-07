// FUN_00ce29d8 @ 00ce29d8 size=76 calls_out=3 calls_in=3
// strings: 

void FUN_00ce29d8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    FUN_0187266c((char)piVar1[1],piVar1[2]);
  }
  else if ((*piVar1 == 0) && (piVar1[2] != 0)) {
    thunk_FUN_01be4678(piVar1[1]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

