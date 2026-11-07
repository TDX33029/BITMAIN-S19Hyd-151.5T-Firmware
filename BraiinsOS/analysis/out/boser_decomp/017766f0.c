// FUN_017766f0 @ 017766f0 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_017766f0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017721f4();
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017856cc(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

