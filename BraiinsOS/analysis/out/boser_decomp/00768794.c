// FUN_00768794 @ 00768794 size=148 calls_out=3 calls_in=0
// strings: 

void FUN_00768794(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a9cc(*(undefined4 *)(param_1 + 0x90));
    }
  }
  else {
    if (*(char *)(param_1 + 0x94) != '\x03') {
      return;
    }
    FUN_01139b38(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0140a9cc(*(undefined4 *)(param_1 + 0x90));
    }
  }
  FUN_00756454(param_1 + 0x10);
  return;
}

