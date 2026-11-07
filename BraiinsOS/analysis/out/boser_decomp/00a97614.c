// FUN_00a97614 @ 00a97614 size=120 calls_out=2 calls_in=4
// strings: 

void FUN_00a97614(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 3;
  if ((uint)(*(uint *)(param_1 + 0xa0) < 3) <= (uint)-*(int *)(param_1 + 0xa4)) {
    uVar2 = *(uint *)(param_1 + 0xa0) - 3;
  }
  if ((5 < uVar2) || (uVar2 == 2)) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  }
  if (param_1 == -1) {
    return;
  }
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

