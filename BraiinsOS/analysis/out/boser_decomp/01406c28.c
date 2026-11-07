// FUN_01406c28 @ 01406c28 size=68 calls_out=3 calls_in=1
// strings: 

void FUN_01406c28(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_013f4708();
  FUN_01406cb8(*(undefined4 *)(param_1 + 0x78));
  piVar2 = *(int **)(param_1 + 0x7c);
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

