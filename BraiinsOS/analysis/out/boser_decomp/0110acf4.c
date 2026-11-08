// FUN_0110acf4 @ 0110acf4 size=200 calls_out=3 calls_in=0
// strings: 

void FUN_0110acf4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 100) == '\0') {
    piVar2 = *(int **)(param_1 + 0x58);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x58));
    }
    piVar2 = *(int **)(param_1 + 0x5c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x5c));
      return;
    }
  }
  else if (*(char *)(param_1 + 100) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    piVar2 = *(int **)(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0x65) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x60));
      return;
    }
    return;
  }
  return;
}

