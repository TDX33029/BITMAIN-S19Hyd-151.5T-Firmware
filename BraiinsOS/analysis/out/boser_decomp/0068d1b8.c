// FUN_0068d1b8 @ 0068d1b8 size=224 calls_out=2 calls_in=2
// strings: 

void FUN_0068d1b8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = (uint *)(param_1 + 0x24);
  do {
    uVar4 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar4 + 1;
  DataMemoryBarrier(0xb);
  iVar2 = FUN_0069b930(param_1 + 0x20,uVar4);
  FUN_01bed4e2(iVar2 + (uVar4 & 0xf) * 0x88,param_2,0x88);
  puVar3 = (uint *)(iVar2 + 0x888);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = *puVar3 | 1 << (uVar4 & 0xf);
  puVar3 = (uint *)(param_1 + 0x48);
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar4 | 2;
  DataMemoryBarrier(0xb);
  if (uVar4 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0068d290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x44));
  return;
}

