// FUN_00e09cb8 @ 00e09cb8 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_00e09cb8(int param_1)

{
  FUN_00de0c9c();
  FUN_0163bdc0(param_1 + 0x2ac);
  if (*(int *)(param_1 + 700) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e09ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 700) + 0xc))(*(undefined4 *)(param_1 + 0x2c0));
  return;
}

