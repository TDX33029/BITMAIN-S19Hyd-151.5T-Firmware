// FUN_0193c3cc @ 0193c3cc size=44 calls_out=1 calls_in=337
// strings: 

void FUN_0193c3cc(int param_1)

{
  FUN_019f9a9c();
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0193c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 4) + 0xc))(*(undefined4 *)(param_1 + 8));
  return;
}

