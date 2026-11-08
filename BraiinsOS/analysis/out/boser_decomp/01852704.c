// FUN_01852704 @ 01852704 size=120 calls_out=5 calls_in=5
// strings: 

void FUN_01852704(int param_1)

{
  if ((9 < *(byte *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x74) != 0)) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x70));
  }
  FUN_017726bc(*(undefined1 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  (**(code **)(*(int *)(param_1 + 0x48) + 0x10))
            (param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))
            (param_1 + 100,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  FUN_0142e6dc(param_1);
  FUN_0178e884(*(undefined4 *)(param_1 + 0x80));
  FUN_0182e3a0(param_1 + 0x88);
  return;
}

