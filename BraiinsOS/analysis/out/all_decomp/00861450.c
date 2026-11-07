// FUN_00861450 @ 00861450 size=256 calls_out=7 calls_in=0
// strings: 

void FUN_00861450(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_007c94ec(param_1 + 0x38);
  if (*(int *)(param_1 + 0x130) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x134));
  }
  piVar2 = *(int **)(param_1 + 0x148);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010cf448(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
  }
  piVar2 = *(int **)(param_1 + 0x150);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154));
  }
  FUN_00861664(param_1 + 0x158);
  piVar2 = *(int **)(param_1 + 0x1da0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f305c(*(undefined4 *)(param_1 + 0x1da0));
  }
  piVar2 = *(int **)(param_1 + 0x1da4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*(undefined4 *)(param_1 + 0x1da4));
    return;
  }
  return;
}

