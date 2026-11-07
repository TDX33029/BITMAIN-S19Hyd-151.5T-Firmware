// FUN_00d78b84 @ 00d78b84 size=144 calls_out=6 calls_in=3
// strings: 

void FUN_00d78b84(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_01698b2c();
  piVar3 = (int *)param_1[4];
  if (piVar3 != (int *)0x0) {
    FUN_016dea68(param_1[6]);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(param_1[4]);
    }
    piVar3 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0127c778(param_1[5]);
    }
  }
  FUN_00e7e28c(*param_1,param_1[1]);
  FUN_00e7e67c(param_1[2],param_1[3]);
  return;
}

