// FUN_00f90ac8 @ 00f90ac8 size=292 calls_out=7 calls_in=0
// strings: 

void FUN_00f90ac8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x174);
  if (uVar2 - 4 < 2) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x124));
  }
  else {
    if (uVar2 == 0) {
      FUN_00ebabdc(param_1);
      piVar3 = *(int **)(param_1 + 0x130);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01182bec(*(undefined4 *)(param_1 + 0x130));
      }
      piVar3 = *(int **)(param_1 + 0x134);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      goto LAB_00f90bd4;
    }
    if (uVar2 != 3) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x175) = 0;
  if (*(int *)(param_1 + 0x138) != -0x80000000) {
    FUN_00ecb43c();
  }
  *(undefined1 *)(param_1 + 0x176) = 0;
  FUN_00b19860(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
  FUN_01839f10(param_1 + 0x90);
  piVar3 = *(int **)(param_1 + 0x130);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182bec(*(undefined4 *)(param_1 + 0x130));
  }
  piVar3 = *(int **)(param_1 + 0x134);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
LAB_00f90bd4:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(*(undefined4 *)(param_1 + 0x134));
    return;
  }
  return;
}

