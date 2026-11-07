// FUN_0121d24c @ 0121d24c size=44 calls_out=1 calls_in=7
// strings: 

void FUN_0121d24c(int param_1)

{
  FUN_019e12b8();
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0121d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0x10));
  return;
}

