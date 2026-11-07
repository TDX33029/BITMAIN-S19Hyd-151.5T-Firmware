// FUN_017ca424 @ 017ca424 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_017ca424(uint *param_1)

{
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 != 5) {
    FUN_017c2d1c();
    return;
  }
  if (param_1[3] == 2) {
    return;
  }
  FUN_017c2fb8();
  return;
}

