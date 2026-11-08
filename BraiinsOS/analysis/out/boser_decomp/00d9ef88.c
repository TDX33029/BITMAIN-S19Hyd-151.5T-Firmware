// FUN_00d9ef88 @ 00d9ef88 size=256 calls_out=4 calls_in=0
// strings: 

void FUN_00d9ef88(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(*(undefined4 *)(param_1 + 0x20));
    }
    piVar2 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x24));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x38) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    piVar2 = *(int **)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x39) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ed4(*(undefined4 *)(param_1 + 0x2c));
    }
    piVar2 = *(int **)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x3a) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(*(undefined4 *)(param_1 + 0x28));
      return;
    }
    return;
  }
  return;
}

