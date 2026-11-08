// FUN_012c7f64 @ 012c7f64 size=48 calls_out=1 calls_in=11
// strings: 

void FUN_012c7f64(int param_1)

{
  FUN_019e0ae8(param_1 + 4);
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012c7f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x18));
  return;
}

