// FUN_009cfd58 @ 009cfd58 size=152 calls_out=2 calls_in=3
// strings: 

void FUN_009cfd58(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0x3f;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  if ((param_1[2] != 0 || param_1[3] != 0) && ((char)param_1[0x37] == '\x03')) {
    FUN_009cf87c(param_1 + 4);
  }
  param_1[2] = 0;
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
    FUN_00a96c58(param_1);
    return;
  }
  return;
}

