// FUN_013a1694 @ 013a1694 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_013a1694(int param_1)

{
  FUN_0136a28c(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013a16d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
  return;
}

