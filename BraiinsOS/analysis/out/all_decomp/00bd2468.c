// FUN_00bd2468 @ 00bd2468 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_00bd2468(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00a07b4c();
  puVar4 = (undefined4 *)(param_1 + 0x50);
  FUN_016af0b0(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*puVar4);
    return;
  }
  return;
}

