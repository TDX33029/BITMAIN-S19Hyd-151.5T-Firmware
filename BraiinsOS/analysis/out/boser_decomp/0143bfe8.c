// FUN_0143bfe8 @ 0143bfe8 size=108 calls_out=1 calls_in=5
// strings: 

void FUN_0143bfe8(char *param_1)

{
  if (*param_1 != '\x03') {
    FUN_017726bc(*param_1,*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x10))
              (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0143c04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
            (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

