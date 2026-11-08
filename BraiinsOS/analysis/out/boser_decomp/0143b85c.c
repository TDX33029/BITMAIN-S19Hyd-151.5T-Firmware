// FUN_0143b85c @ 0143b85c size=80 calls_out=2 calls_in=3
// strings: 

void FUN_0143b85c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    FUN_01443048(*param_1,param_1[1]);
  }
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[2]);
    return;
  }
  return;
}

