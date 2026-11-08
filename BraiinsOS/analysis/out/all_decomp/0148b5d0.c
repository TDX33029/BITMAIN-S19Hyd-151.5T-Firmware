// FUN_0148b5d0 @ 0148b5d0 size=84 calls_out=3 calls_in=1
// strings: 

void FUN_0148b5d0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  FUN_0148c88c();
  puVar3 = (undefined4 *)(param_1 + 8);
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    return;
  }
  FUN_0102c440(puVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0102a7d0(*puVar3);
    return;
  }
  return;
}

