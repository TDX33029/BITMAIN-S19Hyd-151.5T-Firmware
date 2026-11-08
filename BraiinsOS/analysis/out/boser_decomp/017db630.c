// FUN_017db630 @ 017db630 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_017db630(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_017db600(param_1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  FUN_00b76614(param_1 + 1);
  FUN_0187266c((char)param_1[5],param_1[6]);
  return;
}

