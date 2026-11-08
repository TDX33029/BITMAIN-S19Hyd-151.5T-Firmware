// FUN_0078565c @ 0078565c size=196 calls_out=2 calls_in=1
// strings: 

void FUN_0078565c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (piVar4 != (int *)0x0) {
    piVar2 = piVar4 + 0x45;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *(char *)piVar2 = '\x01';
    DataMemoryBarrier(0xb);
    FUN_00783fcc(piVar4 + 2);
    piVar4[4] = 0x3b9aca01;
    if ((char)iVar3 == '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784064(piVar4);
      }
    }
    piVar4 = *(int **)(param_1 + 4);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784064(*(undefined4 *)(param_1 + 4));
        return;
      }
    }
  }
  return;
}

