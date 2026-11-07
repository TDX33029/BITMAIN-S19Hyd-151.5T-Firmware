// FUN_01435814 @ 01435814 size=64 calls_out=1 calls_in=58
// strings: 

void FUN_01435814(undefined1 *param_1)

{
  FUN_01aa78c0(*param_1,*(undefined4 *)(param_1 + 4));
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x01435850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
            (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

