// FUN_00b935ec @ 00b935ec size=88 calls_out=2 calls_in=2
// strings: 

void FUN_00b935ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1d) != '\x03') {
    return;
  }
  FUN_00b93694(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018537bc(*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

