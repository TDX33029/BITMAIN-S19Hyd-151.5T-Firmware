// FUN_017c376c @ 017c376c size=68 calls_out=4 calls_in=2
// strings: 

void FUN_017c376c(uint *param_1)

{
  if ((*param_1 & 7) == 3) {
    FUN_0178e78c(param_1[2]);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_0142e6dc();
  FUN_0178e884(param_1[0x10]);
  FUN_017c37dc(param_1 + 0x12);
  return;
}

