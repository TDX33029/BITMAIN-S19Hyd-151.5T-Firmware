// FUN_01104460 @ 01104460 size=212 calls_out=4 calls_in=0
// strings: 

void FUN_01104460(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    piVar2 = *(int **)(param_1 + 0x38);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x38));
    }
    piVar2 = *(int **)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x3c));
    }
    FUN_010bf310(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x44) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  piVar2 = *(int **)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 0x40));
    return;
  }
  return;
}

