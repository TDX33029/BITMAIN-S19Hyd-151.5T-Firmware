// FUN_009d7e58 @ 009d7e58 size=56 calls_out=1 calls_in=2
// strings: 

void FUN_009d7e58(int param_1)

{
  FUN_01a697b8();
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009d7e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x10))
            (param_1 + 0x1c,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  return;
}

