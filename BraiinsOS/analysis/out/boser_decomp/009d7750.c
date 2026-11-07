// FUN_009d7750 @ 009d7750 size=168 calls_out=7 calls_in=1
// strings: 

void FUN_009d7750(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x1d];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01421174(param_1[0x1d]);
    }
  }
  FUN_008dfb78(param_1 + 0x10);
  FUN_008dfa80(param_1 + 0x13);
  piVar2 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[0x14],param_1[0x15]);
  }
  FUN_008df924(param_1 + 0x16);
  FUN_009d72f0(param_1[0x1b],param_1[0x1c]);
  if (*param_1 == 2) {
    return;
  }
  FUN_009d7894(param_1);
  return;
}

