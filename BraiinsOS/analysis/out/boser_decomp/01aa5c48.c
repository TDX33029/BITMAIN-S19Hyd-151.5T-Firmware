// FUN_01aa5c48 @ 01aa5c48 size=148 calls_out=1 calls_in=2
// strings: 

bool FUN_01aa5c48(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x44);
  FUN_01aa583c();
  DataMemoryBarrier(0xb);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x10);
    iVar3 = 0;
    do {
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
      iVar3 = SignedSaturate(iVar3 + iVar2,0x20);
      SignedDoesSaturate(iVar3,0x20);
      DataMemoryBarrier(0xb);
    } while (iVar4 != 0);
  }
  iVar4 = SignedSaturate(*(int *)(param_1 + 0x3c) + iVar3,0x20);
  SignedDoesSaturate(iVar4,0x20);
  iVar4 = SignedSaturate(iVar4 + *(int *)(param_1 + 0x38),0x20);
  SignedDoesSaturate(iVar4,0x20);
  if (iVar6 <= iVar4) {
    piVar5 = (int *)(param_1 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = *piVar5 - iVar6;
    DataMemoryBarrier(0xb);
  }
  return iVar6 <= iVar4;
}

