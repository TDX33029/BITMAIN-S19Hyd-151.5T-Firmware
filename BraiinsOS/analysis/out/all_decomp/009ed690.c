// FUN_009ed690 @ 009ed690 size=224 calls_out=3 calls_in=1
// strings: 

void FUN_009ed690(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = (int *)param_1[1];
  FUN_00a04a64(iVar2,piVar3);
  if (iVar2 == 4) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (iVar2 != 3) goto LAB_009ed700;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[1]);
  }
LAB_009ed700:
  iVar2 = param_1[2];
  piVar3 = (int *)param_1[3];
  FUN_00a04ef0(iVar2,piVar3);
  if (iVar2 == 4) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(param_1[3]);
    return;
  }
  return;
}

