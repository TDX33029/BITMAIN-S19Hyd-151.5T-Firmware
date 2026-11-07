// FUN_019faf5c @ 019faf5c size=60 calls_out=1 calls_in=25
// strings: 

void FUN_019faf5c(int param_1)

{
  if (*(char *)(param_1 + 0x1c) != '\x03') {
    return;
  }
  FUN_01a17e08(param_1 + 4);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x019faf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 0xc));
  return;
}

