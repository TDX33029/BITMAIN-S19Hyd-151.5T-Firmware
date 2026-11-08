// FUN_00a85b84 @ 00a85b84 size=108 calls_out=4 calls_in=5
// strings: 

void FUN_00a85b84(int param_1)

{
  if ((9 < *(byte *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x74) != 0)) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x70));
  }
  FUN_01435814(param_1 + 0x40);
  FUN_0142e6dc(param_1);
  FUN_0178e884(*(undefined4 *)(param_1 + 0x80));
  if (*(int *)(param_1 + 0x88) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a85be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x88) + 0x10))
            (param_1 + 0x94,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  return;
}

