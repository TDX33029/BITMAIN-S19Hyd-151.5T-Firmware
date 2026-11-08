// FUN_00b5ba7c @ 00b5ba7c size=232 calls_out=5 calls_in=1
// strings: 

void FUN_00b5ba7c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    FUN_00b216bc(param_1 + 0x10);
  }
  else {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    if ((*(char *)(param_1 + 0x54) == '\x03') && (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_00c8204c(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),1);
    }
    iVar4 = *(int *)(param_1 + 0x34);
    for (iVar3 = *(int *)(param_1 + 0x38); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_00ce259c(iVar4);
      iVar4 = iVar4 + 0xd8;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
    }
  }
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

