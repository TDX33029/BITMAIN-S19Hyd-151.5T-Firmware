// FUN_005f7b6c @ 005f7b6c size=256 calls_out=5 calls_in=0
// strings: 

void FUN_005f7b6c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x94)) {
  case 0:
    FUN_0096a6b0(param_1);
    piVar2 = *(int **)(param_1 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(*(undefined4 *)(param_1 + 0x90));
    }
    goto LAB_005f7c74;
  default:
    return;
  case 3:
    break;
  case 4:
    FUN_005f6028(param_1 + 0xa0);
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(*(undefined4 *)(param_1 + 0x98));
    }
    break;
  case 5:
    FUN_005f2ce0(param_1 + 0x98);
  }
  if (*(char *)(param_1 + 0x96) != '\0') {
    FUN_0096a6b0(param_1);
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
    FUN_011814ec(*(undefined4 *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 0x95) == '\0') {
    return;
  }
LAB_005f7c74:
  FUN_00b19860(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  return;
}

