// FUN_0140363c @ 0140363c size=76 calls_out=1 calls_in=2
// strings: 

void FUN_0140363c(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 | *(uint *)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  if ((*(uint *)(param_1 + 0x48) & uVar2) == 0) {
    FUN_01403688(param_1 + 0x4c);
    FUN_01403688(param_1 + 0x70);
    return;
  }
  return;
}

