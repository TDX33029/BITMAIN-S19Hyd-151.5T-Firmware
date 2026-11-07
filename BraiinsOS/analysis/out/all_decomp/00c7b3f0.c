// FUN_00c7b3f0 @ 00c7b3f0 size=224 calls_out=2 calls_in=0
// strings: 

void FUN_00c7b3f0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0x20);
    uVar6 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00c7b474;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00c7b474:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = *(int **)(param_1 + 0x40);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*(undefined4 *)(param_1 + 0x40));
        return;
      }
      return;
    }
  }
  return;
}

