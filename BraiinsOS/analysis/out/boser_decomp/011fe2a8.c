// FUN_011fe2a8 @ 011fe2a8 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_011fe2a8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01204020();
  if (*param_1 == 0) {
    FUN_011fe36c(param_1[1]);
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
    FUN_0121cb94(param_1[2]);
    return;
  }
  return;
}

