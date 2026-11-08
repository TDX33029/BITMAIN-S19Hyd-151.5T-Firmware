// FUN_009d7340 @ 009d7340 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_009d7340(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 5 && param_1[1] == 0) {
    return;
  }
  FUN_009d7384(param_1);
  piVar3 = (int *)param_1[0x66];
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_014295d0(piVar3 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0185203c(param_1[0x66]);
    return;
  }
  return;
}

