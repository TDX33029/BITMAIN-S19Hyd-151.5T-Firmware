// FUN_00ee0f30 @ 00ee0f30 size=148 calls_out=1 calls_in=2
// strings: 

void FUN_00ee0f30(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 200);
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
  puVar3 = (uint *)(param_1 + 0xc0);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = *puVar3 | 1;
  FUN_0163b708(param_1 + 8);
  FUN_0163b708(param_1 + 0x18);
  FUN_0163b708(param_1 + 0x28);
  FUN_0163b708(param_1 + 0x38);
  FUN_0163b708(param_1 + 0x48);
  FUN_0163b708(param_1 + 0x58);
  FUN_0163b708(param_1 + 0x68);
  FUN_0163b708(param_1 + 0x78);
  return;
}

