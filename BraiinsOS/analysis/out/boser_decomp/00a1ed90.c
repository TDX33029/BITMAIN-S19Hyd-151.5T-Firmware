// FUN_00a1ed90 @ 00a1ed90 size=100 calls_out=3 calls_in=6
// strings: 

void FUN_00a1ed90(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(param_1[4],param_1[5]);
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[7],param_1[8]);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_006c1148(param_1 + 1);
  return;
}

