// FUN_019d7c6c @ 019d7c6c size=116 calls_out=3 calls_in=1
// strings: 

void FUN_019d7c6c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 1) {
    FUN_019d75f8(param_1 + 2);
    return;
  }
  if ((*param_1 != 0) || (param_1[2] == -0x80000000)) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db648(param_1[6]);
    return;
  }
  return;
}

