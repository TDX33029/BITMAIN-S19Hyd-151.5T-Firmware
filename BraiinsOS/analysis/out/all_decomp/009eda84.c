// FUN_009eda84 @ 009eda84 size=268 calls_out=6 calls_in=1
// strings: 

void FUN_009eda84(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[4] != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  if (param_1[0xf] != -1) {
    FUN_016dffb2();
  }
  FUN_009f3df0(param_1 + 0x16);
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
    if (iVar2 != 3) goto LAB_009edb20;
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
LAB_009edb20:
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

