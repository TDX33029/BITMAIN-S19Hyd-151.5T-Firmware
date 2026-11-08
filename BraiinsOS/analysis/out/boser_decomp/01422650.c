// FUN_01422650 @ 01422650 size=164 calls_out=0 calls_in=1
// strings: 

void FUN_01422650(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  DataMemoryBarrier(0xb);
  if (0x7fffffff < *(uint *)(iVar5 + 0x1c)) {
    puVar2 = (uint *)(iVar5 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 & 0x7fffffff;
    DataMemoryBarrier(0xb);
  }
  puVar2 = (uint *)(iVar5 + 0x2c);
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
  iVar4 = *(int *)(iVar5 + 0x24);
  *(undefined4 *)(iVar5 + 0x24) = 0;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 & 0xfffffffd;
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014226ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar5 + 0x28));
  return;
}

