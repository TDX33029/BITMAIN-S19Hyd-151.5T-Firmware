// FUN_005f770c @ 005f770c size=88 calls_out=4 calls_in=0
// strings: 

void FUN_005f770c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00aeeb4c();
  if (-1 < *param_1) {
    FUN_019bb7e0(*param_1,param_1[1]);
  }
  FUN_01214c9c(param_1[10],param_1[0xb]);
  piVar2 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[3],param_1[4]);
    return;
  }
  return;
}

