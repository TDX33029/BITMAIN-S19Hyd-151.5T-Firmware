// FUN_005f534c @ 005f534c size=84 calls_out=2 calls_in=2
// strings: 

void FUN_005f534c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x20) != '\x03') {
    return;
  }
  FUN_005f4ce0(param_1 + 8);
  piVar2 = *(int **)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177f84(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

