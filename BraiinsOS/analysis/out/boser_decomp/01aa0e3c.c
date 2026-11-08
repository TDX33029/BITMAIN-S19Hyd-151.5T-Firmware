// FUN_01aa0e3c @ 01aa0e3c size=48 calls_out=1 calls_in=0
// strings: 

void FUN_01aa0e3c(int param_1)

{
  FUN_01aa0e94(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01aa0e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

