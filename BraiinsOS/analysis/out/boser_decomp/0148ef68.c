// FUN_0148ef68 @ 0148ef68 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_0148ef68(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 8) {
    FUN_0148e858(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

