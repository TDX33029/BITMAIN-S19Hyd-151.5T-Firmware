// FUN_019fcf58 @ 019fcf58 size=64 calls_out=1 calls_in=9
// strings: 

void FUN_019fcf58(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar4;
  int iVar5;
  
  FUN_01a1866c();
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(param_1 + 8);
  uVar4 = *(undefined4 *)(iVar3 + 8);
  iVar5 = *(int *)(iVar3 + 0xc);
  FUN_01a38768(uVar4,iVar5,0,0,unaff_r4,unaff_r5);
  if (iVar5 != 0) {
    thunk_FUN_01be4678(uVar4);
  }
  if (iVar3 != -1) {
    piVar2 = (int *)(iVar3 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  return;
}

