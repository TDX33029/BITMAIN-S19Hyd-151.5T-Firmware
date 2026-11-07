// FUN_009496dc @ 009496dc size=80 calls_out=3 calls_in=1
// strings: 

void FUN_009496dc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0x10);
  FUN_0120954c(puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a903d0(*puVar4);
  }
  FUN_007bc1bc(param_1 + 0x1c);
  return;
}

