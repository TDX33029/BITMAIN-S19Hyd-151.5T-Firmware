// FUN_01a0572c @ 01a0572c size=88 calls_out=2 calls_in=2
// strings: 

void FUN_01a0572c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_019fb3fc(param_1);
  piVar2 = (int *)param_1[0x4a];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x4a]);
    return;
  }
  return;
}

