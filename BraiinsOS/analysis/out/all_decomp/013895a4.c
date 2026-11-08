// FUN_013895a4 @ 013895a4 size=128 calls_out=2 calls_in=0
// strings: 

void FUN_013895a4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x14) != '\x03' && *(char *)(param_1 + 0x14) != '\x02') {
    piVar2 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
  }
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c182c(*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}

