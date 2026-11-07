// FUN_00809828 @ 00809828 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_00809828(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
  if (*(char *)(param_1 + 0x20) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00809860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_1 + 0x24))();
    return;
  }
  return;
}

