// FUN_00d38510 @ 00d38510 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_00d38510(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 1) {
    FUN_00d37d54(param_1 + 2);
    return;
  }
  if ((*param_1 != 0) || (piVar3 = (int *)param_1[2], piVar3 == (int *)0x0)) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db648(param_1[2]);
    return;
  }
  return;
}

