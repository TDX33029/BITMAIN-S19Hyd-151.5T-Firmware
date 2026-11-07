// FUN_01ad9c5c @ 01ad9c5c size=160 calls_out=9 calls_in=0
// strings: 

void FUN_01ad9c5c(int param_1)

{
  if (*(int *)(param_1 + 200) != -0x80000000) {
    FUN_006a41c0();
  }
  if (*(int *)(param_1 + 0xd4) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
  }
  if (*(int *)(param_1 + 0xe0) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
  }
  if (*(int *)(param_1 + 0xec) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0));
  }
  FUN_01ad2c38(param_1 + 0x90);
  FUN_0096c2c4(param_1 + 0xf8);
  FUN_01ad2c80(param_1);
  FUN_01ad2cec(param_1 + 0x60);
  if (*(int *)(param_1 + 0x104) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x108));
  }
  FUN_01ad2d3c(param_1 + 0x110);
  FUN_00da99c8(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_01ada488((int *)(param_1 + 0x40));
  return;
}

