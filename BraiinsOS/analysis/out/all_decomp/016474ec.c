// FUN_016474ec @ 016474ec size=76 calls_out=1 calls_in=0
// strings: 

void FUN_016474ec(int param_1)

{
  FUN_01639598(param_1 + 0x20,0x3f);
  if (*(int *)(param_1 + 0x38) != 0) {
    (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01647530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

