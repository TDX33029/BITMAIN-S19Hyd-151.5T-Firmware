// FUN_00fb12b4 @ 00fb12b4 size=272 calls_out=4 calls_in=0
// strings: 

void FUN_00fb12b4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x94)) {
  case 0:
    FUN_01839f10(param_1);
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011820d0(*(undefined4 *)(param_1 + 0x90));
    }
    goto LAB_00fb13cc;
  default:
    return;
  case 3:
    break;
  case 4:
    if (*(char *)(param_1 + 0x138) == '\x03' || *(char *)(param_1 + 0x138) == '\0') {
      FUN_01839f10(param_1 + 0xa0);
    }
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011820d0(*(undefined4 *)(param_1 + 0x98));
    }
    break;
  case 5:
    FUN_00fb23c0(param_1 + 0x98);
  }
  if (*(char *)(param_1 + 0x96) != '\0') {
    FUN_01839f10(param_1);
  }
  piVar2 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011820d0(*(undefined4 *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 0x95) == '\0') {
    return;
  }
LAB_00fb13cc:
  FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

