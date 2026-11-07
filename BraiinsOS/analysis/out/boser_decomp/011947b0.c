// FUN_011947b0 @ 011947b0 size=104 calls_out=4 calls_in=1
// strings: 

void FUN_011947b0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    return;
  }
  FUN_01194890(param_1[0x4d]);
  piVar2 = (int *)param_1[0x4d];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182d0c(param_1[0x4d]);
  }
  FUN_010785f4(param_1 + 0x4e);
  FUN_01194914(param_1);
  piVar2 = (int *)param_1[0x51];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x51]);
  }
  piVar2 = (int *)param_1[0x52];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0x52],param_1[0x53]);
    return;
  }
  return;
}

