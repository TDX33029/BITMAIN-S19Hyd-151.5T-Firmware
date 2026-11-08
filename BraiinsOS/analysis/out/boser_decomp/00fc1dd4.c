// FUN_00fc1dd4 @ 00fc1dd4 size=176 calls_out=3 calls_in=0
// strings: 

void FUN_00fc1dd4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    piVar2 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_1[6]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\x03') {
    return;
  }
  FUN_01139b38(param_1[0xe],param_1[0xf]);
  FUN_019bb7e0(param_1[8],param_1[9]);
  FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  piVar2 = (int *)param_1[7];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[7]);
    return;
  }
  return;
}

