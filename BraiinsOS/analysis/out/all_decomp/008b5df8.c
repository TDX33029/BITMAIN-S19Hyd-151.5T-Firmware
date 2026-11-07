// FUN_008b5df8 @ 008b5df8 size=72 calls_out=1 calls_in=0
// strings: 

void FUN_008b5df8(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  while (piVar1 != (int *)0x0) {
    piVar1 = (int *)*piVar1;
    thunk_FUN_016d3fb4();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008b5e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
  return;
}

