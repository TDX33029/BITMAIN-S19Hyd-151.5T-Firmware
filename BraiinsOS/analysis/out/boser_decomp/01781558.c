// FUN_01781558 @ 01781558 size=76 calls_out=3 calls_in=14
// strings: 

void FUN_01781558(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[2];
  FUN_019e8cd0(piVar3);
  FUN_014397e4(*param_1,param_1[1]);
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

