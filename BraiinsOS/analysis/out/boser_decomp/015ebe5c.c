// FUN_015ebe5c @ 015ebe5c size=84 calls_out=2 calls_in=0
// strings: 

void FUN_015ebe5c(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  bVar1 = *(int *)(param_1 + 8) != 0;
  bVar2 = iVar4 != 0;
  if (bVar1 || bVar2) {
    iVar4 = *(int *)(param_1 + 0x18);
  }
  if ((bVar1 || bVar2) && iVar4 != 0) {
    FUN_015d1230();
  }
  piVar3 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}

