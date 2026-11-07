// FUN_0068d434 @ 0068d434 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_0068d434(int param_1)

{
  FUN_0068d48c(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0068d45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

