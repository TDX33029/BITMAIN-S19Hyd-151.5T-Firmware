// FUN_01194cd4 @ 01194cd4 size=108 calls_out=4 calls_in=1
// strings: 

void FUN_01194cd4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_01194db8(param_1[0x50]);
  piVar2 = (int *)param_1[0x50];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182704(param_1[0x50]);
  }
  FUN_010785f4(param_1 + 0x51);
  FUN_01194e3c(param_1);
  piVar2 = (int *)param_1[0x54];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x54]);
  }
  piVar2 = (int *)param_1[0x55];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0x55],param_1[0x56]);
    return;
  }
  return;
}

