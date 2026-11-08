// FUN_01773530 @ 01773530 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_01773530(int *param_1)

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
    if ((char)param_1[0x10] == '\x02') {
      return;
    }
    FUN_017724dc(param_1 + 2);
    return;
  }
  return;
}

