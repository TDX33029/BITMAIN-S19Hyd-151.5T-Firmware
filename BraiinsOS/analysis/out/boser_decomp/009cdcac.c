// FUN_009cdcac @ 009cdcac size=44 calls_out=1 calls_in=51
// strings: 

void FUN_009cdcac(int param_1)

{
  FUN_01a17e08();
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009cdcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 4) + 0xc))(*(undefined4 *)(param_1 + 8));
  return;
}

