// FUN_01181eb0 @ 01181eb0 size=160 calls_out=2 calls_in=1
// strings: 

void FUN_01181eb0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  iVar2 = *param_1;
  DataMemoryBarrier(0xb);
  piVar5 = (int *)(iVar2 + 0xa8);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    puVar4 = (uint *)(iVar2 + 0xa0);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = *puVar4 | 1;
    iVar3 = 0;
    do {
      FUN_019e03e8(iVar2 + 8 + iVar3);
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x80);
  }
  piVar5 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*param_1);
    return;
  }
  return;
}

