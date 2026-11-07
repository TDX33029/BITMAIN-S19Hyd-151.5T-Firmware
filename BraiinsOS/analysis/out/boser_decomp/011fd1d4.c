// FUN_011fd1d4 @ 011fd1d4 size=332 calls_out=9 calls_in=1
// strings: 

void FUN_011fd1d4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x1b8)) {
  case 0:
    FUN_010a7c94(param_1);
    piVar2 = *(int **)(param_1 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cf18(*(undefined4 *)(param_1 + 0x98));
    }
    piVar2 = *(int **)(param_1 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(*(undefined4 *)(param_1 + 0x80));
    }
    piVar2 = *(int **)(param_1 + 0x9c);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
        return;
      }
      return;
    }
  default:
    return;
  case 3:
    FUN_011fd68c(param_1 + 0x1c8);
    break;
  case 4:
    break;
  case 5:
    FUN_011fd9ac(param_1 + 0x208);
    FUN_011fd9ec(param_1 + 0x1e4);
    *(undefined1 *)(param_1 + 0x1ba) = 0;
  }
  FUN_011fd48c(*(undefined4 *)(param_1 + 0x1a4),*(undefined4 *)(param_1 + 0x1a8));
  FUN_011f6f44(param_1 + 0x144);
  piVar2 = *(int **)(param_1 + 0x124);
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(*(undefined4 *)(param_1 + 0x124));
  }
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  FUN_010a7c94(param_1 + 0xa4);
  return;
}

