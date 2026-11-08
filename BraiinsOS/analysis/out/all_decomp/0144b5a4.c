// FUN_0144b5a4 @ 0144b5a4 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_0144b5a4(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0144b5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x18));
  return;
}

