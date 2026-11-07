// FUN_014397e4 @ 014397e4 size=76 calls_out=2 calls_in=35
// strings: 

void FUN_014397e4(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (param_1 == 0) {
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019da4fc(param_2);
      return;
    }
    return;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da640(param_2);
    return;
  }
  return;
}

