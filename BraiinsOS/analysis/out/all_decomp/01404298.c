// FUN_01404298 @ 01404298 size=200 calls_out=1 calls_in=18
// strings: 

void FUN_01404298(byte *param_1)

{
  if (((*param_1 != 0xb) && (9 < *param_1)) && (*(int *)(param_1 + 8) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0x10))
              (param_1 + 0x20,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0x10))
              (param_1 + 0x30,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(*(int *)(param_1 + 0x34) + 0x10))
              (param_1 + 0x40,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01404358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))
            (param_1 + 0x50,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  return;
}

