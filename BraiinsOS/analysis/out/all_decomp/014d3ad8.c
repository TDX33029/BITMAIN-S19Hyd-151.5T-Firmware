// FUN_014d3ad8 @ 014d3ad8 size=396 calls_out=5 calls_in=1
// strings: 

void FUN_014d3ad8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x2ac) == '\0') {
    FUN_014d113c(param_1);
    iVar3 = *(int *)(param_1 + 0x294);
    if (iVar3 != 0) {
      puVar4 = (uint *)(iVar3 + 0x20);
      uVar6 = *(uint *)(iVar3 + 0x20);
      do {
        while( true ) {
          uVar5 = uVar6;
          if ((uVar5 & 4) != 0) goto LAB_014d3bd0;
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
LAB_014d3bd0:
      if ((uVar5 & 5) == 1) {
        (**(code **)(*(int *)(iVar3 + 0x18) + 8))(*(undefined4 *)(iVar3 + 0x1c));
      }
      piVar2 = *(int **)(param_1 + 0x294);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a45ec(*(undefined4 *)(param_1 + 0x294));
        }
      }
    }
    FUN_0148f59c(*(undefined4 *)(param_1 + 0x290));
    piVar2 = *(int **)(param_1 + 0x290);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a44c0(*(undefined4 *)(param_1 + 0x290));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2ac) == '\x03') {
    FUN_0148f59c(*(undefined4 *)(param_1 + 0x29c));
    piVar2 = *(int **)(param_1 + 0x29c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a44c0(*(undefined4 *)(param_1 + 0x29c));
    }
    piVar2 = *(int **)(param_1 + 0x298);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a4788(*(undefined4 *)(param_1 + 0x298));
      return;
    }
    return;
  }
  return;
}

