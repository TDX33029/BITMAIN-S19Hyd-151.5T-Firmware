// FUN_00be3d4c @ 00be3d4c size=292 calls_out=6 calls_in=1
// strings: 

void FUN_00be3d4c(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  switch(*(undefined1 *)(param_1 + 0x6c)) {
  case 0:
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    return;
  default:
    return;
  case 3:
    goto switchD_00be3d68_caseD_3;
  case 4:
    FUN_00be4158(param_1 + 0x70);
    break;
  case 5:
    if ((*(uint *)(param_1 + 0x70) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    }
  }
  bVar3 = *(char *)(param_1 + 0x6d) != '\0';
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (bVar3 && iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
  }
  *(undefined1 *)(param_1 + 0x6d) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
  }
switchD_00be3d68_caseD_3:
  piVar2 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar3 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar3);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d05ff8(*(undefined4 *)(param_1 + 0x38));
  }
  piVar2 = *(int **)(param_1 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar3 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar3);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d05ff8(*(undefined4 *)(param_1 + 0x34));
  }
  if ((*(uint *)(param_1 + 0x28) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  *(undefined2 *)(param_1 + 0x6e) = 0;
  return;
}

