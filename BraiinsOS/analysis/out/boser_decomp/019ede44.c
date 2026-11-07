// FUN_019ede44 @ 019ede44 size=44 calls_out=1 calls_in=57
// strings: 

void FUN_019ede44(int param_1)

{
  FUN_019e0ae8();
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x019ede68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0x14));
  return;
}

