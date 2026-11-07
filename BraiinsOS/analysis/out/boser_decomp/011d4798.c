// FUN_011d4798 @ 011d4798 size=168 calls_out=3 calls_in=0
// strings: 

void FUN_011d4798(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x138) == '\0') {
    piVar2 = *(int **)(param_1 + 300);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a9c6d8(*(undefined4 *)(param_1 + 300));
    }
    FUN_0119d37c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x138) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x124));
  piVar2 = *(int **)(param_1 + 0x134);
  *(undefined2 *)(param_1 + 0x139) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a9c6d8(*(undefined4 *)(param_1 + 0x134));
    return;
  }
  return;
}

