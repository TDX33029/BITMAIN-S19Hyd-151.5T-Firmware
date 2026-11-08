// FUN_017d2d8c @ 017d2d8c size=48 calls_out=1 calls_in=0
// strings: 

void FUN_017d2d8c(int param_1)

{
  FUN_017d2de4(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017d2db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

