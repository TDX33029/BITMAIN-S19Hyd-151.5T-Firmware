// FUN_005f8158 @ 005f8158 size=88 calls_out=3 calls_in=2
// strings: 

void FUN_005f8158(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  FUN_00b21d18(uVar1,*(undefined4 *)(param_1 + 0x28));
  FUN_0132b958(*(undefined4 *)(param_1 + 0x20),uVar1,4,0x3c);
  if (*(int *)(param_1 + 0x2c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  return;
}

