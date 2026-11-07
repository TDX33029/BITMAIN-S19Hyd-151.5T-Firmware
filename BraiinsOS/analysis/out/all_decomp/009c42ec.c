// FUN_009c42ec @ 009c42ec size=136 calls_out=2 calls_in=0
// strings: 

void FUN_009c42ec(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined1 *)(param_1 + 0x38) = 2;
  if (*(int *)(param_1 + 4) != 2) {
    if (*(int *)(param_1 + 4) == 0) {
      piVar3 = *(int **)(param_1 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(*(undefined4 *)(param_1 + 8));
      }
    }
    else {
      piVar3 = *(int **)(param_1 + 8);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 != 1) {
        return;
      }
      DataMemoryBarrier(0xb);
      FUN_016586fc(*(undefined4 *)(param_1 + 8));
    }
  }
  return;
}

