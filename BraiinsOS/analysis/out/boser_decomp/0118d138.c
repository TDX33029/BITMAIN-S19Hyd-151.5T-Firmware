// FUN_0118d138 @ 0118d138 size=176 calls_out=4 calls_in=0
// strings: 

void FUN_0118d138(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xae2) != '\0') {
    if (*(char *)(param_1 + 0xae2) == '\x03') {
      FUN_0118de20(param_1);
      *(undefined2 *)(param_1 + 0xadd) = 0;
      FUN_005faf6c(param_1 + 0xac8);
      return;
    }
    return;
  }
  FUN_005faf6c(param_1 + 0xad0);
  piVar2 = *(int **)(param_1 + 0xad4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0xad4));
  }
  piVar2 = *(int **)(param_1 + 0xad8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*(undefined4 *)(param_1 + 0xad8));
    return;
  }
  return;
}

