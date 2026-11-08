// FUN_01529c64 @ 01529c64 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_01529c64(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00db4764();
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  return;
}

