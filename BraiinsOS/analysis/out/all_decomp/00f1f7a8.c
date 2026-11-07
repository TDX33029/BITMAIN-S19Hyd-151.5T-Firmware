// FUN_00f1f7a8 @ 00f1f7a8 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_00f1f7a8(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00ea0c8c(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00f1f7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

