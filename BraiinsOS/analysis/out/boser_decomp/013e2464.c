// FUN_013e2464 @ 013e2464 size=188 calls_out=0 calls_in=12
// strings: 

void FUN_013e2464(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(param_1 + 0x1c)) {
      puVar3 = (uint *)(param_1 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *puVar3 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    puVar3 = (uint *)(param_1 + 0x2c);
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
    iVar2 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 & 0xfffffffd;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x013e2518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}

