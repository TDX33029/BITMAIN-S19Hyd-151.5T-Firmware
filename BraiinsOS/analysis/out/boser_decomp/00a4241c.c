// FUN_00a4241c @ 00a4241c size=72 calls_out=2 calls_in=4
// strings: 

void FUN_00a4241c(int *param_1)

{
  int iVar1;
  
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  iVar1 = param_1[3];
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_019bb7e0(iVar1,param_1[4]);
  }
  FUN_00a25e80(param_1 + 6);
  FUN_00a25e80(param_1 + 0xc);
  return;
}

