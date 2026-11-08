// FUN_01beb3fa @ 01beb3fa size=150 calls_out=2 calls_in=1
// strings: 

uint FUN_01beb3fa(byte param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = (uint *)(param_2 + 0x4c);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar4);
    uVar2 = *puVar4;
    if (uVar2 != 0) break;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
    if (bVar1) {
      *puVar4 = 0x3fffffff;
    }
    uVar2 = 0;
  } while (!bVar1);
  DataMemoryBarrier(0x1b);
  if (uVar2 != 0) {
    FUN_01beae30(param_2);
  }
  uVar2 = (uint)param_1;
  if ((*(uint *)(param_2 + 0x50) == uVar2) ||
     (pbVar3 = *(byte **)(param_2 + 0x14), pbVar3 == *(byte **)(param_2 + 0x10))) {
    uVar2 = FUN_01beaf1a(param_2,uVar2);
  }
  else {
    *(byte **)(param_2 + 0x14) = pbVar3 + 1;
    *pbVar3 = param_1;
  }
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar4);
    uVar5 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = 0;
  DataMemoryBarrier(0x1b);
  if (((uVar5 & 0x40000000) != 0) && (software_interrupt(0), param_2 == -0x72)) {
    software_interrupt(0);
  }
  return uVar2;
}

