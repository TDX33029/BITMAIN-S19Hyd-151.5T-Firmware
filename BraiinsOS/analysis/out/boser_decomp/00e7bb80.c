// FUN_00e7bb80 @ 00e7bb80 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_00e7bb80(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 10;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  FUN_00e7bc44(param_1 + 3);
  param_1[3] = 0;
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
    FUN_011782d0(param_1);
    return;
  }
  return;
}

