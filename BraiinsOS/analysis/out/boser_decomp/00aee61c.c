// FUN_00aee61c @ 00aee61c size=172 calls_out=7 calls_in=0
// strings: 

void FUN_00aee61c(int param_1)

{
  if (-1 < *(int *)(param_1 + 0xd0)) {
    FUN_019bb7e0(*(int *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
  }
  if (*(int *)(param_1 + 0xb8) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  }
  FUN_00abb574(param_1 + 0xdc);
  FUN_0094a31c(param_1 + 0x88);
  if (*(int *)(param_1 + 0xc4) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  }
  if (*(char *)(param_1 + 0x38) != '\x06') {
    FUN_00db4764();
  }
  FUN_00949b70(param_1 + 0x94);
  if (*(char *)(param_1 + 0x50) != '\x06') {
    FUN_00db4764();
  }
  FUN_0094a36c(param_1 + 0x10);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  FUN_01ada488((int *)(param_1 + 0x68));
  return;
}

