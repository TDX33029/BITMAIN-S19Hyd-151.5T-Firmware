// FUN_01799434 @ 01799434 size=176 calls_out=2 calls_in=1
// strings: 

void FUN_01799434(int param_1)

{
  if (*(byte *)(param_1 + 0x2d8) - 3 < 2) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc));
    *(undefined2 *)(param_1 + 0x2da) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x294),*(undefined4 *)(param_1 + 0x298));
    FUN_017998e0(param_1 + 0x130);
    *(undefined1 *)(param_1 + 0x2d9) = 0;
  }
  else if (*(byte *)(param_1 + 0x2d8) == 0) {
    FUN_017998e0(param_1);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x264));
    if (*(char *)(param_1 + 0x27c) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x26c) + 0x10))
                (param_1 + 0x278,*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274));
    }
    if (*(char *)(param_1 + 0x290) == '\x02') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x017994dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x280) + 0x10))
              (param_1 + 0x28c,*(undefined4 *)(param_1 + 0x284),*(undefined4 *)(param_1 + 0x288));
    return;
  }
  return;
}

