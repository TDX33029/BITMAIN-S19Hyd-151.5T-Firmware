// FUN_005be8dc @ 005be8dc size=208 calls_out=2 calls_in=0
// strings: 

void FUN_005be8dc(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_1;
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar6 + 0x98);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    FUN_005c9e50(iVar6 + 0x20);
    puVar3 = (uint *)(iVar6 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar2 = *(int *)(iVar6 + 0x40);
      *(undefined4 *)(iVar6 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = 0;
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar6 + 0x44));
      }
    }
  }
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45658(*param_1);
    return;
  }
  return;
}

