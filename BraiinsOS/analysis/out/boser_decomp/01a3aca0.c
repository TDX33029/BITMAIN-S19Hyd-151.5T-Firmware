// FUN_01a3aca0 @ 01a3aca0 size=216 calls_out=0 calls_in=0
// strings: 

void FUN_01a3aca0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = (uint *)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 | 2;
  DataMemoryBarrier(0xb);
  if (uVar3 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 & 0xfffffffd;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  puVar2 = (uint *)(param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 | 2;
  DataMemoryBarrier(0xb);
  if (uVar3 != 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 & 0xfffffffd;
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a3ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 4))(*(undefined4 *)(param_1 + 0x18));
  return;
}

