// FUN_019e58a4 @ 019e58a4 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_019e58a4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != -1) {
    FUN_019e58e4();
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
    FUN_019db20c(param_1[1]);
    return;
  }
  return;
}

