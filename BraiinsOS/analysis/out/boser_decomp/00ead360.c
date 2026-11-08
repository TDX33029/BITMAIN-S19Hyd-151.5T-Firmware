// FUN_00ead360 @ 00ead360 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_00ead360(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x00ead34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_1 + 0x20))(*(undefined4 **)(param_1 + 0x20));
    return;
  }
  FUN_019bb7e0();
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  return;
}

