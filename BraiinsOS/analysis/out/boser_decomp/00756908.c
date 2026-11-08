// FUN_00756908 @ 00756908 size=204 calls_out=5 calls_in=2
// strings: 

void FUN_00756908(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 1) {
    FUN_00756144(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  piVar2 = (int *)param_1[0x16];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x16],param_1[0x17]);
    }
  }
  piVar2 = (int *)param_1[0x18];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a868(param_1[0x18]);
  }
  piVar2 = (int *)param_1[0x19];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a9cc(param_1[0x19]);
  }
  FUN_0075618c(param_1 + 0x1c);
  return;
}

