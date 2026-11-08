// FUN_015ed99c @ 015ed99c size=92 calls_out=2 calls_in=0
// strings: 

void FUN_015ed99c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 8) != 0;
  if (bVar3) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  if (bVar3 && param_2 != 5) {
    FUN_015e9624();
  }
  piVar1 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar1;
    bVar3 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar3);
  *piVar1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(*(undefined4 *)(param_1 + 0x30));
    return;
  }
  return;
}

