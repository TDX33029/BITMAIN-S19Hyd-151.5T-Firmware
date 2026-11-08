// FUN_01700b14 @ 01700b14 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01700b14(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    thunk_FUN_01be4678();
  }
  FUN_01428000(*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01700b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x1c) + 0xc))(*(undefined4 *)(param_1 + 0x20));
  return;
}

