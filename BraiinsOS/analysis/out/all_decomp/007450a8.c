// FUN_007450a8 @ 007450a8 size=72 calls_out=3 calls_in=2
// strings: 

void FUN_007450a8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0071bed0();
  FUN_00644904(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0xd4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007910a4(*(undefined4 *)(param_1 + 0xd4));
    return;
  }
  return;
}

