// FUN_01884fe8 @ 01884fe8 size=80 calls_out=1 calls_in=0
// strings: 

void FUN_01884fe8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01881d80();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01885030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x1c) + 0xc))(*(undefined4 *)(param_1 + 0x20));
  return;
}

