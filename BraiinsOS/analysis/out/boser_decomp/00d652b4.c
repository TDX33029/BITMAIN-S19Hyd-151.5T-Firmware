// FUN_00d652b4 @ 00d652b4 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_00d652b4(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_019bb7e0(param_1[8],param_1[9]);
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_005f6588(param_1);
  return;
}

