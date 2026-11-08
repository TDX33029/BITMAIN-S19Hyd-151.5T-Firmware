// FUN_018f822c @ 018f822c size=56 calls_out=2 calls_in=2
// strings: 

void FUN_018f822c(int *param_1)

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

