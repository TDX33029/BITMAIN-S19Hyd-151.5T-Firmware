// FUN_00e84018 @ 00e84018 size=84 calls_out=1 calls_in=5
// strings: 

void FUN_00e84018(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[6] != -0x80000000) {
    FUN_019bb7e0(param_1[6],param_1[7]);
  }
  if (param_1[9] != -0x80000000) {
    FUN_019bb7e0(param_1[9],param_1[10]);
  }
  if (param_1[0xc] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  return;
}

