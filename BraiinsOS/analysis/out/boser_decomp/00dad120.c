// FUN_00dad120 @ 00dad120 size=148 calls_out=4 calls_in=0
// strings: 

void FUN_00dad120(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x20) != '\x02') {
    piVar3 = *(int **)(param_1 + 0x14);
    FUN_019ed980(piVar3,*(undefined4 *)(param_1 + 0x18));
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db698(*(undefined4 *)(param_1 + 0x14));
    }
    piVar3 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db698(*(undefined4 *)(param_1 + 0x18));
    }
    FUN_00d3b114(*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_012840cc(param_1);
  return;
}

