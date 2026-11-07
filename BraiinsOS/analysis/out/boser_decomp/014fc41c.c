// FUN_014fc41c @ 014fc41c size=240 calls_out=4 calls_in=1
// strings: 

void FUN_014fc41c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01443048(*param_1,param_1[1]);
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[2],param_1[3]);
  }
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(param_1[4]);
    }
  }
  if (param_1[7] - 2 < 2) {
    return;
  }
  if (param_1[7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
  }
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[5],param_1[6]);
    return;
  }
  return;
}

