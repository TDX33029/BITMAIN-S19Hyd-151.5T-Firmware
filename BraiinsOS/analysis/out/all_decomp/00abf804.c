// FUN_00abf804 @ 00abf804 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00abf804(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00a954c0(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00abf844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x28))();
  return;
}

