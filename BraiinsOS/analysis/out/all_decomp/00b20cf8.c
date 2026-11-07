// FUN_00b20cf8 @ 00b20cf8 size=216 calls_out=1 calls_in=0
// strings: 

void FUN_00b20cf8(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x24) == '\0') && (iVar6 = *(int *)(param_1 + 0x18), iVar6 != 0)) {
    puVar3 = (uint *)(iVar6 + 0x20);
    uVar5 = *(uint *)(iVar6 + 0x20);
    do {
      while( true ) {
        uVar4 = uVar5;
        if ((uVar4 & 4) != 0) goto LAB_00b20d74;
        uVar5 = *puVar3;
        if (uVar5 == uVar4) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = uVar4 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00b20d74:
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(int *)(iVar6 + 0x18) + 8))(*(undefined4 *)(iVar6 + 0x1c));
    }
    piVar2 = *(int **)(param_1 + 0x18);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*(undefined4 *)(param_1 + 0x18));
        return;
      }
      return;
    }
  }
  return;
}

