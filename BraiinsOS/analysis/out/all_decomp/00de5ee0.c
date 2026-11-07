// FUN_00de5ee0 @ 00de5ee0 size=60 calls_out=3 calls_in=2
// strings: 

void FUN_00de5ee0(int param_1)

{
  FUN_00a07b4c();
  FUN_005c728c(param_1 + 0x50);
  FUN_0163bdc0(param_1 + 0x60);
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00de5f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
  return;
}

