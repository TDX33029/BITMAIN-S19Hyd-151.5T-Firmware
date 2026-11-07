// FUN_00b7a30c @ 00b7a30c size=88 calls_out=2 calls_in=3
// strings: 

void FUN_00b7a30c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x19) != '\x03') {
    return;
  }
  FUN_00b7ab0c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018537bc(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

