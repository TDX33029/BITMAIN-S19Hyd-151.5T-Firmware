// FUN_0182362c @ 0182362c size=48 calls_out=1 calls_in=0
// strings: 

void FUN_0182362c(int param_1)

{
  FUN_01823684(param_1 + 0x20);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01823654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))(*(undefined4 *)(param_1 + 0x44));
  return;
}

