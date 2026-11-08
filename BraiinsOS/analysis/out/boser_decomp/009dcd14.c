// FUN_009dcd14 @ 009dcd14 size=224 calls_out=2 calls_in=11
// strings: 

void FUN_009dcd14(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *param_1;
  puVar3 = (uint *)(iVar4 + 0x24);
  do {
    uVar5 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar5 + 1;
  DataMemoryBarrier(0xb);
  iVar2 = FUN_009275f8(iVar4 + 0x20,uVar5);
  FUN_01bed4e2(iVar2 + (uVar5 & 0xf) * 0x90,param_2,0x90);
  puVar3 = (uint *)(iVar2 + 0x908);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = *puVar3 | 1 << (uVar5 & 0xf);
  puVar3 = (uint *)(iVar4 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar5 | 2;
  DataMemoryBarrier(0xb);
  if (uVar5 != 0) {
    return;
  }
  iVar2 = *(int *)(iVar4 + 0x40);
  *(undefined4 *)(iVar4 + 0x40) = 0;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar4 + 0x44));
  }
  return;
}

