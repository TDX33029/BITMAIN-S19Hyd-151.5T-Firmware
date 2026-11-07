// FUN_014a65dc @ 014a65dc size=436 calls_out=2 calls_in=1
// strings: 

void FUN_014a65dc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    FUN_014a6854(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 != 0) {
      puVar4 = (uint *)(iVar2 + 0x70);
      uVar6 = *(uint *)(iVar2 + 0x70);
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_014a6730;
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
LAB_014a6730:
      if ((uVar5 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x68) + 8))(*(undefined4 *)(iVar2 + 0x6c));
      }
      piVar3 = *(int **)(param_1 + 0x14);
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a545c(*(undefined4 *)(param_1 + 0x14));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  else if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_014a6854(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      puVar4 = (uint *)(iVar2 + 0x70);
      uVar6 = *(uint *)(iVar2 + 0x70);
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_014a6668;
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
LAB_014a6668:
      if ((uVar5 & 5) == 1) {
        (**(code **)(*(int *)(iVar2 + 0x68) + 8))(*(undefined4 *)(iVar2 + 0x6c));
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
          FUN_014a545c(*(undefined4 *)(param_1 + 0x10));
          return;
        }
        return;
      }
    }
  }
  return;
}

