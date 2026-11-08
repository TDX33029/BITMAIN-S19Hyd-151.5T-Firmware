// FUN_0176607c @ 0176607c size=88 calls_out=4 calls_in=0
// strings: 

void FUN_0176607c(short *param_1)

{
  if (*param_1 == 3) {
    FUN_019deb7c(param_1 + 2);
    if (*(int *)(param_1 + 8) != -1) {
      FUN_01bf01d6();
    }
    FUN_0179995c(param_1 + 2);
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_01443048(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x16));
  return;
}

