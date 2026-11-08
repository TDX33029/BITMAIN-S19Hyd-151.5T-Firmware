// FUN_00fb9dbc @ 00fb9dbc size=208 calls_out=4 calls_in=0
// strings: 

void FUN_00fb9dbc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_1 + 0x40));
    }
    piVar2 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(*(undefined4 *)(param_1 + 0x44));
    }
    FUN_014883e8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x4c) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  piVar2 = *(int **)(param_1 + 0x48);
  *(undefined2 *)(param_1 + 0x4d) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011808f4(*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}

