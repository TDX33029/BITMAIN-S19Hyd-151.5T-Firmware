// FUN_00990288 @ 00990288 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_00990288(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0098e348();
  if (*(undefined1 **)(param_1 + 0xe0) == &DAT_3b9aca00) {
    return;
  }
  if (*(char *)(param_1 + 0xec) == '\0') {
    FUN_012ba508(param_1 + 0xd8);
  }
  piVar2 = *(int **)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c1110(*(undefined4 *)(param_1 + 0xe8));
    return;
  }
  return;
}

