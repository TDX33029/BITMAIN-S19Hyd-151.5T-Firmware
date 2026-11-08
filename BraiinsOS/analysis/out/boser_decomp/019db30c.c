// FUN_019db30c @ 019db30c size=272 calls_out=6 calls_in=1
// strings: 

void FUN_019db30c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == -0x80000000) {
    piVar2 = *(int **)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(*(undefined4 *)(param_1 + 0x10));
    }
  }
  else {
    FUN_0134c054(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),8,0x10);
    FUN_01bf01d6(*(undefined4 *)(param_1 + 0x18));
    FUN_01bf01d6(*(undefined4 *)(param_1 + 0x20));
    piVar2 = *(int **)(param_1 + 0x24);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x24));
    }
    if (*(int *)(param_1 + 0x28) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x28) + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678();
      }
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

