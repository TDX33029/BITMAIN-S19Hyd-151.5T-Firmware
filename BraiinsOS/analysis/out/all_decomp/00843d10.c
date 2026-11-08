// FUN_00843d10 @ 00843d10 size=340 calls_out=10 calls_in=2
// strings: BUG: munmap failed | BUG: munmap failed

void FUN_00843d10(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar2 = *(int **)(param_1 + 0x3cc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x3cc));
  }
  iVar3 = FUN_016d6ac4(*(undefined4 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x3bc));
  if (iVar3 == -1) {
    local_18 = FUN_0126ead8();
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: munmap failed",0x12,&local_18,&DAT_018aeab8,&DAT_018aeac8);
  }
  FUN_016dffb2(*(undefined4 *)(param_1 + 0x3b0));
  iVar3 = FUN_016d6ac4(*(undefined4 *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x39c));
  if (iVar3 == -1) {
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
  piVar2 = *(int **)(param_1 + 0x1f8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba630(*(undefined4 *)(param_1 + 0x1f8));
  }
  FUN_007befd0(param_1 + 0x200);
  return;
}

