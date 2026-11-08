// FUN_009431e8 @ 009431e8 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_009431e8(int param_1)

{
  FUN_00943240(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00943210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

