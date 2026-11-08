// FUN_00741e80 @ 00741e80 size=84 calls_out=3 calls_in=2
// strings: 

void FUN_00741e80(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0) {
    FUN_0134c054(param_1[5],param_1[6],1,8);
    return;
  }
  FUN_00b91e68(param_1[6],param_1[7]);
  return;
}

