// FUN_00ead5f4 @ 00ead5f4 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00ead5f4(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00ead628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x28))();
  return;
}

