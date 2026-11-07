// FUN_012cb93c @ 012cb93c size=116 calls_out=5 calls_in=3
// strings: 

void FUN_012cb93c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_019deb7c();
  if (param_1[3] != -1) {
    FUN_01bf01d6();
  }
  piVar3 = (int *)param_1[2];
  FUN_019e8cd0(piVar3);
  FUN_009298dc(*param_1,param_1[1]);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db52c(param_1[2]);
    return;
  }
  return;
}

