// FUN_007a1f90 @ 007a1f90 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_007a1f90(uint *param_1)

{
  if (*param_1 == 4) {
    FUN_0079aa98(param_1 + 1);
    return;
  }
  if (*param_1 < 2) {
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

