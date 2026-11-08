// FUN_00e4acc0 @ 00e4acc0 size=144 calls_out=2 calls_in=0
// strings: 

void FUN_00e4acc0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if ((((*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 0xc) != 0) &&
       (1 < *(int *)(param_1 + 0x18) - 3U)) && (iVar2 = *(int *)(param_1 + 0x44), iVar2 != 0)) &&
     (uVar4 = iVar2 * 0x11 & 0xfffffffc, uVar4 + iVar2 != -0x19)) {
    thunk_FUN_016d3fb4((*(int *)(param_1 + 0x40) - uVar4) + -0x14);
  }
  piVar3 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(*(undefined4 *)(param_1 + 0x70));
    return;
  }
  return;
}

