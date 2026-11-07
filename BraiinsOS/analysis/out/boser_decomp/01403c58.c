// FUN_01403c58 @ 01403c58 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_01403c58(uint param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 & 0xfffffff8);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0140a97c(*puVar4);
  }
  thunk_FUN_01be4678(puVar4);
  return;
}

