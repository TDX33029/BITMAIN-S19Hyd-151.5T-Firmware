// FUN_008ac508 @ 008ac508 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_008ac508(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 8) != 0;
  if (bVar3) {
    param_2 = (uint)*(byte *)(param_1 + 0x14);
  }
  if (bVar3 && param_2 != 5) {
    FUN_010fd504();
  }
  piVar1 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar1;
    bVar3 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar3);
  *piVar1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}

