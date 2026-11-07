// FUN_01a7e52c @ 01a7e52c size=72 calls_out=1 calls_in=1
// strings: 

void FUN_01a7e52c(char *param_1)

{
  if (*param_1 == '\0') {
    return;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x01a7e554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  if (*(int *)(param_1 + 4) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

