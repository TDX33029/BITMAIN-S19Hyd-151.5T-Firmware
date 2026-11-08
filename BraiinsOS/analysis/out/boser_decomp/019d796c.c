// FUN_019d796c @ 019d796c size=120 calls_out=3 calls_in=1
// strings: 

void FUN_019d796c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 1) {
    FUN_019d75f8(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (param_1[2] == 4 && param_1[3] == 0) {
    return;
  }
  piVar2 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db648(param_1[10]);
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

