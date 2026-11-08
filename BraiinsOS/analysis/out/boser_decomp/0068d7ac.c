// FUN_0068d7ac @ 0068d7ac size=220 calls_out=1 calls_in=2
// strings: 

void FUN_0068d7ac(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = (int *)(param_1 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    piVar4 = (int *)(param_1 + 0x24);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
    DataMemoryBarrier(0xb);
    iVar2 = FUN_0069bd28(param_1 + 0x20);
    puVar3 = (uint *)(iVar2 + 0x408);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = *puVar3 | 0x20000;
    puVar3 = (uint *)(param_1 + 0x48);
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
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = 0;
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0068d880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x44));
      return;
    }
  }
  return;
}

