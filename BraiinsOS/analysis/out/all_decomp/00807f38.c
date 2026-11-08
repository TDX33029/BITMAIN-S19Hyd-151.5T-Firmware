// FUN_00807f38 @ 00807f38 size=64 calls_out=1 calls_in=0
// strings: 

void FUN_00807f38(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
  (**(code **)**(undefined4 **)(param_1 + 0x1c))();
                    /* WARNING: Could not recover jumptable at 0x00807f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x20))();
  return;
}

