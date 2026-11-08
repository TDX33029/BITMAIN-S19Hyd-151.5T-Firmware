// FUN_0140a868 @ 0140a868 size=120 calls_out=2 calls_in=5
// strings: 

void FUN_0140a868(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 != 0) && (uVar4 = iVar2 * 2 + 5U & 0xfffffffc, iVar2 + uVar4 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 8) - uVar4);
  }
  if (param_1 == -1) {
    return;
  }
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

