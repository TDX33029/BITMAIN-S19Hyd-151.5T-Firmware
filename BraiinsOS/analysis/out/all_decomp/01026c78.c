// FUN_01026c78 @ 01026c78 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_01026c78(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01026cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
  return;
}

