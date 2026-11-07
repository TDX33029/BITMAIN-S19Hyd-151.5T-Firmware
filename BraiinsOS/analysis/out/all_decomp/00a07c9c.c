// FUN_00a07c9c @ 00a07c9c size=48 calls_out=1 calls_in=0
// strings: 

void FUN_00a07c9c(int param_1)

{
  FUN_0163bdc0(param_1 + 4);
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a07cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x18));
  return;
}

