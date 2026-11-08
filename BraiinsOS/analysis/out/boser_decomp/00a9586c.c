// FUN_00a9586c @ 00a9586c size=84 calls_out=1 calls_in=4
// strings: 

void FUN_00a9586c(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[10] != -0x80000000) {
    FUN_019bb7e0(param_1[10],param_1[0xb]);
  }
  if (param_1[0xd] != -0x80000000) {
    FUN_019bb7e0(param_1[0xd],param_1[0xe]);
  }
  if (param_1[0x10] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x10],param_1[0x11]);
  return;
}

