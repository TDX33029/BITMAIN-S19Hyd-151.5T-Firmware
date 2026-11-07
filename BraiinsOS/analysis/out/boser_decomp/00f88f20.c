// FUN_00f88f20 @ 00f88f20 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_00f88f20(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_00ebaa50(param_1);
    return;
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[6]);
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  return;
}

