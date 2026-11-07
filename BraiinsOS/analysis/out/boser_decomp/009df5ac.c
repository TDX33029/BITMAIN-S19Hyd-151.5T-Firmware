// FUN_009df5ac @ 009df5ac size=64 calls_out=2 calls_in=2
// strings: 

void FUN_009df5ac(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 != 1) {
    if (*param_1 == 0) {
      FUN_009deb3c(param_1 + 2);
      return;
    }
    return;
  }
  iVar1 = param_1[2];
  bVar2 = iVar1 == 0 && param_1[3] == 0;
  if (iVar1 != 0 || param_1[3] != 0) {
    iVar1 = param_1[4];
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    return;
  }
  FUN_01443048(iVar1,param_1[5]);
  return;
}

