// FUN_01354a94 @ 01354a94 size=140 calls_out=3 calls_in=5
// strings: 

void FUN_01354a94(int param_1)

{
  int *piVar1;
  
  if ((9 < *(byte *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x74) != 0)) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x70));
  }
  if (1 < *(byte *)(param_1 + 0x40)) {
    piVar1 = *(int **)(param_1 + 0x44);
    (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    thunk_FUN_01be4678(piVar1);
  }
  (**(code **)(*(int *)(param_1 + 0x48) + 0x10))
            (param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))
            (param_1 + 100,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  FUN_0142e6dc(param_1);
  FUN_0178e884(*(undefined4 *)(param_1 + 0x80));
  return;
}

