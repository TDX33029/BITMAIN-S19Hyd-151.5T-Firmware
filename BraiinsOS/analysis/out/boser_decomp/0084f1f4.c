// FUN_0084f1f4 @ 0084f1f4 size=72 calls_out=2 calls_in=4
// strings: 

void FUN_0084f1f4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5f128(param_1[2]);
    return;
  }
  return;
}

