// FUN_018dfe9c @ 018dfe9c size=116 calls_out=1 calls_in=3
// strings: 

int FUN_018dfe9c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  FUN_018b65e8(&local_18,param_1 + 8);
  iVar2 = 0;
  while( true ) {
    if (local_18 == iStack_14) {
      bVar4 = iStack_10 == iStack_c;
      iVar3 = iStack_10;
      iVar1 = iStack_c;
      iStack_10 = iStack_14;
      iStack_c = iStack_14;
      if (bVar4) {
        return iVar2;
      }
    }
    else {
      iVar3 = local_18;
      iVar1 = iStack_14;
    }
    iStack_14 = iVar1;
    if (iVar3 == 0) break;
    local_18 = iVar3 + 0xc;
    iVar2 = *(int *)(iVar3 + 8) + iVar2;
  }
  return iVar2;
}

