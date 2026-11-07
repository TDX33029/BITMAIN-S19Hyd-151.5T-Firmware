// FUN_00f8583c @ 00f8583c size=116 calls_out=2 calls_in=2
// strings: 

void FUN_00f8583c(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x3c)) {
  default:
    return;
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    *(undefined1 *)(param_1 + 0x3e) = 0;
  case 4:
    *(undefined1 *)(param_1 + 0x3f) = 0;
    if (*(char *)(param_1 + 0x3d) != '\0') {
      (**(code **)(*(int *)(param_1 + 0x2c) + 0x10))
                (param_1 + 0x38,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    }
  case 3:
    *(undefined1 *)(param_1 + 0x3d) = 0;
    param_1 = param_1 + 0x14;
  case 0:
    FUN_00f85618(param_1);
    return;
  }
}

