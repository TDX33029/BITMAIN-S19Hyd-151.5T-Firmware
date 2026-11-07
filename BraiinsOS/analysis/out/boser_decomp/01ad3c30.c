// FUN_01ad3c30 @ 01ad3c30 size=60 calls_out=3 calls_in=1
// strings: 

void FUN_01ad3c30(int *param_1)

{
  FUN_01ad8cf8(param_1 + 0x24);
  FUN_01ad8cf8(param_1 + 0x2d);
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_0134bd64(param_1[2],param_1[3]);
  FUN_01ad27d8(param_1 + 6);
  return;
}

