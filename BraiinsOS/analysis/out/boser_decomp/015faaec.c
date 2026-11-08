// FUN_015faaec @ 015faaec size=64 calls_out=2 calls_in=2
// strings: 

void FUN_015faaec(int *param_1)

{
  int unaff_r5;
  bool bVar1;
  
  bVar1 = *param_1 == 0 && param_1[1] == 0;
  if (*param_1 != 0 || param_1[1] != 0) {
    unaff_r5 = param_1[4];
    bVar1 = unaff_r5 == 5;
  }
  if (bVar1) {
    return;
  }
  FUN_0134bd64(param_1[5],param_1[6]);
  if (unaff_r5 - 1U < 2) {
    FUN_015d1628(param_1 + 8);
    return;
  }
  return;
}

