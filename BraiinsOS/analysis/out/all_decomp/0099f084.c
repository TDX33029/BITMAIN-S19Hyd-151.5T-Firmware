// FUN_0099f084 @ 0099f084 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_0099f084(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0099f0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

