// FUN_019ecb44 @ 019ecb44 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_019ecb44(int param_1)

{
  FUN_012840cc();
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x019ecb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x1c) + 0xc))(*(undefined4 *)(param_1 + 0x20));
  return;
}

