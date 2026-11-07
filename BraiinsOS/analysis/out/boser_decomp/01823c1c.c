// FUN_01823c1c @ 01823c1c size=72 calls_out=4 calls_in=0
// strings: 

void FUN_01823c1c(short *param_1)

{
  if (*param_1 != 3) {
    FUN_012d40d0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x16));
    return;
  }
  FUN_019deb7c(param_1 + 2);
  if (*(int *)(param_1 + 8) != -1) {
    FUN_01bf01d6();
  }
  FUN_0179995c(param_1 + 2);
  return;
}

