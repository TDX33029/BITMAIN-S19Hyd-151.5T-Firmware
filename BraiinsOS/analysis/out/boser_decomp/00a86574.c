// FUN_00a86574 @ 00a86574 size=132 calls_out=4 calls_in=2
// strings: 

void FUN_00a86574(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00a800bc(param_1 + 0x9c);
  piVar2 = *(int **)(param_1 + 0xb8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a8021c(*(undefined4 *)(param_1 + 0xb8));
    }
  }
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    return;
  }
  return;
}

