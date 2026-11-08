// FUN_00777a18 @ 00777a18 size=120 calls_out=2 calls_in=2
// strings: 

void FUN_00777a18(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0x45;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  FUN_00777ad8(param_1 + 2);
  param_1[4] = 0x3b9aca01;
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
    FUN_0076bc1c(param_1);
    return;
  }
  return;
}

