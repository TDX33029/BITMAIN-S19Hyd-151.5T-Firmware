// FUN_00c8cdf0 @ 00c8cdf0 size=532 calls_out=5 calls_in=2
// strings: 

void FUN_00c8cdf0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x12a0);
  if (*(char *)(param_1 + 0x12a4) == '\0') {
    FUN_00adbb98(param_1 + 0x328);
    FUN_00c8d7f8(param_1);
    piVar3 = *(int **)(param_1 + 0x1298);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x1298));
    }
    piVar3 = *(int **)(param_1 + 0x129c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x129c));
    }
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      return;
    }
    puVar4 = (uint *)(iVar2 + 0x20);
    uVar5 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar6 = uVar5;
        if ((uVar6 & 4) != 0) goto LAB_00c8cfa8;
        uVar5 = *puVar4;
        if (uVar5 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00c8cfa8:
    if ((uVar6 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = (int *)*piVar7;
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x12a4) != '\x03') {
      return;
    }
    FUN_00c8d13c(param_1 + 0x358);
    iVar2 = *piVar7;
    if (iVar2 == 0) {
      return;
    }
    puVar4 = (uint *)(iVar2 + 0x20);
    uVar5 = *(uint *)(iVar2 + 0x20);
    do {
      while( true ) {
        uVar6 = uVar5;
        if ((uVar6 & 4) != 0) goto LAB_00c8ce84;
        uVar5 = *puVar4;
        if (uVar5 == uVar6) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar6 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00c8ce84:
    if ((uVar6 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 8))(*(undefined4 *)(iVar2 + 0x1c));
    }
    piVar3 = (int *)*piVar7;
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d02bf8(*piVar7);
    return;
  }
  return;
}

