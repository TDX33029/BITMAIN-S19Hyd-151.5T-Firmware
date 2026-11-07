// FUN_0138ac04 @ 0138ac04 size=212 calls_out=2 calls_in=1
// strings: 

void FUN_0138ac04(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if (bVar1 != 0xc) {
    if (((bVar1 != 0xb) && (9 < bVar1)) && (*(int *)(param_1 + 0x2c) != 0)) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      (**(code **)(*(int *)(param_1 + 0x38) + 0x10))
                (param_1 + 0x44,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      (**(code **)(*(int *)(param_1 + 0x48) + 0x10))
                (param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      (**(code **)(*(int *)(param_1 + 0x58) + 0x10))
                (param_1 + 100,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      (**(code **)(*(int *)(param_1 + 0x68) + 0x10))
                (param_1 + 0x74,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
    }
  }
  FUN_00713cb8(param_1);
  return;
}

