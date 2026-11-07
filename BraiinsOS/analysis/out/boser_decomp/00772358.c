// FUN_00772358 @ 00772358 size=228 calls_out=7 calls_in=3
// strings: 

void FUN_00772358(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019e6008();
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
    if (param_1[3] != 0) {
      FUN_016fb24c();
    }
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
    FUN_017dbdbc(param_1[3]);
  }
  iVar3 = param_1[6];
  FUN_00703868(iVar3,param_1[7]);
  FUN_0134c054(param_1[5],iVar3,4,8);
  return;
}

