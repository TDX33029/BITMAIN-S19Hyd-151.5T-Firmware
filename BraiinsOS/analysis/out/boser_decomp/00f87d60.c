// FUN_00f87d60 @ 00f87d60 size=296 calls_out=8 calls_in=0
// strings: 

void FUN_00f87d60(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x1ac)) {
  case 0:
    FUN_01839f10(param_1);
    piVar2 = *(int **)(param_1 + 0x1a8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0x1a8));
    }
    goto LAB_00f87e98;
  default:
    return;
  case 3:
    FUN_00f88ec4(param_1 + 0x1b8);
    break;
  case 4:
    if (*(int *)(param_1 + 0x1b8) != 0) {
      FUN_00f802bc(param_1 + 0x1bc);
    }
    if (*(int *)(param_1 + 0x90) != 3 || *(int *)(param_1 + 0x94) != 0) {
      FUN_00f88f20();
    }
    break;
  case 5:
    FUN_00f895d8(param_1 + 0x1b8);
    break;
  case 6:
    if (*(int *)(param_1 + 0x1b8) == 0) {
      FUN_00f84bbc(param_1 + 0x1c0);
    }
  }
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    FUN_01839f10(param_1);
  }
  if (*(char *)(param_1 + 0x1ae) != '\0') {
    piVar2 = *(int **)(param_1 + 0x1a8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0x1a8));
    }
  }
  if (*(char *)(param_1 + 0x1af) == '\0') {
    return;
  }
LAB_00f87e98:
  FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

