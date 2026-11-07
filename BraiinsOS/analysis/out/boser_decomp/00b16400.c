// FUN_00b16400 @ 00b16400 size=28 calls_out=1 calls_in=1
// strings: 

void FUN_00b16400(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    FUN_006c9ae0(param_1 + 1);
    return;
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
    FUN_0070451c(param_1[2],param_1[3]);
  }
  FUN_00db19c4(param_1 + 4);
  return;
}

