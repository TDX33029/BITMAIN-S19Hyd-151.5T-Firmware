// FUN_009cfb50 @ 009cfb50 size=124 calls_out=2 calls_in=10
// strings: 

void FUN_009cfb50(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0x71;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  FUN_009d0074(param_1 + 2);
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
    FUN_00a95e4c(param_1);
    return;
  }
  return;
}

