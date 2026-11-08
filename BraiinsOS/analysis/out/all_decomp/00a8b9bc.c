// FUN_00a8b9bc @ 00a8b9bc size=100 calls_out=2 calls_in=0
// strings: 

void FUN_00a8b9bc(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  bVar1 = *(int *)(param_1 + 8) == 0;
  bVar2 = *(int *)(param_1 + 0xc) == 0;
  bVar5 = bVar1 && bVar2;
  if (!bVar1 || !bVar2) {
    bVar5 = *(int *)(param_1 + 0x18) == 8 && *(int *)(param_1 + 0x1c) == 0;
  }
  if (!bVar5) {
    FUN_00a8ba5c();
  }
  piVar3 = *(int **)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(*(undefined4 *)(param_1 + 0xe8));
    return;
  }
  return;
}

