// FUN_01820848 @ 01820848 size=212 calls_out=10 calls_in=0
// strings: 

void FUN_01820848(int *param_1)

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
  FUN_01820974(param_1 + 0x10);
  FUN_0172e418(param_1 + 0x13);
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
  FUN_01820a6c(param_1 + 0x16);
  FUN_0181ff40(param_1[0x1b],param_1[0x1c]);
  if (*param_1 == 2) {
    return;
  }
  FUN_008e0f4c(param_1 + 3);
  FUN_01820b28(param_1 + 7);
  FUN_0181eb40(param_1 + 0xb);
  FUN_0181e9f0(param_1);
  return;
}

