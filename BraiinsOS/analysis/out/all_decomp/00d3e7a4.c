// FUN_00d3e7a4 @ 00d3e7a4 size=148 calls_out=1 calls_in=2
// strings: 

void FUN_00d3e7a4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x120);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x118);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = *puVar3 | 1;
  FUN_0163b708(param_1 + 0x88);
  FUN_0163b708(param_1 + 0x98);
  FUN_0163b708(param_1 + 0xa8);
  FUN_0163b708(param_1 + 0xb8);
  FUN_0163b708(param_1 + 200);
  FUN_0163b708(param_1 + 0xd8);
  FUN_0163b708(param_1 + 0xe8);
  FUN_0163b708(param_1 + 0xf8);
  return;
}

