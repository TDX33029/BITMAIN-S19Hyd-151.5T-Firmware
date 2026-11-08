// FUN_01a9499c @ 01a9499c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01a9499c(int *param_1)

{
  if (param_1[6] != -0x80000000) {
    FUN_019bb7e0(param_1[6],param_1[7]);
  }
  if (param_1[9] != -0x80000000) {
    FUN_019bb7e0(param_1[9],param_1[10]);
  }
  if (param_1[0xc] != -0x80000000) {
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  }
  if (*param_1 == 2) {
    return;
  }
  FUN_0165cbf8(param_1 + 2);
  return;
}

