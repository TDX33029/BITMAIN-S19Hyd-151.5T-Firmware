// FUN_010eaddc @ 010eaddc size=424 calls_out=9 calls_in=1
// strings: 

void FUN_010eaddc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x52f) == '\0') {
    piVar2 = *(int **)(param_1 + 0x4f8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x4f8));
    }
    FUN_00d38e38(param_1 + 0x4fc);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x508),*(undefined4 *)(param_1 + 0x50c));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x514),*(undefined4 *)(param_1 + 0x518));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x520),*(undefined4 *)(param_1 + 0x524));
    FUN_005faf6c(param_1 + 0x500);
    piVar2 = *(int **)(param_1 + 0x504);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x52f) != '\x03') {
      return;
    }
    FUN_010eb19c(param_1);
    FUN_019ede44(param_1 + 0x434);
    FUN_00d38d48(param_1 + 0x458);
    piVar2 = *(int **)(param_1 + 0x4f4);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x4f4));
    }
    piVar2 = *(int **)(param_1 + 0x4f8);
    *(undefined1 *)(param_1 + 0x52e) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x4f8));
    }
    FUN_00d38e38(param_1 + 0x4fc);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x508),*(undefined4 *)(param_1 + 0x50c));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x514),*(undefined4 *)(param_1 + 0x518));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x520),*(undefined4 *)(param_1 + 0x524));
    FUN_005faf6c(param_1 + 0x500);
    piVar2 = *(int **)(param_1 + 0x504);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(*(undefined4 *)(param_1 + 0x504));
    return;
  }
  return;
}

