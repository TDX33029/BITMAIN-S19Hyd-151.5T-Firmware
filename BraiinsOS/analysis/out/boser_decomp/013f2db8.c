// FUN_013f2db8 @ 013f2db8 size=84 calls_out=3 calls_in=3
// strings: 

void FUN_013f2db8(char *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != '\0') {
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
    }
  }
  thunk_FUN_01be4678(param_1);
  return;
}

