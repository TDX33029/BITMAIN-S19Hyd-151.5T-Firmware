// FUN_00aa2550 @ 00aa2550 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_00aa2550(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[4];
    if (*piVar1 != -0x7fffffec) {
      FUN_00aa2104(piVar1);
    }
    thunk_FUN_016d3fb4(piVar1);
    piVar1 = piVar2;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aa25a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
  return;
}

