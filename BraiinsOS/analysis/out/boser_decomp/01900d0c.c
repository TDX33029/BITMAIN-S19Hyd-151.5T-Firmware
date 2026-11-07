// FUN_01900d0c @ 01900d0c size=68 calls_out=3 calls_in=1
// strings: 

void FUN_01900d0c(int *param_1)

{
  if (*param_1 == -0x80000000) {
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  }
  FUN_018e3b68(param_1);
  if (param_1[0xb] != -0x80000000) {
    FUN_0134bd64(param_1[0xb],param_1[0xc]);
  }
  FUN_01703ca8(param_1 + 8);
  return;
}

