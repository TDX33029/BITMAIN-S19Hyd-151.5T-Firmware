// FUN_009d7894 @ 009d7894 size=72 calls_out=3 calls_in=2
// strings: 

void FUN_009d7894(int param_1)

{
  FUN_008e0f4c(param_1 + 0xc);
  FUN_01a697b8(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x2c) + 0x10))
              (param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  }
  FUN_009d5724(param_1);
  return;
}

