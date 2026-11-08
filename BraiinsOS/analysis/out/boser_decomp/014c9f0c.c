// FUN_014c9f0c @ 014c9f0c size=80 calls_out=1 calls_in=4
// strings: 

void FUN_014c9f0c(int *param_1)

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
  if (param_1[0x69] == 3) {
    return;
  }
  FUN_014c9d44(param_1 + 0x69);
  return;
}

