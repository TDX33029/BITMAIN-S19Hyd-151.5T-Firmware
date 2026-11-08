// FUN_00686c30 @ 00686c30 size=264 calls_out=3 calls_in=1
// strings: 

void FUN_00686c30(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0x18);
    uVar6 = *(uint *)(iVar2 + 0x18);
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_00686ca0;
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
LAB_00686ca0:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x10) + 8))(*(undefined4 *)(iVar2 + 0x14));
    }
    piVar3 = *(int **)(param_1 + 0xc);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b50b8(*(undefined4 *)(param_1 + 0xc));
      }
    }
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b53fc(*(undefined4 *)(param_1 + 0x10));
    }
  }
  FUN_010b6c44(param_1);
  return;
}

