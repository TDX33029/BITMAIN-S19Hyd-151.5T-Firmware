// FUN_018f82d8 @ 018f82d8 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_018f82d8(int *param_1)

{
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_01af7ab4(param_1);
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_0134bd64(*param_1,param_1[1]);
  return;
}

