// FUN_014c9e20 @ 014c9e20 size=96 calls_out=1 calls_in=4
// strings: 

void FUN_014c9e20(int *param_1)

{
  if (*param_1 != 3) {
    FUN_014c9d44(param_1);
  }
  if (param_1[0x23] != 3) {
    FUN_014c9d44();
  }
  if (param_1[0x46] != 3) {
    FUN_014c9d44();
  }
  if (param_1[0x69] != 3) {
    FUN_014c9d44();
  }
  if (param_1[0x8c] == 3) {
    return;
  }
  FUN_014c9d44(param_1 + 0x8c);
  return;
}

