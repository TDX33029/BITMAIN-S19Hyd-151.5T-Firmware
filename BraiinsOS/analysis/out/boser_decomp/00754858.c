// FUN_00754858 @ 00754858 size=56 calls_out=3 calls_in=7
// strings: 

void FUN_00754858(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1[0x13] != 0) {
    FUN_01443048(piVar1[0x13],piVar1[0x14]);
  }
  if (*piVar1 != 2) {
    FUN_019bb7e0(piVar1[4],piVar1[5]);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

