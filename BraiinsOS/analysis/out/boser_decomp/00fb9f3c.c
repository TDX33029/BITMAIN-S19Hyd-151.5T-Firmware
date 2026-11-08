// FUN_00fb9f3c @ 00fb9f3c size=280 calls_out=6 calls_in=0
// strings: 

void FUN_00fb9f3c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x98)) {
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
      FUN_01182b58(*(undefined4 *)(param_1 + 0x90));
    }
    goto LAB_00fba064;
  default:
    return;
  case 3:
    break;
  case 5:
    if (*(char *)(param_1 + 0x134) == '\0') {
      FUN_00ebabdc(param_1 + 0xa0);
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
  case 4:
    piVar2 = *(int **)(param_1 + 0x94);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0x94));
    }
    break;
  case 6:
    FUN_00fbcb94(param_1 + 0xa0);
  }
  if (*(char *)(param_1 + 0x9a) != '\0') {
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
    FUN_01182b58(*(undefined4 *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 0x99) == '\0') {
    return;
  }
LAB_00fba064:
  FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

