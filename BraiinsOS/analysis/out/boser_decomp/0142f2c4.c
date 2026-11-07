// FUN_0142f2c4 @ 0142f2c4 size=68 calls_out=0 calls_in=1
// strings: 

void FUN_0142f2c4(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1c) + 0x10))
              (param_1 + 0x28,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
                    /* WARNING: Could not recover jumptable at 0x0142f304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))
            (param_1 + 0x18,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}

