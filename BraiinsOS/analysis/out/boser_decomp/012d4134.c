// FUN_012d4134 @ 012d4134 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_012d4134(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016578a4(*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

