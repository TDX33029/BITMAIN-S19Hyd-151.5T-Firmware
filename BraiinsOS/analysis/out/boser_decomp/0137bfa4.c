// FUN_0137bfa4 @ 0137bfa4 size=68 calls_out=0 calls_in=4
// strings: 

void FUN_0137bfa4(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(*(int *)(param_1 + 0x20) + 0x10))
              (param_1 + 0x2c,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0137bfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))
            (param_1 + 0x18,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}

