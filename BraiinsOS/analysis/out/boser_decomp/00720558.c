// FUN_00720558 @ 00720558 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_00720558(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x100);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0071cf74(*(undefined4 *)(param_1 + 0x100));
  }
  if (*(int *)(param_1 + 0x10) == 0x2f && *(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_0072050c((int *)(param_1 + 0x10));
  return;
}

