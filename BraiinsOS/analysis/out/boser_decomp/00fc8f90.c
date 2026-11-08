// FUN_00fc8f90 @ 00fc8f90 size=280 calls_out=6 calls_in=0
// strings: 

void FUN_00fc8f90(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0xb8)) {
  case 0:
    FUN_01839f10(param_1);
    piVar2 = *(int **)(param_1 + 0xb0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0xb0));
    }
    goto LAB_00fc90bc;
  default:
    return;
  case 3:
    break;
  case 6:
    if (*(char *)(param_1 + 0x154) == '\0') {
      FUN_00ebabdc(param_1 + 0xc0);
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
  case 4:
  case 5:
    piVar2 = *(int **)(param_1 + 0xb4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0xb4));
    }
    break;
  case 7:
    FUN_00f84bbc(param_1 + 0xc0);
  }
  if (*(char *)(param_1 + 0xba) != '\0') {
    FUN_01839f10(param_1);
  }
  piVar2 = *(int **)(param_1 + 0xb0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(*(undefined4 *)(param_1 + 0xb0));
  }
  if (*(char *)(param_1 + 0xb9) == '\0') {
    return;
  }
LAB_00fc90bc:
  FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

