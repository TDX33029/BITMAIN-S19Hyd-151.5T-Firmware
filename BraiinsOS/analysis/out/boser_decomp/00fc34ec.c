// FUN_00fc34ec @ 00fc34ec size=212 calls_out=4 calls_in=0
// strings: 

void FUN_00fc34ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    piVar2 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0xc));
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
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x10));
    }
    FUN_00d5f9a8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x20) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = *(int **)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

