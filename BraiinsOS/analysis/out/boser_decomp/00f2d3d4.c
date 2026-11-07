// FUN_00f2d3d4 @ 00f2d3d4 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_00f2d3d4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
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
    FUN_00a97164(param_1[1]);
    return;
  }
  return;
}

