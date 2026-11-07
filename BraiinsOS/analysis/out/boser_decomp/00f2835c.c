// FUN_00f2835c @ 00f2835c size=48 calls_out=2 calls_in=2
// strings: 

void FUN_00f2835c(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0 && param_1[1] == 0) {
    FUN_00f2838c(param_1 + 2);
    return;
  }
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    return;
  }
  FUN_00f80320(iVar1,param_1[3]);
  return;
}

