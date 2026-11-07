// FUN_00972a48 @ 00972a48 size=92 calls_out=2 calls_in=5
// strings: 

void FUN_00972a48(int param_1)

{
  if (*(char *)(param_1 + 0x1c) == '\x03') {
    FUN_00e7c67c(param_1 + 4);
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  FUN_0163bdc0(param_1 + 0x24);
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00972a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x34) + 0xc))(*(undefined4 *)(param_1 + 0x38));
  return;
}

