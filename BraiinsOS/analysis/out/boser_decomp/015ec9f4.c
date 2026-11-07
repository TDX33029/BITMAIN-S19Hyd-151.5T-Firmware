// FUN_015ec9f4 @ 015ec9f4 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_015ec9f4(int param_1)

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
  if ((bVar1 || bVar2) && iVar4 != 5) {
    FUN_015e99ac();
  }
  piVar3 = *(int **)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}

