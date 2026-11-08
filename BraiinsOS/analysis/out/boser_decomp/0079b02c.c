// FUN_0079b02c @ 0079b02c size=96 calls_out=3 calls_in=2
// strings: 

void FUN_0079b02c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_007a715c();
  if (*param_1 == 0) {
    FUN_0079af8c(param_1 + 1);
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007a6ab8(param_1[2]);
    return;
  }
  return;
}

