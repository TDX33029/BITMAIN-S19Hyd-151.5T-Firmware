// FUN_00ed5000 @ 00ed5000 size=64 calls_out=4 calls_in=0
// strings: 

void FUN_00ed5000(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_005f6588(param_1 + 2);
    return;
  }
  FUN_0142e6dc(param_1);
  FUN_00ed5068(param_1 + 0x10);
  FUN_0178e884(param_1[0x66]);
  return;
}

