// FUN_00847e80 @ 00847e80 size=520 calls_out=10 calls_in=0
// strings: BUG: munmap failed | BUG: munmap failed

void FUN_00847e80(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar6 = *(int *)(param_1 + 0x3cc);
  DataMemoryBarrier(0xb);
  pcVar5 = (char *)(iVar6 + 0x10);
  *(undefined1 *)(iVar6 + 0x22) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar2);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar6 + 8);
    *(undefined4 *)(iVar6 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar6 + 0x10) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar6 + 0xc));
    }
  }
  pcVar5 = (char *)(iVar6 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar2);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar6 + 0x14);
    *(undefined4 *)(iVar6 + 0x14) = 0;
    if (iVar3 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar6 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar5 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar6 + 0x18));
    }
  }
  piVar4 = *(int **)(param_1 + 0x3cc);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089dea4(*(undefined4 *)(param_1 + 0x3cc));
  }
  iVar6 = FUN_016d6ac4(*(undefined4 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x3bc));
  if (iVar6 == -1) {
    local_18 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_18,&DAT_018aeab8,&DAT_018aeac8);
  }
  FUN_016dffb2(*(undefined4 *)(param_1 + 0x3b0));
  iVar6 = FUN_016d6ac4(*(undefined4 *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x39c));
  if (iVar6 == -1) {
    local_14 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_14,&DAT_018aeab8,&DAT_018aeac8);
  }
  FUN_016dffb2(*(undefined4 *)(param_1 + 0x390));
  FUN_007c94ec(param_1 + 0x38);
  if (*(int *)(param_1 + 0x130) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
  }
  FUN_007c50c4(param_1 + 0x1d8);
  piVar4 = *(int **)(param_1 + 0x1f8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba630(*(undefined4 *)(param_1 + 0x1f8));
  }
  FUN_007befd0(param_1 + 0x200);
  return;
}

