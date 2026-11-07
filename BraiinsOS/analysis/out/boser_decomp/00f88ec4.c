// FUN_00f88ec4 @ 00f88ec4 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00f88ec4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x14) != '\x04') {
    if (*(char *)(param_1 + 0x14) != '\x05') {
      return;
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

