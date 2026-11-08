// FUN_009432a0 @ 009432a0 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_009432a0(int param_1)

{
  FUN_009432f8(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009432c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

