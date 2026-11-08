// FUN_01209598 @ 01209598 size=128 calls_out=2 calls_in=3
// strings: 

void FUN_01209598(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0xb;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  if (param_1[2] != 0) {
    FUN_01139b38(param_1[2],param_1[3]);
  }
  param_1[2] = 0;
  if ((char)iVar3 != '\0') {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a9050c(param_1);
    return;
  }
  return;
}

