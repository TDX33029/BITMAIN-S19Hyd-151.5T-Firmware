// FUN_009dfd24 @ 009dfd24 size=72 calls_out=2 calls_in=2
// strings: 

void FUN_009dfd24(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 1) {
    iVar1 = param_1[2];
    bVar2 = iVar1 == 0 && param_1[3] == 0;
    if (iVar1 != 0 || param_1[3] != 0) {
      iVar1 = param_1[4];
      bVar2 = iVar1 == 0;
    }
    if (!bVar2) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if (param_1[2] == 2) {
      return;
    }
    FUN_009d635c();
    return;
  }
  return;
}

