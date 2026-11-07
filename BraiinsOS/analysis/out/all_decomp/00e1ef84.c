// FUN_00e1ef84 @ 00e1ef84 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_00e1ef84(int param_1)

{
  FUN_00de1d78();
  FUN_0163bdc0(param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e1efb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x20) + 0xc))(*(undefined4 *)(param_1 + 0x24));
  return;
}

