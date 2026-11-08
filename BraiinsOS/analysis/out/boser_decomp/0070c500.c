// FUN_0070c500 @ 0070c500 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_0070c500(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != -0x80000000) {
    FUN_0070c58c();
    return;
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[1],param_1[2]);
    return;
  }
  return;
}

