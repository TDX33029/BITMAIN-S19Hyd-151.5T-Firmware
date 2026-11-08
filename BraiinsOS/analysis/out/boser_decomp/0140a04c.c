// FUN_0140a04c @ 0140a04c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_0140a04c(char *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    return;
  }
  FUN_01406cb8(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

