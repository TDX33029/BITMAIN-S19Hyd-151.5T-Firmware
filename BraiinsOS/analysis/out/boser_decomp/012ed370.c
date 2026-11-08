// FUN_012ed370 @ 012ed370 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_012ed370(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x012ed39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x24))();
  return;
}

