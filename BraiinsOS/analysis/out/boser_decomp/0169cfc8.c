// FUN_0169cfc8 @ 0169cfc8 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_0169cfc8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    return;
  }
  FUN_013385f8(param_1 + 2);
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9744(param_1[6]);
    return;
  }
  return;
}

