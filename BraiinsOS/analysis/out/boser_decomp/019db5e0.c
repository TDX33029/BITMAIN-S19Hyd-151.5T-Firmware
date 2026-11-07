// FUN_019db5e0 @ 019db5e0 size=64 calls_out=0 calls_in=1
// strings: 

void FUN_019db5e0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x019db618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x18));
  return;
}

