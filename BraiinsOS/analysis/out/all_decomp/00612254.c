// FUN_00612254 @ 00612254 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_00612254(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x70);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006143f8();
    }
  }
  FUN_006144d8(param_1 + 0x74);
  return;
}

