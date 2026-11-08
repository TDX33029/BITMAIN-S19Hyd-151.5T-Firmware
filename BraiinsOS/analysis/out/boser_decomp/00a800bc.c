// FUN_00a800bc @ 00a800bc size=88 calls_out=3 calls_in=4
// strings: 

void FUN_00a800bc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00a8013c();
  FUN_0178e1c4(param_1);
  if (*(int *)(param_1 + 0x18) + 1U < 2) {
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x18) + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

