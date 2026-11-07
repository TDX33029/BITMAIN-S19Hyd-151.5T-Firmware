// FUN_0094a3b4 @ 0094a3b4 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_0094a3b4(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*piVar1 != 8) {
    FUN_00949b58(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

