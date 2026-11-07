// FUN_00a25e80 @ 00a25e80 size=68 calls_out=1 calls_in=11
// strings: 

void FUN_00a25e80(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_019bb7e0(iVar1,param_1[1]);
  }
  iVar1 = param_1[3];
  if (iVar1 == -0x7ffffffd) {
    return;
  }
  if (iVar1 < 0) {
    return;
  }
  FUN_019bb7e0(iVar1,param_1[4]);
  return;
}

