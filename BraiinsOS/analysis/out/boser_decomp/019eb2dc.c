// FUN_019eb2dc @ 019eb2dc size=156 calls_out=4 calls_in=1
// strings: 

void FUN_019eb2dc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019da4fc(param_1[1]);
    }
    FUN_019ea0f0(param_1[3]);
  }
  else {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db780(param_1[1]);
    }
    if (param_1[3] != 0) {
      FUN_019eb3cc();
    }
  }
  iVar3 = param_1[6];
  FUN_00703868(iVar3,param_1[7]);
  FUN_0134c054(param_1[5],iVar3,4,8);
  return;
}

