// FUN_009d57a8 @ 009d57a8 size=56 calls_out=1 calls_in=5
// strings: 

void FUN_009d57a8(int param_1)

{
  FUN_009d5814();
  if (*(int *)(param_1 + 0x88) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009d57d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x88) + 0x10))
            (param_1 + 0x94,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  return;
}

