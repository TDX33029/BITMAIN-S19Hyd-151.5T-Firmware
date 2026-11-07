// FUN_00d340b0 @ 00d340b0 size=292 calls_out=9 calls_in=1
// strings: 

void FUN_00d340b0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != -0x80000000) {
    FUN_00d34048();
  }
  FUN_01872408(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  FUN_01872408(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_01aae24c();
  }
  piVar2 = *(int **)(param_1 + 0xb8);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(*(undefined4 *)(param_1 + 0xb8));
    }
  }
  piVar2 = *(int **)(param_1 + 0xc0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182bec(*(undefined4 *)(param_1 + 0xc0));
  }
  FUN_0118c560(param_1);
  FUN_00d3425c(param_1 + 0xc4);
  if (*(undefined1 **)(param_1 + 0xa8) != &DAT_3b9aca00) {
    piVar2 = *(int **)(param_1 + 0xb0);
    FUN_01349710(piVar2);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01349164(*(undefined4 *)(param_1 + 0xb0));
        return;
      }
      return;
    }
  }
  return;
}

